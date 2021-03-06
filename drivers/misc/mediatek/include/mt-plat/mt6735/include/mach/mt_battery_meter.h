/*
 * Copyright (C) 2015 MediaTek Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#ifndef _CUST_BATTERY_METER_H
#define _CUST_BATTERY_METER_H


#if defined(CONFIG_MACH_MT6735)
/* ============================================================
// define
// ============================================================*/
/*#define SOC_BY_AUXADC*/
#define SOC_BY_HW_FG
/*#define HW_FG_FORCE_USE_SW_OCV*/
/*#define SOC_BY_SW_FG*/

/*
//#define CONFIG_DIS_CHECK_BATTERY
//#define FIXED_TBAT_25
*/

#if defined(CONFIG_MTK_BQ24196_SUPPORT) \
	|| defined(CONFIG_MTK_BQ24296_SUPPORT) \
	|| defined(CONFIG_MTK_BQ24261_SUPPORT)
#define SWCHR_POWER_PATH
#define EXTERNAL_SWCHR_SUPPORT
#define DISABLE_RFG_EXIST_CHECK
#endif

/* ADC resistor  */
#define R_BAT_SENSE 4
#define R_I_SENSE 4
#define R_CHARGER_1 330
#define R_CHARGER_2 39

#define TEMPERATURE_T0 110
#define TEMPERATURE_T1 0
#define TEMPERATURE_T2 25
#define TEMPERATURE_T3 50
#define TEMPERATURE_T 255 /* This should be fixed, never change the value*/

#define FG_METER_RESISTANCE 0

/* Qmax for battery  */
#define Q_MAX_POS_50 1463
#define Q_MAX_POS_25 1437
#define Q_MAX_POS_0 1220
#define Q_MAX_NEG_10 1137

#define Q_MAX_POS_50_H_CURRENT 1511
#define Q_MAX_POS_25_H_CURRENT 1462
#define Q_MAX_POS_0_H_CURRENT 818
#define Q_MAX_NEG_10_H_CURRENT 149


/* Discharge Percentage */
#define OAM_D5		 1		/*  1 : D5,   0: D2*/


/* battery meter parameter */
#define CHANGE_TRACKING_POINT
#ifdef CONFIG_MTK_HAFG_20
#define CUST_TRACKING_POINT  0
#else
#define CUST_TRACKING_POINT  1
#endif
#define CUST_R_SENSE 68
#define CUST_HW_CC 0
#define AGING_TUNING_VALUE 103
#define CUST_R_FG_OFFSET 0

#define OCV_BOARD_COMPESATE	0 /*mV */
#define R_FG_BOARD_BASE 1000
#define R_FG_BOARD_SLOPE 1000 /*slope*/
#if defined(CONFIG_FIH_PROJECT_FRT) || defined(CONFIG_FIH_PROJECT_NE1)
#define CAR_TUNE_VALUE 100 /*1.00*/
#else
#define CAR_TUNE_VALUE 86 /*1.00*/
#endif


/* HW Fuel gague  */
#define CURRENT_DETECT_R_FG 10  /*1mA*/
#define MinErrorOffset 1000
#define FG_VBAT_AVERAGE_SIZE 18
#define R_FG_VALUE 10 /* mOhm, base is 20*/

/* fg 2.0 */
#define DIFFERENCE_HWOCV_RTC		30
#define DIFFERENCE_HWOCV_SWOCV		10
#define DIFFERENCE_SWOCV_RTC		10
#define MAX_SWOCV			3

#define DIFFERENCE_VOLTAGE_UPDATE	20
#define AGING1_LOAD_SOC			70
#define AGING1_UPDATE_SOC		30
#define BATTERYPSEUDO100		95
#define BATTERYPSEUDO1			4

/* #define Q_MAX_BY_SYS */
#define Q_MAX_SYS_VOLTAGE		3300
#if !defined(CONFIG_FIH_PSE_TEST)
#define SHUTDOWN_GAUGE0
#define SHUTDOWN_GAUGE1_XMINS
#endif
#define SHUTDOWN_GAUGE1_MINS		60

#define SHUTDOWN_SYSTEM_VOLTAGE		3400
#define CHARGE_TRACKING_TIME		60
#define DISCHARGE_TRACKING_TIME		10

#define RECHARGE_TOLERANCE		10
/* SW Fuel Gauge */
#define MAX_HWOCV			5
#define MAX_VBAT			90
#define DIFFERENCE_HWOCV_VBAT		30

/* fg 1.0 */
#define CUST_POWERON_DELTA_CAPACITY_TOLRANCE	40
#define CUST_POWERON_LOW_CAPACITY_TOLRANCE		5
#define CUST_POWERON_MAX_VBAT_TOLRANCE			90
#define CUST_POWERON_DELTA_VBAT_TOLRANCE		30
#define CUST_POWERON_DELTA_HW_SW_OCV_CAPACITY_TOLRANCE	10


/* Disable Battery check for HQA */
#ifdef CONFIG_MTK_DISABLE_POWER_ON_OFF_VOLTAGE_LIMITATION
#define FIXED_TBAT_25
#endif

/* Dynamic change wake up period of battery thread when suspend*/
#define VBAT_NORMAL_WAKEUP		3600
#define VBAT_LOW_POWER_WAKEUP		3500
#define NORMAL_WAKEUP_PERIOD		5400
#define LOW_POWER_WAKEUP_PERIOD		300
#define CLOSE_POWEROFF_WAKEUP_PERIOD	30

#define INIT_SOC_BY_SW_SOC
/*
//#define SYNC_UI_SOC_IMM			//3. UI SOC sync to FG SOC immediately
*/
#define MTK_ENABLE_AGING_ALGORITHM	/*6. Q_MAX aging algorithm*/
#define MD_SLEEP_CURRENT_CHECK	/*5. Gauge Adjust by OCV 9. MD sleep current check*/
/*
//#define Q_MAX_BY_CURRENT		//7. Qmax variant by current loading.
*/
#define FG_BAT_INT
#define IS_BATTERY_REMOVE_BY_PMIC

#elif defined(CONFIG_MACH_MT6735M)
/* ============================================================
// define
// ============================================================*/
/*#define SOC_BY_AUXADC*/
#define SOC_BY_HW_FG
/*#define HW_FG_FORCE_USE_SW_OCV*/
/*#define SOC_BY_SW_FG*/

/*
//#define CONFIG_DIS_CHECK_BATTERY
//#define FIXED_TBAT_25
*/

#if defined(CONFIG_MTK_BQ24196_SUPPORT) \
	|| defined(CONFIG_MTK_BQ24296_SUPPORT) \
	|| defined(CONFIG_MTK_BQ24261_SUPPORT)
#define SWCHR_POWER_PATH
#define EXTERNAL_SWCHR_SUPPORT
#define DISABLE_RFG_EXIST_CHECK
#endif

/* ADC resistor  */
#define R_BAT_SENSE 4
#define R_I_SENSE 4
#define R_CHARGER_1 330
#define R_CHARGER_2 39

#define TEMPERATURE_T0 110
#define TEMPERATURE_T1 0
#define TEMPERATURE_T2 25
#define TEMPERATURE_T3 50
#define TEMPERATURE_T 255 /* This should be fixed, never change the value*/

#if defined(CONFIG_FIH_PROJECT_FRT)
#define FG_METER_RESISTANCE 90
#else
#define FG_METER_RESISTANCE 0
#endif

/* Qmax for battery  */
#if defined(CONFIG_FIH_PROJECT_FRT)
#define Q_MAX_POS_50 2202
#define Q_MAX_POS_25 2180
#define Q_MAX_POS_0 2098
#define Q_MAX_NEG_10 1943

#define Q_MAX_POS_50_H_CURRENT 2095
#define Q_MAX_POS_25_H_CURRENT 2161
#define Q_MAX_POS_0_H_CURRENT 1917
#define Q_MAX_NEG_10_H_CURRENT 1137
#elif defined(CONFIG_FIH_PROJECT_NE1)
//these should change,when ZCV of NE1's battery come.
#define Q_MAX_POS_50 2568
#define Q_MAX_POS_25 2554
#define Q_MAX_POS_0 1780
#define Q_MAX_NEG_10 632

#define Q_MAX_POS_50_H_CURRENT 2517
#define Q_MAX_POS_25_H_CURRENT 2503
#define Q_MAX_POS_0_H_CURRENT 1690
#define Q_MAX_NEG_10_H_CURRENT 619
#else
#define Q_MAX_POS_50 1463
#define Q_MAX_POS_25 1437
#define Q_MAX_POS_0 1220
#define Q_MAX_NEG_10 1137

#define Q_MAX_POS_50_H_CURRENT 1511
#define Q_MAX_POS_25_H_CURRENT 1462
#define Q_MAX_POS_0_H_CURRENT 818
#define Q_MAX_NEG_10_H_CURRENT 149
#endif


/* Discharge Percentage */
#define OAM_D5		 1		/*  1 : D5,   0: D2*/


/* battery meter parameter */
#define CHANGE_TRACKING_POINT
#ifdef CONFIG_MTK_HAFG_20
#define CUST_TRACKING_POINT  0
#else
#define CUST_TRACKING_POINT  1
#endif
#if defined(CONFIG_FIH_PROJECT_FRT) || defined(CONFIG_FIH_PROJECT_NE1)
//modify for E1 project Rsense = 56mR.
#define CUST_R_SENSE 56
#else
#define CUST_R_SENSE 68
#endif
#define CUST_HW_CC 0
#define AGING_TUNING_VALUE 103
#define CUST_R_FG_OFFSET 0

#define OCV_BOARD_COMPESATE	0 /*mV */
#define R_FG_BOARD_BASE 1000
#define R_FG_BOARD_SLOPE 1000 /*slope*/
#if defined(CONFIG_FIH_PROJECT_FRT)
#define CAR_TUNE_VALUE 100 /*1.00*/
#else
#define CAR_TUNE_VALUE 101 /*1.00*/
#endif


/* HW Fuel gague  */
#define CURRENT_DETECT_R_FG 10  /*1mA*/
#define MinErrorOffset 1000
#define FG_VBAT_AVERAGE_SIZE 18
#define R_FG_VALUE 10 /* mOhm, base is 20*/

/* fg 2.0 */
#if defined(CONFIG_FIH_PROJECT_NE1)
#define DIFFERENCE_HWOCV_RTC		65	/*30 ->65*/
#else
#define DIFFERENCE_HWOCV_RTC		30
#endif
#if defined(CONFIG_FIH_PROJECT_FRT)
#define DIFFERENCE_HWOCV_SWOCV		15
#else
#define DIFFERENCE_HWOCV_SWOCV		10
#endif
#if defined(CONFIG_FIH_PROJECT_FRT)
#define DIFFERENCE_HWOCV_SWOCV_CHR	5
#endif
#define DIFFERENCE_SWOCV_RTC		10
#if defined(CONFIG_FIH_PROJECT_NE1)
#define MAX_SWOCV			1	/*5 -> 1*/
#else
#define MAX_SWOCV			3
#endif

#define DIFFERENCE_VOLTAGE_UPDATE	20
#define AGING1_LOAD_SOC			70
#define AGING1_UPDATE_SOC		30
#if defined(CONFIG_FIH_PROJECT_NE1)
#define BATTERYPSEUDO100		100	//95->100.
#define BATTERYPSEUDO1			2
#else
#define BATTERYPSEUDO100		95
#define BATTERYPSEUDO1			4
#endif

/* #define Q_MAX_BY_SYS */
#if defined(CONFIG_FIH_PROJECT_NE1)
#define Q_MAX_SYS_VOLTAGE		3350
#else
#define Q_MAX_SYS_VOLTAGE		3300
#endif


#define SHUTDOWN_GAUGE0
#define SHUTDOWN_GAUGE1_XMINS
#define SHUTDOWN_GAUGE1_MINS		60

#define SHUTDOWN_SYSTEM_VOLTAGE		3400
#define CHARGE_TRACKING_TIME		60
#define DISCHARGE_TRACKING_TIME		10
#if defined(CONFIG_FIH_PROJECT_NE1)
//[ALPS03167162] GM2.0 patch.
#define SHUTDOWN_GAUGE0_VOLTAGE		3400
#endif

#define RECHARGE_TOLERANCE		10
#if defined(CONFIG_FIH_PROJECT_NE1)
//[ALPS03167162] GM2.0 patch.
#define BAT_FULL_CHK_THR		60
#endif

/* SW Fuel Gauge */
#define MAX_HWOCV			5
#define MAX_VBAT			90
#define DIFFERENCE_HWOCV_VBAT		30

/* fg 1.0 */
#define CUST_POWERON_DELTA_CAPACITY_TOLRANCE	40
#define CUST_POWERON_LOW_CAPACITY_TOLRANCE		5
#define CUST_POWERON_MAX_VBAT_TOLRANCE			90
#define CUST_POWERON_DELTA_VBAT_TOLRANCE		30
#if defined(CONFIG_FIH_PROJECT_NE1)
#define CUST_POWERON_DELTA_VBAT_INDEX           15	//Add for RTC Vbat
#endif
#if defined(CONFIG_FIH_PROJECT_NE1)
//modify by D0 (10 -> 25).
#define CUST_POWERON_DELTA_HW_SW_OCV_CAPACITY_TOLRANCE	25
#else
#define CUST_POWERON_DELTA_HW_SW_OCV_CAPACITY_TOLRANCE	10
#endif


/* Disable Battery check for HQA */
#ifdef CONFIG_MTK_DISABLE_POWER_ON_OFF_VOLTAGE_LIMITATION
#define FIXED_TBAT_25
#endif

/* Dynamic change wake up period of battery thread when suspend*/
#define VBAT_NORMAL_WAKEUP		3600
#define VBAT_LOW_POWER_WAKEUP		3500
#define NORMAL_WAKEUP_PERIOD		5400
#define LOW_POWER_WAKEUP_PERIOD		300
#define CLOSE_POWEROFF_WAKEUP_PERIOD	30

#define INIT_SOC_BY_SW_SOC
/*
//#define SYNC_UI_SOC_IMM			//3. UI SOC sync to FG SOC immediately
*/
#define MTK_ENABLE_AGING_ALGORITHM	/*6. Q_MAX aging algorithm*/
#define MD_SLEEP_CURRENT_CHECK	/*5. Gauge Adjust by OCV 9. MD sleep current check*/
/*
//#define Q_MAX_BY_CURRENT		//7. Qmax variant by current loading.
*/
#define FG_BAT_INT
#define IS_BATTERY_REMOVE_BY_PMIC


#if defined(CONFIG_FIH_PROJECT_FRT)
//add for NTC
#define NTC_TABLE_SIZE      (131)
#define NTC_MAX_TEMP        (91)
#define NTC_MIN_TEMP        (-40)
#define NO_NTC_TEMP         (-128)

//BAT_ID
#define BATTERY_ID_CHECK
//#define MTK_GET_BATTERY_ID_BY_AUXADC
//#define TOTAL_BATTERY_NUMBER	2
//Beck: add MULTI bat
#define MTK_MULTI_BAT_PROFILE_SUPPORT
#elif defined(CONFIG_FIH_PROJECT_NE1)
//add for NTC
#define NTC_TABLE_SIZE      (20)    // 20
#define NTC_MAX_TEMP        (70)    // 70
#define NTC_MIN_TEMP        (-30)   //-30
#define NO_NTC_TEMP         (-128)

//add for E1 maby need second battery.
#define MTK_MULTI_BAT_PROFILE_SUPPORT
//BAT_ID
#define BATTERY_ID_CHECK
#define MTK_GET_BATTERY_ID_BY_AUXADC
//#define TOTAL_BATTERY_NUMBER	1
#endif

#elif defined(CONFIG_MACH_MT6753)
/* ============================================================
// define
// ============================================================*/
/*#define SOC_BY_AUXADC*/
#define SOC_BY_HW_FG
/*#define HW_FG_FORCE_USE_SW_OCV*/
/*#define SOC_BY_SW_FG*/

/*
//#define CONFIG_DIS_CHECK_BATTERY
//#define FIXED_TBAT_25
*/

#if defined(CONFIG_MTK_BQ24196_SUPPORT) \
	|| defined(CONFIG_MTK_BQ24296_SUPPORT) \
	|| defined(CONFIG_MTK_BQ24261_SUPPORT)
#define SWCHR_POWER_PATH
#define EXTERNAL_SWCHR_SUPPORT
#define DISABLE_RFG_EXIST_CHECK
#endif

/* ADC resistor  */
#define R_BAT_SENSE 4
#define R_I_SENSE 4
#define R_CHARGER_1 330
#define R_CHARGER_2 39

#define TEMPERATURE_T0 110
#define TEMPERATURE_T1 0
#define TEMPERATURE_T2 25
#define TEMPERATURE_T3 50
#define TEMPERATURE_T 255 /* This should be fixed, never change the value*/

#define FG_METER_RESISTANCE 0

/* Qmax for battery  */
#define Q_MAX_POS_50 1463
#define Q_MAX_POS_25 1437
#define Q_MAX_POS_0 1220
#define Q_MAX_NEG_10 1137

#define Q_MAX_POS_50_H_CURRENT 1511
#define Q_MAX_POS_25_H_CURRENT 1462
#define Q_MAX_POS_0_H_CURRENT 818
#define Q_MAX_NEG_10_H_CURRENT 149


/* Discharge Percentage */
#define OAM_D5		 1		/*  1 : D5,   0: D2*/


/* battery meter parameter */
#define CHANGE_TRACKING_POINT
#ifdef CONFIG_MTK_HAFG_20
#define CUST_TRACKING_POINT  0
#else
#define CUST_TRACKING_POINT  1
#endif
#define CUST_R_SENSE 68
#define CUST_HW_CC 0
#define AGING_TUNING_VALUE 103
#define CUST_R_FG_OFFSET 0

#define OCV_BOARD_COMPESATE	0 /*mV */
#define R_FG_BOARD_BASE 1000
#define R_FG_BOARD_SLOPE 1000 /*slope*/
#define CAR_TUNE_VALUE 100 /*1.00*/


/* HW Fuel gague  */
#define CURRENT_DETECT_R_FG 10  /*1mA*/
#define MinErrorOffset 1000
#define FG_VBAT_AVERAGE_SIZE 18
#define R_FG_VALUE 10 /* mOhm, base is 20*/

/* fg 2.0 */
#define DIFFERENCE_HWOCV_RTC		30
#define DIFFERENCE_HWOCV_SWOCV		10
#define DIFFERENCE_SWOCV_RTC		10
#define MAX_SWOCV			3

#define DIFFERENCE_VOLTAGE_UPDATE	20
#define AGING1_LOAD_SOC			70
#define AGING1_UPDATE_SOC		30
#define BATTERYPSEUDO100		95
#define BATTERYPSEUDO1			4

/* #define Q_MAX_BY_SYS */
#define Q_MAX_SYS_VOLTAGE		3300
#define SHUTDOWN_GAUGE0
#define SHUTDOWN_GAUGE1_XMINS
#define SHUTDOWN_GAUGE1_MINS		60

#define SHUTDOWN_SYSTEM_VOLTAGE		3400
#define CHARGE_TRACKING_TIME		60
#define DISCHARGE_TRACKING_TIME		10

#define RECHARGE_TOLERANCE		10
/* SW Fuel Gauge */
#define MAX_HWOCV			5
#define MAX_VBAT			90
#define DIFFERENCE_HWOCV_VBAT		30

/* fg 1.0 */
#define CUST_POWERON_DELTA_CAPACITY_TOLRANCE	40
#define CUST_POWERON_LOW_CAPACITY_TOLRANCE		5
#define CUST_POWERON_MAX_VBAT_TOLRANCE			90
#define CUST_POWERON_DELTA_VBAT_TOLRANCE		30
#define CUST_POWERON_DELTA_HW_SW_OCV_CAPACITY_TOLRANCE	10


/* Disable Battery check for HQA */
#ifdef CONFIG_MTK_DISABLE_POWER_ON_OFF_VOLTAGE_LIMITATION
#define FIXED_TBAT_25
#endif

/* Dynamic change wake up period of battery thread when suspend*/
#define VBAT_NORMAL_WAKEUP		3600
#define VBAT_LOW_POWER_WAKEUP		3500
#define NORMAL_WAKEUP_PERIOD		5400
#define LOW_POWER_WAKEUP_PERIOD		300
#define CLOSE_POWEROFF_WAKEUP_PERIOD	30

#define INIT_SOC_BY_SW_SOC
/*
//#define SYNC_UI_SOC_IMM			//3. UI SOC sync to FG SOC immediately
*/
#define MTK_ENABLE_AGING_ALGORITHM	/*6. Q_MAX aging algorithm*/
#define MD_SLEEP_CURRENT_CHECK	/*5. Gauge Adjust by OCV 9. MD sleep current check*/
/*
//#define Q_MAX_BY_CURRENT		//7. Qmax variant by current loading.
*/
#define FG_BAT_INT
#define IS_BATTERY_REMOVE_BY_PMIC
/* #define USE_EMBEDDED_BATTERY */

/* Multi battery */
/* #define MTK_MULTI_BAT_PROFILE_SUPPORT */
#endif

#endif	/*#ifndef _CUST_BATTERY_METER_H*/
