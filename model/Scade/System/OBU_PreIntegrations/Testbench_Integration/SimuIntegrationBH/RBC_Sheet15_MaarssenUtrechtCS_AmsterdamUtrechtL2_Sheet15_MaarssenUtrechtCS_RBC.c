/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_Sheet15_MaarssenUtrechtCS_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_RBC.h"

/* AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_RBC::RBC_Sheet15_MaarssenUtrechtCS */
void RBC_Sheet15_MaarssenUtrechtCS_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_RBC(
  /* AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_RBC::RBC_Sheet15_MaarssenUtrechtCS::RadiaDataIn */ R_data_internal_T_InfraLib *RadiaDataIn,
  /* AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_RBC::RBC_Sheet15_MaarssenUtrechtCS::R_data_out */ R_data_internal_T_InfraLib *R_data_out)
{
  /* AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_RBC::RBC_Sheet15_MaarssenUtrechtCS::_L1 */
  static R_data_internal_T_InfraLib _L1;
  /* AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_RBC::RBC_Sheet15_MaarssenUtrechtCS::_L2 */
  static R_data_internal_T_InfraLib _L2;
  /* AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_RBC::RBC_Sheet15_MaarssenUtrechtCS::_L3 */
  static R_data_internal_T_InfraLib _L3;
  /* AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_RBC::RBC_Sheet15_MaarssenUtrechtCS::_L13 */
  static R_data_internal_T_InfraLib _L13;
  
  kcg_copy_R_data_internal_T_InfraLib(&_L13, RadiaDataIn);
  /* 1 */
  Send_RBC_LRBG_439_D_00050_9_M015_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_RBC(
    &_L13,
    439000509,
    &_L1);
  /* 1 */
  Send_RBC_LRBG_440_D_00295_6_M015_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_RBC(
    &_L1,
    440002956,
    &_L2);
  /* 1 */
  Send_RBC_LRBG_441_D_00052_1_M015_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_RBC(
    &_L2,
    441000521,
    &_L3);
  kcg_copy_R_data_internal_T_InfraLib(R_data_out, &_L3);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RBC_Sheet15_MaarssenUtrechtCS_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_RBC.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

