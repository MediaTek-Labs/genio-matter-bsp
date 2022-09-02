/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein is
 * confidential and proprietary to MediaTek Inc. and/or its licensors. Without
 * the prior written permission of MediaTek inc. and/or its licensors, any
 * reproduction, modification, use or disclosure of MediaTek Software, and
 * information contained herein, in whole or in part, shall be strictly
 * prohibited.
 *
 * MediaTek Inc. (C) 2010. All rights reserved.
 *
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
 * RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER
 * ON AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL
 * WARRANTIES, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR
 * NONINFRINGEMENT. NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH
 * RESPECT TO THE SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY,
 * INCORPORATED IN, OR SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES
 * TO LOOK ONLY TO SUCH THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO.
 * RECEIVER EXPRESSLY ACKNOWLEDGES THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO
 * OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES CONTAINED IN MEDIATEK
 * SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE
 * RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S
 * ENTIRE AND CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE
 * RELEASED HEREUNDER WILL BE, AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE
 * MEDIATEK SOFTWARE AT ISSUE, OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE
 * CHARGE PAID BY RECEIVER TO MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 * The following software/firmware and/or related documentation ("Media Tek
 * Software") have been modified by MediaTek Inc. All revisions are subject to
 * any receiver's applicable license agreements with MediaTek Inc.
 */

#ifndef __PEMI_REG_REGS_H__
#define __PEMI_REG_REGS_H__

/* cc add. Used to generate bit mask for bits definition.
 * for example, for XXX[4:3], this will generate 0x18 as the mask for it.
 */
#define MSB_POS     (sizeof(unsigned long) * 8 - 1)
#define GENMASK(msb, lsb) \
    (((~0UL) << (lsb)) & ((~0UL) >> (MSB_POS - (msb))))
#define BIT(nr)     (1 << (nr))


/* ----------------- Register Definitions ------------------- */
#define PEMI_CONA                   0x00000000
#define PEMI_CONA_PSRAM_EN          BIT(0)
#define PEMI_CONA_DW32_EN           BIT(1)
#define PEMI_CONA_COL               GENMASK(5, 4)
#define PEMI_CONA_COL2ND            GENMASK(7, 6)
#define PEMI_CONA_BG_EN             BIT(8)
#define PEMI_CONA_ROW               GENMASK(13, 12)
#define PEMI_CONA_ROW2ND            GENMASK(15, 14)
#define PEMI_CONA_DUAL_RANK_EN      BIT(17)
#define PEMI_CONA_DDR4_EN           BIT(25)
#define PEMI_CONA_BG1_OPTION        BIT(26)
#define PEMI_CONA_RANK_POS          BIT(27)
#define PEMI_CONA_COL3_MASK         BIT(28)
#define PEMI_CONB                   0x00000008
#define PEMI_CONB_ONE               GENMASK(7, 0)
#define PEMI_CONB_TWO               GENMASK(15, 8)
#define PEMI_CONB_THREE             GENMASK(23, 16)
#define PEMI_CONB_FOUR              GENMASK(31, 24)
#define PEMI_CONC                   0x00000010
#define PEMI_CONC_FIVE              GENMASK(7, 0)
#define PEMI_CONC_SIX               GENMASK(15, 8)
#define PEMI_CONC_SEVEN             GENMASK(23, 16)
#define PEMI_CONC_EIGHT             GENMASK(31, 24)
#define PEMI_COND                   0x00000018
#define PEMI_COND_RFF_EMPTY_LOW         GENMASK(3, 0)
#define PEMI_COND_RFF_EMPTY_HIGH        GENMASK(7, 4)
#define PEMI_COND_WFF_EMPTY_LOW         GENMASK(11, 8)
#define PEMI_COND_WFF_EMPTY_HIGH        GENMASK(15, 12)
#define PEMI_COND_RFF_BUSY_LOW          GENMASK(19, 16)
#define PEMI_COND_RFF_BUSY_HIGH         GENMASK(23, 20)
#define PEMI_COND_WFF_BUSY_LOW          GENMASK(27, 24)
#define PEMI_COND_WFF_BUSY_HIGH         GENMASK(31, 28)
#define PEMI_CONE                   0x00000020
#define PEMI_CONE_DRAMC_CMD_CNT         GENMASK(3, 0)
#define PEMI_CONE_RCMD_OO_THR           GENMASK(7, 4)
#define PEMI_CONE_AP_BUSY_THR           GENMASK(11, 8)
#define PEMI_CONE_AP_BUSY_RD_LAT        GENMASK(23, 16)
#define PEMI_CONE_AP_BUSY_WR_LAT        GENMASK(31, 24)
#define PEMI_CONF                   0x00000028
#define PEMI_CONF_BIT9_SCRAMBLE         GENMASK(3, 0)
#define PEMI_CONF_BIT10_SCRAMBLE        GENMASK(7, 4)
#define PEMI_CONF_BIT11_SCRAMBLE        GENMASK(11, 8)
#define PEMI_CONF_BIT12_SCRAMBLE        GENMASK(15, 12)
#define PEMI_CONF_BIT13_SCRAMBLE        GENMASK(19, 16)
#define PEMI_CONF_BIT14_SCRAMBLE        GENMASK(23, 20)
#define PEMI_CONF_BIT15_SCRAMBLE        GENMASK(27, 24)
#define PEMI_CONF_BIT16_SCRAMBLE        GENMASK(31, 28)
#define PEMI_CONG                   0x00000030
#define PEMI_CONG_TWO               GENMASK(7, 0)
#define PEMI_CONG_FOUR              GENMASK(15, 8)
#define PEMI_CONG_SIX               GENMASK(23, 16)
#define PEMI_CONG_EIGHT             GENMASK(31, 24)
#define PEMI_CONH                   0x00000038
#define PEMI_CONH_CHNAB_DCM_RATIO       GENMASK(1, 0)
#define PEMI_CONH_CHN0_RANK0_SIZE       GENMASK(19, 16)
#define PEMI_CONH_CHN0_RANK1_SIZE       GENMASK(23, 20)
#define PEMI_CONH_CHN1_RANK0_SIZE       GENMASK(27, 24)
#define PEMI_CONH_CHN1_RANK1_SIZE       GENMASK(31, 28)
#define PEMI_CONI                   0x00000040
#define PEMI_CONI_MM_W_INFO_NUM         GENMASK(2, 1)
#define PEMI_CONI_ISP_ID1_EN            GENMASK(5, 4)
#define PEMI_CONI_ISP_ID2_EN            GENMASK(7, 6)
#define PEMI_CONI_ISP_RD_LATENCY        GENMASK(23, 16)
#define PEMI_CONI_ISP_WR_LATENCY        GENMASK(31, 24)
#define PEMI_CONJ                   0x00000048
#define PEMI_CONJ_ISP_ID_SET1           GENMASK(15, 0)
#define PEMI_CONJ_ISP_ID_SET1_EN        GENMASK(31, 16)
#define PEMI_CONK                   0x00000050
#define PEMI_CONK_ISP_ID_SET2           GENMASK(15, 0)
#define PEMI_CONK_ISP_ID_SET2_EN        GENMASK(31, 16)
#define PEMI_CONM                   0x00000060
#define PEMI_CONM_PAGE_HIT_HIGH_PRIO_M0     BIT(0)
#define PEMI_CONM_PAGE_HIT_HIGH_PRIO_M1     BIT(1)
#define PEMI_CONM_PAGE_HIT_HIGH_PRIO_M2     BIT(2)
#define PEMI_CONM_PAGE_HIT_HIGH_PRIO_M3     BIT(3)
#define PEMI_CONM_PAGE_HIT_HIGH_PRIO_M4     BIT(4)
#define PEMI_CONM_PAGE_HIT_HIGH_PRIO_M5     BIT(5)
#define PEMI_CONM_PAGE_HIT_HIGH_PRIO_M6     BIT(6)
#define PEMI_CONM_PAGE_HIT_HIGH_PRIO_M7     BIT(7)
#define PEMI_CONM_AGE_SPEED                 GENMASK(9, 8)
#define PEMI_CONM_PEMI_ENABLE               BIT(10)
#define PEMI_CONM_PEMI_AGE_LOW              BIT(11)
#define PEMI_CONM_RD_RSV_NOR_NUM            GENMASK(19, 16)
#define PEMI_CONM_WR_RSV_NOR_NUM            GENMASK(23, 20)
#define PEMI_CONM_EMI_DCM_DIS               GENMASK(31, 24)
#define PEMI_DRCT                   0x00000078
#define PEMI_DRCT_R_A_ULT_EN            BIT(0)
#define PEMI_DRCT_W_A_ULT_EN            BIT(1)
#define PEMI_DRCT_R_S_ULT_EN            BIT(2)
#define PEMI_DRCT_W_S_ULT_EN            BIT(3)
#define PEMI_DRCT_R_S_AGE_EN            BIT(4)
#define PEMI_DRCT_W_S_AGE_EN            BIT(5)
#define PEMI_DRCT_R_ULTRA_STAR_WAIT_EN          BIT(6)
#define PEMI_DRCT_W_ULTRA_STAR_WAIT_EN          BIT(7)
#define PEMI_DRCT_R_ALL_WAIT_EN         BIT(8)
#define PEMI_DRCT_W_ALL_WAIT_EN         BIT(9)
#define PEMI_DRCT_R_ULTRA_WAIT_EN       BIT(10)
#define PEMI_DRCT_W_ULTRA_WAIT_EN       BIT(11)
#define PEMI_DRCT_ULTRA_SBR_EN          BIT(12)
#define PEMI_DRCT_EXPIRRE_SBR_EN        BIT(13)
#define PEMI_DRCT_SBR_WRAP_MODE         BIT(15)
#define PEMI_DRCT_RD_ULTRA_RSV_NUM      GENMASK(18, 16)
#define PEMI_DRCT_WR_ULTRA_RSV_NUM      GENMASK(22, 20)
#define PEMI_DRCT_RD_AP_RSV_NUM         GENMASK(26, 24)
#define PEMI_DRCT_WR_AP_RSV_NUM         GENMASK(30, 28)
#define PEMI_IOCL                   0x000000d0
#define PEMI_IOCL_M0_RD_OUTSTANDING     GENMASK(3, 0)
#define PEMI_IOCL_M0_WR_OUTSTANDING     GENMASK(7, 4)
#define PEMI_IOCL_M1_RD_OUTSTANDING     GENMASK(11, 8)
#define PEMI_IOCL_M1_WR_OUTSTANDING     GENMASK(15, 12)
#define PEMI_IOCL_M2_RD_OUTSTANDING     GENMASK(19, 16)
#define PEMI_IOCL_M2_WR_OUTSTANDING     GENMASK(23, 20)
#define PEMI_IOCL_M0_RD_OUTSTANDING_BIT4    BIT(24)
#define PEMI_IOCL_M1_RD_OUTSTANDING_BIT4    BIT(25)
#define PEMI_IOCL_M7_RD_OUTSTANDING_BIT4    BIT(26)
#define PEMI_IOCL_M3_RD_RESERVED            BIT(27)
#define PEMI_IOCL_M0_WR_OUTSTANDING_BIT4    BIT(28)
#define PEMI_IOCL_M1_WR_OUTSTANDING_BIT4    BIT(29)
#define PEMI_IOCL_M7_WR_OUTSTANDING_BIT4    BIT(30)
#define PEMI_IOCL_M3_WR_RESERVED            BIT(31)
#define PEMI_IOCM                   0x000000d8
#define PEMI_IOCM_M4_RD_OUTSTANDING     GENMASK(3, 0)
#define PEMI_IOCM_M4_WR_OUTSTANDING     GENMASK(7, 4)
#define PEMI_IOCM_M5_RD_OUTSTANDING     GENMASK(11, 8)
#define PEMI_IOCM_M5_WR_OUTSTANDING     GENMASK(15, 12)
#define PEMI_IOCM_M6_RD_OUTSTANDING     GENMASK(19, 16)
#define PEMI_IOCM_M6_WR_OUTSTANDING     GENMASK(23, 20)
#define PEMI_IOCM_M7_RD_OUTSTANDING     GENMASK(27, 24)
#define PEMI_IOCM_M7_WR_OUTSTANDING     GENMASK(31, 28)
#define PEMI_IODC                   0x000000e0
#define PEMI_IODC_WM_SERV_CNT_THR1      GENMASK(2, 0)
#define PEMI_IODC_WM_FG_CMD_THR1        GENMASK(6, 4)
#define PEMI_IODC_WM_SERV_CNT_THR2      GENMASK(10, 8)
#define PEMI_IODC_WM_FG_CMD_THR2        GENMASK(14, 12)
#define PEMI_IODC_RM_SERV_CNT_THR1      GENMASK(18, 16)
#define PEMI_IODC_RM_FG_CMD_THR1        GENMASK(22, 20)
#define PEMI_IODC_RM_SERV_CNT_THR2      GENMASK(26, 24)
#define PEMI_IODC_RM_FG_CMD_THR2        GENMASK(30, 28)
#define PEMI_DFTB                   0x000000e8
#define PEMI_DFTB_PREULTRA_ENABLE       BIT(0)
#define PEMI_DFTB_RD_PBC_MASK_EN        BIT(1)
#define PEMI_DFTB_RFF_PBC_MASK_EN       BIT(2)
#define PEMI_DFTB_COMMAND_SPLIT_EN      BIT(3)
#define PEMI_DFTB_HALF_AGE_EN           BIT(4)
#define PEMI_DFTB_BYTE32_WRAP_EN        BIT(5)
#define PEMI_DFTB_RSV_CHK_DQ            BIT(6)
#define PEMI_DFTB_WR_ULTRA_WO_MASK      BIT(7)
#define PEMI_DFTB_DBG_OUT_EN            BIT(8)
#define PEMI_DFTB_SBR_MASK_CHK          BIT(9)
#define PEMI_DFTB_EARLY_RESP_PRO_WR_DIS     BIT(10)
#define PEMI_DFTB_EARLY_RSP_DIS         BIT(11)
#define PEMI_DFTB_RCMD_ISSUE_IN_ORDER   BIT(12)
#define PEMI_DFTB_M0_SHORT_DIS          BIT(13)
#define PEMI_DFTB_BW_THR_LEN            GENMASK(15, 14)
#define PEMI_DFTB_WR_CHK_ORDER          BIT(16)
#define PEMI_DFTB_RD_DATA_MODE          BIT(19)
#define PEMI_DFTB_BW_THR                GENMASK(23, 20)
#define PEMI_DFTB_RD_INTERLEAVE_DIS     GENMASK(31, 24)
#define PEMI_DFTC                   0x000000f0
#define PEMI_DFTC_RD_REORDER_DIS        GENMASK(15, 8)
#define PEMI_DFTC_URGENT_READ_FIRST     BIT(16)
#define PEMI_DFTC_DEFER_WR_GROP         BIT(17)
#define PEMI_DFTC_DEFER_WR_GROP2        BIT(18)
#define PEMI_DFTC_DEFER_WR_WO_READ_PUSH BIT(19)
#define PEMI_DFTC_DEFER_WR_RDATA_THR    GENMASK(23, 20)
#define PEMI_DFTC_DEFER_WR_WDATA_THR    GENMASK(27, 24)
#define PEMI_DFTC_CDWF_THR              GENMASK(30, 28)
#define PEMI_DFTD                   0x000000f8
#define PEMI_DFTD_RFF_DIS               GENMASK(3, 0)
#define PEMI_DFTD_RDF_DIS               GENMASK(11, 8)
#define PEMI_DFTD_RDF_FOR_SBR           GENMASK(15, 13)
#define PEMI_DFTD_WFF_DIS               GENMASK(19, 16)
#define PEMI_DFTD_WDF_DIS               GENMASK(27, 24)
#define PEMI_DFTD_LOCK_DIS              BIT(29)
#define PEMI_DFTD_HARD_LIMIT            BIT(30)
#define PEMI_DFTD_EX_MODE               BIT(31)
#define PEMI_DFTE                   0x000000fC
#define PEMI_DFTE_BG_PROMOT_PRI_CODE            GENMASK(3, 0)
#define PEMI_DFTE_PBC_COUNT_THREAD              GENMASK(19, 16)
#define PEMI_DFTE_CMD_HISTORY_THRESHOLD         GENMASK(23, 20)
#define PEMI_DFTE_TIMEOUT_TARGET                GENMASK(31, 24)


#define PEMI_ARBA                   0x00000100
#define PEMI_ARBA_M0_BANDWIDTH          GENMASK(5, 0)
#define PEMI_ARBA_M0_ULTRA_DOM_BW       BIT(6)
#define PEMI_ARBA_M0_DOUBLE_HALF_BW     GENMASK(9, 8)
#define PEMI_ARBA_M0_BW_FILTER_LEN      GENMASK(11, 10)
#define PEMI_ARBA_M0_BW_FILTER_EN       BIT(12)
#define PEMI_ARBA_M0_PRIO_DOM_BW        BIT(13)
#define PEMI_ARBA_M0_MODE               BIT(14)
#define PEMI_ARBA_M0_BW_DISABLE         BIT(15)
#define PEMI_ARBA_M0_RD_LATENCY         GENMASK(23, 16)
#define PEMI_ARBA_M0_WR_LATENCY         GENMASK(31, 24)
#define PEMI_ARBB                   0x00000108
#define PEMI_ARBB_M1_BANDWIDTH          GENMASK(5, 0)
#define PEMI_ARBB_M7_AR_ULTRA_SLICE_EN  BIT(7)
#define PEMI_ARBC                   0x00000110
#define PEMI_ARBC_M2_BANDWIDTH          GENMASK(5, 0)
#define PEMI_ARBC_M2_ULTRA_DOM_BW       BIT(6)
#define PEMI_ARBC_M2_ULTRA_SLICE_EN     BIT(7)
#define PEMI_ARBC_M2_BW_FILTER_EN       BIT(12)
#define PEMI_ARBC_M2_PRE_ULTRA_DOM_BW   BIT(13)
#define PEMI_ARBC_M2_MODE               BIT(14)
#define PEMI_ARBC_M2_BW_DISABLE         BIT(15)
#define PEMI_ARBC_M2_RD_LATENCY         GENMASK(23, 16)
#define PEMI_ARBC_M2_WR_LATENCY         GENMASK(31, 24)
#define PEMI_ARBD                   0x00000118
#define PEMI_ARBD_M3_BANDWIDTH          GENMASK(5, 0)
#define PEMI_ARBD_M3_ULTRA_DOM_BW       BIT(6)
#define PEMI_ARBD_M3_BW_FILTER_EN       BIT(12)
#define PEMI_ARBD_M3_PRIO_DOM_BW        BIT(13)
#define PEMI_ARBD_M3_MODE               BIT(14)
#define PEMI_ARBD_M3_BW_DISABLE         BIT(15)
#define PEMI_ARBD_M3_RD_LATENCY         GENMASK(23, 16)
#define PEMI_ARBD_M3_WR_LATENCY         GENMASK(31, 24)
#define PEMI_ARBE                   0x00000120
#define PEMI_ARBE_M4_BANDWIDTH          GENMASK(5, 0)
#define PEMI_ARBE_M4_ULTRA_DOM_BW       BIT(6)
#define PEMI_ARBE_M4_BW_FILTER_EN       BIT(12)
#define PEMI_ARBE_M4_HI_PRIO_DOM_BW     BIT(13)
#define PEMI_ARBE_M4_MODE               BIT(14)
#define PEMI_ARBE_M4_BW_DISABLE         BIT(15)
#define PEMI_ARBE_M4_RD_LATENCY         GENMASK(23, 16)
#define PEMI_ARBE_M4_WD_LATENCY         GENMASK(31, 24)
#define PEMI_ARBF                   0x00000128
#define PEMI_ARBF_M5_BANDWIDTH          GENMASK(5, 0)
#define PEMI_ARBF_M5_ULTRA_DOM_BW       BIT(6)
#define PEMI_ARBF_M5_BW_FILTER_EN       BIT(12)
#define PEMI_ARBF_M5_HI_PRIO_DOM_BW     BIT(13)
#define PEMI_ARBF_M5_MODE               BIT(14)
#define PEMI_ARBF_M5_BW_DISABLE         BIT(15)
#define PEMI_ARBF_M5_RD_LATENCY         GENMASK(23, 16)
#define PEMI_ARBF_M5_WR_LATENCY         GENMASK(31, 24)
#define PEMI_ARBG                   0x00000130
#define PEMI_ARBG_M6_BANDWIDTH          GENMASK(5, 0)
#define PEMI_ARBG_M6_ULTRA_DOM_BW       BIT(6)
#define PEMI_ARBG_M6_BW_FILTER_EN       BIT(12)
#define PEMI_ARBG_M6_HI_PRIO_DOM_BW     BIT(13)
#define PEMI_ARBG_M6_MODE               BIT(14)
#define PEMI_ARBG_M6_BW_DISABLE         BIT(15)
#define PEMI_ARBG_M6_RD_LATENCY         GENMASK(23, 16)
#define PEMI_ARBG_M6_WR_LATENCY         GENMASK(31, 24)
#define PEMI_ARBH                   0x00000138
#define PEMI_ARBH_M7_BANDWIDTH          GENMASK(5, 0)
#define PEMI_ARBH_M7_ULTRA_DOM_BW       BIT(6)
#define PEMI_ARBH_M7_BW_FILTER_EN       BIT(12)
#define PEMI_ARBH_M7_HI_PRIO_DOM_BW     BIT(13)
#define PEMI_ARBH_M7_MODE               BIT(14)
#define PEMI_ARBH_M7_BW_DISABLE         BIT(15)
#define PEMI_ARBH_M7_RD_LATENCY         GENMASK(23, 16)
#define PEMI_ARBH_M7_WR_LATENCY         GENMASK(31, 24)
#define PEMI_ARBI                   0x00000140
#define PEMI_ARBI_ULTRA             GENMASK(3, 0)
#define PEMI_ARBI_AGE               GENMASK(7, 4)
#define PEMI_ARBI_LIMIT             GENMASK(11, 8)
#define PEMI_ARBI_HIT               GENMASK(15, 12)
#define PEMI_ARBI_MISS              GENMASK(19, 16)
#define PEMI_ARBI_URGENT            GENMASK(23, 20)
#define PEMI_ARBI_LLAT              GENMASK(27, 24)
#define PEMI_ARBI_URGENT_2ND        GENMASK(31, 28)
#define PEMI_ARBI_2ND               0x00000144
#define PEMI_ARBI_ULTRA             GENMASK(3, 0)
#define PEMI_ARBI_AGE               GENMASK(7, 4)
#define PEMI_ARBI_LIMIT             GENMASK(11, 8)
#define PEMI_ARBI_HIT               GENMASK(15, 12)
#define PEMI_ARBI_MISS              GENMASK(19, 16)
#define PEMI_ARBI_URGENT            GENMASK(23, 20)
#define PEMI_ARBI_LLAT              GENMASK(27, 24)
#define PEMI_ARBI_URGENT_2ND        GENMASK(31, 28)
#define PEMI_ARBJ                   0x00000148
#define PEMI_ARBJ_WRCNT                 GENMASK(3, 0)
#define PEMI_ARBJ_WRCNT_MIN             GENMASK(7, 4)
#define PEMI_ARBJ_RDCNT                 GENMASK(11, 8)
#define PEMI_ARBJ_RDCNT_MIN             GENMASK(15, 12)
#define PEMI_ARBJ_WR_DLY_CYC            GENMASK(19, 16)
#define PEMI_ARBJ_POST_WR_CNT           GENMASK(23, 20)
#define PEMI_ARBJ_WR_ULTRA_WRCNT_MIN    GENMASK(27, 24)
#define PEMI_ARBJ_RD_ULTRA_RDCNT_MIN    GENMASK(31, 28)
#define PEMI_ARBJ_2ND               0x0000014c
#define PEMI_ARBJ_WRCNT                 GENMASK(3, 0)
#define PEMI_ARBJ_WRCNT_MIN             GENMASK(7, 4)
#define PEMI_ARBJ_RDCNT                 GENMASK(11, 8)
#define PEMI_ARBJ_RDCNT_MIN             GENMASK(15, 12)
#define PEMI_ARBJ_WR_DLY_CYC            GENMASK(19, 16)
#define PEMI_ARBJ_POST_WR_CNT           GENMASK(23, 20)
#define PEMI_ARBJ_WR_ULTRA_WRCNT_MIN    GENMASK(27, 24)
#define PEMI_ARBJ_RD_ULTRA_RDCNT_MIN    GENMASK(31, 28)
#define PEMI_ARBK                   0x00000150
#define PEMI_ARBK_RD_SERV_CNT_MAX       GENMASK(3, 0)
#define PEMI_ARBK_WR_SERV_CNT_MAX       GENMASK(7, 4)
#define PEMI_ARBK_PAGE_MISS_DLY_CYC     GENMASK(11, 8)
#define PEMI_ARBK_RD_BAN_PRO            BIT(12)
#define PEMI_ARBK_MULTI_CONF_BAN_PRO    BIT(13)
#define PEMI_ARBK_URGENT_CYC_1ST        GENMASK(19, 16)
#define PEMI_ARBK_URGENT_CYC_2ND        GENMASK(23, 20)
#define PEMI_ARBK_URD_BAN_PRO_NUM       GENMASK(27, 24)
#define PEMI_ARBK_MULTI_CONF_BAN_PRO_NUM        GENMASK(31, 28)
#define PEMI_ARBK_2ND               0x00000154
#define PEMI_ARBK_RD_SERV_CNT_MAX       GENMASK(3, 0)
#define PEMI_ARBK_WR_SERV_CNT_MAX       GENMASK(7, 4)
#define PEMI_ARBK_PAGE_MISS_DLY_CYC     GENMASK(11, 8)
#define PEMI_ARBK_RD_BAN_PRO            BIT(12)
#define PEMI_ARBK_MULTI_CONF_BAN_PRO    BIT(13)
#define PEMI_ARBK_URGENT_CYC_1ST        GENMASK(19, 16)
#define PEMI_ARBK_URGENT_CYC_2ND        GENMASK(23, 20)
#define PEMI_ARBK_URD_BAN_PRO_NUM       GENMASK(27, 24)
#define PEMI_ARBK_MULTI_CONF_BAN_PRO_NUM        GENMASK(31, 28)

#define PEMI_SLCT                   0x00000158
#define PEMI_SLCT_HI_PRIO_EN_M0         BIT(8)
#define PEMI_SLCT_HI_PRIO_EN_M1         BIT(9)
#define PEMI_SLCT_HI_PRIO_EN_M2         BIT(10)
#define PEMI_SLCT_HI_PRIO_EN_M3         BIT(11)
#define PEMI_SLCT_HI_PRIO_EN_M4         BIT(12)
#define PEMI_SLCT_HI_PRIO_EN_M5         BIT(13)
#define PEMI_SLCT_HI_PRIO_EN_M6         BIT(14)
#define PEMI_SLCT_HI_PRIO_EN_M7         BIT(15)
#define PEMI_SLCT_M0_LLAT_EN            BIT(16)
#define PEMI_SLCT_M1_LLAT_EN            BIT(17)
#define PEMI_SLCT_M2_LLAT_EN            BIT(18)
#define PEMI_SLCT_M3_LLAT_EN            BIT(19)
#define PEMI_SLCT_M4_LLAT_EN            BIT(20)
#define PEMI_SLCT_M5_LLAT_EN            BIT(21)
#define PEMI_SLCT_M6_LLAT_EN            BIT(22)
#define PEMI_SLCT_M7_LLAT_EN            BIT(23)
#define PEMI_SLCT_M0_PRIO_IND_EN        BIT(24)
#define PEMI_SLCT_M1_PRIO_IND_EN        BIT(25)
#define PEMI_SLCT_M2_PRIO_IND_EN        BIT(26)
#define PEMI_SLCT_M3_PRIO_IND_EN        BIT(27
#define PEMI_SLCT_M4_PRIO_IND_EN        BIT(28)
#define PEMI_SLCT_M5_PRIO_IND_EN        BIT(29)
#define PEMI_SLCT_M6_PRIO_IND_EN        BIT(30)
#define PEMI_SLCT_M7_PRIO_IND_EN        BIT(31)
#define PEMI_MPUA                   0x00000160
#define PEMI_MPUA_STOP_ADDR_0       GENMASK(15, 0)
#define PEMI_MPUA_SART_ADDR_0       GENMASK(31, 16)
#define PEMI_MPUB                   0x00000168
#define PEMI_MPUB_STOP_ADDR_1       GENMASK(15, 0)
#define PEMI_MPUB_SART_ADDR_1       GENMASK(31, 16)
#define PEMI_MPUC                   0x00000170
#define PEMI_MPUC_STOP_ADDR_2       GENMASK(15, 0)
#define PEMI_MPUC_SART_ADDR_2       GENMASK(31, 16)
#define PEMI_MPUD                   0x00000178
#define PEMI_MPUD_STOP_ADDR_3       GENMASK(15, 0)
#define PEMI_MPUD_SART_ADDR_3       GENMASK(31, 16)
#define PEMI_MPUE                   0x00000180
#define PEMI_MPUE_STOP_ADDR_4       GENMASK(15, 0)
#define PEMI_MPUE_SART_ADDR_4       GENMASK(31, 16)
#define PEMI_MPUF                   0x00000188
#define PEMI_MPUF_STOP_ADDR_5       GENMASK(15, 0)
#define PEMI_MPUF_SART_ADDR_5       GENMASK(31, 16)
#define PEMI_MPUG                   0x00000190
#define PEMI_MPUG_STOP_ADDR_6       GENMASK(15, 0)
#define PEMI_MPUG_SART_ADDR_6       GENMASK(31, 16)
#define PEMI_MPUH                   0x00000198
#define PEMI_MPUH_STOP_ADDR_7       GENMASK(15, 0)
#define PEMI_MPUH_SART_ADDR_7       GENMASK(31, 16)
#define PEMI_MPUI                   0x000001a0
#define PEMI_MPUI_R0D0_APC      GENMASK(2, 0)
#define PEMI_MPUI_R0D1_APC      GENMASK(5, 3)
#define PEMI_MPUI_R0D2_APC      GENMASK(8, 6)
#define PEMI_MPUI_R0D3_APC      GENMASK(11, 9)
#define PEMI_MPUI_R0_LOCK       BIT(15)
#define PEMI_MPUI_R1D0_APC      GENMASK(18, 16)
#define PEMI_MPUI_R1D1_APC      GENMASK(21, 19)
#define PEMI_MPUI_R1D2_APC      GENMASK(24, 22)
#define PEMI_MPUI_R1D3_APC      GENMASK(27, 25)
#define PEMI_MPUI_R1_LOCK       BIT(31)
#define PEMI_MPUJ                   0x000001a8
#define PEMI_MPUJ_R2D0_APC      GENMASK(2, 0)
#define PEMI_MPUJ_R2D1_APC      GENMASK(5, 3)
#define PEMI_MPUJ_R2D2_APC      GENMASK(8, 6)
#define PEMI_MPUJ_R2D3_APC      GENMASK(11, 9)
#define PEMI_MPUJ_R2_LOCK       BIT(15)
#define PEMI_MPUJ_R3D0_APC      GENMASK(18, 16)
#define PEMI_MPUJ_R3D1_APC      GENMASK(21, 19)
#define PEMI_MPUJ_R3D2_APC      GENMASK(24, 22)
#define PEMI_MPUJ_R3D3_APC      GENMASK(27, 25)
#define PEMI_MPUJ_R3_LOCK       BIT(31)
#define PEMI_MPUK                   0x000001b0
#define PEMI_MPUK_R4D0_APC      GENMASK(2, 0)
#define PEMI_MPUK_R4D1_APC      GENMASK(5, 3)
#define PEMI_MPUK_R4D2_APC      GENMASK(8, 6)
#define PEMI_MPUK_R4D3_APC      GENMASK(11, 9)
#define PEMI_MPUK_R4_LOCK       BIT(15)
#define PEMI_MPUK_R5D0_APC      GENMASK(18, 16)
#define PEMI_MPUK_R5D1_APC      GENMASK(21, 19)
#define PEMI_MPUK_R5D2_APC      GENMASK(24, 22)
#define PEMI_MPUK_R5D3_APC      GENMASK(27, 25)
#define PEMI_MPUK_R5_LOCK       BIT(31)
#define PEMI_MPUL                   0x000001b8
#define PEMI_MPUL_R6D0_APC      GENMASK(2, 0)
#define PEMI_MPUL_R6D1_APC      GENMASK(5, 3)
#define PEMI_MPUL_R6D2_APC      GENMASK(8, 6)
#define PEMI_MPUL_R6D3_APC      GENMASK(11, 9)
#define PEMI_MPUL_R6_LOCK       BIT(15)
#define PEMI_MPUL_R7D0_APC      GENMASK(18, 16)
#define PEMI_MPUL_R7D1_APC      GENMASK(21, 19)
#define PEMI_MPUL_R7D2_APC      GENMASK(24, 22)
#define PEMI_MPUL_R7D3_APC      GENMASK(27, 25)
#define PEMI_MPUL_R7_LOCK       BIT(31)
#define PEMI_MPUM                   0x000001c0
#define PEMI_MPUM_D0_MASK       GENMASK(7, 0)
#define PEMI_MPUM_APB_VIO_MASK0 BIT(8)
#define PEMI_MPUM_D0_OOR_MASK   BIT(9)
#define PEMI_MPUM_D0_REP        BIT(28)
#define PEMI_MPUM_D0_SEC        BIT(30)
#define PEMI_MPUM_D0_LOCK       BIT(31)
#define PEMI_MPUN                   0x000001c8
#define PEMI_MPUN_D1_MASK       GENMASK(7, 0)
#define PEMI_MPUN_APB_VIO_MASK1 BIT(8)
#define PEMI_MPUN_D1_OOR_MASK   BIT(9)
#define PEMI_MPUN_D1_REP        BIT(28)
#define PEMI_MPUN_D1_SEC        BIT(30)
#define PEMI_MPUN_D1_LOCK       BIT(31)
#define PEMI_MPUO                   0x000001d0
#define PEMI_MPUO_D2_MASK       GENMASK(7, 0)
#define PEMI_MPUO_APB_VIO_MASK2 BIT(8)
#define PEMI_MPUO_D2_OOR_MASK   BIT(9)
#define PEMI_MPUO_D2_REP        BIT(28)
#define PEMI_MPUO_D2_SEC        BIT(30)
#define PEMI_MPUO_D2_LOCK       BIT(31)
#define PEMI_MPUP                   0x000001d8
#define PEMI_MPUP_R0_VIO        BIT(0)
#define PEMI_MPUP_R1_VIO        BIT(1)
#define PEMI_MPUP_R2_VIO        BIT(2)
#define PEMI_MPUP_R3_VIO        BIT(3)
#define PEMI_MPUP_R4_VIO        BIT(4)
#define PEMI_MPUP_R5_VIO        BIT(5)
#define PEMI_MPUP_R6_VIO        BIT(6)
#define PEMI_MPUP_R7_VIO        BIT(7)
#define PEMI_MPUP_APB_VIO       BIT(8)
#define PEMI_MPUP_OOR_VIO       BIT(9)
#define PEMI_MPUO_R8_VIO        BIT(16)
#define PEMI_MPUP_R9_VIO        BIT(17)
#define PEMI_MPUP_R10_VIO       BIT(18)
#define PEMI_MPUP_R11_VIO       BIT(19)
#define PEMI_MPUP_R12_VIO       BIT(20)
#define PEMI_MPUP_R13_VIO       BIT(21)
#define PEMI_MPUP_R14_VIO       BIT(22)
#define PEMI_MPUP_R15_VIO       BIT(23)
#define PEMI_MPUQ                   0x000001e0
#define PEMI_MPUQ_R0_VIO        BIT(0)
#define PEMI_MPUQ_R1_VIO        BIT(1)
#define PEMI_MPUQ_R2_VIO        BIT(2)
#define PEMI_MPUQ_R3_VIO        BIT(3)
#define PEMI_MPUQ_R4_VIO        BIT(4)
#define PEMI_MPUQ_R5_VIO        BIT(5)
#define PEMI_MPUQ_R6_VIO        BIT(6)
#define PEMI_MPUQ_R7_VIO        BIT(7)
#define PEMI_MPUQ_APB_VIO       BIT(8)
#define PEMI_MPUQ_OOR_VIO       BIT(9)
#define PEMI_MPUQ_R8_VIO        BIT(16)
#define PEMI_MPUQ_R9_VIO        BIT(17)
#define PEMI_MPUQ_R10_VIO       BIT(18)
#define PEMI_MPUQ_R11_VIO       BIT(19)
#define PEMI_MPUQ_R12_VIO       BIT(20)
#define PEMI_MPUQ_R13_VIO       BIT(21)
#define PEMI_MPUQ_R14_VIO       BIT(22)
#define PEMI_MPUQ_R15_VIO       BIT(23)
#define PEMI_MPUR                   0x000001e8
#define PEMI_MPUR_R0_VIO        BIT(0)
#define PEMI_MPUR_R1_VIO        BIT(1)
#define PEMI_MPUR_R2_VIO        BIT(2)
#define PEMI_MPUR_R3_VIO        BIT(3)
#define PEMI_MPUR_R4_VIO        BIT(4)
#define PEMI_MPUR_R5_VIO        BIT(5)
#define PEMI_MPUR_R6_VIO        BIT(6)
#define PEMI_MPUR_R7_VIO        BIT(7)
#define PEMI_MPUR_APB_VIO       BIT(8)
#define PEMI_MPUR_OOR_VIO       BIT(9)
#define PEMI_MPUR_R8_VIO        BIT(16)
#define PEMI_MPUR_R9_VIO        BIT(17)
#define PEMI_MPUR_R10_VIO       BIT(18)
#define PEMI_MPUR_R11_VIO       BIT(19)
#define PEMI_MPUR_R12_VIO       BIT(20)
#define PEMI_MPUR_R13_VIO       BIT(21)
#define PEMI_MPUR_R14_VIO       BIT(22)
#define PEMI_MPUR_R15_VIO       BIT(23)
#define PEMI_MPUS                   0x000001f0
#define PEMI_MPUS_MASTER_ID     GENMASK(12, 0)
#define PEMI_MPUS_REGION_ABORT  GENMASK(18, 16)
#define PEMI_MPUS_DOMAIN_ID     GENMASK(22, 21)
#define PEMI_MPUS_APB_ABORT     BIT(24)
#define PEMI_MPUS_FIX_ABORT     BIT(25)
#define PEMI_MPUS_W_VIO         BIT(28)
#define PEMI_MPUS_R_VIO         BIT(29)
#define PEMI_MPUS_CLR           BIT(31)
#define PEMI_MPUT                   0x000001f8
#define PEMI_MPUT_ERR_ADDR      GENMASK(31, 0)
#define PEMI_MPUU                   0x00000200
#define PEMI_MPUU_D3_MASK       GENMASK(7, 0)
#define PEMI_MPUU_APB_VIO_MASK3 BIT(8)
#define PEMI_MPUU_D3_OOR_MASK   BIT(9)
#define PEMI_MPUU_D3_MASK_HI    GENMASK(23, 16)
#define PEMI_MPUU_D3_REP        BIT(28)
#define PEMI_MPUU_D3_SEC        BIT(30)
#define PEMI_MPUU_D3_LOCK       BIT(31)
#define PEMI_MPUY                   0x00000220
#define PEMI_MPUY_R0_VIO        BIT(0)
#define PEMI_MPUY_R1_VIO        BIT(1)
#define PEMI_MPUY_R2_VIO        BIT(2)
#define PEMI_MPUY_R3_VIO        BIT(3)
#define PEMI_MPUY_R4_VIO        BIT(4)
#define PEMI_MPUY_R5_VIO        BIT(5)
#define PEMI_MPUY_R6_VIO        BIT(6)
#define PEMI_MPUY_R7_VIO        BIT(7)
#define PEMI_MPUY_APB_VIO       BIT(8)
#define PEMI_MPUY_OOR_VIO       BIT(9)
#define PEMI_MPUY_R8_VIO        BIT(16)
#define PEMI_MPUY_R9_VIO        BIT(17)
#define PEMI_MPUY_R10_VIO       BIT(18)
#define PEMI_MPUY_R11_VIO       BIT(19)
#define PEMI_MPUY_R12_VIO       BIT(20)
#define PEMI_MPUY_R13_VIO       BIT(21)
#define PEMI_MPUY_R14_VIO       BIT(22)
#define PEMI_MPUY_R15_VIO       BIT(23)

#define PEMI_BMEN                   0x00000400
#define PEMI_BMEN_BUS_MON_EN            BIT(0)
#define PEMI_BMEN_BUS_MON_PAUSE         BIT(1)
#define PEMI_BMEN_BUS_MON_STP           BIT(2)
#define PEMI_BMEN_BUS_MON_RW            GENMASK(5, 4)
#define PEMI_BMEN_BC_OVERRUN            BIT(8)
#define PEMI_BMEN_SEL_MASTER            GENMASK(23, 16)
#define PEMI_BMEN_SEL_TRANS_TYPE        GENMASK(31, 24)
#define PEMI_BSTP                   0x00000404
#define PEMI_BSTP_BUSCYC_STOP           GENMASK(31, 0)
#define PEMI_BCNT                   0x00000408
#define PEMI_BCNT_BUSCYC_CNT            GENMASK(31, 0)
#define PEMI_TACT                   0x00000410
#define PEMI_TACT_TRANS_ALL_CNT         GENMASK(31, 0)
#define PEMI_TSCT                   0x00000418
#define PEMI_TSCT_TRANS_CNT         GENMASK(31, 0)
#define PEMI_WACT                   0x00000420
#define PEMI_WACT_WORD_ALL_CNT          GENMASK(31, 0)
#define PEMI_WSCT                   0x00000428
#define PEMI_WSCT_WORD_CNT          GENMASK(31, 0)
#define PEMI_BACT                   0x00000430
#define PEMI_BACT_BAND_WORD_CNT         GENMASK(31, 0)
#define PEMI_BSCT                   0x00000438
#define PEMI_BSCT_OVERHEAD_WORD_CNT     GENMASK(31, 0)
#define PEMI_MSEL                   0x00000440
#define PEMI_MSEL_SEL2_MASTER           GENMASK(7, 0)
#define PEMI_MSEL_SEL2_TRANS_TYPE       GENMASK(15, 8)
#define PEMI_MSEL_SEL3_MASTER           GENMASK(23, 16)
#define PEMI_MSEL_SEL3_TRANS_TYPE       GENMASK(31, 24)
#define PEMI_TSCT2                  0x00000448
#define PEMI_TSCT2_TRANS2_CNT           GENMASK(31, 0)
#define PEMI_TSCT3                  0x00000450
#define PEMI_TSCT3_TRANS3_CNT           GENMASK(31, 0)
#define PEMI_WSCT2                  0x00000458
#define PEMI_WSCT2_WORD2_CNT            GENMASK(31, 0)
#define PEMI_WSCT3                  0x00000460
#define PEMI_WSCT3_WORD3_CNT            GENMASK(31, 0)
#define PEMI_WSCT4                  0x00000464
#define PEMI_WSCT4_WORD4_CNT            GENMASK(31, 0)
#define PEMI_MSEL2                  0x00000468
#define PEMI_MSEL2_SEL4_MASTER          GENMASK(7, 0)
#define PEMI_MSEL2_SEL4_TRANS_TYPE      GENMASK(15, 8)
#define PEMI_MSEL2_SEL5_MASTER          GENMASK(23, 16)
#define PEMI_MSEL2_SEL5_TRANS_TYPE      GENMASK(31, 24)
#define PEMI_MSEL3                  0x00000470
#define PEMI_MSEL3_SEL6_MASTER          GENMASK(7, 0)
#define PEMI_MSEL3_SEL6_TRANS_TYPE      GENMASK(15, 8)
#define PEMI_MSEL3_SEL7_MASTER          GENMASK(23, 16)
#define PEMI_MSEL3_SEL7_TRANS_TYPE      GENMASK(31, 24)
#define PEMI_MSEL4                  0x00000478
#define PEMI_MSEL4_SEL8_MASTER          GENMASK(7, 0)
#define PEMI_MSEL4_SEL8_TRANS_TYPE      GENMASK(15, 8)
#define PEMI_MSEL4_SEL9_MASTER          GENMASK(23, 16)
#define PEMI_MSEL4_SEL9_TRANS_TYPE      GENMASK(31, 24)
#define PEMI_MSEL5                  0x00000480
#define PEMI_MSEL5_SEL10_MASTER         GENMASK(7, 0)
#define PEMI_MSEL5_SEL10_TRANS_TYPE     GENMASK(15, 8)
#define PEMI_MSEL5_SEL11_MASTER         GENMASK(23, 16)
#define PEMI_MSEL5_SEL11_TRANS_TYPE     GENMASK(31, 24)
#define PEMI_MSEL6                  0x00000488
#define PEMI_MSEL6_SEL12_MASTER         GENMASK(7, 0)
#define PEMI_MSEL6_SEL12_TRANS_TYPE     GENMASK(15, 8)
#define PEMI_MSEL6_SEL13_MASTER         GENMASK(23, 16)
#define PEMI_MSEL6_SEL13_TRANS_TYPE     GENMASK(31, 24)
#define PEMI_MSEL7                  0x00000490
#define PEMI_MSEL7_SEL14_MASTER         GENMASK(7, 0)
#define PEMI_MSEL7_SEL14_TRANS_TYPE     GENMASK(15, 8)
#define PEMI_MSEL7_SEL15_MASTER         GENMASK(23, 16)
#define PEMI_MSEL7_SEL15_TRANS_TYPE     GENMASK(31, 24)
#define PEMI_MSEL8                  0x00000498
#define PEMI_MSEL8_SEL16_MASTER         GENMASK(7, 0)
#define PEMI_MSEL8_SEL16_TRANS_TYPE     GENMASK(15, 8)
#define PEMI_MSEL8_SEL17_MASTER         GENMASK(23, 16)
#define PEMI_MSEL8_SEL17_TRANS_TYPE     GENMASK(31, 24)
#define PEMI_MSEL9                  0x000004a0
#define PEMI_MSEL9_SEL18_MASTER         GENMASK(7, 0)
#define PEMI_MSEL9_SEL18_TRANS_TYPE     GENMASK(15, 8)
#define PEMI_MSEL9_SEL19_MASTER         GENMASK(23, 16)
#define PEMI_MSEL9_SEL19_TRANS_TYPE     GENMASK(31, 24)
#define PEMI_MSEL10                 0x000004a8
#define PEMI_MSEL10_SEL20_MASTER        GENMASK(7, 0)
#define PEMI_MSEL10_SEL20_TRANS_TYPE    GENMASK(15, 8)
#define PEMI_MSEL10_SEL21_MASTER        GENMASK(23, 16)
#define PEMI_MSEL10_SEL21_TRANS_TYPE    GENMASK(31, 24)
#define PEMI_BMID0                  0x000004b0
#define PEMI_BMID0_SEL1_ID          GENMASK(9, 0)
#define PEMI_BMID0_SEL2_ID          GENMASK(25, 16)
#define PEMI_BMID1                  0x000004b4
#define PEMI_BMID1_SEL3_ID          GENMASK(9, 0)
#define PEMI_BMID1_SEL4_ID          GENMASK(25, 16)
#define PEMI_BMID2                  0x000004b8
#define PEMI_BMID2_SEL5_ID          GENMASK(9, 0)
#define PEMI_BMID2_SEL6_ID          GENMASK(25, 16)
#define PEMI_BMID3                  0x000004bc
#define PEMI_BMID3_SEL7_ID          GENMASK(9, 0)
#define PEMI_BMID3_SEL8_ID          GENMASK(25, 16)
#define PEMI_BMID4                  0x000004c0
#define PEMI_BMID4_SEL9_ID          GENMASK(9, 0)
#define PEMI_BMID4_SEL10_ID         GENMASK(25, 16)
#define PEMI_BMID5                  0x000004c4
#define PEMI_BMID5_SEL11_ID         GENMASK(9, 0)
#define PEMI_BMID5_SEL12_ID         GENMASK(25, 16)
#define PEMI_BMID6                  0x000004c8
#define PEMI_BMID6_SEL13_ID         GENMASK(9, 0)
#define PEMI_BMID6_SEL14_ID         GENMASK(25, 16)
#define PEMI_BMID7                  0x000004cc
#define PEMI_BMID7_SEL15_ID         GENMASK(9, 0)
#define PEMI_BMID7_SEL16_ID         GENMASK(25, 16)
#define PEMI_BMID8                  0x000004d0
#define PEMI_BMID8_SEL17_ID         GENMASK(9, 0)
#define PEMI_BMID8_SEL18_ID         GENMASK(25, 16)
#define PEMI_BMID9                  0x000004d4
#define PEMI_BMID9_SEL19_ID         GENMASK(9, 0)
#define PEMI_BMID9_SEL20_ID         GENMASK(25, 16)
#define PEMI_BMID10                 0x000004d8
#define PEMI_BMID10_SEL21_ID        GENMASK(9, 0)
#define PEMI_BMEN1                  0x000004e0
#define PEMI_BMEN1_HPRI_EN          GENMASK(20, 0)
#define PEMI_BMEN2                  0x000004e8
#define PEMI_BMEN2_SEL_ID_EN            GENMASK(20, 0)
#define PEMI_BMEN2_BAN_LAT_CNT_SEL      GENMASK(25, 24)
#define PEMI_BMEN2_NON_ALIGN_CNT_SEL    BIT(26)
#define PEMI_BMRW0                  0x000004f8
#define PEMI_BMRW0_SEL1_RW          GENMASK(1, 0)
#define PEMI_BMRW0_SEL2_RW          GENMASK(3, 2)
#define PEMI_BMRW0_SEL3_RW          GENMASK(5, 4)
#define PEMI_BMRW0_SEL4_RW          GENMASK(7, 6)
#define PEMI_BMRW0_SEL5_RW          GENMASK(9, 8)
#define PEMI_BMRW0_SEL6_RW          GENMASK(11, 10)
#define PEMI_BMRW0_SEL7_RW          GENMASK(13, 12)
#define PEMI_BMRW0_SEL8_RW          GENMASK(15, 14)
#define PEMI_BMRW0_SEL9_RW          GENMASK(17, 16)
#define PEMI_BMRW0_SEL10_RW         GENMASK(19, 18)
#define PEMI_BMRW0_SEL11_RW         GENMASK(21, 20)
#define PEMI_BMRW0_SEL12_RW         GENMASK(23, 22)
#define PEMI_BMRW0_SEL13_RW         GENMASK(25, 24)
#define PEMI_BMRW0_SEL14_RW         GENMASK(27, 26)
#define PEMI_BMRW0_SEL15_RW         GENMASK(29, 28)
#define PEMI_BMRW0_SEL16_RW         GENMASK(31, 30)
#define PEMI_BMRW1                  0x000004fc
#define PEMI_BMRW1_SEL17_RW         GENMASK(1, 0)
#define PEMI_BMRW1_SEL18_RW         GENMASK(3, 2)
#define PEMI_BMRW1_SEL19_RW         GENMASK(5, 4)
#define PEMI_BMRW1_SEL20_RW         GENMASK(7, 6)
#define PEMI_BMRW1_SEL21_RW         GENMASK(9, 8)
#define PEMI_TTYPE1                 0x00000500
#define PEMI_TTYPE1_CNT             GENMASK(31, 0)
#define PEMI_TTYPE2                 0x00000508
#define PEMI_TTYPE2_CNT             GENMASK(31, 0)
#define PEMI_TTYPE3                 0x00000510
#define PEMI_TTYPE3_CNT             GENMASK(31, 0)
#define PEMI_TTYPE4                 0x00000518
#define PEMI_TTYPE4_CNT             GENMASK(31, 0)
#define PEMI_TTYPE5                 0x00000520
#define PEMI_TTYPE5_CNT             GENMASK(31, 0)
#define PEMI_TTYPE6                 0x00000528
#define PEMI_TTYPE6_CNT             GENMASK(31, 0)
#define PEMI_TTYPE7                 0x00000530
#define PEMI_TTYPE7_CNT             GENMASK(31, 0)
#define PEMI_TTYPE8                 0x00000538
#define PEMI_TTYPE8_CNT             GENMASK(31, 0)
#define PEMI_TTYPE9                 0x00000540
#define PEMI_TTYPE9_CNT             GENMASK(31, 0)
#define PEMI_TTYPE10                0x00000548
#define PEMI_TTYPE10_CNT            GENMASK(31, 0)
#define PEMI_TTYPE11                0x00000550
#define PEMI_TTYPE11_CNT            GENMASK(31, 0)
#define PEMI_TTYPE12                0x00000558
#define PEMI_TTYPE12_CNT            GENMASK(31, 0)
#define PEMI_TTYPE13                0x00000560
#define PEMI_TTYPE13_CNT            GENMASK(31, 0)
#define PEMI_TTYPE14                0x00000568
#define PEMI_TTYPE14_CNT            GENMASK(31, 0)
#define PEMI_TTYPE15                0x00000570
#define PEMI_TTYPE15_CNT            GENMASK(31, 0)
#define PEMI_TTYPE16                0x00000578
#define PEMI_TTYPE16_CNT            GENMASK(31, 0)
#define PEMI_TTYPE17                0x00000580
#define PEMI_TTYPE17_CNT            GENMASK(31, 0)
#define PEMI_TTYPE18                0x00000588
#define PEMI_TTYPE18_CNT                GENMASK(31, 0)
#define PEMI_TTYPE19                0x00000590
#define PEMI_TTYPE19_CNT                GENMASK(31, 0)
#define PEMI_TTYPE20                0x00000598
#define PEMI_TTYPE20_CNT            GENMASK(31, 0)
#define PEMI_TTYPE21                0x000005a0
#define PEMI_TTYPE21_CNT            GENMASK(31, 0)
#define PEMI_WP_ADR                 0x000005e0
#define PEMI_WP_ADR_EMI_WP_ADR      GENMASK(31, 0)
#define PEMI_WP_CTRL                0x000005e8
#define PEMI_WP_CTRL_EMI_WP_RANGE   GENMASK(5, 0)
#define PEMI_WP_CTRL_EMI_WP_TYPE    GENMASK(7, 6)
#define PEMI_WP_CTRL_WP_RD_DIS              BIT(8)
#define PEMI_WP_CTRL_WP_WR_DIS              BIT(9)
#define PEMI_WP_CTRL_EMI_WP_SLVERR          BIT(10)
#define PEMI_WP_CTRL_ADR_CHK_INT_EN         BIT(12)
#define PEMI_WP_CTRL_LOCK_CHK_EN            BIT(13)
#define PEMI_WP_CTRL_NON_ALIGN_CHK_INT_EN   BIT(14)
#define PEMI_WP_CTRL_WP_INT_EN              BIT(15)
#define PEMI_CHKER                  0x000005f0
#define PEMI_CHKER_AXI_VIO_ID               GENMASK(15, 0)
#define PEMI_CHKER_ADR_CHK_EN               BIT(16)
#define PEMI_CHKER_LOCK_CHK_EN              BIT(17)
#define PEMI_CHKER_NON_ALIGN_CHK_EN         BIT(18)
#define PEMI_CHKER_WP_EN                    BIT(19)
#define PEMI_CHKER_NONE_ALIGN_CHK_MST       GENMASK(23, 20)
#define PEMI_CHKER_VIO_CLR                  BIT(24)
#define PEMI_CHKER_AXI_VIO_WR               BIT(27)
#define PEMI_CHKER_AXI_ADR_VIO              BIT(28)
#define PEMI_CHKER_AXI_LOCK_ISSUE           BIT(29)
#define PEMI_CHKER_AXI_NONE_ALIGN_ISSUE     BIT(30)
#define PEMI_CHKER_WP_HIT                   BIT(31)

#define PEMI_CHKER_TYPE             0x000005f4
#define PEMI_CHKER_TYPE_AXI_CHECKER_TYP     GENMASK(7, 0)
#define PEMI_CHKER_ADR              0x000005f8
#define PEMI_CHKER_ADR_AXI_VIO_ADR          GENMASK(31, 0)

#endif /* #ifndef __PEMI_REG_REGS_H__ */
