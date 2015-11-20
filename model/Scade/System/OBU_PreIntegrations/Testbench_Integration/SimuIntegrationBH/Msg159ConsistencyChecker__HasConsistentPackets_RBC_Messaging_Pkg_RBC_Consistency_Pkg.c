/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Msg159ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"

/* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg159ConsistencyChecker__HasConsistentPackets */
kcg_bool Msg159ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg159ConsistencyChecker__HasConsistentPackets::inRadioTrainTrackPackets */ outPackets_T_Common_Types_Pkg *inRadioTrainTrackPackets)
{
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg159ConsistencyChecker__HasConsistentPackets::_L1 */
  static outPackets_T_Common_Types_Pkg _L1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg159ConsistencyChecker__HasConsistentPackets::_L6 */
  static kcg_bool _L6;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg159ConsistencyChecker__HasConsistentPackets::_L7 */
  static kcg_bool _L7;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg159ConsistencyChecker__HasConsistentPackets::_L8 */
  static kcg_bool _L8;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg159ConsistencyChecker__HasConsistentPackets::_L9 */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _L9;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg159ConsistencyChecker__HasConsistentPackets::_L10 */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _L10;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg159ConsistencyChecker__HasConsistentPackets::_L11 */
  static kcg_bool _L11;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg159ConsistencyChecker__HasConsistentPackets::_L12 */
  static kcg_bool _L12;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg159ConsistencyChecker__HasConsistentPackets::_L13 */
  static PT4_ErrorReporting_T_Packet_TrainTypes_Pkg _L13;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg159ConsistencyChecker__HasConsistentPackets::_L14 */
  static PT5_TrainRunningNumber_Packet_TrainTypes_Pkg _L14;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg159ConsistencyChecker__HasConsistentPackets::_L15 */
  static PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg _L15;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg159ConsistencyChecker__HasConsistentPackets::_L17 */
  static kcg_bool _L17;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg159ConsistencyChecker__HasConsistentPackets::_L18 */
  static kcg_bool _L18;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg159ConsistencyChecker__HasConsistentPackets::_L19 */
  static kcg_bool _L19;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg159ConsistencyChecker__HasConsistentPackets::_L20 */
  static kcg_bool _L20;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg159ConsistencyChecker__HasConsistentPackets::_L21 */
  static kcg_bool _L21;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg159ConsistencyChecker__HasConsistentPackets::_L22 */
  static kcg_bool _L22;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg159ConsistencyChecker__HasConsistentPackets::_L23 */
  static PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg _L23;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg159ConsistencyChecker__HasConsistentPackets::_L24 */
  static kcg_bool _L24;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg159ConsistencyChecker__HasConsistentPackets::_L25 */
  static kcg_bool _L25;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg159ConsistencyChecker__HasConsistentPackets::outIsConsistent */
  static kcg_bool outIsConsistent;
  
  kcg_copy_outPackets_T_Common_Types_Pkg(&_L1, inRadioTrainTrackPackets);
  /* 1 */
  RadioTrainTrackPackets__GetP000_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L1,
    &_L9);
  _L7 = /* 1 */
    RadioTrainTrackPacket000__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
      &_L9);
  _L8 = !_L7;
  /* 1 */
  RadioTrainTrackPackets__GetP001_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L1,
    &_L10);
  _L11 = /* 1 */
    RadioTrainTrackPacket001__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
      &_L10);
  _L12 = !_L11;
  /* 1 */
  RadioTrainTrackPackets__GetP004_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L1,
    &_L13);
  _L19 = /* 1 */
    RadioTrainTrackPacket004__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
      &_L13);
  _L20 = !_L19;
  /* 1 */
  RadioTrainTrackPackets__GetP005_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L1,
    &_L14);
  _L18 = /* 1 */
    RadioTrainTrackPacket005__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
      &_L14);
  _L21 = !_L18;
  /* 1 */
  RadioTrainTrackPackets__GetP009_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L1,
    &_L23);
  _L24 = /* 1 */
    RadioTrainTrackPacket009__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
      &_L23);
  _L25 = !_L24;
  /* 1 */
  RadioTrainTrackPackets__GetP011_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L1,
    &_L15);
  _L17 = /* 1 */
    RadioTrainTrackPacket011__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
      &_L15);
  _L22 = !_L17;
  _L6 = _L8 & _L12 & _L20 & _L21 & _L25 & _L22;
  outIsConsistent = _L6;
  return outIsConsistent;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Msg159ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

