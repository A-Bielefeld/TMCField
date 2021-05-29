/*
 * TMC2300_Registers.h
 *
 *  Created on: 18.01.2019
 *      Author: LK
 * 
 *  Taken from : https://github.com/trinamic/TMC-API
 * 
 *  This file contains the raw defines for every address, mask, shift
 *  combination to access the TMC2300 registers.
 * 
 *  See TMC2300_Fields.h for the pre-defined TMCField objects.
 */

#ifndef TMC22XX_REGISTERS_H
#define TMC22XX_REGISTERS_H

/* General configuration registers */
#define _TMC22XX_GCONF         0x00
#define _TMC22XX_GSTAT         0x01
#define _TMC22XX_IFCNT         0x02
#define _TMC22XX_SLAVECONF     0x03
#define _TMC22XX_OTP_PROG      0x04
#define _TMC22XX_OTP_READ      0x05
#define _TMC22XX_IOIN          0x06
#define _TMC22XX_FACTORY_CONF  0x07

/* Velocity dependant control */
#define _TMC22XX_IHOLD_IRUN    0x10
#define _TMC22XX_TPOWERDOWN    0x11
#define _TMC22XX_TSTEP         0x12
#define _TMC22XX_TPWMTHRS      0x13
#define _TMC22XX_VACTUAL       0x22

/* Stallguard control */
#define _TMC22XX_TCOOLTHRS     0x14
#define _TMC22XX_SGTHRS        0x40
#define _TMC22XX_SG_RESULT     0x41
#define _TMC22XX_COOLCONF      0x42

/* Sequencer registers */
#define _TMC22XX_MSCNT         0x6A
#define _TMC22XX_MSCURACT      0x6B

/* Chopper control */
#define _TMC22XX_CHOPCONF      0x6C
#define _TMC22XX_DRVSTATUS     0x6F
#define _TMC22XX_PWMCONF       0x70
#define _TMC22XX_PWMSCALE      0x71
#define _TMC22XX_PWM_AUTO      0x72

/* Auto-generated field map
 * Generated by MaskShiftConverter (unchecked) */
#define _TMC22XX_I_SCALE_ANALOG_MASK          0x00000001
#define _TMC22XX_I_SCALE_ANALOG_SHIFT         0
#define _TMC22XX_INTERNAL_RSENSE_MASK         0x00000002
#define _TMC22XX_INTERNAL_RSENSE_SHIFT        1
#define _TMC22XX_EN_SPREADCYCLE_MASK          0x00000004
#define _TMC22XX_EN_SPREADCYCLE_SHIFT         2
#define _TMC22XX_SHAFT_MASK                   0x00000008
#define _TMC22XX_SHAFT_SHIFT                  3
#define _TMC22XX_INDEX_OTPW_MASK              0x00000010
#define _TMC22XX_INDEX_OTPW_SHIFT             4
#define _TMC22XX_INDEX_STEP_MASK              0x00000020
#define _TMC22XX_INDEX_STEP_SHIFT             5
#define _TMC22XX_PDN_DISABLE_MASK             0x00000040
#define _TMC22XX_PDN_DISABLE_SHIFT            6
#define _TMC22XX_MSTEP_REG_SELECT_MASK        0x00000080
#define _TMC22XX_MSTEP_REG_SELECT_SHIFT       7
#define _TMC22XX_MULTISTEP_FILT_MASK          0x00000100
#define _TMC22XX_MULTISTEP_FILT_SHIFT         8
#define _TMC22XX_TEST_MODE_MASK               0x00000200
#define _TMC22XX_TEST_MODE_SHIFT              9
#define _TMC22XX_RESET_MASK                   0x00000001
#define _TMC22XX_RESET_SHIFT                  0
#define _TMC22XX_DRV_ERR_MASK                 0x00000002
#define _TMC22XX_DRV_ERR_SHIFT                1
#define _TMC22XX_UV_CP_MASK                   0x00000004
#define _TMC22XX_UV_CP_SHIFT                  2
#define _TMC22XX_IFCNT_MASK                   0x000000FF
#define _TMC22XX_IFCNT_SHIFT                  0
#define _TMC22XX_SLAVECONF_MASK               0x00000F00
#define _TMC22XX_SLAVECONF_SHIFT              8
#define _TMC22XX_OTPBIT_MASK                  0x00000007
#define _TMC22XX_OTPBIT_SHIFT                 0
#define _TMC22XX_OTPBYTE_MASK                 0x00000030
#define _TMC22XX_OTPBYTE_SHIFT                4
#define _TMC22XX_OTPMAGIC_MASK                0x0000FF00
#define _TMC22XX_OTPMAGIC_SHIFT               8
#define _TMC22XX_OTP0_BYTE_0_READ_DATA_MASK   0x00000001
#define _TMC22XX_OTP0_BYTE_0_READ_DATA_SHIFT  0
#define _TMC22XX_OTP1_BYTE_1_READ_DATA_MASK   0x00000002
#define _TMC22XX_OTP1_BYTE_1_READ_DATA_SHIFT  8
#define _TMC22XX_OTP2_BYTE_2_READ_DATA_MASK   0x00000004
#define _TMC22XX_OTP2_BYTE_2_READ_DATA_SHIFT  16
#define _TMC22XX_ENN_MASK                     0x00000001
#define _TMC22XX_ENN_SHIFT                    0
#define _TMC22XX_MS1_MASK                     0x00000004
#define _TMC22XX_MS1_SHIFT                    2
#define _TMC22XX_MS2_MASK                     0x00000008
#define _TMC22XX_MS2_SHIFT                    3
#define _TMC22XX_DIAG_MASK                    0x00000010
#define _TMC22XX_DIAG_SHIFT                   4
#define _TMC22XX_PDN_UART_MASK                0x00000040
#define _TMC22XX_PDN_UART_SHIFT               6
#define _TMC22XX_STEP_MASK                    0x00000080
#define _TMC22XX_STEP_SHIFT                   7
#define _TMC22XX_SEL_A_MASK                   0x00000100
#define _TMC22XX_SEL_A_SHIFT                  8
#define _TMC22XX_DIR_MASK                     0x00000200
#define _TMC22XX_DIR_SHIFT                    9
#define _TMC22XX_VERSION_MASK                 0xFF000000
#define _TMC22XX_VERSION_SHIFT                24
#define _TMC22XX_FCLKTRIM_MASK                0x0000001F
#define _TMC22XX_FCLKTRIM_SHIFT               0
#define _TMC22XX_OTTRIM_MASK                  0x00000030
#define _TMC22XX_OTTRIM_SHIFT                 8
#define _TMC22XX_IHOLD_MASK                   0x0000001F
#define _TMC22XX_IHOLD_SHIFT                  0
#define _TMC22XX_IRUN_MASK                    0x00001F00
#define _TMC22XX_IRUN_SHIFT                   8
#define _TMC22XX_IHOLDDELAY_MASK              0x000F0000
#define _TMC22XX_IHOLDDELAY_SHIFT             16
#define _TMC22XX_TPOWERDOWN_MASK              0x000000FF
#define _TMC22XX_TPOWERDOWN_SHIFT             0
#define _TMC22XX_TSTEP_MASK                   0x000FFFFF
#define _TMC22XX_TSTEP_SHIFT                  0
#define _TMC22XX_TPWMTHRS_MASK                0x000FFFFF
#define _TMC22XX_TPWMTHRS_SHIFT               0
#define _TMC22XX_VACTUAL_MASK                 0x00FFFFFF
#define _TMC22XX_VACTUAL_SHIFT                0
#define _TMC22XX_SEMIN_MASK                   0x0000000F
#define _TMC22XX_SEMIN_SHIFT                  0
#define _TMC22XX_SEUP_MASK                    0x00000060
#define _TMC22XX_SEUP_SHIFT                   5
#define _TMC22XX_SEMAX_MASK                   0x00000F00
#define _TMC22XX_SEMAX_SHIFT                  8
#define _TMC22XX_SEDN_MASK                    0x00006000
#define _TMC22XX_SEDN_SHIFT                   13
#define _TMC22XX_SEIMIN_MASK                  0x00008000
#define _TMC22XX_SEIMIN_SHIFT                 15
#define _TMC22XX_MSCNT_MASK                   0x000003FF
#define _TMC22XX_MSCNT_SHIFT                  0
#define _TMC22XX_CUR_A_MASK                   0x000001FF
#define _TMC22XX_CUR_A_SHIFT                  0
#define _TMC22XX_CUR_B_MASK                   0x01FF0000
#define _TMC22XX_CUR_B_SHIFT                  16
#define _TMC22XX_TOFF_MASK                    0x0000000F
#define _TMC22XX_TOFF_SHIFT                   0
#define _TMC22XX_HSTRT_MASK                   0x00000070
#define _TMC22XX_HSTRT_SHIFT                  4
#define _TMC22XX_HEND_MASK                    0x00000780
#define _TMC22XX_HEND_SHIFT                   7
#define _TMC22XX_TBL_MASK                     0x00018000
#define _TMC22XX_TBL_SHIFT                    15
#define _TMC22XX_VSENSE_MASK                  0x00020000
#define _TMC22XX_VSENSE_SHIFT                 17
#define _TMC22XX_MRES_MASK                    0x0F000000
#define _TMC22XX_MRES_SHIFT                   24
#define _TMC22XX_INTPOL_MASK                  0x10000000
#define _TMC22XX_INTPOL_SHIFT                 28
#define _TMC22XX_DEDGE_MASK                   0x20000000
#define _TMC22XX_DEDGE_SHIFT                  29
#define _TMC22XX_DISS2G_MASK                  0x40000000
#define _TMC22XX_DISS2G_SHIFT                 30
#define _TMC22XX_DISS2VS_MASK                 0x80000000
#define _TMC22XX_DISS2VS_SHIFT                31
#define _TMC22XX_OTPW_MASK                    0x00000001
#define _TMC22XX_OTPW_SHIFT                   0
#define _TMC22XX_OT_MASK                      0x00000002
#define _TMC22XX_OT_SHIFT                     1
#define _TMC22XX_S2GA_MASK                    0x00000004
#define _TMC22XX_S2GA_SHIFT                   2
#define _TMC22XX_S2GB_MASK                    0x00000008
#define _TMC22XX_S2GB_SHIFT                   3
#define _TMC22XX_S2VSA_MASK                   0x00000010
#define _TMC22XX_S2VSA_SHIFT                  4
#define _TMC22XX_S2VSB_MASK                   0x00000020
#define _TMC22XX_S2VSB_SHIFT                  5
#define _TMC22XX_OLA_MASK                     0x00000040
#define _TMC22XX_OLA_SHIFT                    6
#define _TMC22XX_OLB_MASK                     0x00000080
#define _TMC22XX_OLB_SHIFT                    7
#define _TMC22XX_T120_MASK                    0x00000100
#define _TMC22XX_T120_SHIFT                   8
#define _TMC22XX_T143_MASK                    0x00000200
#define _TMC22XX_T143_SHIFT                   9
#define _TMC22XX_T150_MASK                    0x00000400
#define _TMC22XX_T150_SHIFT                   10
#define _TMC22XX_T157_MASK                    0x00000800
#define _TMC22XX_T157_SHIFT                   11
#define _TMC22XX_CS_ACTUAL_MASK               0x001F0000
#define _TMC22XX_CS_ACTUAL_SHIFT              16
#define _TMC22XX_STEALTH_MASK                 0x40000000
#define _TMC22XX_STEALTH_SHIFT                30
#define _TMC22XX_STST_MASK                    0x80000000
#define _TMC22XX_STST_SHIFT                   31
#define _TMC22XX_PWM_OFS_MASK                 0x000000FF
#define _TMC22XX_PWM_OFS_SHIFT                0
#define _TMC22XX_PWM_GRAD_MASK                0x0000FF00
#define _TMC22XX_PWM_GRAD_SHIFT               8
#define _TMC22XX_PWM_FREQ_MASK                0x00030000
#define _TMC22XX_PWM_FREQ_SHIFT               16
#define _TMC22XX_PWM_AUTOSCALE_MASK           0x00040000
#define _TMC22XX_PWM_AUTOSCALE_SHIFT          18
#define _TMC22XX_PWM_AUTOGRAD_MASK            0x00080000
#define _TMC22XX_PWM_AUTOGRAD_SHIFT           19
#define _TMC22XX_FREEWHEEL_MASK               0x00300000
#define _TMC22XX_FREEWHEEL_SHIFT              20
#define _TMC22XX_PWM_REG_MASK                 0x0F000000
#define _TMC22XX_PWM_REG_SHIFT                24
#define _TMC22XX_PWM_LIM_MASK                 0xF0000000
#define _TMC22XX_PWM_LIM_SHIFT                28
#define _TMC22XX_PWM_SCALE_SUM_MASK           0x000000FF
#define _TMC22XX_PWM_SCALE_SUM_SHIFT          0
#define _TMC22XX_PWM_SCALE_AUTO_MASK          0x01FF0000
#define _TMC22XX_PWM_SCALE_AUTO_SHIFT         16
#define _TMC22XX_PWM_OFS_AUTO_MASK            0x000000FF
#define _TMC22XX_PWM_OFS_AUTO_SHIFT           0
#define _TMC22XX_PWM_GRAD_AUTO_MASK           0x00FF0000
#define _TMC22XX_PWM_GRAD_AUTO_SHIFT          16

#endif /* TMC22XX_REGISTERS_H */