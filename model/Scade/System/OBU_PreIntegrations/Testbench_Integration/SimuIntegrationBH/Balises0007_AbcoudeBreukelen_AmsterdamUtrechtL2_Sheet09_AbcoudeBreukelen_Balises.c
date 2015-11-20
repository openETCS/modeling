/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balises0007_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises.h"

/* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balises0007_AbcoudeBreukelen */
void Balises0007_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
  /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balises0007_AbcoudeBreukelen::SectionData_in */ TrackSectionData_T_InfraLib *SectionData_in,
  /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balises0007_AbcoudeBreukelen::SectionData_out */ TrackSectionData_T_InfraLib *SectionData_out)
{
  /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balises0007_AbcoudeBreukelen::_L4 */
  static TrackSectionData_T_InfraLib _L4;
  /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balises0007_AbcoudeBreukelen::_L3 */
  static CompressedBaliseMessage_TM _L3;
  /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balises0007_AbcoudeBreukelen::_L2 */
  static kcg_real _L2;
  /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balises0007_AbcoudeBreukelen::_L1 */
  static CompressedBaliseMessage_TM _L1;
  /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balises0007_AbcoudeBreukelen::_L6 */
  static TrackSectionData_T_InfraLib _L6;
  /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balises0007_AbcoudeBreukelen::_L7 */
  static CompressedBaliseMessage_TM _L7;
  /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balises0007_AbcoudeBreukelen::_L8 */
  static CompressedBaliseMessage_TM _L8;
  /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balises0007_AbcoudeBreukelen::_L9 */
  static CompressedBaliseMessage_TM _L9;
  /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balises0007_AbcoudeBreukelen::_L10 */
  static CompressedBaliseMessage_TM _L10;
  /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balises0007_AbcoudeBreukelen::_L11 */
  static CompressedBaliseMessage_TM _L11;
  /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balises0007_AbcoudeBreukelen::_L12 */
  static CompressedBaliseMessage_TM _L12;
  /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balises0007_AbcoudeBreukelen::_L13 */
  static CompressedBaliseMessage_TM _L13;
  
  kcg_copy_TrackSectionData_T_InfraLib(&_L6, SectionData_in);
  kcg_copy_CompressedBaliseMessage_TM(&_L3, &_L6.BG_Message);
  _L2 = _L6.TrainPosRaw.TrainPosCalibrated;
  /* 1 */
  Balise_Group_389_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &_L3,
    _L2,
    (BaliseGroupData_TM *) &BG389_Balises426,
    &_L1);
  /* 1 */
  Balise_Group_390_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &_L1,
    _L2,
    (BaliseGroupData_TM *) &BG390_Balises426,
    &_L7);
  /* 1 */
  Balise_Group_391_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &_L7,
    _L2,
    (BaliseGroupData_TM *) &BG391_Balises426,
    &_L8);
  /* 1 */
  Balise_Group_392_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &_L8,
    _L2,
    (BaliseGroupData_TM *) &BG392_Balises426,
    &_L9);
  /* 1 */
  Balise_Group_393_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &_L9,
    _L2,
    (BaliseGroupData_TM *) &BG393_Balises426,
    &_L10);
  /* 1 */
  Balise_Group_394_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &_L10,
    _L2,
    (BaliseGroupData_TM *) &BG394_Balises426,
    &_L11);
  /* 1 */
  Balise_Group_395_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &_L11,
    _L2,
    (BaliseGroupData_TM *) &BG395_Balises426,
    &_L12);
  /* 1 */
  Balise_Group_396_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &_L12,
    _L2,
    (BaliseGroupData_TM *) &BG396_Balises426,
    &_L13);
  kcg_copy_TrackSectionData_T_InfraLib(&_L4, &_L6);
  if (kcg_true) {
    kcg_copy_CompressedBaliseMessage_TM(&_L4.BG_Message, &_L13);
  }
  kcg_copy_TrackSectionData_T_InfraLib(SectionData_out, &_L4);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Balises0007_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

