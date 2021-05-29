/*
 * TMC22XX_Fields.h
 *
 *  Created on: 28.05.2021
 *      Author: AB
 * 
 *  This file contains the pre-defined TMCField objects.
 *  These are meant to be used in conjunction with a TMCSerial, or TMCSPI object.
 */


#ifndef TMC22XX_FIELDS_H_
#define TMC22XX_FIELDS_H_

#include"TMCField.hpp"
#include"TMC22XX_Registers.h"

/* GCONF Register fields */
TMCField TMC22XX_I_SCALE_ANALOG              (_TMC22XX_GCONF, _TMC22XX_I_SCALE_ANALOG_MASK, _TMC22XX_I_SCALE_ANALOG_SHIFT);
TMCField TMC22XX_INTERNAL_RSENSE_MASK        (_TMC22XX_GCONF, _TMC22XX_INTERNAL_RSENSE_MASK, _TMC22XX_INTERNAL_RSENSE_SHIFT);
TMCField TMC22XX_EN_SPREADCYCLE              (_TMC22XX_GCONF, _TMC22XX_EN_SPREADCYCLE_MASK, _TMC22XX_EN_SPREADCYCLE_SHIFT);
TMCField TMC22XX_SHAFT                       (_TMC22XX_GCONF, _TMC22XX_SHAFT_MASK, _TMC22XX_SHAFT_SHIFT);
TMCField TMC22XX_INDEX_OTPW                  (_TMC22XX_GCONF, _TMC22XX_INDEX_OTPW_MASK, _TMC22XX_INDEX_OTPW_SHIFT);
TMCField TMC22XX_INDEX_STEP                  (_TMC22XX_GCONF, _TMC22XX_INDEX_STEP_MASK, _TMC22XX_INDEX_STEP_SHIFT);
TMCField TMC22XX_PDN_DISABLE                 (_TMC22XX_GCONF, _TMC22XX_PDN_DISABLE_MASK, _TMC22XX_PDN_DISABLE_SHIFT);
TMCField TMC22XX_MSTEP_REG_SELECT            (_TMC22XX_GCONF, _TMC22XX_MSTEP_REG_SELECT_MASK, _TMC22XX_MSTEP_REG_SELECT_SHIFT);
TMCField TMC22XX_MULTISTEP_FILT              (_TMC22XX_GCONF, _TMC22XX_MULTISTEP_FILT_MASK, _TMC22XX_MULTISTEP_FILT_SHIFT);
TMCField TMC22XX_TEST_MODE                   (_TMC22XX_GCONF, _TMC22XX_TEST_MODE_MASK, _TMC22XX_TEST_MODE_SHIFT);

/* GSTAT Register fields */
TMCField TMC22XX_RESET                       (_TMC22XX_GSTAT, _TMC22XX_RESET_MASK, _TMC22XX_RESET_SHIFT);
TMCField TMC22XX_DRV_ERR                     (_TMC22XX_GSTAT, _TMC22XX_DRV_ERR_MASK, _TMC22XX_DRV_ERR_SHIFT);
TMCField TMC22XX_UV_CP                       (_TMC22XX_GSTAT, _TMC22XX_UV_CP_MASK, _TMC22XX_UV_CP_SHIFT);

/* IFCNT Register */
TMCField TMC22XX_IFCNT                       (_TMC22XX_IFCNT, _TMC22XX_IFCNT_MASK, _TMC22XX_IFCNT_SHIFT);

/* Send Delay Register */
TMCField TMC22XX_SLAVECONF                   (_TMC22XX_SLAVECONF, _TMC22XX_SLAVECONF_MASK, _TMC22XX_SLAVECONF_SHIFT);

/* OTP PROG Register fields */
TMCField TMC22XX_OTPBIT                      (_TMC22XX_OTP_PROG, _TMC22XX_OTPBIT_MASK, _TMC22XX_OTPBIT_SHIFT);
TMCField TMC22XX_OTPBYTE                     (_TMC22XX_OTP_PROG, _TMC22XX_OTPBYTE_MASK, _TMC22XX_OTPBYTE_SHIFT);
TMCField TMC22XX_OTPMAGIC                    (_TMC22XX_OTP_PROG, _TMC22XX_OTPMAGIC_MASK, _TMC22XX_OTPMAGIC_SHIFT);

/* OTP READ Register fields */
TMCField TMC22XX_OTP0_BYTE_0_READ_DATA       (_TMC22XX_OTP_READ, _TMC22XX_OTP0_BYTE_0_READ_DATA_MASK, _TMC22XX_OTP0_BYTE_0_READ_DATA_SHIFT);
TMCField TMC22XX_OTP1_BYTE_1_READ_DATA       (_TMC22XX_OTP_READ, _TMC22XX_OTP1_BYTE_1_READ_DATA_MASK, _TMC22XX_OTP1_BYTE_1_READ_DATA_SHIFT);
TMCField TMC22XX_OTP1_BYTE_2_READ_DATA       (_TMC22XX_OTP_READ, _TMC22XX_OTP2_BYTE_2_READ_DATA_MASK, _TMC22XX_OTP2_BYTE_2_READ_DATA_SHIFT);

/* IOIN Register fields */
TMCField TMC22XX_ENN                         (_TMC22XX_IOIN, _TMC22XX_ENN_MASK, _TMC22XX_ENN_SHIFT);
TMCField TMC22XX_MS1                         (_TMC22XX_IOIN, _TMC22XX_MS1_MASK, _TMC22XX_MS1_SHIFT);
TMCField TMC22XX_MS2                         (_TMC22XX_IOIN, _TMC22XX_MS2_MASK, _TMC22XX_MS2_SHIFT);
TMCField TMC22XX_DIAG                        (_TMC22XX_IOIN, _TMC22XX_DIAG_MASK, _TMC22XX_DIAG_SHIFT);
TMCField TMC22XX_PDN_UART                    (_TMC22XX_IOIN, _TMC22XX_PDN_UART_MASK, _TMC22XX_PDN_UART_SHIFT);
TMCField TMC22XX_STEP                        (_TMC22XX_IOIN, _TMC22XX_STEP_MASK, _TMC22XX_STEP_SHIFT);
TMCField TMC22XX_SEL_A                       (_TMC22XX_IOIN, _TMC22XX_SEL_A_MASK, _TMC22XX_SEL_A_SHIFT);
TMCField TMC22XX_DIR                         (_TMC22XX_IOIN, _TMC22XX_DIR_MASK, _TMC22XX_DIR_SHIFT);
TMCField TMC22XX_VERSION                     (_TMC22XX_IOIN, _TMC22XX_VERSION_MASK, _TMC22XX_VERSION_SHIFT);

/* Factory trimming fields */
TMCField TMC22XX_FCLKTRIM                    (_TMC22XX_FACTORY_CONF, _TMC22XX_FCLKTRIM_MASK, _TMC22XX_FCLKTRIM_SHIFT);
TMCField TMC22XX_OTTRIM                      (_TMC22XX_FACTORY_CONF, _TMC22XX_OTTRIM_MASK, _TMC22XX_OTTRIM_SHIFT);

/* IHOLD IRUN Fields */
TMCField TMC22XX_IHOLD                       (_TMC22XX_IHOLD_IRUN, _TMC22XX_IHOLD_MASK, _TMC22XX_IHOLD_SHIFT);
TMCField TMC22XX_IRUN                        (_TMC22XX_IHOLD_IRUN, _TMC22XX_IRUN_MASK, _TMC22XX_IRUN_SHIFT);
TMCField TMC22XX_IHOLDDELAY                  (_TMC22XX_IHOLD_IRUN, _TMC22XX_IHOLDDELAY_MASK, _TMC22XX_IHOLDDELAY_SHIFT);

/* TPOWERDOWN Register */
TMCField TMC22XX_TPOWERDOWN                  (_TMC22XX_TPOWERDOWN, _TMC22XX_TPOWERDOWN_MASK, _TMC22XX_TPOWERDOWN_SHIFT);

/* TSTEP Register */
TMCField TMC22XX_TSTEP                       (_TMC22XX_TSTEP, _TMC22XX_STEP_MASK, _TMC22XX_TSTEP_SHIFT);

/* TPWMTHRS Register */
TMCField TMC22XX_TPWMTHRS                    (_TMC22XX_TPWMTHRS, _TMC22XX_TPWMTHRS_MASK, _TMC22XX_TPWMTHRS_SHIFT);

/* V_ACTUAL Register */
TMCField TMC22XX_VACTUAL                     (_TMC22XX_VACTUAL, _TMC22XX_VACTUAL_MASK, _TMC22XX_VACTUAL_SHIFT);

/* COOLCONF Fields */
TMCField TMC22XX_SEMIN                       (_TMC22XX_COOLCONF, _TMC22XX_SEMIN_MASK, _TMC22XX_SEMIN_SHIFT);
TMCField TMC22XX_SEUP                        (_TMC22XX_COOLCONF, _TMC22XX_SEUP_MASK, _TMC22XX_SEUP_SHIFT);
TMCField TMC22XX_SEMAX                       (_TMC22XX_COOLCONF, _TMC22XX_SEMAX_MASK, _TMC22XX_SEMAX_SHIFT);
TMCField TMC22XX_SEDN                        (_TMC22XX_COOLCONF, _TMC22XX_SEDN_MASK, _TMC22XX_SEDN_SHIFT);
TMCField TMC22XX_SEIMIN                      (_TMC22XX_COOLCONF, _TMC22XX_SEIMIN_MASK, _TMC22XX_SEIMIN_SHIFT);

/* Sequencer Register Fields (MSCNT, MSCURACT)*/
TMCField TMC22XX_MSCNT                       (_TMC22XX_MSCNT, _TMC22XX_MSCNT_MASK, _TMC22XX_MSCNT_SHIFT);
TMCField TMC22XX_CUR_A                       (_TMC22XX_MSCURACT, _TMC22XX_CUR_A_MASK, _TMC22XX_CUR_A_SHIFT);
TMCField TMC22XX_CUR_B                       (_TMC22XX_MSCURACT, _TMC22XX_CUR_B_MASK, _TMC22XX_CUR_B_SHIFT);

/* Chopper Control Fields */
TMCField TMC22XX_DISS2G                      (_TMC22XX_CHOPCONF, _TMC22XX_DISS2G_MASK, _TMC22XX_DISS2G_SHIFT);
TMCField TMC22XX_DISS2VS                     (_TMC22XX_CHOPCONF, _TMC22XX_DISS2VS_MASK, _TMC22XX_DISS2VS_SHIFT);
TMCField TMC22XX_INTPOL                      (_TMC22XX_CHOPCONF, _TMC22XX_INTPOL_MASK, _TMC22XX_INTPOL_SHIFT);
TMCField TMC22XX_DEDGE                       (_TMC22XX_CHOPCONF, _TMC22XX_DEDGE_MASK, _TMC22XX_DEDGE_SHIFT);
TMCField TMC22XX_MRES                        (_TMC22XX_CHOPCONF, _TMC22XX_MRES_MASK, _TMC22XX_MRES_SHIFT);
TMCField TMC22XX_VSENSE                      (_TMC22XX_CHOPCONF, _TMC22XX_VSENSE_MASK, _TMC22XX_VSENSE_SHIFT);
TMCField TMC22XX_TBL                         (_TMC22XX_CHOPCONF, _TMC22XX_TBL_MASK, _TMC22XX_TBL_SHIFT);
TMCField TMC22XX_HEND                        (_TMC22XX_CHOPCONF, _TMC22XX_HEND_MASK, _TMC22XX_HEND_SHIFT);
TMCField TMC22XX_HSTRT                       (_TMC22XX_CHOPCONF, _TMC22XX_HSTRT_MASK, _TMC22XX_HSTRT_SHIFT);
TMCField TMC22XX_TOFF                        (_TMC22XX_CHOPCONF, _TMC22XX_TOFF_MASK, _TMC22XX_TOFF_SHIFT);

/* Driver Status Fields */
TMCField TMC22XX_STST                        (_TMC22XX_DRVSTATUS, _TMC22XX_STST_MASK, _TMC22XX_STST_SHIFT);
TMCField TMC22XX_STEALTH                     (_TMC22XX_DRVSTATUS, _TMC22XX_STEALTH_MASK, _TMC22XX_STEALTH_SHIFT);
TMCField TMC22XX_CS_ACTUAL                   (_TMC22XX_DRVSTATUS, _TMC22XX_CS_ACTUAL_MASK, _TMC22XX_CS_ACTUAL_SHIFT);
TMCField TMC22XX_T120                        (_TMC22XX_DRVSTATUS, _TMC22XX_T120_MASK, _TMC22XX_T120_SHIFT);
TMCField TMC22XX_T143                        (_TMC22XX_DRVSTATUS, _TMC22XX_T143_MASK, _TMC22XX_T143_SHIFT);
TMCField TMC22XX_T150                        (_TMC22XX_DRVSTATUS, _TMC22XX_T150_MASK, _TMC22XX_T150_SHIFT);
TMCField TMC22XX_T157                        (_TMC22XX_DRVSTATUS, _TMC22XX_T157_MASK, _TMC22XX_T157_SHIFT);
TMCField TMC22XX_OLA                         (_TMC22XX_DRVSTATUS, _TMC22XX_OLA_MASK, _TMC22XX_OLA_SHIFT);
TMCField TMC22XX_OLB                         (_TMC22XX_DRVSTATUS, _TMC22XX_OLB_MASK, _TMC22XX_OLB_SHIFT);
TMCField TMC22XX_S2VSA                       (_TMC22XX_DRVSTATUS, _TMC22XX_S2VSA_MASK, _TMC22XX_S2VSA_SHIFT);
TMCField TMC22XX_S2VSB                       (_TMC22XX_DRVSTATUS, _TMC22XX_S2VSB_MASK, _TMC22XX_S2VSB_SHIFT);
TMCField TMC22XX_S2GA                        (_TMC22XX_DRVSTATUS, _TMC22XX_S2GA_MASK, _TMC22XX_S2GA_SHIFT);
TMCField TMC22XX_S2GB                        (_TMC22XX_DRVSTATUS, _TMC22XX_S2GB_MASK, _TMC22XX_S2GB_SHIFT);
TMCField TMC22XX_OTPW                        (_TMC22XX_DRVSTATUS, _TMC22XX_OTPW_MASK, _TMC22XX_OTPW_SHIFT);
TMCField TMC22XX_OT                          (_TMC22XX_DRVSTATUS, _TMC22XX_OT_MASK, _TMC22XX_OT_SHIFT);

/* PWM Configuration fields */
TMCField TMC22XX_PWM_OFS                     (_TMC22XX_PWMCONF, _TMC22XX_PWM_OFS_MASK, _TMC22XX_PWM_OFS_SHIFT);
TMCField TMC22XX_PWM_GRAD                    (_TMC22XX_PWMCONF, _TMC22XX_PWM_GRAD_MASK, _TMC22XX_PWM_GRAD_SHIFT);
TMCField TMC22XX_PWM_FREQ                    (_TMC22XX_PWMCONF, _TMC22XX_PWM_FREQ_MASK, _TMC22XX_PWM_FREQ_SHIFT);
TMCField TMC22XX_PWM_AUTOSCALE               (_TMC22XX_PWMCONF, _TMC22XX_PWM_AUTOSCALE_MASK, _TMC22XX_PWM_AUTOSCALE_SHIFT);
TMCField TMC22XX_PWM_AUTOGRAD                (_TMC22XX_PWMCONF, _TMC22XX_PWM_AUTOGRAD_MASK, _TMC22XX_PWM_AUTOGRAD_SHIFT);
TMCField TMC22XX_FREEWHEEL                   (_TMC22XX_PWMCONF, _TMC22XX_FREEWHEEL_MASK, _TMC22XX_FREEWHEEL_SHIFT);
TMCField TMC22XX_PWM_REG                     (_TMC22XX_PWMCONF, _TMC22XX_PWM_REG_MASK, _TMC22XX_PWM_REG_SHIFT);
TMCField TMC22XX_PWM_LIM                     (_TMC22XX_PWMCONF, _TMC22XX_PWM_LIM_MASK, _TMC22XX_PWM_LIM_SHIFT);
TMCField TMC22XX_PWM_SCALE_SUM               (_TMC22XX_PWMCONF, _TMC22XX_PWM_SCALE_SUM_MASK, _TMC22XX_PWM_SCALE_SUM_SHIFT);
TMCField TMC22XX_PWM_SCALE_AUTO              (_TMC22XX_PWMCONF, _TMC22XX_PWM_SCALE_AUTO_MASK, _TMC22XX_PWM_SCALE_AUTO_SHIFT);
TMCField TMC22XX_PWM_OFS_AUTO                (_TMC22XX_PWMCONF, _TMC22XX_PWM_OFS_AUTO_MASK, _TMC22XX_PWM_OFS_AUTO_SHIFT);
TMCField TMC22XX_PWM_GRAD_AUTO               (_TMC22XX_PWMCONF, _TMC22XX_PWM_GRAD_AUTO_MASK, _TMC22XX_PWM_GRAD_AUTO_SHIFT);

#endif /* TMC22XX_FIELDS_H_ */