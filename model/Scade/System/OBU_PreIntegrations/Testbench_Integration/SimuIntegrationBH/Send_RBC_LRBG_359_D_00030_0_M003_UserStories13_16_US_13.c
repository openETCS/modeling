/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_RBC_LRBG_359_D_00030_0_M003_UserStories13_16_US_13.h"

/* UserStories13_16::US_13::Send_RBC_LRBG_359_D_00030_0_M003 */
void Send_RBC_LRBG_359_D_00030_0_M003_UserStories13_16_US_13(
  /* UserStories13_16::US_13::Send_RBC_LRBG_359_D_00030_0_M003::RadiaDataIn */ R_data_internal_T_InfraLib *RadiaDataIn,
  /* UserStories13_16::US_13::Send_RBC_LRBG_359_D_00030_0_M003::TriggerValue */ kcg_int TriggerValue,
  /* UserStories13_16::US_13::Send_RBC_LRBG_359_D_00030_0_M003::R_data_out */ R_data_internal_T_InfraLib *R_data_out)
{
  /* UserStories13_16::US_13::Send_RBC_LRBG_359_D_00030_0_M003 */
  static R_data_internal_T_InfraLib op_call;
  /* UserStories13_16::US_13::Send_RBC_LRBG_359_D_00030_0_M003 */
  static kcg_bool ck_every;
  /* UserStories13_16::US_13::Send_RBC_LRBG_359_D_00030_0_M003::_L4 */
  static R_data_internal_T_InfraLib _L4;
  /* UserStories13_16::US_13::Send_RBC_LRBG_359_D_00030_0_M003::_L23 */
  static R_data_internal_T_InfraLib _L23;
  /* UserStories13_16::US_13::Send_RBC_LRBG_359_D_00030_0_M003::_L26 */
  static kcg_int _L26;
  /* UserStories13_16::US_13::Send_RBC_LRBG_359_D_00030_0_M003::_L27 */
  static kcg_int _L27;
  /* UserStories13_16::US_13::Send_RBC_LRBG_359_D_00030_0_M003::_L52 */
  static kcg_bool _L52;
  /* UserStories13_16::US_13::Send_RBC_LRBG_359_D_00030_0_M003::_L53 */
  static R_data_internal_T_InfraLib _L53;
  
  _L26 = TriggerValue;
  kcg_copy_R_data_internal_T_InfraLib(&_L23, RadiaDataIn);
  _L27 = _L23.trigger;
  _L52 = _L26 == _L27;
  ck_every = _L52;
  kcg_copy_R_data_internal_T_InfraLib(&_L53, RadiaDataIn);
  /* ck_Send_RBC_LRBG_359_D_00030_0_M003 */ if (ck_every) {
    /* 1 */
    Build_RBC_LRBG_359_D_00030_0_M003_UserStories13_16_US_13(&_L53, &op_call);
    kcg_copy_R_data_internal_T_InfraLib(&_L4, &op_call);
  }
  else {
    kcg_copy_R_data_internal_T_InfraLib(&_L4, &_L53);
  }
  kcg_copy_R_data_internal_T_InfraLib(R_data_out, &_L4);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Send_RBC_LRBG_359_D_00030_0_M003_UserStories13_16_US_13.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

