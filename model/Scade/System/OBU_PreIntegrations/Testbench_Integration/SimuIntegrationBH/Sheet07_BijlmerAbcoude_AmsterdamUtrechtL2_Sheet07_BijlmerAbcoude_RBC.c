/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Sheet07_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC.h"

/* AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_RBC::Sheet07_BijlmerAbcoude */
void Sheet07_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC(
  /* AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_RBC::Sheet07_BijlmerAbcoude::RadiaDataIn */ R_data_internal_T_InfraLib *RadiaDataIn,
  /* AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_RBC::Sheet07_BijlmerAbcoude::R_data_out */ R_data_internal_T_InfraLib *R_data_out)
{
  /* AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_RBC::Sheet07_BijlmerAbcoude::_L1 */
  static R_data_internal_T_InfraLib _L1;
  /* AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_RBC::Sheet07_BijlmerAbcoude::_L2 */
  static R_data_internal_T_InfraLib _L2;
  /* AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_RBC::Sheet07_BijlmerAbcoude::_L3 */
  static R_data_internal_T_InfraLib _L3;
  /* AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_RBC::Sheet07_BijlmerAbcoude::_L4 */
  static R_data_internal_T_InfraLib _L4;
  /* AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_RBC::Sheet07_BijlmerAbcoude::_L13 */
  static R_data_internal_T_InfraLib _L13;
  
  kcg_copy_R_data_internal_T_InfraLib(&_L13, RadiaDataIn);
  /* 2 */
  Send_RBC_LRBG_371_D_00024_1_M015_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC(
    &_L13,
    371000241,
    &_L1);
  /* 1 */
  Send_RBC_LRBG_371_D_00105_2_M003_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC(
    &_L1,
    371001052,
    &_L2);
  /* 1 */
  Send_RBC_LRBG_371_D_00163_4_M015_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC(
    &_L2,
    371001634,
    &_L3);
  /* 1 */
  Send_RBC_LRBG_372_D_00059_4_M015_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC(
    &_L3,
    372000594,
    &_L4);
  kcg_copy_R_data_internal_T_InfraLib(R_data_out, &_L4);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Sheet07_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

