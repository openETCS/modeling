/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balises0003_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises.h"

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balises0003_Bijlmer */
void Balises0003_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balises0003_Bijlmer::SectionData_in */ TrackSectionData_T_InfraLib *SectionData_in,
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balises0003_Bijlmer::SectionData_out */ TrackSectionData_T_InfraLib *SectionData_out)
{
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balises0003_Bijlmer::_L4 */
  static TrackSectionData_T_InfraLib _L4;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balises0003_Bijlmer::_L3 */
  static CompressedBaliseMessage_TM _L3;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balises0003_Bijlmer::_L2 */
  static kcg_real _L2;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balises0003_Bijlmer::_L1 */
  static CompressedBaliseMessage_TM _L1;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balises0003_Bijlmer::_L6 */
  static TrackSectionData_T_InfraLib _L6;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balises0003_Bijlmer::_L7 */
  static CompressedBaliseMessage_TM _L7;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balises0003_Bijlmer::_L8 */
  static CompressedBaliseMessage_TM _L8;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balises0003_Bijlmer::_L9 */
  static CompressedBaliseMessage_TM _L9;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balises0003_Bijlmer::_L10 */
  static CompressedBaliseMessage_TM _L10;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balises0003_Bijlmer::_L11 */
  static CompressedBaliseMessage_TM _L11;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balises0003_Bijlmer::_L12 */
  static CompressedBaliseMessage_TM _L12;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balises0003_Bijlmer::_L13 */
  static CompressedBaliseMessage_TM _L13;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balises0003_Bijlmer::_L14 */
  static CompressedBaliseMessage_TM _L14;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balises0003_Bijlmer::_L15 */
  static CompressedBaliseMessage_TM _L15;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balises0003_Bijlmer::_L16 */
  static CompressedBaliseMessage_TM _L16;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balises0003_Bijlmer::_L17 */
  static CompressedBaliseMessage_TM _L17;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balises0003_Bijlmer::_L18 */
  static CompressedBaliseMessage_TM _L18;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balises0003_Bijlmer::_L19 */
  static CompressedBaliseMessage_TM _L19;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balises0003_Bijlmer::_L20 */
  static CompressedBaliseMessage_TM _L20;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balises0003_Bijlmer::_L21 */
  static CompressedBaliseMessage_TM _L21;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balises0003_Bijlmer::_L22 */
  static CompressedBaliseMessage_TM _L22;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balises0003_Bijlmer::_L23 */
  static CompressedBaliseMessage_TM _L23;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balises0003_Bijlmer::_L24 */
  static CompressedBaliseMessage_TM _L24;
  
  kcg_copy_TrackSectionData_T_InfraLib(&_L6, SectionData_in);
  kcg_copy_CompressedBaliseMessage_TM(&_L3, &_L6.BG_Message);
  _L2 = _L6.TrainPosRaw.TrainPosCalibrated;
  /* 1 */
  Balise_Group_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &_L3,
    _L2,
    (BaliseGroupData_TM *) &BG354_Balises426,
    &_L1);
  /* 1 */
  Balise_Group_351_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &_L1,
    _L2,
    (BaliseGroupData_TM *) &BG351_Balises426,
    &_L7);
  /* 1 */
  Balise_Group_355_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &_L7,
    _L2,
    (BaliseGroupData_TM *) &BG355_Balises426,
    &_L8);
  /* 1 */
  Balise_Group_356_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &_L8,
    _L2,
    (BaliseGroupData_TM *) &BG356_Balises426,
    &_L9);
  /* 1 */
  Balise_Group_357_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &_L9,
    _L2,
    (BaliseGroupData_TM *) &BG357_Balises426,
    &_L10);
  /* 1 */
  Balise_Group_358_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &_L10,
    _L2,
    (BaliseGroupData_TM *) &BG358_Balises426,
    &_L11);
  /* 1 */
  Balise_Group_359_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &_L11,
    _L2,
    (BaliseGroupData_TM *) &BG359_Balises426,
    &_L12);
  /* 1 */
  Balise_Group_360_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &_L12,
    _L2,
    (BaliseGroupData_TM *) &BG360_Balises426,
    &_L13);
  /* 1 */
  Balise_Group_361_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &_L13,
    _L2,
    (BaliseGroupData_TM *) &BG361_Balises426,
    &_L14);
  /* 1 */
  Balise_Group_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &_L14,
    _L2,
    (BaliseGroupData_TM *) &BG362_Balises426,
    &_L15);
  /* 1 */
  Balise_Group_363_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &_L15,
    _L2,
    (BaliseGroupData_TM *) &BG363_Balises426,
    &_L16);
  /* 1 */
  Balise_Group_364_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &_L16,
    _L2,
    (BaliseGroupData_TM *) &BG364_Balises426,
    &_L17);
  /* 1 */
  Balise_Group_365_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &_L17,
    _L2,
    (BaliseGroupData_TM *) &BG365_Balises426,
    &_L18);
  /* 1 */
  Balise_Group_366_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &_L18,
    _L2,
    (BaliseGroupData_TM *) &BG366_Balises426,
    &_L19);
  /* 1 */
  Balise_Group_367_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &_L19,
    _L2,
    (BaliseGroupData_TM *) &BG367_Balises426,
    &_L20);
  /* 1 */
  Balise_Group_368_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &_L20,
    _L2,
    (BaliseGroupData_TM *) &BG368_Balises426,
    &_L21);
  /* 1 */
  Balise_Group_369_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &_L21,
    _L2,
    (BaliseGroupData_TM *) &BG369_Balises426,
    &_L22);
  /* 1 */
  Balise_Group_341_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &_L22,
    _L2,
    (BaliseGroupData_TM *) &BG341_Balises426,
    &_L23);
  /* 1 */
  Balise_Group_370_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &_L23,
    _L2,
    (BaliseGroupData_TM *) &BG370_Balises426,
    &_L24);
  kcg_copy_TrackSectionData_T_InfraLib(&_L4, &_L6);
  if (kcg_true) {
    kcg_copy_CompressedBaliseMessage_TM(&_L4.BG_Message, &_L24);
  }
  kcg_copy_TrackSectionData_T_InfraLib(SectionData_out, &_L4);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Balises0003_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

