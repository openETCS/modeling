/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Amsterdam_Utrecht_Lijn1_balises_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1.h"

/* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises */
void Amsterdam_Utrecht_Lijn1_balises_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises::TrainPosSim_in */ kcg_real TrainPosSim_in,
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises::BaliseMessage */ CompressedBaliseMessage_TM *BaliseMessage)
{
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises::_L1 */
  static TrackSectionData_T_InfraLib _L1;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises::_L2 */
  static TrackSectionData_T_InfraLib _L2;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises::_L3 */
  static TrackSectionData_T_InfraLib _L3;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises::_L4 */
  static TrackSectionData_T_InfraLib _L4;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises::_L5 */
  static TrackSectionData_T_InfraLib _L5;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises::_L6 */
  static TrackSectionData_T_InfraLib _L6;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises::_L7 */
  static TrackSectionData_T_InfraLib _L7;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises::_L8 */
  static TrackSectionData_T_InfraLib _L8;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises::_L9 */
  static TrackSectionData_T_InfraLib _L9;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises::_L10 */
  static TrackSectionData_T_InfraLib _L10;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises::_L11 */
  static TrackSectionData_T_InfraLib _L11;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises::_L12 */
  static TrackSectionData_T_InfraLib _L12;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises::_L13 */
  static TrackSectionData_T_InfraLib _L13;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises::_L14 */
  static TrackSectionData_T_InfraLib _L14;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises::_L15 */
  static TrackSectionData_T_InfraLib _L15;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises::_L16 */
  static kcg_real _L16;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises::_L17 */
  static CompressedBaliseMessage_TM _L17;
  
  _L16 = TrainPosSim_in;
  /* 1 */ TrackInit_InfraLib(_L16, 0, &_L15);
  /* 1 */ TrackDiscontinuity_InfraLib(&_L15, 104775, 105650, &_L13);
  /* 1 */
  Balises0001_Amstel_UB_Signal_611_to_613_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
    &_L13,
    &_L1);
  /* 2 */ TrackDiscontinuity_InfraLib(&_L1, 1659 - 400, 32962, &_L14);
  /* 1 */
  Balises0002_Amstel_UB_Signal_613_to_617_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
    &_L14,
    &_L2);
  /* 1 */
  Balises0003_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(&_L2, &_L3);
  /* 1 */
  Balises0004_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises(
    &_L3,
    &_L4);
  /* 1 */
  Balises0005_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises(&_L4, &_L5);
  /* 1 */
  Balises0006_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(&_L5, &_L6);
  /* 1 */
  Balises0007_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &_L6,
    &_L7);
  /* 1 */
  Balises0008_BreukelenKeerspoor_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &_L7,
    &_L8);
  /* 1 */
  Balises0009_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &_L8,
    &_L9);
  /* 1 */
  Balises0010_Breukelen_Maarssen_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_Balises(
    &_L9,
    &_L10);
  /* 1 */
  Balises0011_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &_L10,
    &_L11);
  /* 1 */
  Balises0012_MaarssenUtrechtCS_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises(
    &_L11,
    &_L12);
  /* 1 */ TrackClose_InfraLib(&_L12, &_L17);
  kcg_copy_CompressedBaliseMessage_TM(BaliseMessage, &_L17);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Amsterdam_Utrecht_Lijn1_balises_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

