//  ---------------------- Doxygen info ----------------------
//  ----------------------------------------------------------
//   For a convenient reading of this file's source code,
//   please use a tab width of four characters.
//  ----------------------------------------------------------


#include <stdio.h>
#include <stdlib.h>

#include <ReflexxesAPI.h>
#include <RMLPositionFlags.h>
#include <RMLPositionInputParameters.h>
#include <RMLPositionOutputParameters.h>


//*************************************************************************
// defines

#define CYCLE_TIME_IN_SECONDS                   0.001
#define NUMBER_OF_DOFS                          5

double pre_grasp[5] = {2.93836, 2.020597, -1.88253, 3.36243, 3.01283};

double candle[5] = {2.9496, 1.13446, -2.54818, 1.78896, 2.93075};

//*************************************************************************
// Main function to run the process that contains the test application
// 
// This function contains source code to get started with the Type IV  
// Reflexxes Motion Library. Based on the program 
// 01_RMLPositionSampleApplication.cpp, this sample code becomes extended by
// using (and describing) all available output values of the algorithm.
// As in the former example, we compute a trajectory for a system with
// three degrees of freedom starting from an arbitrary state of motion.
// This code snippet again directly corresponds to the example trajectories
// shown in the documentation.
//*************************************************************************
int main()
{
    // ********************************************************************
    // Variable declarations and definitions
    
    bool                        FirstCycleCompleted         =   false   ;
    
    int                         ResultValue                 =   0
                            ,   i                           =   0
                            ,   j                           =   0       ;

    ReflexxesAPI                *RML                        =   NULL    ;
    
    RMLPositionInputParameters  *IP                         =   NULL    ;
    
    RMLPositionOutputParameters *OP                         =   NULL    ;
    
    RMLPositionFlags            Flags                                   ;

    // ********************************************************************
    // Creating all relevant objects of the Type IV Reflexxes Motion Library    
    
    RML =   new ReflexxesAPI(                   NUMBER_OF_DOFS
                                            ,   CYCLE_TIME_IN_SECONDS   );
    
    IP  =   new RMLPositionInputParameters(     NUMBER_OF_DOFS          );
    
    OP  =   new RMLPositionOutputParameters(    NUMBER_OF_DOFS          );
    
    // ********************************************************************
    // Set-up a timer with a period of one millisecond
    // (not implemented in this example in order to keep it simple)
    // ******************************************************************** 

   

    // ********************************************************************
    // Set-up the input parameters
    
    // In this test program, arbitrary values are chosen. If executed on a
    // real robot or mechanical system, the position is read and stored in
    // an RMLPositionInputParameters::CurrentPositionVector vector object.
    // For the very first motion after starting the controller, velocities
    // and acceleration are commonly set to zero. The desired target state
    // of motion and the motion constraints depend on the robot and the
    // current task/application.
    // The internal data structures make use of native C data types
    // (e.g., IP->CurrentPositionVector->VecData is a pointer to
    // an array of NUMBER_OF_DOFS double values), such that the Reflexxes
    // Library can be used in a universal way.  
      

    
    
     for(int i = 0; i < NUMBER_OF_DOFS ;i++)
    {
     IP->CurrentPositionVector->VecData[i] = candle[i];
     IP->CurrentVelocityVector->VecData[i] = 0.0;
     IP->CurrentAccelerationVector->VecData[i] = 0.0;
     IP->MaxVelocityVector->VecData[i] = 0.05;
     IP->MaxAccelerationVector->VecData[i] = 0.5;
     IP->TargetPositionVector->VecData[i] = pre_grasp[i];
     IP->TargetVelocityVector->VecData[i] = 0.0;
     IP->TargetAccelerationVector->VecData[i] = 0.0;
     IP->SelectionVector->VecData[i] =true;
    }
    
    
    // ********************************************************************
    // Checking the input parameters (optional)

    if (IP->CheckForValidity())
    {
        printf("Input values are valid!\n");
    }
    else
    {
        printf("Input values are INVALID!\n");
    }

    // ********************************************************************
    // Starting the control loop
    
    while (ResultValue != ReflexxesAPI::RML_FINAL_STATE_REACHED)
    {
    
        // ****************************************************************                                 
        // Wait for the next timer tick
        // (not implemented in this example in order to keep it simple)
        // ****************************************************************     
    
        // Calling the Reflexxes OTG algorithm
        ResultValue =   RML->RMLPosition(       *IP
                                            ,   OP
                                            ,   Flags       );
                                            
        if (ResultValue < 0)
        {
            printf("An error occurred (%d).\n", ResultValue );
            printf("%s\n", OP->GetErrorString());
            break;
        }
        
        // ****************************************************************
        // The following part completely describes all output values
        // of the Reflexxes Type IV Online Trajectory Generation
        // algorithm.
        
        if (!FirstCycleCompleted)
        {
            FirstCycleCompleted =   true;
            
            printf("-------------------------------------------------------\n");
            printf("General information:\n\n");
            
            printf("The execution time of the current trajectory is %.3lf seconds.\n", OP->GetSynchronizationTime());
            
            if (OP->IsTrajectoryPhaseSynchronized())
            {
                printf("The current trajectory is phase-synchronized.\n");
            }
            else
            {
                printf("The current trajectory is time-synchronized.\n");
            }
            if (OP->WasACompleteComputationPerformedDuringTheLastCycle())
            {
                printf("The trajectory was computed during the last computation cycle.\n");
            }
            else
            {
                printf("The input values did not change, and a new computation of the trajectory parameters was not required.\n");
            }
            if (OP->WillTheTargetPositionBeExceeded())
            {
                printf("The trajectory will exceed the desired target position.\n");
            }
            else
            {
                printf("The trajectory will NOT exceed the desired target position.\n");
            }
            if (OP->IsTheOverrideFilterActive())
            {
                printf("The override filter is active, and the desired override value has NOT been reached.\n");
                printf("The currently applied override value is %10.3lf.\n", OP->CurrentOverrideValue);
            }
            else
            {
                printf("The override filter is NOT active, and the desired override value has been reached.\n");
            }                           
            
            printf("-------------------------------------------------------\n");
            printf("New state of motion:\n\n");
                    
            printf("New position/pose vector                  : ");
            for ( j = 0; j < NUMBER_OF_DOFS; j++)
            {
                printf("%10.3lf ", OP->NewPositionVector->VecData[j]);
            }
            printf("\n");
            printf("New velocity vector                       : ");
            for ( j = 0; j < NUMBER_OF_DOFS; j++)
            {
                printf("%10.3lf ", OP->NewVelocityVector->VecData[j]);
            }
            printf("\n");           
            printf("New acceleration vector                   : ");
            for ( j = 0; j < NUMBER_OF_DOFS; j++)
            {
                printf("%10.3lf ", OP->NewAccelerationVector->VecData[j]);
            }
            printf("\n");
            printf("-------------------------------------------------------\n");
            printf("Extremes of the current trajectory:\n");
            
            for ( i = 0; i < NUMBER_OF_DOFS; i++)
            {
                printf("\n");
                printf("Degree of freedom                         : %d\n", NUMBER_OF_DOFS);
                printf("Minimum position                          : %10.3lf\n", OP->MinPosExtremaPositionVectorOnly->VecData[i]);
                printf("Time, at which the minimum will be reached: %10.3lf\n", OP->MinExtremaTimesVector->VecData[i]);
                printf("Position/pose vector at this time         : ");
                for ( j = 0; j < NUMBER_OF_DOFS; j++)
                {
                    printf("%10.3lf ", OP->MinPosExtremaPositionVectorArray[i]->VecData[j]);
                }
                printf("\n");
                printf("Velocity vector at this time              : ");
                for ( j = 0; j < NUMBER_OF_DOFS; j++)
                {
                    printf("%10.3lf ", OP->MinPosExtremaVelocityVectorArray[i]->VecData[j]);
                }
                printf("\n");
                printf("Acceleration vector at this time          : ");
                for ( j = 0; j < NUMBER_OF_DOFS; j++)
                {
                    printf("%10.3lf ", OP->MinPosExtremaAccelerationVectorArray[i]->VecData[j]);
                }
                printf("\n");
                printf("Maximum position                          : %10.3lf\n", OP->MaxPosExtremaPositionVectorOnly->VecData[i]);
                printf("Time, at which the maximum will be reached: %10.3lf\n", OP->MaxExtremaTimesVector->VecData[i]);
                printf("Position/pose vector at this time         : ");
                for ( j = 0; j < NUMBER_OF_DOFS; j++)
                {
                    printf("%10.3lf ", OP->MaxPosExtremaPositionVectorArray[i]->VecData[j]);
                }
                printf("\n");
                printf("Velocity vector at this time              : ");
                for ( j = 0; j < NUMBER_OF_DOFS; j++)
                {
                    printf("%10.3lf ", OP->MaxPosExtremaVelocityVectorArray[i]->VecData[j]);
                }
                printf("\n");
                printf("Acceleration vector at this time          : ");
                for ( j = 0; j < NUMBER_OF_DOFS; j++)
                {
                    printf("%10.3lf ", OP->MaxPosExtremaAccelerationVectorArray[i]->VecData[j]);
                }
                printf("\n");                   
            }
            printf("-------------------------------------------------------\n");
            printf("Polynomial coefficients:\n");
            for ( i = 0; i < NUMBER_OF_DOFS; i++)
            {
                printf("\n");
                printf("Degree of freedom                         : %d\n", i);
                printf("Number of polynomial segments             : %d\n", OP->Polynomials->NumberOfCurrentlyValidSegments[i]);
                for ( j = 0; j < OP->Polynomials->NumberOfCurrentlyValidSegments[i]; j++)
                {
                    OP->Polynomials->Coefficients[i][j].Echo();
                }
            }
            printf("-------------------------------------------------------\n");
            
        }
        // ****************************************************************

        // ****************************************************************
        // Feed the output values of the current control cycle back to 
        // input values of the next control cycle
                                                            
        *IP->CurrentPositionVector      =   *OP->NewPositionVector      ;
        *IP->CurrentVelocityVector      =   *OP->NewVelocityVector      ;
        *IP->CurrentAccelerationVector  =   *OP->NewAccelerationVector  ;
    }

    // ********************************************************************
    // Deleting the objects of the Reflexxes Motion Library end terminating
    // the process
    
    delete  RML         ;
    delete  IP          ;
    delete  OP          ;

    exit(EXIT_SUCCESS)  ;
}
