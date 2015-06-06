/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-06T10:22:38
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Sheet05_Amstel_AmsterdamUtrechtL1_Sheet05_Amstel.h"

void Sheet05_Amstel_reset_AmsterdamUtrechtL1_Sheet05_Amstel(
  outC_Sheet05_Amstel_AmsterdamUtrechtL1_Sheet05_Amstel *outC)
{
  /* 1 */
  Balises0002_Amstel_UB_Sig_reset_AmsterdamUtrechtL1_Sheet05_Amstel(
    &outC->_2_Context_1);
  /* 2 */ TrackDiscontinuity_reset_InfraLib(&outC->Context_2);
  /* 1 */
  Balises0001_Amstel_UB_Sig_reset_AmsterdamUtrechtL1_Sheet05_Amstel(
    &outC->_1_Context_1);
  /* 1 */ TrackDiscontinuity_reset_InfraLib(&outC->Context_1);
}

/* AmsterdamUtrechtL1::Sheet05_Amstel::Sheet05_Amstel */
void Sheet05_Amstel_AmsterdamUtrechtL1_Sheet05_Amstel(
  inC_Sheet05_Amstel_AmsterdamUtrechtL1_Sheet05_Amstel *inC,
  outC_Sheet05_Amstel_AmsterdamUtrechtL1_Sheet05_Amstel *outC)
{
  kcg_copy_TrackSectionData_T_InfraLib(&outC->_L7, &inC->SectionData_in);
  /* 1 */
  TrackDiscontinuity_InfraLib(&outC->_L7, 104785, 105650, &outC->Context_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &outC->_L1,
    &outC->Context_1.SectionData_out);
  /* 1 */
  Balises0001_Amstel_UB_Sig_AmsterdamUtrechtL1_Sheet05_Amstel(
    &outC->_L1,
    &outC->_1_Context_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &outC->_L6,
    &outC->_1_Context_1.SectionData_out);
  /* 2 */
  TrackDiscontinuity_InfraLib(&outC->_L6, 1659 - 400, 32982, &outC->Context_2);
  kcg_copy_TrackSectionData_T_InfraLib(
    &outC->_L4,
    &outC->Context_2.SectionData_out);
  /* 1 */
  Balises0002_Amstel_UB_Sig_AmsterdamUtrechtL1_Sheet05_Amstel(
    &outC->_L4,
    &outC->_2_Context_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &outC->_L5,
    &outC->_2_Context_1.SectionData_out);
  kcg_copy_TrackSectionData_T_InfraLib(&outC->SectionData_out, &outC->_L5);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Sheet05_Amstel_AmsterdamUtrechtL1_Sheet05_Amstel.c
** Generation date: 2015-06-06T10:22:38
*************************************************************$ */

