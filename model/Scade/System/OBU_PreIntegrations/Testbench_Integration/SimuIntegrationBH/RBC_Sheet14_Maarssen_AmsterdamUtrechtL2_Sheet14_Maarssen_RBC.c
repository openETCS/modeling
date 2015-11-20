/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC.h"

/* AmsterdamUtrechtL2::Sheet14_Maarssen_RBC::RBC_Sheet14_Maarssen */
void RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC(
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_RBC::RBC_Sheet14_Maarssen::RadiaDataIn */ R_data_internal_T_InfraLib *RadiaDataIn,
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_RBC::RBC_Sheet14_Maarssen::R_data_out */ R_data_internal_T_InfraLib *R_data_out)
{
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_RBC::RBC_Sheet14_Maarssen::_L1 */
  static R_data_internal_T_InfraLib _L1;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_RBC::RBC_Sheet14_Maarssen::_L2 */
  static R_data_internal_T_InfraLib _L2;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_RBC::RBC_Sheet14_Maarssen::_L3 */
  static R_data_internal_T_InfraLib _L3;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_RBC::RBC_Sheet14_Maarssen::_L4 */
  static R_data_internal_T_InfraLib _L4;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_RBC::RBC_Sheet14_Maarssen::_L13 */
  static R_data_internal_T_InfraLib _L13;
  
  kcg_copy_R_data_internal_T_InfraLib(&_L13, RadiaDataIn);
  /* 1 */
  Send_RBC_LRBG_427_D_00047_5_M003_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC(
    &_L13,
    427000475,
    &_L1);
  /* 1 */
  Send_RBC_LRBG_428_D_00182_0_M015_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC(
    &_L1,
    428001820,
    &_L2);
  /* 1 */
  Send_RBC_LRBG_431_D_00410_2_M015_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC(
    &_L2,
    431004102,
    &_L3);
  /* 1 */
  Send_RBC_LRBG_432_D_00040_9_M003_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC(
    &_L3,
    432000409,
    &_L4);
  kcg_copy_R_data_internal_T_InfraLib(R_data_out, &_L4);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

