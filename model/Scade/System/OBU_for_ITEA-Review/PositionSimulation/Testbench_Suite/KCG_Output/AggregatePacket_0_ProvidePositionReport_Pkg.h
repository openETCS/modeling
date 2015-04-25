/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */
#ifndef _AggregatePacket_0_ProvidePositionReport_Pkg_H_
#define _AggregatePacket_0_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "op_prepack_0_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */


/* ProvidePositionReport_Pkg::AggregatePacket_0 */
extern void AggregatePacket_0_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::AggregatePacket_0::posBGs */ positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::AggregatePacket_0::trainPos */ trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::AggregatePacket_0::train2trackStatus */ TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* ProvidePositionReport_Pkg::AggregatePacket_0::TrainRearEndPos3 */ L_TRAININT TrainRearEndPos3,
  /* ProvidePositionReport_Pkg::AggregatePacket_0::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* ProvidePositionReport_Pkg::AggregatePacket_0::modeLevelStatus */ ModeAndLevelStatus_T_BG_Types_Pkg *modeLevelStatus,
  /* ProvidePositionReport_Pkg::AggregatePacket_0::packet0 */ PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0);

#endif /* _AggregatePacket_0_ProvidePositionReport_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** AggregatePacket_0_ProvidePositionReport_Pkg.h
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */

