/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Sheet08B_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC.h"

/* AmsterdamUtrechtL2::Sheet08B_Abcoude_RBC::Sheet08B_Abcoude */
void Sheet08B_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC(
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_RBC::Sheet08B_Abcoude::RadiaDataIn */ R_data_internal_T_InfraLib *RadiaDataIn,
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_RBC::Sheet08B_Abcoude::R_data_out */ R_data_internal_T_InfraLib *R_data_out)
{
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_RBC::Sheet08B_Abcoude::_L1 */
  static R_data_internal_T_InfraLib _L1;
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_RBC::Sheet08B_Abcoude::_L2 */
  static R_data_internal_T_InfraLib _L2;
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_RBC::Sheet08B_Abcoude::_L3 */
  static R_data_internal_T_InfraLib _L3;
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_RBC::Sheet08B_Abcoude::_L4 */
  static R_data_internal_T_InfraLib _L4;
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_RBC::Sheet08B_Abcoude::_L13 */
  static R_data_internal_T_InfraLib _L13;
  
  kcg_copy_R_data_internal_T_InfraLib(&_L13, RadiaDataIn);
  /* 1 */
  Send_RBC_LRBG_382_D_00191_8_M015_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC(
    &_L13,
    380001918,
    &_L1);
  /* 1 */
  Send_RBC_LRBG_383_D_00105_4_M003_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC(
    &_L1,
    383001054,
    &_L2);
  /* 1 */
  Send_RBC_LRBG_385_D_00101_1_M003_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC(
    &_L2,
    385001011,
    &_L3);
  /* 1 */
  Send_RBC_LRBG_387_D_00302_7_M015_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC(
    &_L3,
    387003027,
    &_L4);
  kcg_copy_R_data_internal_T_InfraLib(R_data_out, &_L4);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Sheet08B_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

