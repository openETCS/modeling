/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Sheet12_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC.h"

/* AmsterdamUtrechtL2::Sheet12_Breukelen_RBC::Sheet12_Breukelen */
void Sheet12_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC(
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_RBC::Sheet12_Breukelen::RadiaDataIn */ R_data_internal_T_InfraLib *RadiaDataIn,
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_RBC::Sheet12_Breukelen::R_data_out */ R_data_internal_T_InfraLib *R_data_out)
{
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_RBC::Sheet12_Breukelen::_L1 */
  static R_data_internal_T_InfraLib _L1;
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_RBC::Sheet12_Breukelen::_L2 */
  static R_data_internal_T_InfraLib _L2;
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_RBC::Sheet12_Breukelen::_L3 */
  static R_data_internal_T_InfraLib _L3;
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_RBC::Sheet12_Breukelen::_L4 */
  static R_data_internal_T_InfraLib _L4;
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_RBC::Sheet12_Breukelen::_L13 */
  static R_data_internal_T_InfraLib _L13;
  
  kcg_copy_R_data_internal_T_InfraLib(&_L13, RadiaDataIn);
  /* 1 */
  Send_RBC_LRBG_417_D_00052_4_M003_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC(
    &_L13,
    417000524,
    &_L1);
  /* 1 */
  Send_RBC_LRBG_418_D_00204_0_M015_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC(
    &_L1,
    418002040,
    &_L2);
  /* 1 */
  Send_RBC_LRBG_419_D_00053_5_M015_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC(
    &_L2,
    419000535,
    &_L3);
  /* 1 */
  Send_RBC_LRBG_476_D_00251_4_M015_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC(
    &_L3,
    476002514,
    &_L4);
  kcg_copy_R_data_internal_T_InfraLib(R_data_out, &_L4);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Sheet12_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

