/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_RBC_LRBG_354_D_00275_3_M003_UserStories13_16_US_13.h"

/* UserStories13_16::US_13::Send_RBC_LRBG_354_D_00275_3_M003 */
void Send_RBC_LRBG_354_D_00275_3_M003_UserStories13_16_US_13(
  /* UserStories13_16::US_13::Send_RBC_LRBG_354_D_00275_3_M003::RadiaDataIn */R_data_internal_T_InfraLib *RadiaDataIn,
  /* UserStories13_16::US_13::Send_RBC_LRBG_354_D_00275_3_M003::TriggerValue */kcg_int TriggerValue,
  /* UserStories13_16::US_13::Send_RBC_LRBG_354_D_00275_3_M003::R_data_out */R_data_internal_T_InfraLib *R_data_out)
{
  /* UserStories13_16::US_13::Send_RBC_LRBG_354_D_00275_3_M003::_L52 */
  static kcg_bool _L52;
  
  _L52 = TriggerValue == (*RadiaDataIn).trigger;
  if (_L52) {
    /* 1 */
    Build_RBC_LRBG_354_D_00275_3_M003_UserStories13_16_US_13(
      RadiaDataIn,
      R_data_out);
  }
  else {
    kcg_copy_R_data_internal_T_InfraLib(R_data_out, RadiaDataIn);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Send_RBC_LRBG_354_D_00275_3_M003_UserStories13_16_US_13.c
** Generation date: 2015-11-20T19:47:27
*************************************************************$ */

