/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */
#ifndef _AggregatePacket_1_ProvidePositionReport_Pkg_H_
#define _AggregatePacket_1_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "op_prepack_0_ProvidePositionReport_Pkg.h"
#include "op_cond_3_4_2_3_3_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */


/* ProvidePositionReport_Pkg::AggregatePacket_1 */
extern void AggregatePacket_1_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::AggregatePacket_1::modeLevelStatus */ ModeAndLevelStatus_T_BG_Types_Pkg *modeLevelStatus,
  /* ProvidePositionReport_Pkg::AggregatePacket_1::posBGs */ positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::AggregatePacket_1::trainPos */ trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::AggregatePacket_1::train2trackStatus */ TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* ProvidePositionReport_Pkg::AggregatePacket_1::TrainRearEndPos4 */ L_TRAININT TrainRearEndPos4,
  /* ProvidePositionReport_Pkg::AggregatePacket_1::directionLRBG */ BG_Orientation_T_ProvidePositionReport_Pkg directionLRBG,
  /* ProvidePositionReport_Pkg::AggregatePacket_1::prvDirTrain */ Q_DIRTRAIN prvDirTrain,
  /* ProvidePositionReport_Pkg::AggregatePacket_1::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* ProvidePositionReport_Pkg::AggregatePacket_1::sendNoReport */ kcg_bool *sendNoReport,
  /* ProvidePositionReport_Pkg::AggregatePacket_1::packet1 */ PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1);

#endif /* _AggregatePacket_1_ProvidePositionReport_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** AggregatePacket_1_ProvidePositionReport_Pkg.h
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */

