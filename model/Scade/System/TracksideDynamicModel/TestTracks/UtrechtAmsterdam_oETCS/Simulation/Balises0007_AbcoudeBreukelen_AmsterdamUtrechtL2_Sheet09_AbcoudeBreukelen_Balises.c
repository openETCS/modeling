/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balises0007_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises.h"

void Balises0007_AbcoudeBreukelen_reset_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
  outC_Balises0007_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises *outC)
{
  /* 1 */
  Balise_Group_396_reset_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &outC->_7_Context_1);
  /* 1 */
  Balise_Group_395_reset_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &outC->_6_Context_1);
  /* 1 */
  Balise_Group_394_reset_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &outC->_5_Context_1);
  /* 1 */
  Balise_Group_393_reset_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &outC->_4_Context_1);
  /* 1 */
  Balise_Group_392_reset_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &outC->_3_Context_1);
  /* 1 */
  Balise_Group_391_reset_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &outC->_2_Context_1);
  /* 1 */
  Balise_Group_390_reset_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &outC->_1_Context_1);
  /* 1 */
  Balise_Group_389_reset_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &outC->Context_1);
}

/* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balises0007_AbcoudeBreukelen */
void Balises0007_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
  /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balises0007_AbcoudeBreukelen::SectionData_in */TrackSectionData_T_InfraLib *SectionData_in,
  outC_Balises0007_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises *outC)
{
  kcg_copy_TrackSectionData_T_InfraLib(&outC->_L6, SectionData_in);
  kcg_copy_CompressedBaliseMessage_TM(&outC->_L3, &outC->_L6.BG_Message);
  outC->_L2 = outC->_L6.TrainPosRaw.TrainPosCalibrated;
  /* 1 */
  Balise_Group_389_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &outC->_L3,
    outC->_L2,
    (BaliseGroupData_TM *) &BG389_Balises426,
    &outC->Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L1,
    &outC->Context_1.BG_message_out);
  /* 1 */
  Balise_Group_390_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &outC->_L1,
    outC->_L2,
    (BaliseGroupData_TM *) &BG390_Balises426,
    &outC->_1_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L7,
    &outC->_1_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_391_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &outC->_L7,
    outC->_L2,
    (BaliseGroupData_TM *) &BG391_Balises426,
    &outC->_2_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L8,
    &outC->_2_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_392_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &outC->_L8,
    outC->_L2,
    (BaliseGroupData_TM *) &BG392_Balises426,
    &outC->_3_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L9,
    &outC->_3_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_393_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &outC->_L9,
    outC->_L2,
    (BaliseGroupData_TM *) &BG393_Balises426,
    &outC->_4_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L10,
    &outC->_4_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_394_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &outC->_L10,
    outC->_L2,
    (BaliseGroupData_TM *) &BG394_Balises426,
    &outC->_5_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L11,
    &outC->_5_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_395_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &outC->_L11,
    outC->_L2,
    (BaliseGroupData_TM *) &BG395_Balises426,
    &outC->_6_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L12,
    &outC->_6_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_396_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &outC->_L12,
    outC->_L2,
    (BaliseGroupData_TM *) &BG396_Balises426,
    &outC->_7_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L13,
    &outC->_7_Context_1.BG_message_out);
  kcg_copy_TrackSectionData_T_InfraLib(&outC->_L4, &outC->_L6);
  if (kcg_true) {
    kcg_copy_CompressedBaliseMessage_TM(&outC->_L4.BG_Message, &outC->_L13);
  }
  kcg_copy_TrackSectionData_T_InfraLib(&outC->SectionData_out, &outC->_L4);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balises0007_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises.c
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

