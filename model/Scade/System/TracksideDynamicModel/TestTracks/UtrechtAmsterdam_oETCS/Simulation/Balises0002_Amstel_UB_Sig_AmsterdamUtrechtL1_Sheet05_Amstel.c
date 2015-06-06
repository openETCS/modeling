/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-06T10:22:38
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balises0002_Amstel_UB_Sig_AmsterdamUtrechtL1_Sheet05_Amstel.h"

void Balises0002_Amstel_UB_Sig_reset_AmsterdamUtrechtL1_Sheet05_Amstel(
  outC_Balises0002_Amstel_UB_Sig_AmsterdamUtrechtL1_Sheet05_Amstel *outC)
{
  /* 2 */
  Balise_Group_353_reset_AmsterdamUtrechtL1_Sheet05_Amstel(&outC->Context_2);
}

/* AmsterdamUtrechtL1::Sheet05_Amstel::Balises0002_Amstel_UB_Signal_613_to_617 */
void Balises0002_Amstel_UB_Sig_AmsterdamUtrechtL1_Sheet05_Amstel(
  /* AmsterdamUtrechtL1::Sheet05_Amstel::Balises0002_Amstel_UB_Signal_613_to_617::SectionData_in */TrackSectionData_T_InfraLib *SectionData_in,
  outC_Balises0002_Amstel_UB_Sig_AmsterdamUtrechtL1_Sheet05_Amstel *outC)
{
  kcg_copy_TrackSectionData_T_InfraLib(&outC->_L6, SectionData_in);
  kcg_copy_CompressedBaliseMessage_TM(&outC->_L3, &outC->_L6.BG_Message);
  outC->_L2 = outC->_L6.TrainPosRaw.TrainPosCalibrated;
  /* 2 */
  Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel(
    &outC->_L3,
    outC->_L2,
    (BaliseGroupData_TM *) &BG353_Balises426,
    &outC->Context_2);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L1,
    &outC->Context_2.BG_message_out);
  kcg_copy_TrackSectionData_T_InfraLib(&outC->_L4, &outC->_L6);
  if (kcg_true) {
    kcg_copy_CompressedBaliseMessage_TM(&outC->_L4.BG_Message, &outC->_L1);
  }
  kcg_copy_TrackSectionData_T_InfraLib(&outC->SectionData_out, &outC->_L4);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balises0002_Amstel_UB_Sig_AmsterdamUtrechtL1_Sheet05_Amstel.c
** Generation date: 2015-06-06T10:22:38
*************************************************************$ */
