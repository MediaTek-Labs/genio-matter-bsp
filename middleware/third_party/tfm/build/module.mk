ifeq ($(MTK_TFM_ENABLE), y)
##############################################################################
#
# External Dependencies
#
#############################################################################
TFM_PATH = $(SOURCE_DIR)/middleware/third_party/tfm
MODULE_PATH += $(TFM_PATH)/build
LIBS += $(OUTPATH)/obj/tfm/app/tfm_ns_int_lib.a $(OUTPATH)/obj/tfm/secure_fw/s_veneers.o
ifeq ($(MTK_TFM_CLI_ENABLE), y)
LIBS += $(OUTPATH)/obj/tfm/test/non_secure_test/libtfm_non_secure_tests.a
endif

##############################################################################
#
# source file
#
#############################################################################
C_FILES  += 	middleware/third_party/tfm/build/src/tfm_ns_interface_iotsdk_init.c
C_FILES  +=     middleware/third_party/tfm/build/src/cmsis_os2.c
ifeq ($(MTK_TFM_CLI_ENABLE), y)
C_FILES  +=     middleware/third_party/tfm/build/src/tfm_cli.c
endif
##############################################################################
#
# include path
#
#############################################################################
CFLAGS  += -I$(TFM_PATH)/build/inc
CFLAGS  += -I$(TFM_PATH)/trusted-firmware-m/interface/include
CFLAGS  += -I$(TFM_PATH)/trusted-firmware-m/platform/ext/target/$(IC_CONFIG)/$(BOARD_CONFIG)
ifeq ($(MTK_TFM_CLI_ENABLE), y)
CFLAGS  += -I$(TFM_PATH)/trusted-firmware-m/test/test_services/tfm_secure_client_service
CFLAGS  += -I$(TFM_PATH)/trusted-firmware-m/test/framework
CFLAGS  += -I$(TFM_PATH)/trusted-firmware-m/test/suites/MTK_CI/non_secure
endif
##############################################################################
#
#
#
#############################################################################
CFLAGS  += -DMTK_TFM_ENABLE=1
#For RTOS build flow, so this needs to define the non trusted zone
CFLAGS  += -DNON_TRUSTED_ZONE=1
ifeq ($(MTK_TFM_CLI_ENABLE), y)
CFLAGS  += -DMTK_TFM_CLI_ENABLE=1
endif
##############################################################################
#
# Configurations
#
#############################################################################

MTK_TFM_ROOT ?= middleware/third_party/tfm/build

all: $(SOURCE_DIR)/middleware/third_party/tfm/build

endif
