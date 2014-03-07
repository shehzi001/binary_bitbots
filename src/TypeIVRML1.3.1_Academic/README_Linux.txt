---------------------------------------------------------------
 Example Projects for the Type IV Reflexxes Motion Library
---------------------------------------------------------------


***************************************************************
 1. Directory Contents
***************************************************************

 - Documentation: Reflexxes documentation (html format)
 - include: Folder for all header files of the Reflexxes API
 - src: Folder for the source code files of the Type IV
   Reflexxes Motion Library and sample applications
 - Linux: Folder for makefiles and binary files


***************************************************************
 2. Getting Started
***************************************************************
Change to the directory 'Linux' and enter

make clean32 all32

for 32-bit systems or

make clean64 all64

for 64-bit systems, respectively to check whether all files
compile correctly on your system. If so, you can take a look at
one of the simple sample applications in the 'src' folder to
learn about the Reflexxes API and to use it for your own
applications. In case of problems or issues with this procedure,
please contact us at support@reflexxes.com.


***************************************************************
 3. Documentation
***************************************************************

The entire html documentation can be found in the directory
'Documentation'.


***************************************************************
 A. Appendix - Entire Folder Structure
***************************************************************

    * ReflexxesExampleProjects
	      o Documentation Folder for the Reflexxes documentation (html format)
          o include Folder for all header files of the Reflexxes API
          o src Folder for the source code files of a set of sample applications
		        + ReflexxesAPI Source code of the Reflexxes API
                + RMLPositionSampleApplications Source code of target position-based sample applications
                + RMLVelocitySampleApplications Source code of target velocity-based sample applications
				+ TypeIVRMLMath Source code of the Type IV Reflexxes Motion Library
				+ TypeIVRMLPosition Source code of the Type IV Reflexxes Motion Library
				+ TypeIVRMLVelocity Source code of the Type IV Reflexxes Motion Library
          o Linux Folder for makefiles and binary files
                + RMLPositionSampleApplications Folder for the makefile of target position-based sample applications
                + RMLVelocitySampleApplications Folder for the makefile of target velocity-based sample applications
                + x64 Binary files for 64-bit environments
                      # debug Files with debug information (non-optimized)
                            * bin Executable files of all sample applications
                            * lib This folder contains the Reflexxes Type IV Motion Library.
                            * obj Object files
                      # release Files without debug information (fully optimized)
                            * bin Executable files of all sample applications
                            * lib This folder contains the Reflexxes Type IV Motion Library.
                            * obj Object files
                + x86 Binary files for 32-bit environments
                      # debug Files with debug information (non-optimized)
                            * bin Executable files of all sample applications
                            * lib This folder contains the Reflexxes Type IV Motion Library.
                            * obj Object files
                      # release Files without debug information (fully optimized)
                            * bin Executable files of all sample applications
                            * lib This folder contains the Reflexxes Type IV Motion Library.
                            * obj Object files

---------------------------------------------------------------
Copyright (C) 2013 Reflexxes GmbH