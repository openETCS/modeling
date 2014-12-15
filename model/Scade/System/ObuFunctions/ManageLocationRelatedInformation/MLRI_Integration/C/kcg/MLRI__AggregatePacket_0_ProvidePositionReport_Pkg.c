/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__AggregatePacket_0_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::AggregatePacket_0 */
void MLRI__AggregatePacket_0_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::AggregatePacket_0::posBGs */MLRI__positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::AggregatePacket_0::trainPos */MLRI__trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::AggregatePacket_0::train2trackStatus */MLRI__TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* ProvidePositionReport_Pkg::AggregatePacket_0::TrainRearEndPos3 */MLRI__L_TRAININT TrainRearEndPos3,
  /* ProvidePositionReport_Pkg::AggregatePacket_0::trainPosInfo */MLRI__trainPositionInfo_T_TrainPosition_Types_Pck *trainPosInfo,
  /* ProvidePositionReport_Pkg::AggregatePacket_0::packet0 */MLRI__Packet0_T_ProvidePositionReport_Pkg *packet0)
{
  /* ProvidePositionReport_Pkg::AggregatePacket_0::_L128 */ MLRI__Position_Report_TrainToTrack _L128;
  
  /* op_prepack_0 */
  MLRI__op_prepack_0_ProvidePositionReport_Pkg(
    TrainRearEndPos3,
    trainPos,
    train2trackStatus,
    posBGs,
    trainPosInfo,
    &(*packet0).valid,
    &_L128);
  MLRI__kcg_copy_Position_Report_TrainToTrack(&(*packet0).packet0, &_L128);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__AggregatePacket_0_ProvidePositionReport_Pkg.c
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

