/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Msg155ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"

/* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentPackets */
kcg_bool Msg155ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentPackets::inRadioTrainTrackPackets */ outPackets_T_Common_Types_Pkg *inRadioTrainTrackPackets)
{
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentPackets::_L19 */
  static PT4_ErrorReporting_T_Packet_TrainTypes_Pkg _L19;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentPackets::_L18 */
  static outPackets_T_Common_Types_Pkg _L18;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentPackets::_L17 */
  static kcg_bool _L17;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentPackets::_L16 */
  static kcg_bool _L16;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentPackets::_L15 */
  static kcg_bool _L15;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentPackets::_L14 */
  static PT5_TrainRunningNumber_Packet_TrainTypes_Pkg _L14;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentPackets::_L13 */
  static kcg_bool _L13;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentPackets::_L12 */
  static PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg _L12;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentPackets::_L11 */
  static kcg_bool _L11;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentPackets::_L10 */
  static kcg_bool _L10;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentPackets::_L9 */
  static kcg_bool _L9;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentPackets::_L8 */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _L8;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentPackets::_L7 */
  static kcg_bool _L7;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentPackets::_L6 */
  static kcg_bool _L6;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentPackets::_L5 */
  static kcg_bool _L5;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentPackets::_L3 */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _L3;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentPackets::_L2 */
  static kcg_bool _L2;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentPackets::_L20 */
  static PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg _L20;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentPackets::_L21 */
  static kcg_bool _L21;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentPackets::_L22 */
  static kcg_bool _L22;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentPackets::_L28 */
  static kcg_bool _L28;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentPackets::_L27 */
  static kcg_bool _L27;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentPackets::_L26 */
  static PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg _L26;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentPackets::outIsConsistent */
  static kcg_bool outIsConsistent;
  
  kcg_copy_outPackets_T_Common_Types_Pkg(&_L18, inRadioTrainTrackPackets);
  /* 1 */
  RadioTrainTrackPackets__GetP000_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L18,
    &_L8);
  _L10 = /* 1 */
    RadioTrainTrackPacket000__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
      &_L8);
  _L5 = !_L10;
  /* 1 */
  RadioTrainTrackPackets__GetP001_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L18,
    &_L3);
  _L9 = /* 1 */
    RadioTrainTrackPacket001__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
      &_L3);
  _L13 = !_L9;
  /* 1 */
  RadioTrainTrackPackets__GetP003_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L18,
    &_L20);
  _L21 = /* 1 */
    RadioTrainTrackPacket003__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
      &_L20);
  _L22 = !_L21;
  /* 1 */
  RadioTrainTrackPackets__GetP004_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L18,
    &_L19);
  _L17 = /* 1 */
    RadioTrainTrackPacket004__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
      &_L19);
  _L16 = !_L17;
  /* 1 */
  RadioTrainTrackPackets__GetP005_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L18,
    &_L14);
  _L11 = /* 1 */
    RadioTrainTrackPacket005__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
      &_L14);
  _L6 = !_L11;
  /* 2 */
  RadioTrainTrackPackets__GetP009_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L18,
    &_L26);
  _L27 = /* 2 */
    RadioTrainTrackPacket009__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
      &_L26);
  _L28 = !_L27;
  /* 1 */
  RadioTrainTrackPackets__GetP011_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L18,
    &_L12);
  _L15 = /* 1 */
    RadioTrainTrackPacket011__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
      &_L12);
  _L7 = !_L15;
  _L2 = _L5 & _L13 & _L22 & _L16 & _L6 & _L28 & _L7;
  outIsConsistent = _L2;
  return outIsConsistent;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Msg155ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

