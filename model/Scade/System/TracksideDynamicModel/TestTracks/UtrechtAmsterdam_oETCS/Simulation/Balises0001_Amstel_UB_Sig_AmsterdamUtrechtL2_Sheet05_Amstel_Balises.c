/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-09T20:36:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balises0001_Amstel_UB_Sig_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.h"

void Balises0001_Amstel_UB_Sig_reset_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
  outC_Balises0001_Amstel_UB_Sig_AmsterdamUtrechtL2_Sheet05_Amstel_Balises *outC)
{
  /* 1 */
  Balise_Group_352_reset_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
    &outC->Context_1);
}

/* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balises0001_Amstel_UB_Signal_611_to_613 */
void Balises0001_Amstel_UB_Sig_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
  /* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balises0001_Amstel_UB_Signal_611_to_613::SectionData_in */TrackSectionData_T_InfraLib *SectionData_in,
  outC_Balises0001_Amstel_UB_Sig_AmsterdamUtrechtL2_Sheet05_Amstel_Balises *outC)
{
  kcg_copy_TrackSectionData_T_InfraLib(&outC->_L3, SectionData_in);
  kcg_copy_CompressedBaliseMessage_TM(&outC->_L13, &outC->_L3.BG_Message);
  outC->_L14 = outC->_L3.TrainPosRaw.TrainPosCalibrated;
  /* 1 */
  Balise_Group_352_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
    &outC->_L13,
    outC->_L14,
    (BaliseGroupData_TM *) &BG352_Balises426,
    &outC->Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L1,
    &outC->Context_1.BG_message_out);
  kcg_copy_TrackSectionData_T_InfraLib(&outC->_L15, &outC->_L3);
  if (kcg_true) {
    kcg_copy_CompressedBaliseMessage_TM(&outC->_L15.BG_Message, &outC->_L1);
  }
  kcg_copy_TrackSectionData_T_InfraLib(&outC->SectionData_out, &outC->_L15);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balises0001_Amstel_UB_Sig_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.c
** Generation date: 2015-07-09T20:36:53
*************************************************************$ */

