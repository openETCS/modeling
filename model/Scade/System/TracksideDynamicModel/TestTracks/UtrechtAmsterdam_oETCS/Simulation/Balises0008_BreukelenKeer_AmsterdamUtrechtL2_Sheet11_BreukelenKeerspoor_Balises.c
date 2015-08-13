/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-12T20:04:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balises0008_BreukelenKeer_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises.h"

void Balises0008_BreukelenKeer_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
  outC_Balises0008_BreukelenKeer_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises *outC)
{
  /* 1 */
  Balise_Group_409_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &outC->_11_Context_1);
  /* 1 */
  Balise_Group_408_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &outC->_10_Context_1);
  /* 2 */
  Balise_Group_407_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &outC->_9_Context_2);
  /* 2 */
  Balise_Group_406_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &outC->Context_2);
  /* 1 */
  Balise_Group_405_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &outC->_8_Context_1);
  /* 1 */
  Balise_Group_404_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &outC->_7_Context_1);
  /* 1 */
  Balise_Group_403_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &outC->_6_Context_1);
  /* 1 */
  Balise_Group_402_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &outC->_5_Context_1);
  /* 1 */
  Balise_Group_401_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &outC->_4_Context_1);
  /* 1 */
  Balise_Group_400_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &outC->_3_Context_1);
  /* 1 */
  Balise_Group_399_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &outC->_2_Context_1);
  /* 1 */
  Balise_Group_398_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &outC->_1_Context_1);
  /* 1 */
  Balise_Group_397_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &outC->Context_1);
}

/* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balises0008_BreukelenKeerspoor */
void Balises0008_BreukelenKeer_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balises0008_BreukelenKeerspoor::SectionData_in */TrackSectionData_T_InfraLib *SectionData_in,
  outC_Balises0008_BreukelenKeer_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises *outC)
{
  kcg_copy_TrackSectionData_T_InfraLib(&outC->_L6, SectionData_in);
  kcg_copy_CompressedBaliseMessage_TM(&outC->_L3, &outC->_L6.BG_Message);
  outC->_L2 = outC->_L6.TrainPosRaw.TrainPosCalibrated;
  /* 1 */
  Balise_Group_397_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &outC->_L3,
    outC->_L2,
    (BaliseGroupData_TM *) &BG397_Balises426,
    &outC->Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L1,
    &outC->Context_1.BG_message_out);
  /* 1 */
  Balise_Group_398_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &outC->_L1,
    outC->_L2,
    (BaliseGroupData_TM *) &BG398_Balises426,
    &outC->_1_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L7,
    &outC->_1_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_399_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &outC->_L7,
    outC->_L2,
    (BaliseGroupData_TM *) &BG399_Balises426,
    &outC->_2_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L8,
    &outC->_2_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_400_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &outC->_L8,
    outC->_L2,
    (BaliseGroupData_TM *) &BG400_Balises426,
    &outC->_3_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L9,
    &outC->_3_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_401_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &outC->_L9,
    outC->_L2,
    (BaliseGroupData_TM *) &BG401_Balises426,
    &outC->_4_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L10,
    &outC->_4_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_402_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &outC->_L10,
    outC->_L2,
    (BaliseGroupData_TM *) &BG402_Balises426,
    &outC->_5_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L11,
    &outC->_5_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_403_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &outC->_L11,
    outC->_L2,
    (BaliseGroupData_TM *) &BG403_Balises426,
    &outC->_6_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L12,
    &outC->_6_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_404_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &outC->_L12,
    outC->_L2,
    (BaliseGroupData_TM *) &BG404_Balises426,
    &outC->_7_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L13,
    &outC->_7_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_405_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &outC->_L13,
    outC->_L2,
    (BaliseGroupData_TM *) &BG405_Balises426,
    &outC->_8_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L14,
    &outC->_8_Context_1.BG_message_out);
  /* 2 */
  Balise_Group_406_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &outC->_L14,
    outC->_L2,
    (BaliseGroupData_TM *) &BG406_Balises426,
    &outC->Context_2);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L15,
    &outC->Context_2.BG_message_out);
  /* 2 */
  Balise_Group_407_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &outC->_L15,
    outC->_L2,
    (BaliseGroupData_TM *) &BG407_Balises426,
    &outC->_9_Context_2);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L16,
    &outC->_9_Context_2.BG_message_out);
  /* 1 */
  Balise_Group_408_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &outC->_L16,
    outC->_L2,
    (BaliseGroupData_TM *) &BG408_Balises426,
    &outC->_10_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L17,
    &outC->_10_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_409_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &outC->_L17,
    outC->_L2,
    (BaliseGroupData_TM *) &BG409_Balises426,
    &outC->_11_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L18,
    &outC->_11_Context_1.BG_message_out);
  kcg_copy_TrackSectionData_T_InfraLib(&outC->_L4, &outC->_L6);
  if (kcg_true) {
    kcg_copy_CompressedBaliseMessage_TM(&outC->_L4.BG_Message, &outC->_L18);
  }
  kcg_copy_TrackSectionData_T_InfraLib(&outC->SectionData_out, &outC->_L4);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balises0008_BreukelenKeer_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises.c
** Generation date: 2015-08-12T20:04:59
*************************************************************$ */

