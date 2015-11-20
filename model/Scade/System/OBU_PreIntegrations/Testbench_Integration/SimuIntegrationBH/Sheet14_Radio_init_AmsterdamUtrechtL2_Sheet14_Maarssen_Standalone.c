/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Sheet14_Radio_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.h"

/* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Radio_init */
void Sheet14_Radio_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Radio_init::RadiaDataIn */ R_data_internal_T_InfraLib *RadiaDataIn,
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Radio_init::R_data_out */ R_data_internal_T_InfraLib *R_data_out)
{
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Radio_init::_L1 */
  static R_data_internal_T_InfraLib _L1;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Radio_init::_L2 */
  static R_data_internal_T_InfraLib _L2;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Radio_init::_L3 */
  static R_data_internal_T_InfraLib _L3;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Radio_init::_L4 */
  static R_data_internal_T_InfraLib _L4;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Radio_init::_L13 */
  static R_data_internal_T_InfraLib _L13;
  
  kcg_copy_R_data_internal_T_InfraLib(&_L13, RadiaDataIn);
  /* 1 */
  Send_RBC_LRBG_100_D_00050_0_M032_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
    &_L13,
    100000500,
    &_L1);
  /* 1 */
  Send_RBC_LRBG_100_D_00100_0_M008_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
    &_L1,
    10001000,
    &_L2);
  /* 1 */
  Send_RBC_LRBG_100_D_00110_0_M024_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
    &_L2,
    100001100,
    &_L3);
  /* 1 */
  Send_RBC_LRBG_200_D_00054_9_M003_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
    &_L3,
    200000549,
    &_L4);
  kcg_copy_R_data_internal_T_InfraLib(R_data_out, &_L4);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Sheet14_Radio_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

