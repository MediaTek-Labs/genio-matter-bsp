//
//  DRAMC_COMMON.H
//

#ifndef _DRAMC_COMMON_H_
#define _DRAMC_COMMON_H_
#include "PSRAMC.h"
#include "PSRAMC_NAO.h"
#include "dramc_register.h"
#include "DDRPHY_NAO_Regs.h"
#include "DDRPHY_Regs.h"
#include "dramc_pi_api.h"
#ifndef __ETT__
#if (FOR_DV_SIMULATION_USED==0)
//#include <platform/mtk_timer.h>
//#include <debug.h>
#endif /* #if (FOR_DV_SIMULATION_USED==0) */
#endif /* #ifndef __ETT__ */

#if __ETT__
#include <common.h>
#endif /* #if __ETT__ */

#include "hal.h"
#include "hal_log.h"
#include <stdio.h>

/***********************************************************************/
/*                  Public Types                                       */
/***********************************************************************/
#if SW_CHANGE_FOR_SIMULATION || __FLASH_TOOL_DA__
typedef signed char     INT8;
typedef signed short    INT16;
typedef signed int      INT32;
typedef signed char     S8;
typedef signed short    S16;
typedef signed int      S32;
typedef unsigned char       U8;
typedef unsigned short      U16;
typedef unsigned int        U32;
typedef unsigned char       BOOL;
#define FALSE   0
#define TRUE    1
#endif /* #if SW_CHANGE_FOR_SIMULATION || __FLASH_TOOL_DA__ */
/*------------------------------------------------------------*/
/*                  macros, defines, typedefs, enums          */
/*------------------------------------------------------------*/
/************************** Common Macro *********************/
#if __ETT__
#if ((!defined(_WIN32)) && (FOR_DV_SIMULATION_USED==0) && (SW_CHANGE_FOR_SIMULATION==0))
#else /* #if ((!defined(_WIN32)) && (FOR_DV_SIMULATION_USED==0) && (SW_CHANGE_FOR_SIMULATION==0)) */
//#undef dsb
//#define dsb()
#endif /* #if ((!defined(_WIN32)) && (FOR_DV_SIMULATION_USED==0) && (SW_CHANGE_FOR_SIMULATION==0)) */
#else /* #if __ETT__ */
#if (FOR_DV_SIMULATION_USED==0)
#define dsb()   __asm__ __volatile__ ("dsb" : : : "memory")
#else /* #if (FOR_DV_SIMULATION_USED==0) */
#define dsb()
#endif /* #if (FOR_DV_SIMULATION_USED==0) */
#endif /* #if __ETT__ */

// K2?? : The following needs to be porting.
// choose a proper mcDELAY
#if __ETT__
#if (DUMP_INIT_RG_LOG_TO_DE==1)
#define mcDELAY_US(x)       {if (gDUMP_INIT_RG_LOG_TO_DE_RG_log_flag) mcSHOW_DUMP_INIT_RG_MSG("GPT_Delay_us(%d);\n",x); GPT_Delay_us((U32) (x));}
#define mcDELAY_MS(x)       {if (gDUMP_INIT_RG_LOG_TO_DE_RG_log_flag) mcSHOW_DUMP_INIT_RG_MSG("GPT_Delay_ms(%d);\n",x); GPT_Delay_ms((U32) (x));}
#elif (FOR_DV_SIMULATION_USED==0)
#define mcDELAY_US(x)       GPT_Delay_us((U32) (x))
#define mcDELAY_MS(x)       GPT_Delay_ms((U32) (x))
#else /* #if (DUMP_INIT_RG_LOG_TO_DE==1) */
#define mcDELAY_US(x)       GPT_Delay_us((U32) (1))
#define mcDELAY_MS(x)       GPT_Delay_ms((U32) (1))
#endif /* #if (DUMP_INIT_RG_LOG_TO_DE==1) */
#else /* #if __ETT__ */
//====
#if __FLASH_TOOL_DA__
#define mcDELAY_US(x)       gpt4_busy_wait_us(x)
#define mcDELAY_MS(x)       gpt4_busy_wait_us(x*1000)
#elif (FOR_DV_SIMULATION_USED==1)
#define mcDELAY_US(x)       delay_us(1)
#define mcDELAY_MS(x)       delay_us(1)
#elif (SW_CHANGE_FOR_SIMULATION==1)
#define mcDELAY_US(x)       *MDM_TM_WAIT_US = x; while (*MDM_TM_WAIT_US>0);
#define mcDELAY_MS(x)       *MDM_TM_WAIT_US = x; while (*MDM_TM_WAIT_US>0);
#elif (DUMP_INIT_RG_LOG_TO_DE==1)
#define mcDELAY_US(x)       {if (gDUMP_INIT_RG_LOG_TO_DE_RG_log_flag) mcSHOW_DUMP_INIT_RG_MSG("hal_gpt_delay_us(%d);\n",x); hal_gpt_delay_us((U32) (x));}
#define mcDELAY_MS(x)       {if (gDUMP_INIT_RG_LOG_TO_DE_RG_log_flag) mcSHOW_DUMP_INIT_RG_MSG("hal_gpt_delay_ms(%d);\n",x); hal_gpt_delay_ms((U32) (x));}
#else /* #if __FLASH_TOOL_DA__ */
#define mcDELAY_US(x)       hal_gpt_delay_us(x)
#define mcDELAY_MS(x)       hal_gpt_delay_ms(x)
#endif /* #if __FLASH_TOOL_DA__ */
#endif /* #if __ETT__ */

/**********************************************/
/* Priority of debug log                      */
/*--------------------------------------------*/
/* mcSHOW_DBG_MSG: High                       */
/* mcSHOW_DBG_MSG2: Medium High               */
/* mcSHOW_DBG_MSG3: Medium Low                */
/* mcSHOW_DBG_MSG4: Low                       */
/**********************************************/
#if __FLASH_TOOL_DA__
#define printf LOGD
#define print LOGD
#elif defined(RELEASE)
#if !__ETT__
//#undef printf
//#define printf
//#undef print
//#define print
#endif /* #if !__ETT__ */
#endif /* #if __FLASH_TOOL_DA__ */

#if __ETT__
#if defined(DDR_INIT_TIME_PROFILING)
#define mcSHOW_DBG_MSG(_x_)
#define mcSHOW_DBG_MSG2(_x_)
#define mcSHOW_DBG_MSG3(_x_)
#define mcSHOW_DBG_MSG4(_x_)
#define mcSHOW_JV_LOG_MSG(_x_)
#define mcSHOW_EYESCAN_MSG(_x_)
#define mcSHOW_TIME_MSG(_x_)   {opt_print _x_;}
#define mcSHOW_ERR_MSG(_x_)
#elif defined(RELEASE)
#define mcSHOW_DBG_MSG(_x_, ...)   //{mcDELAY_US(10);opt_print(_x_, ##__VA_ARGS__);}
#define mcSHOW_DBG_MSG2(_x_, ...)  //{mcDELAY_US(10); opt_print(_x_, ##__VA_ARGS__);}
#define mcSHOW_DBG_MSG3(_x_, ...)  //{mcDELAY_US(10); opt_print(_x_, ##__VA_ARGS__);}
#define mcSHOW_DBG_MSG4(_x_, ...)  //{mcDELAY_US(10); opt_print(_x_, ##__VA_ARGS__);}
#define mcSHOW_JV_LOG_MSG(_x_, ...)
#define mcSHOW_EYESCAN_MSG(_x_, ...) {if (gEye_Scan_color_flag) {mcDELAY_US(200);}; opt_print(_x_, ##__VA_ARGS__);}
#define mcSHOW_TIME_MSG(_x_, ...)
#define mcSHOW_ERR_MSG(_x_, ...)   {printf("\033[1;31m%s[%d]: ", __FUNCTION__,__LINE__); opt_print(_x_, ##__VA_ARGS__); printf("\033[0m");}
#elif VENDER_JV_LOG
#define mcSHOW_DBG_MSG(_x_)
#define mcSHOW_DBG_MSG2(_x_)
#define mcSHOW_DBG_MSG3(_x_)
#define mcSHOW_DBG_MSG4(_x_)
#define mcSHOW_JV_LOG_MSG(_x_)    {opt_print _x_;}   //mcSHOW_JV_LOG_MSG(_x_) is for vendor JV
#define mcSHOW_EYESCAN_MSG(_x_) {opt_print _x_;}   //mcSHOW_JV_LOG_MSG(_x_) is for vendor JV
#define mcSHOW_TIME_MSG(_x_)
#define mcSHOW_ERR_MSG(_x_)
#elif FOR_DV_SIMULATION_USED
#define mcSHOW_DBG_MSG(_x_)   {printf _x_;}
#define mcSHOW_DBG_MSG2(_x_)  {printf _x_;}
#define mcSHOW_DBG_MSG3(_x_)  {printf _x_;}
//#define mcSHOW_DBG_MSG4(_x_)  if (RXPERBIT_LOG_PRINT) {printf _x_;}
#define mcSHOW_DBG_MSG4(_x_)  {printf _x_;}
#define mcSHOW_JV_LOG_MSG(_x_)
#define mcSHOW_TIME_MSG(_x_)
#define mcSHOW_EYESCAN_MSG(_x_)
#define mcSHOW_ERR_MSG(_x_)   {printf _x_;}
#elif SW_CHANGE_FOR_SIMULATION
#define mcSHOW_DBG_MSG(_x_)
#define mcSHOW_DBG_MSG2(_x_)
#define mcSHOW_DBG_MSG3(_x_)
#define mcSHOW_DBG_MSG4(_x_)
#define mcSHOW_JV_LOG_MSG(_x_)
#define mcSHOW_EYESCAN_MSG(_x_)
#define mcSHOW_TIME_MSG(_x_)
#define mcSHOW_ERR_MSG(_x_)
#elif DUMP_INIT_RG_LOG_TO_DE
#define mcSHOW_DBG_MSG(_x_)
#define mcSHOW_DBG_MSG2(_x_)
#define mcSHOW_DBG_MSG3(_x_)
#define mcSHOW_DBG_MSG4(_x_)
#define mcSHOW_JV_LOG_MSG(_x_)
#define mcSHOW_DUMP_INIT_RG_MSG(_x_) opt_print _x_;
#define mcSHOW_EYESCAN_MSG(_x_)
#define mcSHOW_TIME_MSG(_x_)
#define mcSHOW_ERR_MSG(_x_)
#elif MRW_CHECK_ONLY
#define mcSHOW_DBG_MSG(_x_)
#define mcSHOW_DBG_MSG2(_x_)
#define mcSHOW_DBG_MSG3(_x_)
#define mcSHOW_DBG_MSG4(_x_)
#define mcSHOW_JV_LOG_MSG(_x_)
#define mcSHOW_MRW_MSG(_x_)    {printf _x_;}
#define mcSHOW_EYESCAN_MSG(_x_)
#define mcSHOW_TIME_MSG(_x_)
#define mcSHOW_ERR_MSG(_x_)
#else /* #if defined(DDR_INIT_TIME_PROFILING) */
#define mcSHOW_DBG_MSG(_x_, ...)   {mcDELAY_US(10);opt_print(_x_, ##__VA_ARGS__);}
#define mcSHOW_DBG_MSG2(_x_, ...)  {mcDELAY_US(10); opt_print(_x_, ##__VA_ARGS__);}
#define mcSHOW_DBG_MSG3(_x_, ...)
#define mcSHOW_DBG_MSG4(_x_, ...)
#define mcSHOW_JV_LOG_MSG(_x_, ...)
#define mcSHOW_EYESCAN_MSG(_x_, ...) {if (gEye_Scan_color_flag) {mcDELAY_US(200);}; opt_print(_x_, ##__VA_ARGS__);}
#define mcSHOW_TIME_MSG(_x_, ...)
#define mcSHOW_ERR_MSG(_x_, ...)   {printf("\033[1;31m%s[%d]: ", __FUNCTION__,__LINE__); opt_print(_x_, ##__VA_ARGS__); printf("\033[0m");}
#endif /* #if defined(DDR_INIT_TIME_PROFILING) */

#else /* #if __ETT__ */
#if defined(DDR_INIT_TIME_PROFILING)
#define mcSHOW_DBG_MSG(_x_)
#define mcSHOW_DBG_MSG2(_x_)
#define mcSHOW_DBG_MSG3(_x_)
#define mcSHOW_DBG_MSG4(_x_)
#define mcSHOW_JV_LOG_MSG(_x_)
#define mcSHOW_EYESCAN_MSG(_x_)
#define mcSHOW_TIME_MSG(_x_)   {print _x_;}
#define mcSHOW_ERR_MSG(_x_)
#elif(TARGET_BUILD_VARIANT_ENG) //&& !defined(MTK_EFUSE_WRITER_SUPPORT) && !CFG_TEE_SUPPORT && !MTK_EMMC_SUPPORT
#define mcSHOW_DBG_MSG(_x_)   {print _x_;}
#define mcSHOW_DBG_MSG2(_x_)  {print _x_;}
#define mcSHOW_DBG_MSG3(_x_)
#define mcSHOW_DBG_MSG4(_x_)
#define mcSHOW_JV_LOG_MSG(_x_)
#define mcSHOW_EYESCAN_MSG(_x_)
#define mcSHOW_TIME_MSG(_x_)
#define mcSHOW_ERR_MSG(_x_)   {print _x_;}
#elif FOR_DV_SIMULATION_USED
#define mcSHOW_DBG_MSG(_x_, ...)     {printf(_x_, ##__VA_ARGS__);}
#define mcSHOW_DBG_MSG2(_x_, ...)    {printf(_x_, ##__VA_ARGS__);}
#define mcSHOW_DBG_MSG3(_x_, ...)    {printf(_x_, ##__VA_ARGS__);}
#define mcSHOW_DBG_MSG4(_x_, ...)
#define mcSHOW_JV_LOG_MSG(_x_, ...)
#define mcSHOW_EYESCAN_MSG(_x_, ...) {if (gEye_Scan_color_flag) {mcDELAY_US(200);}; printf(_x_, ##__VA_ARGS__);}
#define mcSHOW_TIME_MSG(_x_, ...)
#define mcSHOW_ERR_MSG(_x_, ...)     {printf("\033[1;31m%s[%d]: ", __FUNCTION__,__LINE__); printf(_x_, ##__VA_ARGS__); printf("\033[0m");}
#elif DUMP_INIT_RG_LOG_TO_DE
#define mcSHOW_DBG_MSG(_x_,...)
#define mcSHOW_DBG_MSG2(_x_,...)
#define mcSHOW_DBG_MSG3(_x_,...)
#define mcSHOW_DBG_MSG4(_x_,...)
#define mcSHOW_JV_LOG_MSG(_x_,...)
#define mcSHOW_EYESCAN_MSG(_x_,...)
#define mcSHOW_TIME_MSG(_x_,...)
#define mcSHOW_ERR_MSG(_x_,...)
#define mcSHOW_DUMP_INIT_RG_MSG(_x_,...)    {printf(_x_, ##__VA_ARGS__);}
#elif DUMP_REG
#define mcSHOW_DBG_MSG(_x_,...)         {mcDELAY_MS(1); printf(_x_, ##__VA_ARGS__);}
#define mcSHOW_DBG_MSG2(_x_,...)        {mcDELAY_MS(1); printf(_x_, ##__VA_ARGS__);}
#define mcSHOW_DBG_MSG3(_x_,...)        {mcDELAY_MS(1); printf(_x_, ##__VA_ARGS__);}
#define mcSHOW_DBG_MSG4(_x_,...)        {mcDELAY_MS(1); printf(_x_, ##__VA_ARGS__);}
#define mcSHOW_JV_LOG_MSG(_x_,...)      {mcDELAY_MS(1); printf(_x_, ##__VA_ARGS__);}
#define mcSHOW_EYESCAN_MSG(_x_,...)     {mcDELAY_MS(1); printf(_x_, ##__VA_ARGS__);}
#define mcSHOW_TIME_MSG(_x_,...)        {mcDELAY_MS(1); printf(_x_, ##__VA_ARGS__);}
#define mcSHOW_ERR_MSG(_x_,...)         {mcDELAY_MS(1); printf(_x_, ##__VA_ARGS__);}
#define mcSHOW_CHECK_RG(_x_,...)        {mcDELAY_MS(10); printf(_x_, ##__VA_ARGS__);}
#else /* #if defined(DDR_INIT_TIME_PROFILING) */
#define mcSHOW_DBG_MSG(_x_,...)         {if (psram_log_enable) {log_hal_info(_x_, ##__VA_ARGS__);}}
#define mcSHOW_DBG_MSG2(_x_,...)        {if (psram_log_enable) {log_hal_info(_x_, ##__VA_ARGS__);}}
#define mcSHOW_DBG_MSG3(_x_,...)        {if (psram_log_enable) {log_hal_info(_x_, ##__VA_ARGS__);}}
#define mcSHOW_DBG_MSG4(_x_,...)        {if (psram_log_enable) {log_hal_info(_x_, ##__VA_ARGS__);}}
#define mcSHOW_JV_LOG_MSG(_x_,...)      {if (psram_log_enable) {log_hal_info(_x_, ##__VA_ARGS__);}}
#define mcSHOW_EYESCAN_MSG(_x_,...)     {if (psram_log_enable) {log_hal_info(_x_, ##__VA_ARGS__);}}
#define mcSHOW_TIME_MSG(_x_,...)        {if (psram_log_enable) {log_hal_info(_x_, ##__VA_ARGS__);}}
#define mcSHOW_ERR_MSG(_x_,...)         {if (psram_log_enable) {log_hal_error(_x_, ##__VA_ARGS__);}}
#endif /* #if defined(DDR_INIT_TIME_PROFILING) */
#endif /* #if __ETT__ */

#define mcFPRINTF(_x_, fmt, ...)
//#define mcFPRINTF(_x_)          fprintf _x_;

#define USE_PMIC_CHIP_MT6358  1

extern int dump_log;
extern int psram_log_enable;
extern void Psram_FT(DRAMC_CTX_T *p);
#endif /* #ifndef _DRAMC_COMMON_H_ */
