/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */
#ifndef _MLRI__AggregatePacket_0_ProvidePositionReport_Pkg_H_
#define _MLRI__AggregatePacket_0_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "MLRI__op_prepack_0_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */


/* ProvidePositionReport_Pkg::AggregatePacket_0 */
extern void MLRI__AggregatePacket_0_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::AggregatePacket_0::posBGs */MLRI__positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::AggregatePacket_0::trainPos */MLRI__trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::AggregatePacket_0::train2trackStatus */MLRI__TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* ProvidePositionReport_Pkg::AggregatePacket_0::TrainRearEndPos3 */MLRI__L_TRAININT TrainRearEndPos3,
  /* ProvidePositionReport_Pkg::AggregatePacket_0::trainPosInfo */MLRI__trainPositionInfo_T_TrainPosition_Types_Pck *trainPosInfo,
  /* ProvidePositionReport_Pkg::AggregatePacket_0::packet0 */MLRI__Packet0_T_ProvidePositionReport_Pkg *packet0);

#endif /* _MLRI__AggregatePacket_0_ProvidePositionReport_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__AggregatePacket_0_ProvidePositionReport_Pkg.h
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

