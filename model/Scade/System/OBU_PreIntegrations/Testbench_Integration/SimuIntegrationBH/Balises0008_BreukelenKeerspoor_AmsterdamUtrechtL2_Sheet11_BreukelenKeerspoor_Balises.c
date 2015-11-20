/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balises0008_BreukelenKeerspoor_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises.h"

/* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balises0008_BreukelenKeerspoor */
void Balises0008_BreukelenKeerspoor_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balises0008_BreukelenKeerspoor::SectionData_in */ TrackSectionData_T_InfraLib *SectionData_in,
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balises0008_BreukelenKeerspoor::SectionData_out */ TrackSectionData_T_InfraLib *SectionData_out)
{
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balises0008_BreukelenKeerspoor::_L4 */
  static TrackSectionData_T_InfraLib _L4;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balises0008_BreukelenKeerspoor::_L3 */
  static CompressedBaliseMessage_TM _L3;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balises0008_BreukelenKeerspoor::_L2 */
  static kcg_real _L2;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balises0008_BreukelenKeerspoor::_L1 */
  static CompressedBaliseMessage_TM _L1;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balises0008_BreukelenKeerspoor::_L6 */
  static TrackSectionData_T_InfraLib _L6;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balises0008_BreukelenKeerspoor::_L7 */
  static CompressedBaliseMessage_TM _L7;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balises0008_BreukelenKeerspoor::_L8 */
  static CompressedBaliseMessage_TM _L8;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balises0008_BreukelenKeerspoor::_L9 */
  static CompressedBaliseMessage_TM _L9;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balises0008_BreukelenKeerspoor::_L10 */
  static CompressedBaliseMessage_TM _L10;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balises0008_BreukelenKeerspoor::_L11 */
  static CompressedBaliseMessage_TM _L11;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balises0008_BreukelenKeerspoor::_L12 */
  static CompressedBaliseMessage_TM _L12;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balises0008_BreukelenKeerspoor::_L13 */
  static CompressedBaliseMessage_TM _L13;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balises0008_BreukelenKeerspoor::_L14 */
  static CompressedBaliseMessage_TM _L14;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balises0008_BreukelenKeerspoor::_L15 */
  static CompressedBaliseMessage_TM _L15;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balises0008_BreukelenKeerspoor::_L16 */
  static CompressedBaliseMessage_TM _L16;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balises0008_BreukelenKeerspoor::_L17 */
  static CompressedBaliseMessage_TM _L17;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balises0008_BreukelenKeerspoor::_L18 */
  static CompressedBaliseMessage_TM _L18;
  
  kcg_copy_TrackSectionData_T_InfraLib(&_L6, SectionData_in);
  kcg_copy_CompressedBaliseMessage_TM(&_L3, &_L6.BG_Message);
  _L2 = _L6.TrainPosRaw.TrainPosCalibrated;
  /* 1 */
  Balise_Group_397_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &_L3,
    _L2,
    (BaliseGroupData_TM *) &BG397_Balises426,
    &_L1);
  /* 1 */
  Balise_Group_398_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &_L1,
    _L2,
    (BaliseGroupData_TM *) &BG398_Balises426,
    &_L7);
  /* 1 */
  Balise_Group_399_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &_L7,
    _L2,
    (BaliseGroupData_TM *) &BG399_Balises426,
    &_L8);
  /* 1 */
  Balise_Group_400_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &_L8,
    _L2,
    (BaliseGroupData_TM *) &BG400_Balises426,
    &_L9);
  /* 1 */
  Balise_Group_401_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &_L9,
    _L2,
    (BaliseGroupData_TM *) &BG401_Balises426,
    &_L10);
  /* 1 */
  Balise_Group_402_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &_L10,
    _L2,
    (BaliseGroupData_TM *) &BG402_Balises426,
    &_L11);
  /* 1 */
  Balise_Group_403_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &_L11,
    _L2,
    (BaliseGroupData_TM *) &BG403_Balises426,
    &_L12);
  /* 1 */
  Balise_Group_404_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &_L12,
    _L2,
    (BaliseGroupData_TM *) &BG404_Balises426,
    &_L13);
  /* 1 */
  Balise_Group_405_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &_L13,
    _L2,
    (BaliseGroupData_TM *) &BG405_Balises426,
    &_L14);
  /* 2 */
  Balise_Group_406_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &_L14,
    _L2,
    (BaliseGroupData_TM *) &BG406_Balises426,
    &_L15);
  /* 2 */
  Balise_Group_407_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &_L15,
    _L2,
    (BaliseGroupData_TM *) &BG407_Balises426,
    &_L16);
  /* 1 */
  Balise_Group_408_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &_L16,
    _L2,
    (BaliseGroupData_TM *) &BG408_Balises426,
    &_L17);
  /* 1 */
  Balise_Group_409_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &_L17,
    _L2,
    (BaliseGroupData_TM *) &BG409_Balises426,
    &_L18);
  kcg_copy_TrackSectionData_T_InfraLib(&_L4, &_L6);
  if (kcg_true) {
    kcg_copy_CompressedBaliseMessage_TM(&_L4.BG_Message, &_L18);
  }
  kcg_copy_TrackSectionData_T_InfraLib(SectionData_out, &_L4);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Balises0008_BreukelenKeerspoor_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

