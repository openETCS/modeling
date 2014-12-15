/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */
#ifndef _MLRI__AggregatePacket_1_ProvidePositionReport_Pkg_H_
#define _MLRI__AggregatePacket_1_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "MLRI__op_prepack_0_ProvidePositionReport_Pkg.h"
#include "MLRI__op_cond_3_4_2_3_3_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */


/* ProvidePositionReport_Pkg::AggregatePacket_1 */
extern void MLRI__AggregatePacket_1_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::AggregatePacket_1::posBGs */MLRI__positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::AggregatePacket_1::trainPos */MLRI__trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::AggregatePacket_1::train2trackStatus */MLRI__TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* ProvidePositionReport_Pkg::AggregatePacket_1::TrainRearEndPos4 */MLRI__L_TRAININT TrainRearEndPos4,
  /* ProvidePositionReport_Pkg::AggregatePacket_1::directionLRBG */MLRI__BG_Orientation_T_ProvidePositionReport_Pkg directionLRBG,
  /* ProvidePositionReport_Pkg::AggregatePacket_1::prvDirTrain */MLRI__Q_DIRTRAIN prvDirTrain,
  /* ProvidePositionReport_Pkg::AggregatePacket_1::trainPosInfo */MLRI__trainPositionInfo_T_TrainPosition_Types_Pck *trainPosInfo,
  /* ProvidePositionReport_Pkg::AggregatePacket_1::sendNoReport */kcg_bool *sendNoReport,
  /* ProvidePositionReport_Pkg::AggregatePacket_1::packet1 */MLRI__Packet1_T_ProvidePositionReport_Pkg *packet1);

#endif /* _MLRI__AggregatePacket_1_ProvidePositionReport_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__AggregatePacket_1_ProvidePositionReport_Pkg.h
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

