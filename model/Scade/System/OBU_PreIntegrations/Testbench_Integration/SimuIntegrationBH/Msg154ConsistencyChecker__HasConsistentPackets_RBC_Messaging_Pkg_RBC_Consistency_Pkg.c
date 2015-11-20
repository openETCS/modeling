/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Msg154ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"

/* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg154ConsistencyChecker__HasConsistentPackets */
kcg_bool Msg154ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg154ConsistencyChecker__HasConsistentPackets::inRadioTrainTrackPackets */ outPackets_T_Common_Types_Pkg *inRadioTrainTrackPackets)
{
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg154ConsistencyChecker__HasConsistentPackets::_L22 */
  static kcg_bool _L22;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg154ConsistencyChecker__HasConsistentPackets::_L21 */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _L21;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg154ConsistencyChecker__HasConsistentPackets::_L20 */
  static kcg_bool _L20;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg154ConsistencyChecker__HasConsistentPackets::_L18 */
  static PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg _L18;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg154ConsistencyChecker__HasConsistentPackets::_L17 */
  static kcg_bool _L17;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg154ConsistencyChecker__HasConsistentPackets::_L16 */
  static outPackets_T_Common_Types_Pkg _L16;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg154ConsistencyChecker__HasConsistentPackets::_L15 */
  static kcg_bool _L15;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg154ConsistencyChecker__HasConsistentPackets::_L14 */
  static kcg_bool _L14;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg154ConsistencyChecker__HasConsistentPackets::_L13 */
  static kcg_bool _L13;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg154ConsistencyChecker__HasConsistentPackets::_L12 */
  static kcg_bool _L12;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg154ConsistencyChecker__HasConsistentPackets::_L11 */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _L11;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg154ConsistencyChecker__HasConsistentPackets::_L10 */
  static kcg_bool _L10;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg154ConsistencyChecker__HasConsistentPackets::_L9 */
  static PT5_TrainRunningNumber_Packet_TrainTypes_Pkg _L9;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg154ConsistencyChecker__HasConsistentPackets::_L8 */
  static PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg _L8;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg154ConsistencyChecker__HasConsistentPackets::_L7 */
  static kcg_bool _L7;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg154ConsistencyChecker__HasConsistentPackets::_L6 */
  static kcg_bool _L6;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg154ConsistencyChecker__HasConsistentPackets::_L5 */
  static kcg_bool _L5;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg154ConsistencyChecker__HasConsistentPackets::_L4 */
  static kcg_bool _L4;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg154ConsistencyChecker__HasConsistentPackets::_L3 */
  static PT4_ErrorReporting_T_Packet_TrainTypes_Pkg _L3;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg154ConsistencyChecker__HasConsistentPackets::_L2 */
  static kcg_bool _L2;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg154ConsistencyChecker__HasConsistentPackets::_L25 */
  static kcg_bool _L25;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg154ConsistencyChecker__HasConsistentPackets::_L24 */
  static PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg _L24;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg154ConsistencyChecker__HasConsistentPackets::_L23 */
  static kcg_bool _L23;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg154ConsistencyChecker__HasConsistentPackets::outIsConsistent */
  static kcg_bool outIsConsistent;
  
  kcg_copy_outPackets_T_Common_Types_Pkg(&_L16, inRadioTrainTrackPackets);
  /* 1 */
  RadioTrainTrackPackets__GetP001_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L16,
    &_L11);
  _L13 = /* 1 */
    RadioTrainTrackPacket001__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
      &_L11);
  _L2 = !_L13;
  /* 1 */
  RadioTrainTrackPackets__GetP004_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L16,
    &_L3);
  _L4 = /* 1 */
    RadioTrainTrackPacket004__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
      &_L3);
  /* 1 */
  RadioTrainTrackPackets__GetP003_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L16,
    &_L18);
  _L22 = /* 1 */
    RadioTrainTrackPacket003__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
      &_L18);
  _L5 = !_L22;
  /* 1 */
  RadioTrainTrackPackets__GetP011_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L16,
    &_L8);
  _L10 = /* 1 */
    RadioTrainTrackPacket011__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
      &_L8);
  _L6 = !_L10;
  _L7 = !_L4;
  /* 1 */
  RadioTrainTrackPackets__GetP005_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L16,
    &_L9);
  /* 1 */
  RadioTrainTrackPackets__GetP000_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L16,
    &_L21);
  _L20 = /* 1 */
    RadioTrainTrackPacket000__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
      &_L21);
  _L15 = !_L20;
  _L14 = /* 1 */
    RadioTrainTrackPacket005__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
      &_L9);
  _L17 = !_L14;
  /* 1 */
  RadioTrainTrackPackets__GetP009_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L16,
    &_L24);
  _L25 = /* 1 */
    RadioTrainTrackPacket009__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
      &_L24);
  _L23 = !_L25;
  _L12 = _L15 & _L2 & _L5 & _L7 & _L17 & _L23 & _L6;
  outIsConsistent = _L12;
  return outIsConsistent;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Msg154ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

