/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Sheet09_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC.h"

/* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_RBC::Sheet09_AbcoudeBreukelen */
void Sheet09_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC(
  /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_RBC::Sheet09_AbcoudeBreukelen::RadiaDataIn */ R_data_internal_T_InfraLib *RadiaDataIn,
  /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_RBC::Sheet09_AbcoudeBreukelen::R_data_out */ R_data_internal_T_InfraLib *R_data_out)
{
  /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_RBC::Sheet09_AbcoudeBreukelen::_L1 */
  static R_data_internal_T_InfraLib _L1;
  /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_RBC::Sheet09_AbcoudeBreukelen::_L2 */
  static R_data_internal_T_InfraLib _L2;
  /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_RBC::Sheet09_AbcoudeBreukelen::_L3 */
  static R_data_internal_T_InfraLib _L3;
  /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_RBC::Sheet09_AbcoudeBreukelen::_L4 */
  static R_data_internal_T_InfraLib _L4;
  /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_RBC::Sheet09_AbcoudeBreukelen::_L13 */
  static R_data_internal_T_InfraLib _L13;
  
  kcg_copy_R_data_internal_T_InfraLib(&_L13, RadiaDataIn);
  /* 1 */
  Send_RBC_LRBG_390_D_00067_4_M015_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC(
    &_L13,
    390000674,
    &_L1);
  /* 1 */
  Send_RBC_LRBG_391_D_00371_4_M015_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC(
    &_L1,
    391003714,
    &_L2);
  /* 1 */
  Send_RBC_LRBG_393_D_00064_8_M015_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC(
    &_L2,
    393000648,
    &_L3);
  /* 1 */
  Send_RBC_LRBG_396_D_00077_7_M015_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC(
    &_L3,
    396000777,
    &_L4);
  kcg_copy_R_data_internal_T_InfraLib(R_data_out, &_L4);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Sheet09_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

