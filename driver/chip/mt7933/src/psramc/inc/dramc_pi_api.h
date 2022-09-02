#ifndef _PI_API_H
#define _PI_API_H

#include <string.h>
/***********************************************************************/
/*              Includes                                               */
/***********************************************************************/

/***********************************************************************/
/*              Constant Define                                        */
/***********************************************************************/
#ifndef __FLASH_TOOL_DA__
#define __FLASH_TOOL_DA__   0
#else /* #ifndef __FLASH_TOOL_DA__ */
#undef __FLASH_TOOL_DA__
#define __FLASH_TOOL_DA__   1
#endif /* #ifndef __FLASH_TOOL_DA__ */
#define SW_CHANGE_FOR_SIMULATION 0  //calibration funciton for whole chip simulation. Code changed due to different compiler
#define FOR_DV_SIMULATION_USED   0 ////calibration funciton for DV simulation. Code changed due to different compiler
#define FT_DSIM_USED 0

#if FOR_DV_SIMULATION_USED
#ifdef __ETT__
#undef __ETT__
#endif /* #ifdef __ETT__ */
#define FOR_DV_SIMULATION_SPEED_UP 1
#else /* #if FOR_DV_SIMULATION_USED */
#define FOR_DV_SIMULATION_SPEED_UP 0
#endif /* #if FOR_DV_SIMULATION_USED */

#define DUMP_INIT_RG_LOG_TO_DE  0//dump init RG settings to DE
#define DUMP_REG 0//dump MP settings to DR
//#define SLT
//#define FT_test

#if(!SW_CHANGE_FOR_SIMULATION)
#if __FLASH_TOOL_DA__
#include "sw_types.h"
#else /* #if __FLASH_TOOL_DA__ */
#if (!FOR_DV_SIMULATION_USED)
#include "typedefs.h"
#endif /* #if (!FOR_DV_SIMULATION_USED) */
#endif /* #if __FLASH_TOOL_DA__ */
#endif /* #if(!SW_CHANGE_FOR_SIMULATION) */

/*DDR Type Select*/
#define SUPPORT_TYPE_PSRAM      1
#define PSRAM_SPEC SUPPORT_TYPE_PSRAM
#define SUPPORT_PSRAM_256M  0   // 0: 64M   1:256M

//Bring Up Selection : Do Not open it when normal operation
#ifdef DRAM_FIRST_BRING_UP
#define FIRST_BRING_UP            //tg enable it
#endif /* #ifdef DRAM_FIRST_BRING_UP */

//DRAMC Chip
#define fcA60501        1
#define fcElbrus        3
#define fcOlympus       4
#define fcA60838        5
#define fcWhitney       6
#define fcAlaska        7
#define fcBianco        8
#define fcSylvia        9
#define fcCannon        10
#define fcCervino       11
#define fcMerlot        12
#define fcSchubert      13
#define fcMockingbird   14
#define fcFOR_CHIP_ID   fcMockingbird
#define fcFOR_PINMUX    fcMockingbird

#define REVISION_ID_MAGIC 0x9501

#define CHANNEL_NUM      1   // 1 single channel, 2 dual channel, 4 4 channel
#define DUAL_RANK_ENABLE 0

//Feature option
#define DUTY_SCAN_V2_ONLY_K_HIGHEST_FREQ    0   // 0: K all Freq 1: K highest Freq
#define ENABLE_8PHASE_CALIBRATION 0
//#define ENABLE_MIOCK_JMETER   // for TX_PER_BIT_DELAY_CELL

//#define YH_SWEEP_IC

//SW option
#define DUAL_FREQ_K          0        // If enable, need to define DDR_xxxx the same as DUAL_FREQ_HIGH
#define EVEREST_PORTING_TODO 0
#define EYESCAN_LOG __ETT__   //draw eye diagram after calibration, if enable, need to fix code size problem (maybe disable ENABLE_LP3_SW first for temp workaround)

#define REDUCE_LOG_FOR_PRELOADER 1
#define ENABLE_DRS 0

// Sw work around options.
#define WRITE_LEVELING_MOVE_DQS_INSTEAD_OF_CLK 1 // work around for clock multi phase problem(cannot move clk or the clk will be bad)
#define TX_PERBIT_INIT_FLOW_CONTROL 1 // work around for clock multi phase problem(cannot move clk or the clk will be bad)

//init for test engine
#define DEFAULT_TEST2_1_CAL 0x55000000   // pattern0 and base address for test engine when we do calibration
#if (FOR_DV_SIMULATION_USED != 0)
#define DEFAULT_TEST2_2_CAL 0xaa000020 // pattern1 and offset address for test engine when we do calibraion
#else /* #if (FOR_DV_SIMULATION_USED != 0) */
//change offset to 0x100, confirm with YH Tsai and Chris. xtalk length 0x20, 0x100 is long enough.
#define DEFAULT_TEST2_2_CAL 0xaa000100   // pattern1 and offset address for test engine when we do calibraion
#endif /* #if (FOR_DV_SIMULATION_USED != 0) */
#define MAX_CMP_CPT_WAIT_LOOP 30000   // max loop

// common
#define DQS_NUMBER   1      //tg change for Schubert 16bit lp3/4
#define DQS_BIT_NUMBER  8
#define DQ_DATA_WIDTH_PSRAM 8
#define TIME_OUT_CNT    100 //100us

// Gating window
#define DQS_GW_COARSE_STEP    1//8 // for testing// 1
#define DQS_GW_FINE_START 0
#define DQS_GW_FINE_END 32
#define DQS_GW_FINE_STEP 4

/* When DQS_GW_7UI is
 * defined: 7UI burst length gating mode
 * not defined: 8UI burst length gating mode
 */
#define DQS_GW_7UI

// DATLAT
#define DATLAT_TAP_NUMBER 32   // DATLAT[3:0] = {0x80[20:4]}

// RX DQ/DQS
#define MAX_RX_DQSDLY_TAPS 127       // 0x018, May set back to 64 if no need.
#define MAX_RX_DQDLY_TAPS 63      // 0x210~0x22c, 0~15 delay tap

// DVFS
// need to review #if & #ifdef, Jeremy
#define TDQSCK_PRECALCULATION_FOR_DVFS  1//DQS pre-calculation
#define ENABLE_DLL_ALL_SLAVE_MODE 1 //set DLL to all slave mode to reduce 70mck during DVFS (data rate <= DDR1866)
#define DLL_ASYNC_MODE 0 //0:Sync mode(old),CHB CA will be slave; 1:Async mode(new),CHB CA will be master
#define ENABLE_DVS 1
#define DRAMC_DFS_MODE 1 //0:RG/SPM, 1:SPM, 2:RG

//DVT test
#define DVT_TEST_DUMMY_RD_SIDEBAND_FROM_SPM 0
#define DVT_TEST_DUMMY_READ_FOR_DQS_GATING_TRACKING 0
#define DVT_READ_LATENCY_MONITOR  0 // Read latency monitor, Block ALE max counter (New since Vinson)

//Run time config
#define HW_GATING //DQS strobe calibration enable
//#define GATING_7UI_FOR_TRACKING /* Use DQS_GW_7UI instead */
#define DUMMY_READ_FOR_TRACKING
#define ENABLE_SW_RUN_TIME_ZQ_WA 0
#define TEMP_SENSOR_ENABLE //After enable rumtime MR4 read, Get DramC SPCMDRESP_REFRESH_RATE.
#if(!SW_CHANGE_FOR_SIMULATION)
#define APPLY_LOWPOWER_GOLDEN_SETTINGS 1 //Low pwer settings

#define SPM_CONTROL_AFTERK

#else /* #if(!SW_CHANGE_FOR_SIMULATION) */
#define APPLY_LOWPOWER_GOLDEN_SETTINGS 0 //Low pwer settings
#endif /* #if(!SW_CHANGE_FOR_SIMULATION) */

#define ENABLE_RX_TRACKING_LP4 1
#define ENABLE_TMRRI_NEW_MODE 1

//Debug option
#define GATING_ONLY_FOR_DEBUG 0
#if FOR_DV_SIMULATION_USED
#define CPU_RW_TEST_AFTER_K 0
#define TA2_RW_TEST_AFTER_K 0
#else /* #if FOR_DV_SIMULATION_USED */
#define CPU_RW_TEST_AFTER_K 1// need to enable GATING_ONLY_FOR_DEBUG at the same time for gating debug log
#define TA2_RW_TEST_AFTER_K 1
#endif /* #if FOR_DV_SIMULATION_USED */
#define MRW_CHECK_ONLY 0

//PINMUX auto test per bit related
//#define PINMUX_AUTO_TEST_PER_BIT_RX 1 //LP4
//#define PINMUX_AUTO_TEST_PER_BIT_TX 1 //LP4 only

#if (FOR_DV_SIMULATION_USED == 0)
#define ETT_PRINT_FORMAT  // Apply for both preloader and ETT
#endif /* #if (FOR_DV_SIMULATION_USED == 0) */
#if 1//(__ETT__)
#define ENABLE_DDRPHY_FREQ_METER 1 //[QW] TODO
#endif /* #if 1//(__ETT__) */
#define PRINT_CALIBRATION_SUMMARY (!SW_CHANGE_FOR_SIMULATION)
//... add new feature compile option here.
//#define RX_DLY_TRACKING_VERIFY 0 // not implemented

//misc feature
#define ENABLE_DQ3200_UNTERM 0  // 0: not support, 1: enable unterm swimp cal setting with 30 ohm @ DDR3200
//#define ENABLE_HW_IMPCAL

#define APPLY_SIGNAL_WAVEFORM_SETTINGS_ADJUST 1     //adjust IMP DRVP and DQ ODT RZQ(MR11) in the test menu

/* HQA debug option - Calibration results summary
 * 1. Enabled in ETT
 * 2. Disabled in preloader
 *    (May be enabled manually)
 */
#if (__ETT__)
#define FOR_HQA_TEST_USED   // HQA test used, to print result for easy report
#define FOR_HQA_REPORT_USED // print out special format result for HQA make report used, from Arnold
#endif /* #if (__ETT__) */

#define RUNTIME_SHMOO_RELEATED_FUNCTION     CFG_DRAM_SAVE_FOR_RUNTIME_SHMOO
#define RUNTIME_SHMOO_RG_BACKUP_NUM         (200)

#if (__ETT__)
/* 1. Add test file (ex: ft_scan_test.c or fpc_lpbk_mem.c) in the ett\makefile (C_SRC_FILES = ft_scan_test.c ...)
 * 2. Enable LOOPBACK_TEST define and others(below)
 * 3. Enable VCORE_SHMOO
 */
//#define VCORE_SHMOO
#ifdef VCORE_SHMOO
#define VCORE_SHMOO_RX_TX_SCAN 0    //for Rx_Tx_scan pattern
#endif /* #ifdef VCORE_SHMOO */
#endif /* #if (__ETT__) */

#if !__ETT__
// Preloader: using config CFG_DRAM_CALIB_OPTIMIZATION to identify
#if (FOR_DV_SIMULATION_USED == 0)
// Preloader: using config CFG_DRAM_CALIB_OPTIMIZATION to identify
#define SUPPORT_SAVE_TIME_FOR_CALIBRATION    CFG_DRAM_CALIB_OPTIMIZATION
#else /* #if (FOR_DV_SIMULATION_USED == 0) */
// DV simulation, use full calibration flow
#define SUPPORT_SAVE_TIME_FOR_CALIBRATION    0
#endif /* #if (FOR_DV_SIMULATION_USED == 0) */
#define EMMC_READY CFG_DRAM_CALIB_OPTIMIZATION
#define BYPASS_VREF_CAL         (SUPPORT_SAVE_TIME_FOR_CALIBRATION & EMMC_READY)
#define BYPASS_DATLAT           (SUPPORT_SAVE_TIME_FOR_CALIBRATION & EMMC_READY)
#define BYPASS_WRITELEVELING    (SUPPORT_SAVE_TIME_FOR_CALIBRATION & EMMC_READY)
#define BYPASS_RXWINDOW         (SUPPORT_SAVE_TIME_FOR_CALIBRATION & EMMC_READY)
#define BYPASS_TXWINDOW         (SUPPORT_SAVE_TIME_FOR_CALIBRATION & EMMC_READY)
#define BYPASS_GatingCal        (SUPPORT_SAVE_TIME_FOR_CALIBRATION & EMMC_READY)
#define BYPASS_CA_PER_BIT_DELAY_CELL (SUPPORT_SAVE_TIME_FOR_CALIBRATION & EMMC_READY)
#else /* #if !__ETT__ */
#define SUPPORT_SAVE_TIME_FOR_CALIBRATION 0
#define EMMC_READY 0
#define BYPASS_VREF_CAL 1
#define BYPASS_DATLAT 1
#define BYPASS_WRITELEVELING 1
#define BYPASS_RXWINDOW 1
#define BYPASS_TXWINDOW 1
#define BYPASS_GatingCal 1
#endif /* #if !__ETT__ */
#define USE_CLK26M
#define PSRAM_VREF_FROM_RTN 1

//======================== FIRST_BRING_UP Init Definition =====================
#ifdef FIRST_BRING_UP

#undef DUAL_FREQ_K
#define DUAL_FREQ_K 0

#undef TDQSCK_PRECALCULATION_FOR_DVFS
#define TDQSCK_PRECALCULATION_FOR_DVFS  0//DQS pre-calculation

#undef CHANNEL_NUM
#define CHANNEL_NUM 1
#undef DUAL_RANK_ENABLE
#define DUAL_RANK_ENABLE 0

#undef ENABLE_DRS
#define ENABLE_DRS 0

#undef APPLY_LOWPOWER_GOLDEN_SETTINGS
#define APPLY_LOWPOWER_GOLDEN_SETTINGS 0

#undef EYESCAN_LOG
#define EYESCAN_LOG 0

#undef PA_IMPROVEMENT_FOR_DRAMC_ACTIVE_POWER
#define PA_IMPROVEMENT_FOR_DRAMC_ACTIVE_POWER 0

#undef ENABLE_RX_TRACKING_LP4
#define ENABLE_RX_TRACKING_LP4  0

#undef HW_GATING
#undef DUMMY_READ_FOR_TRACKING
#undef SPM_CONTROL_AFTERK
#undef TEMP_SENSOR_ENABLE
#undef ENABLE_SW_RUN_TIME_ZQ_WA
#define ENABLE_SW_RUN_TIME_ZQ_WA 0
#endif /* #ifdef FIRST_BRING_UP */

//=============================================================================
// for D Sim sumulation used
//=============================================================================
#if SW_CHANGE_FOR_SIMULATION
#define SIMULATION_GATING 0
#define SIMULATION_DATLAT 0
#define SIMULATION_SW_IMPED 0
#define SIMULATION_RX_PERBIT    0
#define SIMULATION_TX_PERBIT    0  // Please enable with write leveling
#else /* #if SW_CHANGE_FOR_SIMULATION */
#define SIMULATION_GATING 1
#define SIMULATION_DATLAT 1
#define SIMULATION_SW_IMPED 1
#define SIMULATION_RX_PERBIT    1
#define SIMULATION_TX_PERBIT    1  // Please enable with write leveling
#endif /* #if SW_CHANGE_FOR_SIMULATION */

#define DV_SIMULATION_RUN_TIME_MRW 0

#if (!PRINT_CALIBRATION_SUMMARY)
#define vSetCalibrationResult(x,y,z)
#endif /* #if (!PRINT_CALIBRATION_SUMMARY) */

//#define DDR_INIT_TIME_PROFILING
#define DDR_INIT_TIME_PROFILING_TEST_CNT 100

#ifdef DDR_INIT_TIME_PROFILING
extern U16 u2TimeProfileCnt;
#endif /* #ifdef DDR_INIT_TIME_PROFILING */

//======================== ETT Definition =====================================
#if __ETT__
//#define TEST_MODE_MRS
#define VENDER_JV_LOG 0
#define ENABLE_MPLL_SSC 1 // only for Everest ETT
#else /* #if __ETT__ */
#define ENABLE_MPLL_SSC 0 // not for android. never enable.
#endif /* #if __ETT__ */

#if SW_CHANGE_FOR_SIMULATION
#define VENDER_JV_LOG 0
#undef HW_GATING
#undef DUMMY_READ_FOR_TRACKING
#undef SPM_CONTROL_AFTERK
#undef TEMP_SENSOR_ENABLE
#endif /* #if SW_CHANGE_FOR_SIMULATION */
//=============================================================================

//======================== FLASH TOOL DA Definition =====================================
#if __FLASH_TOOL_DA__
#undef DUAL_FREQ_K
#define DUAL_FREQ_K   0        // If enable, need to define DDR_xxxx the same as DUAL_FREQ_HIGH
#undef SUPPORT_SAVE_TIME_FOR_CALIBRATION
#define SUPPORT_SAVE_TIME_FOR_CALIBRATION 0
#endif /* #if __FLASH_TOOL_DA__ */
//=============================================================================

//======================== RSHMOO Definition =====================================
#if RUNTIME_SHMOO_RELEATED_FUNCTION    //if enable rshmoo, close TX OE calibration
#define RUNTIME_SHMOO_TEST_CHANNEL    0   // 0: CHA, 1: CHB
#define RUNTIME_SHMOO_TEST_RANK       0   // 0: RK0, 1: RK1
#define RUNTIME_SHMOO_TEST_BYTE       0   // 0: Byte0, 1: Byte1

#define RUNTIME_SHMOO_TEST_PI_DELAY_START 0   // 0~63
#define RUNTIME_SHMOO_TEST_PI_DELAY_END   63  // 0~63
#define RUNTIME_SHMOO_TEST_PI_DELAY_STEP  1

#define RUNTIME_SHMOO_TEST_VREF_START     0   // 0~81  : 0~50 is range 0, 51~81 is range 1
#define RUNTIME_SHMOO_TEST_VREF_END       81  // 0~81  : 0~50 is range 0, 51~81 is range 1
#define RUNTIME_SHMOO_TEST_VREF_STEP      1
#endif /* #if RUNTIME_SHMOO_RELEATED_FUNCTION    //if enable rshmoo, close TX OE calibration */
//=============================================================================

//#if SW_CHANGE_FOR_SIMULATION
#if FOR_DV_SIMULATION_USED
typedef signed char         INT8;
typedef signed short        INT16;
typedef signed int          INT32;
typedef signed char         S8;
typedef signed short        S16;
typedef signed int          S32;
typedef unsigned char       U8;
typedef unsigned short      U16;
typedef unsigned int        U32;
typedef unsigned long long  U64;
typedef unsigned char       BOOL;
#define FALSE   0
#define TRUE    1

#ifndef NULL
#define NULL ((void *)0)
#endif /* #ifndef NULL */
#undef  DDR_BASE
#define DDR_BASE 0xa0000000
//#endif
//#if FOR_DV_SIMULATION_USED==1
//#define DDR_BASE 0xa0000000
typedef struct {
    unsigned long long full_sys_addr;
    unsigned int addr;
    unsigned int row;
    unsigned int col;
    unsigned char ch;
    unsigned char rk;
    unsigned char bk;
    unsigned char dummy;
} dram_addr_t;
#else /* #if FOR_DV_SIMULATION_USED */
#undef  DDR_BASE
#define DDR_BASE 0xa0000000

#endif /* #if FOR_DV_SIMULATION_USED */

#define READ_REGISTER_UINT32(reg) \
    (*(volatile U32 * const)(reg))

#define WRITE_REGISTER_UINT32(reg, val) \
    (*(volatile U32 * const)(reg)) = (val)

#ifndef __ETT__
#if (FOR_DV_SIMULATION_USED == 0)
#ifndef INREG32
#define INREG32(x)                  READ_REGISTER_UINT32((U32*)(x))
#endif /* #ifndef INREG32 */
#ifndef OUTREG32
#define OUTREG32(x, y)              WRITE_REGISTER_UINT32((U32*)(x), (U32)(y))
#endif /* #ifndef OUTREG32 */

#ifndef DRV_Reg32
#define DRV_Reg32(addr)             INREG32(addr)
#endif /* #ifndef DRV_Reg32 */
#ifndef DRV_WriteReg32
#define DRV_WriteReg32(addr, data)  OUTREG32(addr, data)
#endif /* #ifndef DRV_WriteReg32 */
#endif /* #if (FOR_DV_SIMULATION_USED == 0) */
#endif /* #ifndef __ETT__ */

/***********************************************************************/
/*              Defines                                                */
/***********************************************************************/
#define ENABLE  1
#define DISABLE 0

typedef enum {
    DRAM_OK = 0, // OK
    DRAM_FAIL,    // FAIL
} DRAM_STATUS_T; // DRAM status type

typedef enum {
    CKE_FIXOFF = 0,
    CKE_FIXON,
    CKE_DYNAMIC //After CKE FIX on/off, CKE should be returned to dynamic (control by HW)
} CKE_FIX_OPTION;

typedef enum {
    CKE_WRITE_TO_ONE_CHANNEL = 0, //just need to write CKE FIX register to current channel
    CKE_WRITE_TO_ALL_CHANNEL, //need to write CKE FIX register to all channel
    CKE_WRITE_TO_ALL_RANK
} CKE_FIX_CHANNEL;

typedef enum {
    AD_MPLL_208M_CK = 0,
    DA_MPLL_52M_DIV_CK,
    FMEM_CK_BFE_DCM_CH0,
} CLOCK_SRC_T;

typedef enum {
    DLL_MASTER = 0,
    DLL_SLAVE,
} DRAM_DLL_MODE_T;


typedef enum {
    PSRAM_2133 = 0,
    PSRAM_1600,
    PLL_FREQ_SEL_MAX
} DRAM_PLL_FREQ_SEL_T; // DRAM DFS type

typedef enum {
    DRAM_DFS_SHUFFLE_1 = 0,
    DRAM_DFS_SHUFFLE_2,
    DRAM_DFS_SHUFFLE_3,
    DRAM_DFS_SHUFFLE_MAX
} DRAM_DFS_SHUFFLE_TYPE_T; // DRAM SHUFFLE RG type


typedef struct _DRAM_DFS_FREQUENCY_TABLE_T {
    DRAM_PLL_FREQ_SEL_T freq_sel;
    U16 frequency;
    DRAM_DFS_SHUFFLE_TYPE_T shuffleIdx;
} DRAM_DFS_FREQUENCY_TABLE_T;

#if DUAL_FREQ_K
typedef struct _DRAM_DVFS_TABLE_T {
    DRAM_PLL_FREQ_SEL_T freq_sel;
    U32 u4Vcore;
} DRAM_DVFS_TABLE_T;
#endif /* #if DUAL_FREQ_K */

typedef enum {
    DRAM_CALIBRATION_ZQ = 0,
    DRAM_CALIBRATION_SW_IMPEDANCE,
    DRAM_CALIBRATION_CA_TRAIN,
    DRAM_CALIBRATION_WRITE_LEVEL,
    DRAM_CALIBRATION_GATING,
    DRAM_CALIBRATION_DATLAT,
    DRAM_CALIBRATION_RX_RDDQC,
    DRAM_CALIBRATION_RX_PERBIT,
    DRAM_CALIBRATION_TX_PERBIT,
    DRAM_CALIBRATION_MAX
} DRAM_CALIBRATION_STATUS_T;


typedef enum {
    DDRPHY_CONF_A = 0,
    DDRPHY_CONF_B,
    DDRPHY_CONF_C,
    DDRPHY_CONF_D,
    DDRPHY_CONF_MAX
} DDRPHY_CONF_T;


typedef enum {
    CHANNEL_A = 0,
    CHANNEL_B,
    CHANNEL_C,
    CHANNEL_D,
} DRAM_CHANNEL_T;

typedef enum {
    CHANNEL_SINGLE = 1,
    CHANNEL_DUAL,
    CHANNEL_THIRD,
    CHANNEL_FOURTH
} DRAM_CHANNEL_NUMBER_T;

typedef enum {
    RANK_0 = 0,
    RANK_1,
    RANK_MAX
} DRAM_RANK_T;

typedef enum {
    RANK_SINGLE = 1,
    RANK_DUAL
} DRAM_RANK_NUMBER_T;


typedef enum {
    TYPE_DDR1 = 1,
    TYPE_LPDDR2,
    TYPE_LPDDR3,
    TYPE_PCDDR3,
    TYPE_LPDDR4,
    TYPE_LPDDR4X,
    TYPE_LPDDR4P,
    TYPE_PSRAM
} DRAM_DRAM_TYPE_T;

/* For faster switching between term and un-term operation
 * FSP_0: For un-terminated freq.
 * FSP_1: For terminated freq.
 */
typedef enum {
    FSP_0 = 0,
    FSP_1,
    FSP_MAX
} DRAM_FAST_SWITH_POINT_T;

/*
 * Internal CBT mode enum
 * 1. Calibration flow uses vGet_Dram_CBT_Mode to
 *    differentiate between mixed vs non-mixed LP4
 * 2. Declared as dram_cbt_mode[RANK_MAX] internally to
 *    store each rank's CBT mode type
 */
typedef enum {
    CBT_NORMAL_MODE = 0,
    CBT_BYTE_MODE1
} DRAM_CBT_MODE_T;

/*
 * External CBT mode enum
 * Due to MDL structure compatibility (single field for dram CBT mode),
 * the below enum is used in preloader to differentiate between dram cbt modes
 */
typedef enum {
    CBT_R0_R1_NORMAL = 0,   // Normal mode
    CBT_R0_R1_BYTE,         // Byte mode
    CBT_R0_NORMAL_R1_BYTE,  // Mixed mode R0: Normal R1: Byte
    CBT_R0_BYTE_R1_NORMAL   // Mixed mode R0: Byte R1: Normal
} DRAM_CBT_MODE_EXTERN_T;

typedef enum {
    ODT_OFF = 0,
    ODT_ON
} DRAM_ODT_MODE_T;


typedef enum {
    DBI_OFF = 0,
    DBI_ON
} DRAM_DBI_MODE_T;

typedef enum {
#if PSRAM_SPEC
    DATA_WIDTH_8BIT = 8,
#endif /* #if PSRAM_SPEC */
    DATA_WIDTH_16BIT = 16,
    DATA_WIDTH_32BIT = 32
} DRAM_DATA_WIDTH_T;

typedef enum {
    GET_MDL_USED = 0,
    NORMAL_USED
} DRAM_INIT_USED_T;

// for A60501 DDR3
typedef enum {
    PCB_LOC_ASIDE = 0,
    PCB_LOC_BSIDE
} DRAM_PCB_LOC_T;

typedef enum {
    MODE_1X = 0,
    MODE_2X
} DRAM_DRAM_MODE_T;

typedef enum {
    PACKAGE_SBS = 0,
    PACKAGE_POP
} DRAM_PACKAGE_T;

typedef enum {
    TE_OP_WRITE_READ_CHECK = 0,
    TE_OP_READ_CHECK
} DRAM_TE_OP_T;

typedef enum {
    TEST_ISI_PATTERN = 0, //don't change
    TEST_AUDIO_PATTERN = 1, //don't change
    TEST_XTALK_PATTERN = 2, //don't change
    TEST_TA1_SIMPLE,
    TEST_TESTPAT4,
    TEST_TESTPAT4_3,
    TEST_MIX_PATTERN,
    TEST_DMA,
} DRAM_TEST_PATTERN_T;

typedef enum {
    BL_TYPE_4 = 0,
    BL_TYPE_8
} DRAM_BL_TYPE_T;

typedef enum {
    DLINE_0 = 0,
    DLINE_1,
    DLINE_TOGGLE
} PLL_PHASE_CAL_STATUS_T;

typedef enum {
    TA43_OP_STOP,
    TA43_OP_CLEAR,
    TA43_OP_RUN,
    TA43_OP_RUNQUIET,
    TA43_OP_UNKNOWN,
} DRAM_TA43_OP_TYPE_T;

// used for record last test pattern in TA
typedef enum {
    TA_PATTERN_IDLE,
    TA_PATTERN_TA43,
    TA_PATTERN_TA4,
    TA_PATTERN_UNKNOWM,
} DRAM_TA_PATTERN_T;


typedef enum {
    DMA_PREPARE_DATA_ONLY,
    DMA_CHECK_DATA_ACCESS_ONLY_AND_NO_WAIT,
    DMA_CHECK_COMAPRE_RESULT_ONLY,
    DMA_CHECK_DATA_ACCESS_AND_COMPARE,
} DRAM_DMA_CHECK_RESULT_T;


typedef enum {
    fcDATLAT_USE_DEFAULT = 0,
    fcDATLAT_USE_RX_SCAN,
    //fcDATLAT_USE_TXRX_SCAN
} DRAM_DATLAT_CALIBRATION_TYTE_T;


typedef enum {
    TX_DQ_DQS_MOVE_DQ_ONLY = 0,
    TX_DQ_DQS_MOVE_DQM_ONLY,
    TX_DQ_DQS_MOVE_DQ_DQM
} DRAM_TX_PER_BIT_CALIBRATION_TYTE_T;

typedef enum {
    TX_DQM_WINDOW_SPEC_IN = 0xfe,
    TX_DQM_WINDOW_SPEC_OUT = 0xff
} DRAM_TX_PER_BIT_DQM_WINDOW_RESULT_TYPE_T;

typedef enum {
    TX_TRIANGLE_EYE_STATE_START = 0,
    TX_TRIANGLE_EYE_STATE_ADD_MARGIN,
    TX_TRIANGLE_EYE_STATE_RESTART,
    TX_TRIANGLE_EYE_STATE_END
} TX_TRIANGLe_EYE_TYPE_T;

typedef enum {
    HQA_REPORT_FORMAT0 = 0,
    HQA_REPORT_FORMAT0_1,
    HQA_REPORT_FORMAT0_2,
    HQA_REPORT_FORMAT1,
    HQA_REPORT_FORMAT2,
    HQA_REPORT_FORMAT3,
    HQA_REPORT_FORMAT4,
    HQA_REPORT_FORMAT5,
    HQA_REPORT_FORMAT6
}
HQA_REPORT_FORMAT_T;

typedef enum {
    VREF_RANGE_0 = 0,
    VREF_RANGE_1,
    VREF_RANGE_MAX
} DRAM_VREF_RANGE_T;
#define VREF_VOLTAGE_TABLE_NUM 51
#define VREF_VOLTAGE_TABLE_TOTAL_NUM 81

// enum for CKE toggle mode (toggle both ranks 1. at the same time (CKE_RANK_DEPENDENT) 2. individually (CKE_RANK_INDEPENDENT))
typedef enum {
    CKE_RANK_INDEPENDENT = 0,
    CKE_RANK_DEPENDENT
} CKE_CTRL_MODE_T;

typedef enum {
    DutyScan_Calibration_K_CLK = 0,
    DutyScan_Calibration_K_DQS,
    DutyScan_Calibration_K_DQ,
    DutyScan_Calibration_K_DQM
} DUTYSCAN_CALIBRATION_FLOW_K_T;

typedef enum {
    DQS_8PH_DEGREE_0 = 0,
    DQS_8PH_DEGREE_180,
    DQS_8PH_DEGREE_45,
    DQS_8PH_DEGREE_MAX,
} DQS_8_PHASE_T;

typedef enum {
    DRVP = 0,
    DRVN,
    ODTP,
    ODTN
} DRAM_IMP_DRV_T;

/* Used to keep track the total number of LP4 ACTimings */
/* Since READ_DBI is enable/disabled using preprocessor C define
 * -> Save code size by excluding unneeded ACTimingTable entries
 * Note 1: READ_DBI on/off is for (LP4 data rate >= DDR2667 (FSP1))
 * Must make sure DDR3733 is the 1st entry (DMCATRAIN_INTV is used)
 */

typedef enum {
    TA2_RKSEL_XRT = 3,
    TA2_RKSEL_HW = 4,
} TA2_RKSEL_TYPE_T;

typedef enum {
    TA2_PAT_SWITCH_OFF = 0,
    TA2_PAT_SWITCH_ON,
} TA2_PAT_SWITCH_TYPE_T;

typedef enum {
    IC_TYPE_8110,
    IC_TYPE_8512A,
    IC_TYPE_8512B,
    IC_TYPE_8512D,

    IC_TYPE_MAX
} IC_TYPE;


typedef enum {
    DRAM_PACKAGE_TYPE_EXT_LP4,
    DRAM_PACKAGE_TYPE_SIP_LP3,
    DRAM_PACKAGE_TYPE_SIP_LP4,
    DRAM_PACKAGE_TYPE_SIP_PSRAM,

    DRAM_PACKAGE_TYPE_MAX
} DRAM_PACKAGE_TYPE;


/* The unit of dram size is bit, not BYTE */
typedef enum {
    DRAM_SIZE_64Mb = 0x1,
    DRAM_SIZE_128Mb = 0x2,
    DRAM_SIZE_256Mb = 0x4,
    DRAM_SIZE_512Mb = 0x8,
    DRAM_SIZE_1Gb = 0x10,
    DRAM_SIZE_2Gb = 0x20,
    DRAM_SIZE_4Gb = 0x40,
    DRAM_SIZE_8Gb = 0x80,

    DRAM_SIZE_MAX
} DRAM_SIZE;

typedef enum {
    DRAM_VENDOR_NANYA,
    DRAM_VENDOR_WINBOND,
    DRAM_VENDOR_APMEMORY,
    DRAM_VENDOR_MICRON,
    DRAM_VENDOR_HYNIX,
    DRAM_VENDOR_SAMSUNG,

    DRAM_VENDOR_MAX
} DRAM_VENDOR;

#if SUPPORT_SAVE_TIME_FOR_CALIBRATION
#if RUNTIME_SHMOO_RELEATED_FUNCTION
typedef struct _RUNTIME_SHMOO_SAVE_PARAMETER_T {
    U8 flag;
    U16 TX_PI_delay;
    U16 TX_Original_PI_delay;
    U16 TX_DQM_PI_delay;
    U16 TX_Original_DQM_PI_delay;
    U8 TX_Vref_Range;
    U8 TX_Vref_Value;
    U8 TX_Channel;
    U8 TX_Rank;
    U8 TX_Byte;
} RUNTIME_SHMOO_SAVE_PARAMETER_T;
#endif /* #if RUNTIME_SHMOO_RELEATED_FUNCTION */

typedef struct _SAVE_TIME_FOR_CALIBRATION_T {
    //U8 femmc_Ready;

    DRAM_RANK_NUMBER_T support_rank_num;

    // Calibration or not
    //U8 Bypass_TXWINDOW;
    //U8 Bypass_RXWINDOW;
    //U8 Bypass_RDDQC;

    // delay cell time
    //U8 ucg_num_dlycell_perT_all[DRAM_DFS_SHUFFLE_MAX][CHANNEL_NUM];
    //U16 u2gdelay_cell_ps_all[DRAM_DFS_SHUFFLE_MAX][CHANNEL_NUM];
    U8 ucnum_dlycell_perT;
    U16 u2DelayCellTimex100;

    // CLK & DQS duty
    S8 s1ClockDuty_clk_delay_cell[CHANNEL_NUM][RANK_MAX];
    U8 u1clk_use_rev_bit;
    S8 s1DQSDuty_clk_delay_cell[CHANNEL_NUM][DQS_NUMBER];
    U8 u1dqs_use_rev_bit;

    // Gating
    U8 u1Gating2T_Save[CHANNEL_NUM][RANK_MAX][DQS_NUMBER];
    U8 u1Gating05T_Save[CHANNEL_NUM][RANK_MAX][DQS_NUMBER];
    U8 u1Gatingfine_tune_Save[CHANNEL_NUM][RANK_MAX][DQS_NUMBER];
    U8 u1Gatingucpass_count_Save[CHANNEL_NUM][RANK_MAX][DQS_NUMBER];

    // TX perbit
    U8 u1TxWindowPerbitVref_Save[CHANNEL_NUM][RANK_MAX];
    U16 u1TxCenter_min_Save[CHANNEL_NUM][RANK_MAX][DQS_NUMBER];
    U16 u1TxCenter_max_Save[CHANNEL_NUM][RANK_MAX][DQS_NUMBER];
    U16 u1Txwin_center_Save[CHANNEL_NUM][RANK_MAX][DQ_DATA_WIDTH_PSRAM];
    //U16 u1Txfirst_pass_Save[CHANNEL_NUM][RANK_MAX][DQ_DATA_WIDTH_LP4];
    //U16 u1Txlast_pass_Save[CHANNEL_NUM][RANK_MAX][DQ_DATA_WIDTH_LP4];
    //U8 u1TX_PerBit_DelayLine_Save[CHANNEL_NUM][RANK_MAX][DQ_DATA_WIDTH_LP4];

    // Datlat
    U8 u1RxDatlat_Save[CHANNEL_NUM][RANK_MAX];

    // RX perbit
    U8 u1RxWinPerbitVref_Save[CHANNEL_NUM];
    U8 u1RxWinPerbit_DQS[CHANNEL_NUM][RANK_MAX][DQS_NUMBER];
    U8 u1RxWinPerbit_DQM[CHANNEL_NUM][RANK_MAX][DQS_NUMBER];
    U8 u1RxWinPerbit_DQ[CHANNEL_NUM][RANK_MAX][DQ_DATA_WIDTH_PSRAM];
    //S16 u1RxWinPerbitDQ_firsbypass_Save[CHANNEL_NUM][RANK_MAX][DQ_DATA_WIDTH_LP4];  //for bypass rxwindow
    //U8 u1RxWinPerbitDQ_lastbypass_Save[CHANNEL_NUM][RANK_MAX][DQ_DATA_WIDTH_LP4];  //for bypass rxwindow
#if RUNTIME_SHMOO_RELEATED_FUNCTION
    U8 u1SwImpedanceResule[2][4];
    U32 u4TXRG_Backup[CHANNEL_NUM][RUNTIME_SHMOO_RG_BACKUP_NUM];

    RUNTIME_SHMOO_SAVE_PARAMETER_T Runtime_Shmoo_para;
#endif /* #if RUNTIME_SHMOO_RELEATED_FUNCTION */
} SAVE_TIME_FOR_CALIBRATION_T;

extern int write_offline_dram_calibration_data(DRAM_DFS_SHUFFLE_TYPE_T shuffle, SAVE_TIME_FOR_CALIBRATION_T *offLine_SaveData);
extern int read_offline_dram_calibration_data(DRAM_DFS_SHUFFLE_TYPE_T shuffle, SAVE_TIME_FOR_CALIBRATION_T *offLine_SaveData);
//3733, 3200, 2667, 2400, 2280, 1600, 800
extern U8 _MappingFreqArray[];
#endif /* #if SUPPORT_SAVE_TIME_FOR_CALIBRATION */


////////////////////////////
typedef struct _DRAMC_CTX_T {
    DRAM_CHANNEL_NUMBER_T support_channel_num;
    DRAM_CHANNEL_T channel;
    DRAM_RANK_NUMBER_T support_rank_num;
    DRAM_RANK_T rank;
    DRAM_PLL_FREQ_SEL_T freq_sel;
    DRAM_DFS_SHUFFLE_TYPE_T shu_type;
    DRAM_DRAM_TYPE_T dram_type;
    DRAM_FAST_SWITH_POINT_T dram_fsp;  // only for LP4, uesless in LP3
    DRAM_ODT_MODE_T odt_onoff;/// only for LP4, uesless in LP3
    DRAM_CBT_MODE_T dram_cbt_mode[RANK_MAX]; //only for LP4, useless in LP3
    DRAM_DBI_MODE_T DBI_R_onoff[FSP_MAX];   // only for LP4, uesless in LP3
    DRAM_DBI_MODE_T DBI_W_onoff[FSP_MAX];   // only for LP4, uesless in LP3
    DRAM_DATA_WIDTH_T data_width;
    U32 test2_1;
    U32 test2_2;
    DRAM_TEST_PATTERN_T test_pattern;
    U16 frequency;
    U16 freqGroup; /* Used to support freq's that are not in ACTimingTable */
    U16 vendor_id;
    U16 revision_id;
    U16 density;
    unsigned long long ranksize[RANK_MAX];
    U8 ucnum_dlycell_perT;
    U16 u2DelayCellTimex100;
    U8 enable_cbt_scan_vref;
    U8 enable_rx_scan_vref;
    U8 enable_tx_scan_vref;
#if PRINT_CALIBRATION_SUMMARY
    U32 aru4CalResultFlag[CHANNEL_NUM][RANK_MAX];// record the calibration is fail or success,  0:success, 1: fail
    U32 aru4CalExecuteFlag[CHANNEL_NUM][RANK_MAX]; // record the calibration is execute or not,  0:no operate, 1: done
#endif /* #if PRINT_CALIBRATION_SUMMARY */
#if WRITE_LEVELING_MOVE_DQS_INSTEAD_OF_CLK
    BOOL arfgWriteLevelingInitShif[CHANNEL_NUM][RANK_MAX];
#endif /* #if WRITE_LEVELING_MOVE_DQS_INSTEAD_OF_CLK */
#if TX_PERBIT_INIT_FLOW_CONTROL
    BOOL fgTXPerbifInit[CHANNEL_NUM][RANK_MAX];
#endif /* #if TX_PERBIT_INIT_FLOW_CONTROL */
#if SUPPORT_SAVE_TIME_FOR_CALIBRATION
    U8 femmc_Ready;
    // Calibration or not
    U8 Bypass_TXWINDOW;
    U8 Bypass_RXWINDOW;
    U8 Bypass_RDDQC;
    SAVE_TIME_FOR_CALIBRATION_T *pSavetimeData;
#endif /* #if SUPPORT_SAVE_TIME_FOR_CALIBRATION */
#if (fcFOR_CHIP_ID == fcMockingbird)
    BOOL bDLP3;
#endif /* #if (fcFOR_CHIP_ID == fcMockingbird) */
} DRAMC_CTX_T;

typedef struct _PASS_WIN_DATA_T {
    S16 first_pass;
    S16 last_pass;
    S16 win_center;
    U16 win_size;
    U16 best_dqdly;
} PASS_WIN_DATA_T;

typedef struct _DRAM_INFO_BY_MRR_T {
    U16 u2MR5VendorID;
    U16 u2MR6RevisionID;
    unsigned long long u8MR8Density[CHANNEL_NUM][RANK_MAX];
} DRAM_INFO_BY_MRR_T;

typedef struct _VCORE_DELAYCELL_T {
    U32 u2Vcore;
    U16 u2DelayCell;
} VCORE_DELAYCELL_T;

typedef struct _REG_TRANSFER {
    U32 u4Addr;
    U32 u4Fld;
} REG_TRANSFER_T;


//For new register access
#define SHIFT_TO_CHB_ADDR ((U32)CHANNEL_B<<POS_BANK_NUM)
#if fcFOR_CHIP_ID == fcMockingbird
#define DRAMC_REG_ADDR(offset)    (offset)  // reduce code size: only 1 channel
#else /* #if fcFOR_CHIP_ID == fcMockingbird */
#define DRAMC_REG_ADDR(offset)    ((p->channel << POS_BANK_NUM)+ (offset))
#endif /* #if fcFOR_CHIP_ID == fcMockingbird */

/***********************************************************************/
/*              External declarations                                  */
/***********************************************************************/
extern U8 RXPERBIT_LOG_PRINT;
extern U32 gu4TermFreq;

#if (DUMP_INIT_RG_LOG_TO_DE==1)
extern U8  gDUMP_INIT_RG_LOG_TO_DE_RG_log_flag;
#define DUMP_INIT_RG_ONOFF(x,y) do{gDUMP_INIT_RG_LOG_TO_DE_RG_log_flag = x; mcSHOW_DUMP_INIT_RG_MSG(y);}while(0)
#else /* #if (DUMP_INIT_RG_LOG_TO_DE==1) */
#define DUMP_INIT_RG_ONOFF(x,y)
#endif /* #if (DUMP_INIT_RG_LOG_TO_DE==1) */


/***********************************************************************/
/*              Public Functions                                       */
/***********************************************************************/
// basic function
//DRAM_IC_VERSION_T u1GetICVersion_Bianco(void);
#if (FOR_DV_SIMULATION_USED == 1)
void DPI_SW_main_PSRAM(DRAMC_CTX_T *DramConfig);
#endif /* #if (FOR_DV_SIMULATION_USED == 1) */

void DramcRunTimeConfig(DRAMC_CTX_T *p);
void TransferToSPMControl(DRAMC_CTX_T *p);
/* RxDQSIsiPulseCG() - API for "RX DQS ISI pulse CG function" 0: disable, 1: enable */
void RxDQSIsiPulseCG(DRAMC_CTX_T *p, U8 u1OnOff);

void DramcDFS(DRAMC_CTX_T *p, int iDoDMA);

void PsramcHWGatingInit(DRAMC_CTX_T *p);
void PsramcHWGatingOnOff(DRAMC_CTX_T *p, U8 u1OnOff);

// reference function
//DRAM_STATUS_T DramcRankSwap(DRAMC_CTX_T *p, U8 u1Rank);

// DDR reserved mode function
extern void rgu_release_rg_dramc_conf_iso(void);
extern void rgu_release_rg_dramc_iso(void);
extern void rgu_release_rg_dramc_sref(void);
extern int rgu_is_reserve_ddr_enabled(void);
extern int rgu_is_reserve_ddr_mode_success(void);
extern int rgu_is_dram_slf(void);
int Init_DRAM(DRAM_DRAM_TYPE_T dram_type, DRAM_CBT_MODE_EXTERN_T dram_cbt_mode_extern, DRAM_INFO_BY_MRR_T *DramInfo, U8 get_mdl_used);
U8 get_shuffleIndex_by_Freq(DRAMC_CTX_T *p);

void Before_Init_DRAM_While_Reserve_Mode_fail(DRAM_DRAM_TYPE_T dram_type);
void Dramc_DDR_Reserved_Mode_AfterSR(void);
void Dramc_DDR_Reserved_Mode_setting(void);
void check_ddr_reserve_status(void);
void DramcBackupRegisters(DRAMC_CTX_T *p, U32 *backup_addr, U32 backup_num);
unsigned int dramc_set_vcore_voltage(unsigned int vcore);
unsigned int dramc_set_vddq_voltage(unsigned int ddr_type, unsigned int vddq);

unsigned int dramc_get_vdd1_voltage(void);
unsigned int dramc_get_vcore_voltage(void);
unsigned int dramc_get_vdd2_voltage(unsigned int ddr_type);
unsigned int dramc_get_vddq_voltage(unsigned int ddr_type);
void DramcDumpDebugInfo(DRAMC_CTX_T *p);
void vPSRAM_AutoRefreshSwitch(DRAMC_CTX_T *p, U8 option);
void DramcRestoreRegisters(DRAMC_CTX_T *p, U32 *restore_addr, U32 restore_num);
void vPrintCalibrationResult(DRAMC_CTX_T *p);
#if ENABLE_MIOCK_JMETER
DRAM_STATUS_T PSramcMiockJmeter(DRAMC_CTX_T *p);
void PRE_MIOCK_JMETER_HQA_USED(DRAMC_CTX_T *p);
#endif /* #if ENABLE_MIOCK_JMETER */
U8 Get_PRE_MIOCK_JMETER_HQA_USED_flag(void);
void Psram_Global_Option_Init2(DRAMC_CTX_T *p);
void dump_ddrphy_reg(void);
void dump_psramc_reg(void);
void vPsramcInit_PreSettings(DRAMC_CTX_T *p);
void PsramPhyFreqSel(DRAMC_CTX_T *p, DRAM_PLL_FREQ_SEL_T sel);
void PSramcInitSetting(DRAMC_CTX_T *p);
void vApplyPsramConfigAfterCalibration(DRAMC_CTX_T *p);
void EnablePsramcPhyDCM(DRAMC_CTX_T *p, BOOL bEn);//Should refer to "vSetChannelNumber"
DRAM_STATUS_T PSramcEngine2Init(DRAMC_CTX_T *p, U32 u4Base, U32 u4Offset, U8 testaudpat, U8 log2loopcount);
U32 PSramcEngine2Run(DRAMC_CTX_T *p, DRAM_TE_OP_T wr, U8 testaudpat);
void PSramcEngine2End(DRAMC_CTX_T *p);
void PSramcEngine2SetPat(DRAMC_CTX_T *p, U8 testaudpat, U8 log2loopcount, U8 Use_Len1_Flag);
void PSramc_TA2_Test_Run_Time_HW_Presetting(DRAMC_CTX_T *p, U32 len);
void PSramc_TA2_Test_Run_Time_Pat_Setting(DRAMC_CTX_T *p, U8 PatSwitch);
void PSramc_TA2_Test_Run_Time_HW_Write(DRAMC_CTX_T *p, U8 u1Enable);
void PSramc_TA2_Test_Run_Time_HW_Status(DRAMC_CTX_T *p);
void PSramc_TA2_Test_Run_Time_HW(DRAMC_CTX_T *p);
void PsramcModeRegRead(DRAMC_CTX_T *p, U8 u1MRIdx, U8 *u1Value);
void PsramcModeRegWrite(DRAMC_CTX_T *p, U8 u1MRIdx, U8 u1Value);
void vApplyPsramConfigBeforeCalibration(DRAMC_CTX_T *p);
void PsramRxInputTrackingSetting(DRAMC_CTX_T *p);
DRAM_STATUS_T PSramcRxdqsGatingCal(DRAMC_CTX_T *p);
DRAM_STATUS_T PSramcTxWindowPerbitCal(DRAMC_CTX_T *p, DRAM_TX_PER_BIT_CALIBRATION_TYTE_T calType, U8 u1VrefScanEnable);
U8 PSramcRxdatlatScan(DRAMC_CTX_T *p, DRAM_DATLAT_CALIBRATION_TYTE_T use_rxtx_scan);
DRAM_STATUS_T PSramcRxWindowPerbitCal(DRAMC_CTX_T *p, U8 u1UseTestEngine);
void PSramTXSetDelayReg_CA(DRAMC_CTX_T *p, U8 u1UpdateRegUI, U16 uica_ui_total, U16 *pca_ui_delay);
void PSramTXSetDelayReg_DQ(DRAMC_CTX_T *p, U8 u1UpdateRegUI, U8 ucdq_ui_large, U8 ucdq_oen_ui_large, U8 ucdq_ui_small, U8 ucdq_oen_ui_small, U8 ucdql_pi);
void PSramTXSetDelayReg_DQM(DRAMC_CTX_T *p, U8 u1UpdateRegUI, U8 ucdqm_ui_large, U8 ucdqm_oen_ui_large, U8 ucdqm_ui_small, U8 ucdqm_oen_ui_small, U8 ucdqm_pi);
DRAM_STATUS_T PsramcSwImpedanceCal(DRAMC_CTX_T *p, U8 u1Para, U8 term_option);
DRAM_STATUS_T Psramc8PhaseCal(DRAMC_CTX_T *p);
void CheckPsramTxPinMux(DRAMC_CTX_T *p);
void CheckPsramRxPinMux(DRAMC_CTX_T *p);//By view of DRAM in LP4

#if PRINT_CALIBRATION_SUMMARY
void vSetCalibrationResult(DRAMC_CTX_T *p, U8 ucCalType, U8 ucResult);
#endif /* #if PRINT_CALIBRATION_SUMMARY */
void DDRPhyFMeter_Init(void);
void Global_Option_Init(DRAMC_CTX_T *p);
void DDRPhyFreqSel(DRAMC_CTX_T *p, DRAM_PLL_FREQ_SEL_T sel);
void DramcUpdateImpedanceTerm2UnTerm(DRAMC_CTX_T *p);
U8 Get_MDL_Used_Flag(void);
U8 check_is_initial(void);
void set_is_initial(void);

// dump all reg for debug
#if ENABLE_DDRPHY_FREQ_METER
void DDRPhyFreqMeter(void);
#else /* #if ENABLE_DDRPHY_FREQ_METER */
#define DDRPhyFreqMeter(_x_)
#endif /* #if ENABLE_DDRPHY_FREQ_METER */
U16 DDRPhyFMeter(void);
void GetPhyPllFrequency(DRAMC_CTX_T *p);
void vSetPHY2ChannelMapping(DRAMC_CTX_T *p, U8 u1Channel);
void vSetPHY2ChannelMapping(DRAMC_CTX_T *p, U8 u1Channel);
U8 vGetPHY2ChannelMapping(DRAMC_CTX_T *p);
void vSetRank(DRAMC_CTX_T *p, U8 ucRank);
U8 u1GetRank(DRAMC_CTX_T *p);

void SPM_Pinmux_Setting(DRAMC_CTX_T *p);

/* Macro that implements ceil function for unsigned integers (Test before using!) */
// Global variables
#ifdef _WIN32
extern FILE *fp_A60501;
#endif /* #ifdef _WIN32 */

#ifdef DDR_INIT_TIME_PROFILING
void TimeProfileBegin(void);
UINT32 TimeProfileEnd(void);
#endif /* #ifdef DDR_INIT_TIME_PROFILING */

#if PINMUX_AUTO_TEST_PER_BIT_RX
extern U16 gFinalRXPerbitWinSiz[CHANNEL_NUM][DQ_DATA_WIDTH_PSRAM];
#endif /* #if PINMUX_AUTO_TEST_PER_BIT_RX */

#if PINMUX_AUTO_TEST_PER_BIT_TX
extern U16 gFinalTXPerbitFirstPass[CHANNEL_NUM][DQ_DATA_WIDTH_PSRAM];
#endif /* #if PINMUX_AUTO_TEST_PER_BIT_TX */

extern U8 u1DMAtest;
extern U8 u1MR02Value[FSP_MAX];
extern U8 u1MR12Value[CHANNEL_NUM][RANK_MAX][FSP_MAX];
extern U8 u1MR13Value;
extern U8 u1MR14Value[CHANNEL_NUM][RANK_MAX][FSP_MAX];
extern U8 u1MR01Value[FSP_MAX];
extern U8 u1MR03Value[FSP_MAX];
extern DRAM_DFS_FREQUENCY_TABLE_T gFreqTbl[DRAM_DFS_SHUFFLE_MAX];
extern DRAM_DFS_FREQUENCY_TABLE_T gFreqTbl_LP3[DRAM_DFS_SHUFFLE_MAX];
extern U8 u1PrintModeRegWrite;

#if FOR_DV_SIMULATION_USED
extern U8 u1BroadcastOnOff;
extern U8 gu1BroadcastIsLP4;
#endif /* #if FOR_DV_SIMULATION_USED */

#if MRW_CHECK_ONLY
#define MR_NUM 64
extern U16 u2MRRecord[CHANNEL_NUM][RANK_MAX][FSP_MAX][MR_NUM];
#endif /* #if MRW_CHECK_ONLY */

#if APPLY_SIGNAL_WAVEFORM_SETTINGS_ADJUST
extern S8 gDramcSwImpedanceAdjust[2][4];//ODT_ON/OFF x DRVP/DRVN/ODTP/ODTN
extern S8 gDramcDqOdtRZQAdjust;
extern S8 gDramcMR03PDDSAdjust[FSP_MAX];
extern S8 gDramcMR22SoCODTAdjust[FSP_MAX];
#endif /* #if APPLY_SIGNAL_WAVEFORM_SETTINGS_ADJUST */

extern U8 gEye_Scan_color_flag;
extern U8 gCBT_EYE_Scan_flag;
extern U8 gCBT_EYE_Scan_only_higheset_freq_flag;
extern U8 gRX_EYE_Scan_flag;
extern U8 gRX_EYE_Scan_only_higheset_freq_flag;
extern U8 gTX_EYE_Scan_flag;
extern U8 gTX_EYE_Scan_only_higheset_freq_flag;

#ifdef FOR_HQA_REPORT_USED
void HQA_Log_Message_for_Report(DRAMC_CTX_T *p, U8 u1ChannelIdx, U8 u1RankIdx, U32 who_am_I, U8 *main_str, U8 byte_bit_idx, S32 value1, U8 *ans_str);
#endif /* #ifdef FOR_HQA_REPORT_USED */
#endif /* #ifndef _PI_API_H */
