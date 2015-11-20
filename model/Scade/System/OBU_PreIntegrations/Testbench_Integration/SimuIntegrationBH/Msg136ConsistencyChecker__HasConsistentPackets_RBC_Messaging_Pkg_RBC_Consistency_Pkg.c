/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Msg136ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"

/* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg136ConsistencyChecker__HasConsistentPackets */
kcg_bool Msg136ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg136ConsistencyChecker__HasConsistentPackets::inRadioTrainTrackPackets */ outPackets_T_Common_Types_Pkg *inRadioTrainTrackPackets)
{
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg136ConsistencyChecker__HasConsistentPackets::_L21 */
  static kcg_bool _L21;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg136ConsistencyChecker__HasConsistentPackets::_L20 */
  static kcg_bool _L20;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg136ConsistencyChecker__HasConsistentPackets::_L19 */
  static PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg _L19;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg136ConsistencyChecker__HasConsistentPackets::_L18 */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _L18;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg136ConsistencyChecker__HasConsistentPackets::_L13 */
  static kcg_bool _L13;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg136ConsistencyChecker__HasConsistentPackets::_L12 */
  static kcg_bool _L12;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg136ConsistencyChecker__HasConsistentPackets::_L11 */
  static kcg_bool _L11;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg136ConsistencyChecker__HasConsistentPackets::_L10 */
  static outPackets_T_Common_Types_Pkg _L10;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg136ConsistencyChecker__HasConsistentPackets::_L6 */
  static kcg_bool _L6;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg136ConsistencyChecker__HasConsistentPackets::_L5 */
  static PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg _L5;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg136ConsistencyChecker__HasConsistentPackets::_L4 */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _L4;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg136ConsistencyChecker__HasConsistentPackets::_L3 */
  static kcg_bool _L3;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg136ConsistencyChecker__HasConsistentPackets::_L23 */
  static kcg_bool _L23;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg136ConsistencyChecker__HasConsistentPackets::_L29 */
  static kcg_bool _L29;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg136ConsistencyChecker__HasConsistentPackets::_L28 */
  static PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg _L28;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg136ConsistencyChecker__HasConsistentPackets::_L27 */
  static kcg_bool _L27;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg136ConsistencyChecker__HasConsistentPackets::outIsConsistent */
  static kcg_bool outIsConsistent;
  
  kcg_copy_outPackets_T_Common_Types_Pkg(&_L10, inRadioTrainTrackPackets);
  /* 1 */
  RadioTrainTrackPackets__GetP000_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L10,
    &_L18);
  _L3 = /* 1 */
    RadioTrainTrackPacket000__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
      &_L18);
  /* 1 */
  RadioTrainTrackPackets__GetP001_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L10,
    &_L4);
  /* 1 */
  RadioTrainTrackPackets__GetP003_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L10,
    &_L5);
  _L6 = /* 1 */
    RadioTrainTrackPacket003__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
      &_L5);
  _L21 = /* 1 */
    RadioTrainTrackPacket001__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
      &_L4);
  _L23 = _L3 ^ _L21;
  _L20 = !_L6;
  /* 2 */
  RadioTrainTrackPackets__GetP009_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L10,
    &_L28);
  _L29 = /* 2 */
    RadioTrainTrackPacket009__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
      &_L28);
  _L27 = !_L29;
  /* 1 */
  RadioTrainTrackPackets__GetP011_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L10,
    &_L19);
  _L11 = /* 1 */
    RadioTrainTrackPacket011__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
      &_L19);
  _L13 = !_L11;
  _L12 = _L23 & _L20 & _L27 & _L13;
  outIsConsistent = _L12;
  return outIsConsistent;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Msg136ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

