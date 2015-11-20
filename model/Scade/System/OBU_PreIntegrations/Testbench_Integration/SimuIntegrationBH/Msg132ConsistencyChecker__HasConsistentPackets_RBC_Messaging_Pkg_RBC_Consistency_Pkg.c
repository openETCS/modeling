/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Msg132ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"

/* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg132ConsistencyChecker__HasConsistentPackets */
kcg_bool Msg132ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg132ConsistencyChecker__HasConsistentPackets::inRadioTrainTrackPackets */ outPackets_T_Common_Types_Pkg *inRadioTrainTrackPackets)
{
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg132ConsistencyChecker__HasConsistentPackets::_L36 */
  static kcg_bool _L36;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg132ConsistencyChecker__HasConsistentPackets::_L35 */
  static kcg_bool _L35;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg132ConsistencyChecker__HasConsistentPackets::_L34 */
  static kcg_bool _L34;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg132ConsistencyChecker__HasConsistentPackets::_L33 */
  static PT4_ErrorReporting_T_Packet_TrainTypes_Pkg _L33;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg132ConsistencyChecker__HasConsistentPackets::_L32 */
  static kcg_bool _L32;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg132ConsistencyChecker__HasConsistentPackets::_L31 */
  static kcg_bool _L31;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg132ConsistencyChecker__HasConsistentPackets::_L30 */
  static kcg_bool _L30;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg132ConsistencyChecker__HasConsistentPackets::_L29 */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _L29;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg132ConsistencyChecker__HasConsistentPackets::_L28 */
  static PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg _L28;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg132ConsistencyChecker__HasConsistentPackets::_L27 */
  static PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg _L27;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg132ConsistencyChecker__HasConsistentPackets::_L24 */
  static kcg_bool _L24;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg132ConsistencyChecker__HasConsistentPackets::_L23 */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _L23;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg132ConsistencyChecker__HasConsistentPackets::_L22 */
  static PT5_TrainRunningNumber_Packet_TrainTypes_Pkg _L22;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg132ConsistencyChecker__HasConsistentPackets::_L21 */
  static kcg_bool _L21;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg132ConsistencyChecker__HasConsistentPackets::_L20 */
  static kcg_bool _L20;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg132ConsistencyChecker__HasConsistentPackets::_L19 */
  static outPackets_T_Common_Types_Pkg _L19;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg132ConsistencyChecker__HasConsistentPackets::_L18 */
  static kcg_bool _L18;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg132ConsistencyChecker__HasConsistentPackets::_L16 */
  static kcg_bool _L16;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg132ConsistencyChecker__HasConsistentPackets::_L37 */
  static kcg_bool _L37;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg132ConsistencyChecker__HasConsistentPackets::outIsConsistent */
  static kcg_bool outIsConsistent;
  
  kcg_copy_outPackets_T_Common_Types_Pkg(&_L19, inRadioTrainTrackPackets);
  /* 2 */
  RadioTrainTrackPackets__GetP000_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L19,
    &_L29);
  _L34 = /* 2 */
    RadioTrainTrackPacket000__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
      &_L29);
  /* 2 */
  RadioTrainTrackPackets__GetP001_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L19,
    &_L23);
  _L18 = /* 2 */
    RadioTrainTrackPacket001__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
      &_L23);
  _L37 = _L34 ^ _L18;
  /* 2 */
  RadioTrainTrackPackets__GetP003_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L19,
    &_L27);
  _L30 = /* 2 */
    RadioTrainTrackPacket003__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
      &_L27);
  _L36 = !_L30;
  /* 1 */
  RadioTrainTrackPackets__GetP004_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L19,
    &_L33);
  _L24 = /* 1 */
    RadioTrainTrackPacket004__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
      &_L33);
  _L20 = !_L24;
  /* 1 */
  RadioTrainTrackPackets__GetP005_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L19,
    &_L22);
  _L21 = /* 1 */
    RadioTrainTrackPacket005__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
      &_L22);
  _L31 = !_L21;
  /* 2 */
  RadioTrainTrackPackets__GetP011_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L19,
    &_L28);
  _L35 = /* 2 */
    RadioTrainTrackPacket011__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
      &_L28);
  _L32 = !_L35;
  _L16 = _L37 & _L36 & _L20 & _L31 & _L32;
  outIsConsistent = _L16;
  return outIsConsistent;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Msg132ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

