/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Sheet08A_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC.h"

/* AmsterdamUtrechtL2::Sheet08A_Abcoude_RBC::Sheet08A_Abcoude */
void Sheet08A_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC(
  /* AmsterdamUtrechtL2::Sheet08A_Abcoude_RBC::Sheet08A_Abcoude::RadiaDataIn */ R_data_internal_T_InfraLib *RadiaDataIn,
  /* AmsterdamUtrechtL2::Sheet08A_Abcoude_RBC::Sheet08A_Abcoude::R_data_out */ R_data_internal_T_InfraLib *R_data_out)
{
  /* AmsterdamUtrechtL2::Sheet08A_Abcoude_RBC::Sheet08A_Abcoude::_L1 */
  static R_data_internal_T_InfraLib _L1;
  /* AmsterdamUtrechtL2::Sheet08A_Abcoude_RBC::Sheet08A_Abcoude::_L2 */
  static R_data_internal_T_InfraLib _L2;
  /* AmsterdamUtrechtL2::Sheet08A_Abcoude_RBC::Sheet08A_Abcoude::_L3 */
  static R_data_internal_T_InfraLib _L3;
  /* AmsterdamUtrechtL2::Sheet08A_Abcoude_RBC::Sheet08A_Abcoude::_L13 */
  static R_data_internal_T_InfraLib _L13;
  
  kcg_copy_R_data_internal_T_InfraLib(&_L13, RadiaDataIn);
  /* 1 */
  Send_RBC_LRBG_374_D_00178_9_M015_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC(
    &_L13,
    374001789,
    &_L1);
  /* 1 */
  Send_RBC_LRBG_375_D_00054_4_M015_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC(
    &_L1,
    375000544,
    &_L2);
  /* 1 */
  Send_RBC_LRBG_376_D_00291_3_M015_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC(
    &_L2,
    376002913,
    &_L3);
  kcg_copy_R_data_internal_T_InfraLib(R_data_out, &_L3);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Sheet08A_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

