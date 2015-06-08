/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-06T10:16:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SIM_05_Amstel_Standalone_AmsterdamUtrechtL1_Sheet05_Amstel.h"

void SIM_05_Amstel_Standalone_reset_AmsterdamUtrechtL1_Sheet05_Amstel(
  outC_SIM_05_Amstel_Standalone_AmsterdamUtrechtL1_Sheet05_Amstel *outC)
{
  /* 1 */
  Sheet05_Amstel_reset_AmsterdamUtrechtL1_Sheet05_Amstel(&outC->_1_Context_1);
  /* 1 */ TrackInit_reset_InfraLib(&outC->Context_1);
}

/* AmsterdamUtrechtL1::Sheet05_Amstel::SIM_05_Amstel_Standalone */
void SIM_05_Amstel_Standalone_AmsterdamUtrechtL1_Sheet05_Amstel(
  inC_SIM_05_Amstel_Standalone_AmsterdamUtrechtL1_Sheet05_Amstel *inC,
  outC_SIM_05_Amstel_Standalone_AmsterdamUtrechtL1_Sheet05_Amstel *outC)
{
  outC->_L3 = inC->TrainPosIn;
  /* 1 */ TrackInit_InfraLib(outC->_L3, 103907, &outC->Context_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &outC->_L2,
    &outC->Context_1.SectionData_out);
  /* 1 */
  Sheet05_Amstel_AmsterdamUtrechtL1_Sheet05_Amstel(
    &outC->_L2,
    &outC->_1_Context_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &outC->_L1,
    &outC->_1_Context_1.SectionData_out);
  kcg_copy_CompressedBaliseMessage_TM(&outC->_L4, &outC->_L1.BG_Message);
  kcg_copy_CompressedBaliseMessage_TM(&outC->BaliseMessageOut, &outC->_L4);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SIM_05_Amstel_Standalone_AmsterdamUtrechtL1_Sheet05_Amstel.c
** Generation date: 2015-06-06T10:16:11
*************************************************************$ */

