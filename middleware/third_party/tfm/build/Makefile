# Copyright Statement:
#
# (C) 2005-2016  MediaTek Inc. All rights reserved.
#
# This software/firmware and related documentation ("MediaTek Software") are
# protected under relevant copyright laws. The information contained herein
# is confidential and proprietary to MediaTek Inc. ("MediaTek") and/or its licensors.
# Without the prior written permission of MediaTek and/or its licensors,
# any reproduction, modification, use or disclosure of MediaTek Software,
# and information contained herein, in whole or in part, shall be strictly prohibited.
# You may only use, reproduce, modify, or distribute (as applicable) MediaTek Software
# if you have agreed to and been bound by the applicable license agreement with
# MediaTek ("License Agreement") and been granted explicit permission to do so within
# the License Agreement ("Permitted User").  If you are not a Permitted User,
# please cease any access or use of MediaTek Software immediately.
# BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
# THAT MEDIATEK SOFTWARE RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES
# ARE PROVIDED TO RECEIVER ON AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL
# WARRANTIES, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
# MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
# NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
# SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
# SUPPLIED WITH MEDIATEK SOFTWARE, AND RECEIVER AGREES TO LOOK ONLY TO SUCH
# THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES
# THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES
# CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK
# SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
# STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND
# CUMULATIVE LIABILITY WITH RESPECT TO MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
# AT MEDIATEK'S OPTION, TO REVISE OR REPLACE MEDIATEK SOFTWARE AT ISSUE,
# OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO
# MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
#

# This file is only for backward compatible with 4.0.0 and previous version. please use module.mk
SHELL      := /bin/bash
SOURCE_DIR := ../../../..
PROJ_PATH   ?= $(SOURCE_DIR)/project/$(PROJ_NAME)/apps/iot_sdk/GCC
TFM_PATH    ?= $(SOURCE_DIR)/middleware/third_party/tfm
export PATH  := $(TFM_PATH)/build/bin/cmake-3.16.1-Linux-x86_64/bin:$(PATH)
CONFIG_PATH ?= .

CFLAGS += -I$(PROJ_PATH)/../inc
CFLAGS += -I$(SOURCE_DIR)/$(CONFIG_PATH)

FEATURE    ?= feature.mk

include $(PROJ_PATH)/$(FEATURE)

# Gloabl Config
include $(SOURCE_DIR)/.config
# IC Config
include $(SOURCE_DIR)/config/chip/$(IC_CONFIG)/chip.mk
# Board Config
include $(SOURCE_DIR)/config/board/$(BOARD_CONFIG)/board.mk

# Project name
TARGET_LIB=libtfm

BUILD_DIR = Build
OUTPATH = Build

# Info necessary for image sign
SIGN_VER := 0.0.1
SIGN_PEM := $(SOURCE_DIR)/project/$(BOARD_CONFIG)/apps/bootloader/mtk-dev.pem
SIGN_TOOL_ENV_PATH := /proj/srv_mt7933/venv/imgtool/bin/activate
SIGN_TOOL_ENV_PATH += /site/p_mt7933/venv/imgtool/bin/activate
$(foreach f,$(SIGN_TOOL_ENV_PATH),$(if $(wildcard $(f)),$(eval SIGN_TOOL_ENV=$(f)),))
SIGN_TOOL := $(SOURCE_DIR)/tools/mcuboot/scripts/imgtool.py
SIGN_BIN_SRC := $(BUILD_DIR)/../tfm_s.bin
SIGN_BIN_TGT := $(BUILD_DIR)/../tfm.bin
LOAD_ADDR := 0x1801C000

# Sources


#C_OBJS = $(C_FILES:%.c=$(BUILD_DIR)/%.o)


.PHONY: tfm_all

tfm_all:
	cmake -G"Unix Makefiles" -B"$(BUILD_DIR)/tfm" -DOUTPATH=$(OUTPATH) -DOUT_FILE_NAME=$(OUT_FILE_NAME) -DBOARD_TYPE=$(BOARD_TYPE) -DTARGET_PLATFORM=$(BOARD_CONFIG) -DAUDIO_EQUIP=$(AUDIO_EQUIP) -DTFM_TEST_CASE_ENABLE=$(TFM_TEST_ENABLE) -DTFM_BUILD_MODE=$(BUILD_MODE) -DPSRAM_MODE_UHS=$(PSRAM_UHS_MODE) -DCOMPILER=GNUARM -DGNUARM_PATH=$(SOURCE_DIR)/../tools/gcc/linux/gcc-arm-none-eabi/ $(TFM_PATH)/trusted-firmware-m/ 2>>$(ERR_LOG)
	cmake --build $(BUILD_DIR)/tfm -- install 2>>$(ERR_LOG)
	cp -f $(BUILD_DIR)/tfm/secure_fw/*.* $(BUILD_DIR)/../
	if [ -f "$(SIGN_PEM)" ]; then if [ -f "$(SIGN_TOOL_ENV)" ]; \
	then source $(SIGN_TOOL_ENV) ; if [ "$(BUILD_MODE)" = "" ]; then \
	$(SIGN_TOOL) sign --pad-header --header-size 1024 --load-addr $(LOAD_ADDR) -k $(SIGN_PEM) -S 352256 $(SIGN_BIN_SRC) $(SIGN_BIN_TGT) --align 4 -v $(SIGN_VER) --pubkey ; \
	else \
	$(SIGN_TOOL) sign --pad-header --header-size 1024 --load-addr $(LOAD_ADDR) -k $(SIGN_PEM) -S 286720 $(SIGN_BIN_SRC) $(SIGN_BIN_TGT) --align 4 -v $(SIGN_VER) --pubkey ; fi \
	fi; fi
