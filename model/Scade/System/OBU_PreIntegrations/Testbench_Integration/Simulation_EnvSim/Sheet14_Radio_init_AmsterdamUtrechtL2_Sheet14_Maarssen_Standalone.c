/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:26
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Sheet14_Radio_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.h"

/* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Radio_init */
void Sheet14_Radio_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Radio_init::RadiaDataIn */R_data_internal_T_InfraLib *RadiaDataIn,
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Radio_init::R_data_out */R_data_internal_T_InfraLib *R_data_out)
{
  static R_data_internal_T_InfraLib tmp1;
  static R_data_internal_T_InfraLib tmp;
  
  /* 1 */
  Send_RBC_LRBG_100_D_00050_0_M032_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
    RadiaDataIn,
    100000500,
    &tmp1);
  /* 1 */
  Send_RBC_LRBG_100_D_00100_0_M008_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
    &tmp1,
    10001000,
    &tmp);
  /* 1 */
  Send_RBC_LRBG_100_D_00110_0_M024_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
    &tmp,
    100001100,
    &tmp1);
  /* 1 */
  Send_RBC_LRBG_200_D_00054_9_M003_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
    &tmp1,
    200000549,
    R_data_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Sheet14_Radio_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.c
** Generation date: 2015-11-20T19:47:26
*************************************************************$ */

