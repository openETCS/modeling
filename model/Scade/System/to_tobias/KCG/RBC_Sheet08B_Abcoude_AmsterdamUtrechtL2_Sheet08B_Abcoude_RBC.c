/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_Sheet08B_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC.h"

/* AmsterdamUtrechtL2::Sheet08B_Abcoude_RBC::RBC_Sheet08B_Abcoude */
void RBC_Sheet08B_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC(
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_RBC::RBC_Sheet08B_Abcoude::RadiaDataIn */R_data_internal_T_InfraLib *RadiaDataIn,
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_RBC::RBC_Sheet08B_Abcoude::R_data_out */R_data_internal_T_InfraLib *R_data_out)
{
  static R_data_internal_T_InfraLib tmp1;
  static R_data_internal_T_InfraLib tmp;
  
  /* 1 */
  Send_RBC_LRBG_382_D_00191_8_M015_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC(
    RadiaDataIn,
    380001918,
    &tmp1);
  /* 1 */
  Send_RBC_LRBG_383_D_00105_4_M003_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC(
    &tmp1,
    383001054,
    &tmp);
  /* 1 */
  Send_RBC_LRBG_385_D_00101_1_M003_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC(
    &tmp,
    385001011,
    &tmp1);
  /* 1 */
  Send_RBC_LRBG_387_D_00302_7_M015_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC(
    &tmp1,
    387003027,
    R_data_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC_Sheet08B_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC.c
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

