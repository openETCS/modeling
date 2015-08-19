/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:59:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_RBC_LRBG_376_D_00291_3_M015_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC.h"

/* AmsterdamUtrechtL2::Sheet08A_Abcoude_RBC::Build_RBC_LRBG_376_D_00291_3_M015 */
void Build_RBC_LRBG_376_D_00291_3_M015_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC(
  /* AmsterdamUtrechtL2::Sheet08A_Abcoude_RBC::Build_RBC_LRBG_376_D_00291_3_M015::RadiaDataIn */R_data_internal_T_InfraLib *RadiaDataIn,
  /* AmsterdamUtrechtL2::Sheet08A_Abcoude_RBC::Build_RBC_LRBG_376_D_00291_3_M015::R_data_out */R_data_internal_T_InfraLib *R_data_out)
{
  kcg_copy_R_data_internal_T_InfraLib(R_data_out, RadiaDataIn);
  /* 1 */
  No_Radio_Packets_RadioLib(&(*RadiaDataIn).packets, &(*R_data_out).packets);
  /* 1 */
  Send_M015_JRU_MessageLibBaseline2(
    (M_015_int_T_TM_radio_messages *) &LRBG_376_D_00291_3_M015_Messages_426,
    &(*R_data_out).message);
  (*R_data_out).message_sent = kcg_true;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_RBC_LRBG_376_D_00291_3_M015_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC.c
** Generation date: 2015-07-21T17:59:24
*************************************************************$ */

