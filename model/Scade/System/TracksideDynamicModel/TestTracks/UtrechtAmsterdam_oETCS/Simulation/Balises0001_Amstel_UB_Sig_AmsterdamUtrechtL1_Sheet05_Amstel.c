/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-06T10:22:38
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balises0001_Amstel_UB_Sig_AmsterdamUtrechtL1_Sheet05_Amstel.h"

void Balises0001_Amstel_UB_Sig_reset_AmsterdamUtrechtL1_Sheet05_Amstel(
  outC_Balises0001_Amstel_UB_Sig_AmsterdamUtrechtL1_Sheet05_Amstel *outC)
{
  /* 1 */
  Balise_Group_352_reset_AmsterdamUtrechtL1_Sheet05_Amstel(&outC->Context_1);
}

/* AmsterdamUtrechtL1::Sheet05_Amstel::Balises0001_Amstel_UB_Signal_611_to_613 */
void Balises0001_Amstel_UB_Sig_AmsterdamUtrechtL1_Sheet05_Amstel(
  /* AmsterdamUtrechtL1::Sheet05_Amstel::Balises0001_Amstel_UB_Signal_611_to_613::SectionData_in */TrackSectionData_T_InfraLib *SectionData_in,
  outC_Balises0001_Amstel_UB_Sig_AmsterdamUtrechtL1_Sheet05_Amstel *outC)
{
  kcg_copy_TrackSectionData_T_InfraLib(&outC->_L3, SectionData_in);
  kcg_copy_CompressedBaliseMessage_TM(&outC->_L13, &outC->_L3.BG_Message);
  outC->_L14 = outC->_L3.TrainPosRaw.TrainPosCalibrated;
  /* 1 */
  Balise_Group_352_AmsterdamUtrechtL1_Sheet05_Amstel(
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
** Balises0001_Amstel_UB_Sig_AmsterdamUtrechtL1_Sheet05_Amstel.c
** Generation date: 2015-06-06T10:22:38
*************************************************************$ */

