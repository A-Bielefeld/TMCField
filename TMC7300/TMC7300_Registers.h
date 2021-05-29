/*
 * TMC7300_Registers.h
 *
 *  Created on: 22.11.2019
 *      Author: LH
 * 
 *  Taken from : https://github.com/trinamic/TMC-API
 * 
 *  This file contains the raw defines for every address, mask, shift
 *  combination to access the TMC7300 registers.
 * 
 *  See TMC7300_Fields.h for the pre-defined TMCField objects.
 */

#ifndef TMC7300_REGISTERS_H
#define TMC7300_REGISTERS_H

/* General Configuration Registers */
#define _TMC7300_GCONF          0x00
#define _TMC7300_GSTAT          0x01
#define _TMC7300_IFCNT          0x02
#define _TMC7300_SLAVECONF      0x03
#define _TMC7300_IOIN           0x06

/* Motor Control Registers */
#define _TMC7300_CURRENT_LIMIT  0x10
#define _TMC7300_PWM_AB         0x22

/* Chopper Configuration Registers */
#define _TMC7300_CHOPCONF       0x6C
#define _TMC7300_DRVSTATUS      0x6F
#define _TMC7300_PWMCONF        0x70

/* Auto-generated field map
 * Version: 1.0.0 */
#define _TMC7300_PWM_DIRECT_MASK    0x00000001
#define _TMC7300_PWM_DIRECT_SHIFT   0
#define _TMC7300_EXTCAP_MASK        0x00000002
#define _TMC7300_EXTCAP_SHIFT       1
#define _TMC7300_PAR_MODE_MASK      0x00000004
#define _TMC7300_PAR_MODE_SHIFT     2
#define _TMC7300_TEST_MODE_MASK     0x00000080
#define _TMC7300_TEST_MODE_SHIFT    7
#define _TMC7300_RESET_MASK         0x00000001
#define _TMC7300_RESET_SHIFT        0
#define _TMC7300_DRV_ERR_MASK       0x00000002
#define _TMC7300_DRV_ERR_SHIFT      1
#define _TMC7300_U3V5_MASK          0x00000004
#define _TMC7300_U3V5_SHIFT         2
#define _TMC7300_IFCNT_MASK         0x000000FF
#define _TMC7300_IFCNT_SHIFT        0
#define _TMC7300_SLAVECONF_MASK     0x00000F00
#define _TMC7300_SLAVECONF_SHIFT    8
#define _TMC7300_EN_MASK            0x00000001
#define _TMC7300_EN_SHIFT           0
#define _TMC7300_NSTDBY_MASK        0x00000002
#define _TMC7300_NSTDBY_SHIFT       1
#define _TMC7300_AD0_MASK           0x00000004
#define _TMC7300_AD0_SHIFT          2
#define _TMC7300_AD1_MASK           0x00000008
#define _TMC7300_AD1_SHIFT          3
#define _TMC7300_DIAG_MASK          0x00000010
#define _TMC7300_DIAG_SHIFT         4
#define _TMC7300_UART_ENABLED_MASK  0x00000020
#define _TMC7300_UART_ENABLED_SHIFT 5
#define _TMC7300_UART_INPUT_MASK    0x00000040
#define _TMC7300_UART_INPUT_SHIFT   6
#define _TMC7300_MODE_INPUT_MASK    0x00000080
#define _TMC7300_MODE_INPUT_SHIFT   7
#define _TMC7300_A2_MASK            0x00000100
#define _TMC7300_A2_SHIFT           8
#define _TMC7300_A1_MASK            0x00000200
#define _TMC7300_A1_SHIFT           9
#define _TMC7300_COMP_A1A2_MASK     0x00000400
#define _TMC7300_COMP_A1A2_SHIFT    10
#define _TMC7300_COMP_B1B2_MASK     0x00000800
#define _TMC7300_COMP_B1B2_SHIFT    11
#define _TMC7300_VERSION_MASK       0xFF000000
#define _TMC7300_VERSION_SHIFT      24
#define _TMC7300_MOTORRUN_MASK      0x00000001
#define _TMC7300_MOTORRUN_SHIFT     0
#define _TMC7300_IRUN_MASK          0x00001F00
#define _TMC7300_IRUN_SHIFT         8
#define _TMC7300_PWM_A_MASK         0x000001FF
#define _TMC7300_PWM_A_SHIFT        0
#define _TMC7300_PWM_B_MASK         0x01FF0000
#define _TMC7300_PWM_B_SHIFT        16
#define _TMC7300_ENABLEDRV_MASK     0x00000001
#define _TMC7300_ENABLEDRV_SHIFT    0
#define _TMC7300_TBL_MASK           0x00018000
#define _TMC7300_TBL_SHIFT          15
#define _TMC7300_DISS2G_MASK        0x40000000
#define _TMC7300_DISS2G_SHIFT       30
#define _TMC7300_DISS2VS_MASK       0x80000000
#define _TMC7300_DISS2VS_SHIFT      31
#define _TMC7300_OTPW_MASK          0x00000001
#define _TMC7300_OTPW_SHIFT         0
#define _TMC7300_OT_MASK            0x00000002
#define _TMC7300_OT_SHIFT           1
#define _TMC7300_S2GA_MASK          0x00000004
#define _TMC7300_S2GA_SHIFT         2
#define _TMC7300_S2GB_MASK          0x00000008
#define _TMC7300_S2GB_SHIFT         3
#define _TMC7300_S2VSA_MASK         0x00000010
#define _TMC7300_S2VSA_SHIFT        4
#define _TMC7300_S2VSB_MASK         0x00000020
#define _TMC7300_S2VSB_SHIFT        5
#define _TMC7300_OLA_MASK           0x00000040
#define _TMC7300_OLA_SHIFT          6
#define _TMC7300_OLB_MASK           0x00000080
#define _TMC7300_OLB_SHIFT          7
#define _TMC7300_T120_MASK          0x00000100
#define _TMC7300_T120_SHIFT         8
#define _TMC7300_T150_MASK          0x00000200
#define _TMC7300_T150_SHIFT         9
#define _TMC7300_PWM_FREQ_MASK      0x00030000
#define _TMC7300_PWM_FREQ_SHIFT     16
#define _TMC7300_FREEWHEEL_MASK     0x00300000
#define _TMC7300_FREEWHEEL_SHIFT    20

#endif /* TMC7300_REGISTERS_H_ */