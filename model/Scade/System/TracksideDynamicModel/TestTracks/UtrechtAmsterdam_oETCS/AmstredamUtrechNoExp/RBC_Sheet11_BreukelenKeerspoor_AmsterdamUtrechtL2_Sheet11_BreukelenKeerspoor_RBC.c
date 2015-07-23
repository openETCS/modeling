/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/AmstredamUtrechNoExp\kcg_s2c_config.txt
** Generation date: 2015-07-22T11:03:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_Sheet11_BreukelenKeerspoor_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC.h"

/* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::RBC_Sheet11_BreukelenKeerspoor */
void RBC_Sheet11_BreukelenKeerspoor_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::RBC_Sheet11_BreukelenKeerspoor::RadiaDataIn */R_data_internal_T_InfraLib *RadiaDataIn,
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::RBC_Sheet11_BreukelenKeerspoor::R_data_out */R_data_internal_T_InfraLib *R_data_out)
{
  static R_data_internal_T_InfraLib tmp1;
  static R_data_internal_T_InfraLib tmp;
  
  /* 1 */
  Send_RBC_LRBG_397_D_00169_2_M015_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    RadiaDataIn,
    397001692,
    &tmp);
  /* 1 */
  Send_RBC_LRBG_397_D_00382_0_M003_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &tmp,
    397003820,
    &tmp1);
  /* 1 */
  Send_RBC_LRBG_400_D_00106_0_M015_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &tmp1,
    400001060,
    &tmp);
  /* 1 */
  Send_RBC_LRBG_400_D_00371_2_M003_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &tmp,
    400003712,
    &tmp1);
  /* 1 */
  Send_RBC_LRBG_401_D_00182_7_M015_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &tmp1,
    401001827,
    &tmp);
  /* 1 */
  Send_RBC_LRBG_402_D_00063_3_M015_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &tmp,
    402000633,
    &tmp1);
  /* 1 */
  Send_RBC_LRBG_404_D_00184_3_M015_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &tmp1,
    404001844,
    &tmp);
  /* 1 */
  Send_RBC_LRBG_405_D_00042_2_M015_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &tmp,
    405000422,
    &tmp1);
  /* 1 */
  Send_RBC_LRBG_407_D_00167_3_M015_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &tmp1,
    407001673,
    &tmp);
  /* 1 */
  Send_RBC_LRBG_408_D_00050_9_M015_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &tmp,
    408000509,
    R_data_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC_Sheet11_BreukelenKeerspoor_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC.c
** Generation date: 2015-07-22T11:03:51
*************************************************************$ */

