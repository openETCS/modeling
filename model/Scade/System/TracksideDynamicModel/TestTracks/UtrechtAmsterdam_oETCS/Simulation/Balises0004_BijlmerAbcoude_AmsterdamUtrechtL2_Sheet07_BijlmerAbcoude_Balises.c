/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-12T20:04:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balises0004_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises.h"

void Balises0004_BijlmerAbcoude_reset_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises(
  outC_Balises0004_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises *outC)
{
  /* 2 */
  Balise_Group_373_reset_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises(
    &outC->Context_2);
  /* 1 */
  Balise_Group_372_reset_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises(
    &outC->_1_Context_1);
  /* 1 */
  Balise_Group_371_reset_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises(
    &outC->Context_1);
}

/* AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_Balises::Balises0004_BijlmerAbcoude */
void Balises0004_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises(
  /* AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_Balises::Balises0004_BijlmerAbcoude::SectionData_in */TrackSectionData_T_InfraLib *SectionData_in,
  outC_Balises0004_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises *outC)
{
  kcg_copy_TrackSectionData_T_InfraLib(&outC->_L6, SectionData_in);
  kcg_copy_CompressedBaliseMessage_TM(&outC->_L3, &outC->_L6.BG_Message);
  outC->_L2 = outC->_L6.TrainPosRaw.TrainPosCalibrated;
  /* 1 */
  Balise_Group_371_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises(
    &outC->_L3,
    outC->_L2,
    (BaliseGroupData_TM *) &BG371_Balises426,
    &outC->Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L1,
    &outC->Context_1.BG_message_out);
  /* 1 */
  Balise_Group_372_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises(
    &outC->_L1,
    outC->_L2,
    (BaliseGroupData_TM *) &BG372_Balises426,
    &outC->_1_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L7,
    &outC->_1_Context_1.BG_message_out);
  /* 2 */
  Balise_Group_373_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises(
    &outC->_L7,
    outC->_L2,
    (BaliseGroupData_TM *) &BG373_Balises426,
    &outC->Context_2);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L8,
    &outC->Context_2.BG_message_out);
  kcg_copy_TrackSectionData_T_InfraLib(&outC->_L4, &outC->_L6);
  if (kcg_true) {
    kcg_copy_CompressedBaliseMessage_TM(&outC->_L4.BG_Message, &outC->_L8);
  }
  kcg_copy_TrackSectionData_T_InfraLib(&outC->SectionData_out, &outC->_L4);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balises0004_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises.c
** Generation date: 2015-08-12T20:04:58
*************************************************************$ */

