/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balises0011_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises.h"

/* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balises0011_Maarssen */
void Balises0011_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balises0011_Maarssen::SectionData_in */ TrackSectionData_T_InfraLib *SectionData_in,
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balises0011_Maarssen::SectionData_out */ TrackSectionData_T_InfraLib *SectionData_out)
{
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balises0011_Maarssen::_L4 */
  static TrackSectionData_T_InfraLib _L4;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balises0011_Maarssen::_L3 */
  static CompressedBaliseMessage_TM _L3;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balises0011_Maarssen::_L2 */
  static kcg_real _L2;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balises0011_Maarssen::_L1 */
  static CompressedBaliseMessage_TM _L1;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balises0011_Maarssen::_L6 */
  static TrackSectionData_T_InfraLib _L6;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balises0011_Maarssen::_L7 */
  static CompressedBaliseMessage_TM _L7;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balises0011_Maarssen::_L19 */
  static CompressedBaliseMessage_TM _L19;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balises0011_Maarssen::_L18 */
  static CompressedBaliseMessage_TM _L18;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balises0011_Maarssen::_L17 */
  static CompressedBaliseMessage_TM _L17;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balises0011_Maarssen::_L16 */
  static CompressedBaliseMessage_TM _L16;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balises0011_Maarssen::_L15 */
  static CompressedBaliseMessage_TM _L15;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balises0011_Maarssen::_L14 */
  static CompressedBaliseMessage_TM _L14;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balises0011_Maarssen::_L13 */
  static CompressedBaliseMessage_TM _L13;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balises0011_Maarssen::_L12 */
  static CompressedBaliseMessage_TM _L12;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balises0011_Maarssen::_L11 */
  static CompressedBaliseMessage_TM _L11;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balises0011_Maarssen::_L10 */
  static CompressedBaliseMessage_TM _L10;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balises0011_Maarssen::_L9 */
  static CompressedBaliseMessage_TM _L9;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balises0011_Maarssen::_L20 */
  static CompressedBaliseMessage_TM _L20;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balises0011_Maarssen::_L8 */
  static CompressedBaliseMessage_TM _L8;
  
  kcg_copy_TrackSectionData_T_InfraLib(&_L6, SectionData_in);
  kcg_copy_CompressedBaliseMessage_TM(&_L3, &_L6.BG_Message);
  _L2 = _L6.TrainPosRaw.TrainPosCalibrated;
  /* 1 */
  Balise_Group_424_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &_L3,
    _L2,
    (BaliseGroupData_TM *) &BG424_Balises426,
    &_L1);
  /* 1 */
  Balise_Group_425_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &_L1,
    _L2,
    (BaliseGroupData_TM *) &BG425_Balises426,
    &_L7);
  /* 1 */
  Balise_Group_426_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &_L7,
    _L2,
    (BaliseGroupData_TM *) &BG426_Balises426,
    &_L8);
  /* 1 */
  Balise_Group_427_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &_L8,
    _L2,
    (BaliseGroupData_TM *) &BG427_Balises426,
    &_L9);
  /* 1 */
  Balise_Group_428_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &_L9,
    _L2,
    (BaliseGroupData_TM *) &BG428_Balises426,
    &_L10);
  /* 1 */
  Balise_Group_429_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &_L10,
    _L2,
    (BaliseGroupData_TM *) &BG429_Balises426,
    &_L11);
  /* 1 */
  Balise_Group_477_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &_L11,
    _L2,
    (BaliseGroupData_TM *) &BG477_Balises426,
    &_L12);
  /* 1 */
  Balise_Group_430_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &_L12,
    _L2,
    (BaliseGroupData_TM *) &BG430_Balises426,
    &_L13);
  /* 1 */
  Balise_Group_431_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &_L13,
    _L2,
    (BaliseGroupData_TM *) &BG431_Balises426,
    &_L14);
  /* 1 */
  Balise_Group_432_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &_L14,
    _L2,
    (BaliseGroupData_TM *) &BG432_Balises426,
    &_L15);
  /* 1 */
  Balise_Group_433_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &_L15,
    _L2,
    (BaliseGroupData_TM *) &BG433_Balises426,
    &_L16);
  /* 1 */
  Balise_Group_434_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &_L16,
    _L2,
    (BaliseGroupData_TM *) &BG434_Balises426,
    &_L17);
  /* 1 */
  Balise_Group_435_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &_L17,
    _L2,
    (BaliseGroupData_TM *) &BG435_Balises426,
    &_L18);
  /* 1 */
  Balise_Group_436_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &_L18,
    _L2,
    (BaliseGroupData_TM *) &BG436_Balises426,
    &_L19);
  /* 1 */
  Balise_Group_437_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &_L19,
    _L2,
    (BaliseGroupData_TM *) &BG437_Balises426,
    &_L20);
  kcg_copy_TrackSectionData_T_InfraLib(&_L4, &_L6);
  if (kcg_true) {
    kcg_copy_CompressedBaliseMessage_TM(&_L4.BG_Message, &_L20);
  }
  kcg_copy_TrackSectionData_T_InfraLib(SectionData_out, &_L4);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Balises0011_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

