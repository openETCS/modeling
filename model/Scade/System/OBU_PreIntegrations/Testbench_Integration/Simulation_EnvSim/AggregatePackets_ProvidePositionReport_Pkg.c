/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AggregatePackets_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::AggregatePackets */
void AggregatePackets_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::AggregatePackets::inPacket0 */PT0_PositionReport_T_Packet_TrainTypes_Pkg *inPacket0,
  /* ProvidePositionReport_Pkg::AggregatePackets::inPacket1 */PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *inPacket1,
  /* ProvidePositionReport_Pkg::AggregatePackets::inPacket4 */PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *inPacket4,
  /* ProvidePositionReport_Pkg::AggregatePackets::inPacket5 */PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *inPacket5,
  /* ProvidePositionReport_Pkg::AggregatePackets::outPackets */outPackets_T_Common_Types_Pkg *outPackets)
{
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &(*outPackets).p0,
    inPacket0);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &(*outPackets).p1,
    inPacket1);
  kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
    &(*outPackets).p3,
    (PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg *)
      &cInitPT3_ProvidePositionReport_Pkg);
  kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
    &(*outPackets).p4,
    inPacket4);
  kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
    &(*outPackets).p5,
    inPacket5);
  kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(
    &(*outPackets).p9,
    (PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg *)
      &cInitPT9_ProvidePositionReport_Pkg);
  kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(
    &(*outPackets).p11,
    (PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg *)
      &cInitPT11_ProvidePositionReport_Pkg);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** AggregatePackets_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

