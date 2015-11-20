/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Msg129ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"

/* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg129ConsistencyChecker__HasConsistentPackets */
kcg_bool Msg129ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg129ConsistencyChecker__HasConsistentPackets::inRadioTrainTrackPackets */outPackets_T_Common_Types_Pkg *inRadioTrainTrackPackets)
{
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg tmp5;
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg tmp4;
  static PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg tmp3;
  static PT4_ErrorReporting_T_Packet_TrainTypes_Pkg tmp2;
  static PT5_TrainRunningNumber_Packet_TrainTypes_Pkg tmp1;
  static PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg tmp;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg129ConsistencyChecker__HasConsistentPackets::outIsConsistent */
  static kcg_bool outIsConsistent;
  
  /* 2 */
  RadioTrainTrackPackets__GetP000_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    inRadioTrainTrackPackets,
    &tmp5);
  /* 2 */
  RadioTrainTrackPackets__GetP001_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    inRadioTrainTrackPackets,
    &tmp4);
  /* 2 */
  RadioTrainTrackPackets__GetP003_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    inRadioTrainTrackPackets,
    &tmp3);
  /* 1 */
  RadioTrainTrackPackets__GetP004_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    inRadioTrainTrackPackets,
    &tmp2);
  /* 1 */
  RadioTrainTrackPackets__GetP005_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    inRadioTrainTrackPackets,
    &tmp1);
  /* 1 */
  RadioTrainTrackPackets__GetP009_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    inRadioTrainTrackPackets,
    &tmp);
  outIsConsistent = (/* 2 */
      RadioTrainTrackPacket000__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
        &tmp5) ^ /* 2 */
      RadioTrainTrackPacket001__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
        &tmp4)) & !/* 2 */
    RadioTrainTrackPacket003__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
      &tmp3) & !/* 1 */
    RadioTrainTrackPacket004__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
      &tmp2) & !/* 1 */
    RadioTrainTrackPacket005__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
      &tmp1) & !/* 1 */
    RadioTrainTrackPacket009__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
      &tmp);
  return outIsConsistent;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Msg129ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

