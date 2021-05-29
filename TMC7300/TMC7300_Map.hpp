/*
 * TMC7300_Fields.h
 *
 *  Created on: 10.05.2021
 *      Author: AB
 * 
 *  This file contains the pre-defined TMCField objects.
 *  These are meant to be used in conjunction with a TMCSerial, or TMCSPI object.
 */


#ifndef TMC7300_FIELDS_H_
#define TMC7300_FIELDS_H_

#include"TMCField.hpp"
#include"TMC7300_Registers.h"

/* GCONF Register fields */
TMCField TMC7300_EXTCAP         (_TMC7300_GCONF, _TMC7300_EXTCAP_MASK, _TMC7300_EXTCAP_SHIFT);
TMCField TMC7300_PAR_MODE       (_TMC7300_GCONF, _TMC7300_PAR_MODE_MASK, _TMC7300_PAR_MODE_SHIFT);

/* GSTAT Register fields */
TMCField TMC7300_RESET          (_TMC7300_GSTAT, _TMC7300_RESET_MASK, _TMC7300_RESET_SHIFT);
TMCField TMC7300_DRV_ERR        (_TMC7300_GSTAT, _TMC7300_DRV_ERR_MASK, _TMC7300_DRV_ERR_SHIFT);
TMCField TMC7300_U3V5           (_TMC7300_GSTAT, _TMC7300_U3V5_MASK, _TMC7300_U3V5_SHIFT);

/* IFCNT Register */
TMCField TMC7300_IFCNT          (_TMC7300_IFCNT, _TMC7300_IFCNT_MASK, _TMC7300_IFCNT_SHIFT);

/* Send Delay register */
TMCField TMC7300_SLAVECONF      (_TMC7300_SLAVECONF, _TMC7300_SLAVECONF_MASK, _TMC7300_SLAVECONF_SHIFT);

/* IOIN Register fields */
TMCField TMC7300_EN             (_TMC7300_IOIN, _TMC7300_EN_MASK, _TMC7300_EN_SHIFT);
TMCField TMC7300_NSTDBY         (_TMC7300_IOIN, _TMC7300_NSTDBY_MASK, _TMC7300_NSTDBY_SHIFT);
TMCField TMC7300_AD0            (_TMC7300_IOIN, _TMC7300_AD0_MASK, _TMC7300_AD0_SHIFT);
TMCField TMC7300_AD1            (_TMC7300_IOIN, _TMC7300_AD1_MASK, _TMC7300_AD1_SHIFT);
TMCField TMC7300_DIAG           (_TMC7300_IOIN, _TMC7300_DIAG_MASK, _TMC7300_DIAG_SHIFT);
TMCField TMC7300_UART_ENABLED   (_TMC7300_IOIN, _TMC7300_UART_ENABLED_MASK, _TMC7300_UART_ENABLED_SHIFT);
TMCField TMC7300_UART_INPUT     (_TMC7300_IOIN, _TMC7300_UART_INPUT_MASK, _TMC7300_UART_INPUT_SHIFT);
TMCField TMC7300_MODE_INPUT     (_TMC7300_IOIN, _TMC7300_MODE_INPUT_MASK, _TMC7300_MODE_INPUT_SHIFT);
TMCField TMC7300_A2             (_TMC7300_IOIN, _TMC7300_A2_MASK, _TMC7300_A2_SHIFT);
TMCField TMC7300_A1             (_TMC7300_IOIN, _TMC7300_A1_MASK, _TMC7300_A1_SHIFT);
TMCField TMC7300_COMP_A1A2      (_TMC7300_IOIN, _TMC7300_COMP_A1A2_MASK, _TMC7300_COMP_A1A2_SHIFT);
TMCField TMC7300_COMP_B1B2      (_TMC7300_IOIN, _TMC7300_COMP_B1B2_MASK, _TMC7300_COMP_B1B2_SHIFT);
TMCField TMC7300_VERSION        (_TMC7300_IOIN, _TMC7300_VERSION_MASK, _TMC7300_VERSION_SHIFT);

/* CURRENT_LIMIT Register fields */
TMCField TMC7300_MOTORRUN       (_TMC7300_CURRENT_LIMIT, _TMC7300_MOTORRUN_MASK, _TMC7300_MOTORRUN_SHIFT);
TMCField TMC7300_IRUN_MASK      (_TMC7300_CURRENT_LIMIT, _TMC7300_IRUN_MASK, _TMC7300_IRUN_SHIFT);

/* PWM_AB Register fields */
TMCField TMC7300_PWM_A          (_TMC7300_PWM_AB, _TMC7300_PWM_A_MASK, _TMC7300_PWM_A_SHIFT);
TMCField TMC7300_PWM_B          (_TMC7300_PWM_AB, _TMC7300_PWM_B_MASK, _TMC7300_PWM_B_SHIFT);

/* CHOPCONF Register fields */
TMCField TMC7300_DISS2VS        (_TMC7300_CHOPCONF, _TMC7300_DISS2VS_MASK, _TMC7300_DISS2VS_SHIFT);
TMCField TMC7300_DISS2G         (_TMC7300_CHOPCONF, _TMC7300_DISS2G_MASK, _TMC7300_DISS2G_SHIFT);
TMCField TMC7300_TBL            (_TMC7300_CHOPCONF, _TMC7300_TBL_MASK, _TMC7300_TBL_SHIFT);
TMCField TMC7300_ENABLEDRV      (_TMC7300_CHOPCONF, _TMC7300_ENABLEDRV_MASK, _TMC7300_ENABLEDRV_SHIFT);

/* PWMCONF Register fields */
TMCField TMC7300_FREEWHEEL      (_TMC7300_PWMCONF, _TMC7300_FREEWHEEL_MASK, _TMC7300_FREEWHEEL_SHIFT);
TMCField TMC7300_PWM_FREQ       (_TMC7300_PWMCONF, _TMC7300_PWM_FREQ_MASK, _TMC7300_PWM_FREQ_SHIFT);

/* DRVSTATUS Register Fields */
TMCField TMC7300_T150           (_TMC7300_DRVSTATUS, _TMC7300_T150_MASK, _TMC7300_T150_SHIFT);
TMCField TMC7300_T120           (_TMC7300_DRVSTATUS, _TMC7300_T120_MASK, _TMC7300_T120_SHIFT);
TMCField TMC7300_OLB            (_TMC7300_DRVSTATUS, _TMC7300_OLB_MASK, _TMC7300_OLB_SHIFT);
TMCField TMC7300_OLA            (_TMC7300_DRVSTATUS, _TMC7300_OLA_MASK, _TMC7300_OLA_SHIFT);
TMCField TMC7300_S2VSB          (_TMC7300_DRVSTATUS, _TMC7300_S2VSB_MASK, _TMC7300_S2VSB_SHIFT);
TMCField TMC7300_S2VSA          (_TMC7300_DRVSTATUS, _TMC7300_S2VSA_MASK, _TMC7300_S2VSA_SHIFT);
TMCField TMC7300_S2GB           (_TMC7300_DRVSTATUS, _TMC7300_S2GB_MASK, _TMC7300_S2GB_SHIFT);
TMCField TMC7300_S2GA           (_TMC7300_DRVSTATUS, _TMC7300_S2GA_MASK, _TMC7300_S2GA_SHIFT);
TMCField TMC7300_OT             (_TMC7300_DRVSTATUS, _TMC7300_OT_MASK, _TMC7300_OT_SHIFT);
TMCField TMC7300_OTPW           (_TMC7300_DRVSTATUS, _TMC7300_OTPW_MASK, _TMC7300_OTPW_SHIFT);

#endif /* TMC7300_FIELDS_H_ */