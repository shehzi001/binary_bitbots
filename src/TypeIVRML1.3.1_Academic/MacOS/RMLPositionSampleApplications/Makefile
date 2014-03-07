# Makefile
# 
# Reflexxes GmbH
# Sandknoell 7
# D-24805 Hamdorf
# GERMANY
#
# http://www.reflexxes.com
#
# Author : Torsten Kroeger, <info@reflexxes.com>
# Date   : September 2013
#
#

include ../Makefile.global

export

# ********************************************************************************
# ********************************************************************************
# MacOS
# ********************************************************************************
# ********************************************************************************

ifeq ($(TARGET_OS),__MACOS__)

include ../TargetDependencies.global

export

# ---------- Objects ----------

SRCS         := $(shell find $(SRC_DIR)/RMLPositionSampleApplications -name '*.cpp')
OBJS         := $(patsubst $(SRC_DIR)/RMLPositionSampleApplications/%.cpp, $(OBJ_DIR)/%.$(OBJECT_FILE_EXT), $(SRCS))
EXES         := $(patsubst $(SRC_DIR)/RMLPositionSampleApplications/%.cpp, $(EXE_DIR)/%, $(SRCS))

CSRCS        := $(shell find $(SRC_DIR)/RMLPositionSampleApplications -name '*.c')
COBJS        := $(patsubst $(SRC_DIR)/RMLPositionSampleApplications/%.c, $(OBJ_DIR)/%.$(OBJECT_FILE_EXT), $(CSRCS))
CEXES        := $(patsubst $(SRC_DIR)/RMLPositionSampleApplications/%.c, $(EXE_DIR)/%, $(CSRCS))


$(OBJ_DIR)/%.$(OBJECT_FILE_EXT): $(SRC_DIR)/RMLPositionSampleApplications/%.cpp
	@echo $(LINE1)
	$(CC) $< -o $@

$(OBJ_DIR)/%.$(OBJECT_FILE_EXT): $(SRC_DIR)/RMLPositionSampleApplications/%.c
	@echo $(LINE1)
	$(CC) $< -o $@

# -------- OutputFiles --------

$(EXE_DIR)/%: $(OBJ_DIR)/%.$(OBJECT_FILE_EXT)
	@echo $(LINE1)
	$(CL) -o $@ $^ -lReflexxesTypeIV

# ****************************************************************
# Entry point for 'do_all'
# ****************************************************************

do_all: $(EXES) $(CEXES)
	@echo Built directory contents
	@echo $(LINE1)
	@echo Operating system: $(TARGET_OS) [$(VARIANT)]
	

# ****************************************************************
# Entry point for 'do_clean'
# ****************************************************************

do_clean:
	@echo $(LINE1)
	@echo Operating system: $(TARGET_OS) [$(VARIANT)]
	rm -f $(OBJS)
	rm -f $(EXES)
	rm -f $(COBJS)
	rm -f $(CEXES)

include ../ExternalTargets.global

endif

	

