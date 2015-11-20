/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balises0006_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises.h"

/* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balises0006_Abcoude */
void Balises0006_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balises0006_Abcoude::SectionData_in */ TrackSectionData_T_InfraLib *SectionData_in,
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balises0006_Abcoude::SectionData_out */ TrackSectionData_T_InfraLib *SectionData_out)
{
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balises0006_Abcoude::_L4 */
  static TrackSectionData_T_InfraLib _L4;
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balises0006_Abcoude::_L3 */
  static CompressedBaliseMessage_TM _L3;
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balises0006_Abcoude::_L2 */
  static kcg_real _L2;
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balises0006_Abcoude::_L1 */
  static CompressedBaliseMessage_TM _L1;
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balises0006_Abcoude::_L6 */
  static TrackSectionData_T_InfraLib _L6;
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balises0006_Abcoude::_L7 */
  static CompressedBaliseMessage_TM _L7;
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balises0006_Abcoude::_L8 */
  static CompressedBaliseMessage_TM _L8;
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balises0006_Abcoude::_L9 */
  static CompressedBaliseMessage_TM _L9;
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balises0006_Abcoude::_L10 */
  static CompressedBaliseMessage_TM _L10;
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balises0006_Abcoude::_L11 */
  static CompressedBaliseMessage_TM _L11;
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balises0006_Abcoude::_L12 */
  static CompressedBaliseMessage_TM _L12;
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balises0006_Abcoude::_L13 */
  static CompressedBaliseMessage_TM _L13;
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balises0006_Abcoude::_L14 */
  static CompressedBaliseMessage_TM _L14;
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balises0006_Abcoude::_L15 */
  static CompressedBaliseMessage_TM _L15;
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balises0006_Abcoude::_L16 */
  static CompressedBaliseMessage_TM _L16;
  
  kcg_copy_TrackSectionData_T_InfraLib(&_L6, SectionData_in);
  kcg_copy_CompressedBaliseMessage_TM(&_L3, &_L6.BG_Message);
  _L2 = _L6.TrainPosRaw.TrainPosCalibrated;
  /* 1 */
  Balise_Group_378_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &_L3,
    _L2,
    (BaliseGroupData_TM *) &BG378_Balises426,
    &_L1);
  /* 1 */
  Balise_Group_379_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &_L1,
    _L2,
    (BaliseGroupData_TM *) &BG379_Balises426,
    &_L7);
  /* 1 */
  Balise_Group_380_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &_L7,
    _L2,
    (BaliseGroupData_TM *) &BG380_Balises426,
    &_L8);
  /* 1 */
  Balise_Group_381_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &_L8,
    _L2,
    (BaliseGroupData_TM *) &BG381_Balises426,
    &_L9);
  /* 1 */
  Balise_Group_382_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &_L9,
    _L2,
    (BaliseGroupData_TM *) &BG382_Balises426,
    &_L10);
  /* 1 */
  Balise_Group_383_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &_L10,
    _L2,
    (BaliseGroupData_TM *) &BG383_Balises426,
    &_L11);
  /* 1 */
  Balise_Group_384_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &_L11,
    _L2,
    (BaliseGroupData_TM *) &BG384_Balises426,
    &_L12);
  /* 1 */
  Balise_Group_385_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &_L12,
    _L2,
    (BaliseGroupData_TM *) &BG385_Balises426,
    &_L13);
  /* 1 */
  Balise_Group_386_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &_L13,
    _L2,
    (BaliseGroupData_TM *) &BG386_Balises426,
    &_L14);
  /* 1 */
  Balise_Group_387_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &_L14,
    _L2,
    (BaliseGroupData_TM *) &BG387_Balises426,
    &_L15);
  /* 1 */
  Balise_Group_388_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &_L15,
    _L2,
    (BaliseGroupData_TM *) &BG388_Balises426,
    &_L16);
  kcg_copy_TrackSectionData_T_InfraLib(&_L4, &_L6);
  if (kcg_true) {
    kcg_copy_CompressedBaliseMessage_TM(&_L4.BG_Message, &_L16);
  }
  kcg_copy_TrackSectionData_T_InfraLib(SectionData_out, &_L4);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Balises0006_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

