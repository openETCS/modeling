/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balises0009_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises.h"

/* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balises0009_Breukelen */
void Balises0009_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balises0009_Breukelen::SectionData_in */ TrackSectionData_T_InfraLib *SectionData_in,
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balises0009_Breukelen::SectionData_out */ TrackSectionData_T_InfraLib *SectionData_out)
{
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balises0009_Breukelen::_L4 */
  static TrackSectionData_T_InfraLib _L4;
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balises0009_Breukelen::_L3 */
  static CompressedBaliseMessage_TM _L3;
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balises0009_Breukelen::_L2 */
  static kcg_real _L2;
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balises0009_Breukelen::_L1 */
  static CompressedBaliseMessage_TM _L1;
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balises0009_Breukelen::_L6 */
  static TrackSectionData_T_InfraLib _L6;
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balises0009_Breukelen::_L7 */
  static CompressedBaliseMessage_TM _L7;
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balises0009_Breukelen::_L8 */
  static CompressedBaliseMessage_TM _L8;
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balises0009_Breukelen::_L9 */
  static CompressedBaliseMessage_TM _L9;
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balises0009_Breukelen::_L10 */
  static CompressedBaliseMessage_TM _L10;
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balises0009_Breukelen::_L11 */
  static CompressedBaliseMessage_TM _L11;
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balises0009_Breukelen::_L12 */
  static CompressedBaliseMessage_TM _L12;
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balises0009_Breukelen::_L13 */
  static CompressedBaliseMessage_TM _L13;
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balises0009_Breukelen::_L14 */
  static CompressedBaliseMessage_TM _L14;
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balises0009_Breukelen::_L15 */
  static CompressedBaliseMessage_TM _L15;
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balises0009_Breukelen::_L25 */
  static CompressedBaliseMessage_TM _L25;
  
  kcg_copy_TrackSectionData_T_InfraLib(&_L6, SectionData_in);
  kcg_copy_CompressedBaliseMessage_TM(&_L3, &_L6.BG_Message);
  _L2 = _L6.TrainPosRaw.TrainPosCalibrated;
  /* 1 */
  Balise_Group_410_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &_L3,
    _L2,
    (BaliseGroupData_TM *) &BG410_Balises426,
    &_L1);
  /* 1 */
  Balise_Group_476_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &_L1,
    _L2,
    (BaliseGroupData_TM *) &BG476_Balises426,
    &_L7);
  /* 1 */
  Balise_Group_411_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &_L7,
    _L2,
    (BaliseGroupData_TM *) &BG411_Balises426,
    &_L8);
  /* 1 */
  Balise_Group_412_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &_L8,
    _L2,
    (BaliseGroupData_TM *) &BG412_Balises426,
    &_L9);
  /* 1 */
  Balise_Group_413_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &_L9,
    _L2,
    (BaliseGroupData_TM *) &BG413_Balises426,
    &_L10);
  /* 1 */
  Balise_Group_414_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &_L10,
    _L2,
    (BaliseGroupData_TM *) &BG414_Balises426,
    &_L11);
  /* 1 */
  Balise_Group_415_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &_L11,
    _L2,
    (BaliseGroupData_TM *) &BG415_Balises426,
    &_L12);
  /* 1 */
  Balise_Group_416_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &_L12,
    _L2,
    (BaliseGroupData_TM *) &BG416_Balises426,
    &_L13);
  /* 1 */
  Balise_Group_417_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &_L13,
    _L2,
    (BaliseGroupData_TM *) &BG417_Balises426,
    &_L14);
  /* 1 */
  Balise_Group_418_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &_L14,
    _L2,
    (BaliseGroupData_TM *) &BG418_Balises426,
    &_L15);
  /* 2 */
  Balise_Group_419_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &_L15,
    _L2,
    (BaliseGroupData_TM *) &BG419_Balises426,
    &_L25);
  kcg_copy_TrackSectionData_T_InfraLib(&_L4, &_L6);
  if (kcg_true) {
    kcg_copy_CompressedBaliseMessage_TM(&_L4.BG_Message, &_L25);
  }
  kcg_copy_TrackSectionData_T_InfraLib(SectionData_out, &_L4);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Balises0009_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

