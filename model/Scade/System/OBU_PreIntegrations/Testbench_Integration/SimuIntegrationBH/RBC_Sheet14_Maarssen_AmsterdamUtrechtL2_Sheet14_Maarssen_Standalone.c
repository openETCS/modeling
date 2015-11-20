/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.h"

/* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::RBC_Sheet14_Maarssen */
void RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::RBC_Sheet14_Maarssen::RadiaDataIn */ R_data_internal_T_InfraLib *RadiaDataIn,
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::RBC_Sheet14_Maarssen::R_data_out */ R_data_internal_T_InfraLib *R_data_out)
{
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::RBC_Sheet14_Maarssen::_L1 */
  static R_data_internal_T_InfraLib _L1;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::RBC_Sheet14_Maarssen::_L2 */
  static R_data_internal_T_InfraLib _L2;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::RBC_Sheet14_Maarssen::_L13 */
  static R_data_internal_T_InfraLib _L13;
  
  kcg_copy_R_data_internal_T_InfraLib(&_L13, RadiaDataIn);
  /* 1 */
  RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC(&_L13, &_L1);
  /* 1 */
  RBC_Sheet15_MaarssenUtrechtCS_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_RBC(
    &_L1,
    &_L2);
  kcg_copy_R_data_internal_T_InfraLib(R_data_out, &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

