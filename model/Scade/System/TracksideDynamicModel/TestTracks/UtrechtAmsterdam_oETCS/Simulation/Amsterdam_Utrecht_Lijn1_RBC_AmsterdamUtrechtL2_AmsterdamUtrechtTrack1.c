/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-03T01:08:56
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Amsterdam_Utrecht_Lijn1_RBC_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1.h"

void Amsterdam_Utrecht_Lijn1_RBC_reset_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
  outC_Amsterdam_Utrecht_Lijn1_RBC_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1 *outC)
{
}

/* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC */
void Amsterdam_Utrecht_Lijn1_RBC_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
  inC_Amsterdam_Utrecht_Lijn1_RBC_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1 *inC,
  outC_Amsterdam_Utrecht_Lijn1_RBC_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1 *outC)
{
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::_L1 */ R_data_internal_T_InfraLib _L1;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::_L2 */ R_data_internal_T_InfraLib _L2;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::_L3 */ M_TrackTrain_Radio_T_TM_radio_messages _L3;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::_L4 */ CompressedPackets_T_Common_Types_Pkg _L4;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::_L5 */ kcg_int _L5;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::_L6 */ kcg_bool _L6;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::_L7 */ R_data_internal_T_InfraLib _L7;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::_L9 */ CompressedPackets_T_Common_Types_Pkg _L9;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::_L8 */ M_TrackTrain_Radio_T_TM_radio_messages _L8;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::_L10 */ R_data_internal_T_InfraLib _L10;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::_L11 */ R_data_internal_T_InfraLib _L11;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::_L12 */ R_data_internal_T_InfraLib _L12;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::_L13 */ R_data_internal_T_InfraLib _L13;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::_L14 */ R_data_internal_T_InfraLib _L14;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::_L15 */ R_data_internal_T_InfraLib _L15;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::_L16 */ R_data_internal_T_InfraLib _L16;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::_L17 */ R_data_internal_T_InfraLib _L17;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::_L18 */ R_data_internal_T_InfraLib _L18;
  
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(&_L3, &inC->Message_in);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L4, &inC->Packets_in);
  _L5 = inC->Trigger_in;
  _L6 = inC->Message_sent;
  /* 1 */ RBC_init_RadioLib(&_L3, &_L4, _L5, _L6, &_L7);
  /* 1 */ RBC_Sheet05_Amstel_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(&_L7, &_L2);
  /* 1 */
  RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(&_L2, &_L1);
  /* 1 */
  RBC_Sheet07_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC(
    &_L1,
    &_L10);
  /* 1 */
  RBC_Sheet08A_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC(&_L10, &_L11);
  /* 1 */
  RBC_Sheet08B_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC(&_L11, &_L12);
  /* 1 */
  RBC_Sheet09_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC(
    &_L12,
    &_L13);
  /* 1 */
  RBC_Sheet11_BreukelenKeerspoor_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &_L13,
    &_L14);
  /* 1 */
  RBC_Sheet12_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC(&_L14, &_L15);
  /* 1 */
  RBC_Sheet13_Breukelen_Maarssen_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC(
    &_L15,
    &_L16);
  /* 1 */
  RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC(&_L16, &_L17);
  /* 1 */
  RBC_Sheet15_MaarssenUtrechtCS_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_RBC(
    &_L17,
    &_L18);
  /* 1 */ RBC_close_RadioLib(&_L18, &_L8, &_L9);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->Packets_out, &_L9);
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(&outC->Message_out, &_L8);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Amsterdam_Utrecht_Lijn1_RBC_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1.c
** Generation date: 2015-07-03T01:08:56
*************************************************************$ */

