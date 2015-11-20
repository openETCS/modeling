/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Amsterdam_Utrecht_Lijn1_RBC_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1.h"

/* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC */
void Amsterdam_Utrecht_Lijn1_RBC_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::Message_in */ M_TrackTrain_Radio_T_TM_radio_messages *Message_in,
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::Packets_in */ CompressedPackets_T_Common_Types_Pkg *Packets_in,
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::Trigger_in */ kcg_int Trigger_in,
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::Message_sent */ kcg_bool Message_sent,
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::Message_out */ M_TrackTrain_Radio_T_TM_radio_messages *Message_out,
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::Packets_out */ CompressedPackets_T_Common_Types_Pkg *Packets_out)
{
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::_L2 */
  static R_data_internal_T_InfraLib _L2;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::_L3 */
  static M_TrackTrain_Radio_T_TM_radio_messages _L3;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::_L4 */
  static CompressedPackets_T_Common_Types_Pkg _L4;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::_L5 */
  static kcg_int _L5;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::_L6 */
  static kcg_bool _L6;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::_L7 */
  static R_data_internal_T_InfraLib _L7;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::_L9 */
  static CompressedPackets_T_Common_Types_Pkg _L9;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::_L8 */
  static M_TrackTrain_Radio_T_TM_radio_messages _L8;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::_L19 */
  static R_data_internal_T_InfraLib _L19;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::_L20 */
  static R_data_internal_T_InfraLib _L20;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::_L21 */
  static R_data_internal_T_InfraLib _L21;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::_L22 */
  static R_data_internal_T_InfraLib _L22;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::_L23 */
  static R_data_internal_T_InfraLib _L23;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::_L24 */
  static R_data_internal_T_InfraLib _L24;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::_L25 */
  static R_data_internal_T_InfraLib _L25;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::_L26 */
  static R_data_internal_T_InfraLib _L26;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::_L27 */
  static R_data_internal_T_InfraLib _L27;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::_L28 */
  static R_data_internal_T_InfraLib _L28;
  
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(&_L3, Message_in);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L4, Packets_in);
  _L5 = Trigger_in;
  _L6 = Message_sent;
  /* 1 */ RBC_init_RadioLib(&_L3, &_L4, _L5, _L6, &_L7);
  /* 1 */ RBC_Sheet05_Amstel_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(&_L7, &_L2);
  /* 1 */
  RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(&_L2, &_L19);
  /* 1 */
  Sheet07_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC(
    &_L19,
    &_L20);
  /* 1 */
  Sheet08A_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC(&_L20, &_L21);
  /* 1 */
  Sheet08B_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC(&_L21, &_L22);
  /* 1 */
  Sheet09_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC(
    &_L22,
    &_L23);
  /* 1 */
  Sheet11_BreukelenKeerspoor_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &_L23,
    &_L24);
  /* 1 */
  Sheet12_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC(&_L24, &_L25);
  /* 1 */
  Sheet13_Breukelen_Maarssen_RBC_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC(
    &_L25,
    &_L26);
  /* 1 */
  RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC(&_L26, &_L27);
  /* 1 */
  RBC_Sheet15_MaarssenUtrechtCS_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_RBC(
    &_L27,
    &_L28);
  /* 1 */ RBC_close_RadioLib(&_L28, &_L8, &_L9);
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(Message_out, &_L8);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(Packets_out, &_L9);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Amsterdam_Utrecht_Lijn1_RBC_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

