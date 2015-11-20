/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Sheet13_Breukelen_Maarssen_RBC_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC.h"

/* AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_RBC::Sheet13_Breukelen_Maarssen_RBC */
void Sheet13_Breukelen_Maarssen_RBC_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC(
  /* AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_RBC::Sheet13_Breukelen_Maarssen_RBC::RadiaDataIn */ R_data_internal_T_InfraLib *RadiaDataIn,
  /* AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_RBC::Sheet13_Breukelen_Maarssen_RBC::R_data_out */ R_data_internal_T_InfraLib *R_data_out)
{
  /* AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_RBC::Sheet13_Breukelen_Maarssen_RBC::_L1 */
  static R_data_internal_T_InfraLib _L1;
  /* AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_RBC::Sheet13_Breukelen_Maarssen_RBC::_L2 */
  static R_data_internal_T_InfraLib _L2;
  /* AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_RBC::Sheet13_Breukelen_Maarssen_RBC::_L3 */
  static R_data_internal_T_InfraLib _L3;
  /* AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_RBC::Sheet13_Breukelen_Maarssen_RBC::_L13 */
  static R_data_internal_T_InfraLib _L13;
  
  kcg_copy_R_data_internal_T_InfraLib(&_L13, RadiaDataIn);
  /* 1 */
  Send_RBC_LRBG_420_D_00169_4_M015_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC(
    &_L13,
    420001694,
    &_L1);
  /* 1 */
  Send_RBC_LRBG_421_D_00050_0_M015_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC(
    &_L1,
    421000500,
    &_L2);
  /* 1 */
  Send_RBC_LRBG_422_D_00192_7_M015_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC(
    &_L2,
    422001927,
    &_L3);
  kcg_copy_R_data_internal_T_InfraLib(R_data_out, &_L3);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Sheet13_Breukelen_Maarssen_RBC_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

