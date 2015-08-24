/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-20T18:20:31
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balises0012_MaarssenUtrechtCS_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises.h"

void Balises0012_MaarssenUtrechtCS_reset_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises(
  outC_Balises0012_MaarssenUtrechtCS_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises *outC)
{
  /* 1 */
  Balise_Group_441_reset_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises(
    &outC->_3_Context_1);
  /* 1 */
  Balise_Group_440_reset_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises(
    &outC->_2_Context_1);
  /* 1 */
  Balise_Group_439_reset_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises(
    &outC->_1_Context_1);
  /* 1 */
  Balise_Group_438_reset_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises(
    &outC->Context_1);
}

/* AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_Balises::Balises0012_MaarssenUtrechtCS */
void Balises0012_MaarssenUtrechtCS_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises(
  /* AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_Balises::Balises0012_MaarssenUtrechtCS::SectionData_in */TrackSectionData_T_InfraLib *SectionData_in,
  outC_Balises0012_MaarssenUtrechtCS_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises *outC)
{
  kcg_copy_TrackSectionData_T_InfraLib(&outC->_L6, SectionData_in);
  kcg_copy_CompressedBaliseMessage_TM(&outC->_L3, &outC->_L6.BG_Message);
  outC->_L2 = outC->_L6.TrainPosRaw.TrainPosCalibrated;
  /* 1 */
  Balise_Group_438_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises(
    &outC->_L3,
    outC->_L2,
    (BaliseGroupData_TM *) &BG438_Balises426,
    &outC->Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L1,
    &outC->Context_1.BG_message_out);
  /* 1 */
  Balise_Group_439_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises(
    &outC->_L1,
    outC->_L2,
    (BaliseGroupData_TM *) &BG439_Balises426,
    &outC->_1_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L7,
    &outC->_1_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_440_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises(
    &outC->_L7,
    outC->_L2,
    (BaliseGroupData_TM *) &BG440_Balises426,
    &outC->_2_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L8,
    &outC->_2_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_441_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises(
    &outC->_L8,
    outC->_L2,
    (BaliseGroupData_TM *) &BG441_Balises426,
    &outC->_3_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L9,
    &outC->_3_Context_1.BG_message_out);
  kcg_copy_TrackSectionData_T_InfraLib(&outC->_L4, &outC->_L6);
  if (kcg_true) {
    kcg_copy_CompressedBaliseMessage_TM(&outC->_L4.BG_Message, &outC->_L9);
  }
  kcg_copy_TrackSectionData_T_InfraLib(&outC->SectionData_out, &outC->_L4);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balises0012_MaarssenUtrechtCS_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises.c
** Generation date: 2015-08-20T18:20:31
*************************************************************$ */

