/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__CollectData_ProvidePositionReport_Pkg.h"

void MLRI__CollectData_reset_ProvidePositionReport_Pkg(
  MLRI__outC_CollectData_ProvidePositionReport_Pkg *outC)
{
  /* 1 */
  MLRI__AggregatePacket_4_reset_ProvidePositionReport_Pkg(&outC->Context_1);
}

/* ProvidePositionReport_Pkg::CollectData */
void MLRI__CollectData_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::CollectData::posBGs */MLRI__positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::CollectData::trainPos */MLRI__trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::CollectData::trainProps */MLRI__trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* ProvidePositionReport_Pkg::CollectData::TrainRearEndPos */MLRI__L_TRAININT TrainRearEndPos,
  /* ProvidePositionReport_Pkg::CollectData::trainPosInfo */MLRI__trainPositionInfo_T_TrainPosition_Types_Pck *trainPosInfo,
  /* ProvidePositionReport_Pkg::CollectData::trigger */kcg_bool trigger,
  /* ProvidePositionReport_Pkg::CollectData::errorMsg */MLRI__ErrorMessage_T_ProvidePositionReport_Pkg *errorMsg,
  /* ProvidePositionReport_Pkg::CollectData::train2trackStatus */MLRI__TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* ProvidePositionReport_Pkg::CollectData::directionLRBG */MLRI__BG_Orientation_T_ProvidePositionReport_Pkg directionLRBG,
  /* ProvidePositionReport_Pkg::CollectData::prvDirTrain */MLRI__Q_DIRTRAIN prvDirTrain,
  MLRI__outC_CollectData_ProvidePositionReport_Pkg *outC)
{
  /* ProvidePositionReport_Pkg::CollectData::_L48 */ MLRI__Packet1_T_ProvidePositionReport_Pkg _L48;
  /* ProvidePositionReport_Pkg::CollectData::_L62 */ kcg_bool _L62;
  
  /* 1 */
  MLRI__AggregatePacket_1_ProvidePositionReport_Pkg(
    posBGs,
    trainPos,
    train2trackStatus,
    TrainRearEndPos,
    directionLRBG,
    prvDirTrain,
    trainPosInfo,
    &_L62,
    &_L48);
  outC->posRep.valid = trigger & !_L62;
  MLRI__kcg_copy_Packet1_T_ProvidePositionReport_Pkg(
    &outC->posRep.packet1,
    &_L48);
  /* 2 */
  MLRI__AggregateHeader_ProvidePositionReport_Pkg(
    trainProps,
    &outC->posRep.header);
  /* 2 */
  MLRI__AggregatePacket_0_ProvidePositionReport_Pkg(
    posBGs,
    trainPos,
    train2trackStatus,
    TrainRearEndPos,
    trainPosInfo,
    &outC->posRep.packet0);
  /* 1 */
  MLRI__AggregatePacket_4_ProvidePositionReport_Pkg(
    errorMsg,
    trigger,
    &outC->Context_1);
  MLRI__kcg_copy_Packet4_T_ProvidePositionReport_Pkg(
    &outC->posRep.packet4,
    &outC->Context_1.packet4);
  /* 1 */
  MLRI__AggregatePacket_5_ProvidePositionReport_Pkg(
    trainProps,
    &outC->posRep.packet5);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__CollectData_ProvidePositionReport_Pkg.c
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

