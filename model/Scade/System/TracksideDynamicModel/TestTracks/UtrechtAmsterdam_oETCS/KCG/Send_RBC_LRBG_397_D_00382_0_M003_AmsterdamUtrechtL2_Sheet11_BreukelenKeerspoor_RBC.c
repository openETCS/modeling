/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:59:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_RBC_LRBG_397_D_00382_0_M003_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC.h"

/* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::Send_RBC_LRBG_397_D_00382_0_M003 */
void Send_RBC_LRBG_397_D_00382_0_M003_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::Send_RBC_LRBG_397_D_00382_0_M003::RadiaDataIn */R_data_internal_T_InfraLib *RadiaDataIn,
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::Send_RBC_LRBG_397_D_00382_0_M003::TriggerValue */kcg_int TriggerValue,
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::Send_RBC_LRBG_397_D_00382_0_M003::R_data_out */R_data_internal_T_InfraLib *R_data_out)
{
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::Send_RBC_LRBG_397_D_00382_0_M003::_L52 */
  static kcg_bool _L52;
  
  _L52 = TriggerValue == (*RadiaDataIn).trigger;
  if (_L52) {
    /* 1 */
    Build_RBC_LRBG_397_D_00382_0_M003_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
      RadiaDataIn,
      R_data_out);
  }
  else {
    kcg_copy_R_data_internal_T_InfraLib(R_data_out, RadiaDataIn);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Send_RBC_LRBG_397_D_00382_0_M003_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC.c
** Generation date: 2015-07-21T17:59:24
*************************************************************$ */

