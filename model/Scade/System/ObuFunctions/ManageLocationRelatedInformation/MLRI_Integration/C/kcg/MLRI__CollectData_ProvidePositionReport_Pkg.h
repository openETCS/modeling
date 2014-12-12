/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */
#ifndef _MLRI__CollectData_ProvidePositionReport_Pkg_H_
#define _MLRI__CollectData_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "MLRI__AggregateHeader_ProvidePositionReport_Pkg.h"
#include "MLRI__AggregatePacket_5_ProvidePositionReport_Pkg.h"
#include "MLRI__AggregatePacket_1_ProvidePositionReport_Pkg.h"
#include "MLRI__AggregatePacket_0_ProvidePositionReport_Pkg.h"
#include "MLRI__AggregatePacket_4_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MLRI__PositionReport_T_ProvidePositionReport_Pkg /* ProvidePositionReport_Pkg::CollectData::posRep */ posRep;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  MLRI__outC_AggregatePacket_4_ProvidePositionReport_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} MLRI__outC_CollectData_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::CollectData */
extern void MLRI__CollectData_ProvidePositionReport_Pkg(
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
  MLRI__outC_CollectData_ProvidePositionReport_Pkg *outC);

extern void MLRI__CollectData_reset_ProvidePositionReport_Pkg(
  MLRI__outC_CollectData_ProvidePositionReport_Pkg *outC);

#endif /* _MLRI__CollectData_ProvidePositionReport_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__CollectData_ProvidePositionReport_Pkg.h
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

