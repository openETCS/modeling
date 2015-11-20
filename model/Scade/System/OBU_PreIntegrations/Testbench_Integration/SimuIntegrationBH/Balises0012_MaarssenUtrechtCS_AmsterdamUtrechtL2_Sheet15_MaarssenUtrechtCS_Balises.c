/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balises0012_MaarssenUtrechtCS_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises.h"

/* AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_Balises::Balises0012_MaarssenUtrechtCS */
void Balises0012_MaarssenUtrechtCS_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises(
  /* AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_Balises::Balises0012_MaarssenUtrechtCS::SectionData_in */ TrackSectionData_T_InfraLib *SectionData_in,
  /* AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_Balises::Balises0012_MaarssenUtrechtCS::SectionData_out */ TrackSectionData_T_InfraLib *SectionData_out)
{
  /* AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_Balises::Balises0012_MaarssenUtrechtCS::_L4 */
  static TrackSectionData_T_InfraLib _L4;
  /* AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_Balises::Balises0012_MaarssenUtrechtCS::_L3 */
  static CompressedBaliseMessage_TM _L3;
  /* AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_Balises::Balises0012_MaarssenUtrechtCS::_L2 */
  static kcg_real _L2;
  /* AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_Balises::Balises0012_MaarssenUtrechtCS::_L1 */
  static CompressedBaliseMessage_TM _L1;
  /* AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_Balises::Balises0012_MaarssenUtrechtCS::_L6 */
  static TrackSectionData_T_InfraLib _L6;
  /* AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_Balises::Balises0012_MaarssenUtrechtCS::_L7 */
  static CompressedBaliseMessage_TM _L7;
  /* AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_Balises::Balises0012_MaarssenUtrechtCS::_L8 */
  static CompressedBaliseMessage_TM _L8;
  /* AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_Balises::Balises0012_MaarssenUtrechtCS::_L9 */
  static CompressedBaliseMessage_TM _L9;
  /* AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_Balises::Balises0012_MaarssenUtrechtCS::_L10 */
  static CompressedBaliseMessage_TM _L10;
  /* AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_Balises::Balises0012_MaarssenUtrechtCS::_L11 */
  static CompressedBaliseMessage_TM _L11;
  /* AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_Balises::Balises0012_MaarssenUtrechtCS::_L12 */
  static CompressedBaliseMessage_TM _L12;
  /* AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_Balises::Balises0012_MaarssenUtrechtCS::_L13 */
  static CompressedBaliseMessage_TM _L13;
  
  kcg_copy_TrackSectionData_T_InfraLib(&_L6, SectionData_in);
  kcg_copy_CompressedBaliseMessage_TM(&_L3, &_L6.BG_Message);
  _L2 = _L6.TrainPosRaw.TrainPosCalibrated;
  /* 1 */
  Balise_Group_438_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises(
    &_L3,
    _L2,
    (BaliseGroupData_TM *) &BG438_Balises426,
    &_L1);
  /* 1 */
  Balise_Group_439_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises(
    &_L1,
    _L2,
    (BaliseGroupData_TM *) &BG439_Balises426,
    &_L7);
  /* 1 */
  Balise_Group_440_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises(
    &_L7,
    _L2,
    (BaliseGroupData_TM *) &BG440_Balises426,
    &_L8);
  /* 1 */
  Balise_Group_441_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises(
    &_L8,
    _L2,
    (BaliseGroupData_TM *) &BG441_Balises426,
    &_L9);
  /* 1 */
  Balise_Group_442_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises(
    &_L9,
    _L2,
    (BaliseGroupData_TM *) &BG442_Balises426,
    &_L10);
  /* 1 */
  Balise_Group_443_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises(
    &_L10,
    _L2,
    (BaliseGroupData_TM *) &BG443_Balises426,
    &_L11);
  /* 1 */
  Balise_Group_444_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises(
    &_L11,
    _L2,
    (BaliseGroupData_TM *) &BG444_Balises426,
    &_L12);
  /* 1 */
  Balise_Group_445_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises(
    &_L12,
    _L2,
    (BaliseGroupData_TM *) &BG445_Balises426,
    &_L13);
  kcg_copy_TrackSectionData_T_InfraLib(&_L4, &_L6);
  if (kcg_true) {
    kcg_copy_CompressedBaliseMessage_TM(&_L4.BG_Message, &_L13);
  }
  kcg_copy_TrackSectionData_T_InfraLib(SectionData_out, &_L4);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Balises0012_MaarssenUtrechtCS_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

