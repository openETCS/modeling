/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */
#ifndef _CollectData_ProvidePositionReport_Pkg_H_
#define _CollectData_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "AggregateHeader_ProvidePositionReport_Pkg.h"
#include "AggregatePacket_1_ProvidePositionReport_Pkg.h"
#include "AggregatePacket_5_ProvidePositionReport_Pkg.h"
#include "AggregatePacket_0_ProvidePositionReport_Pkg.h"
#include "AggregatePackets_ProvidePositionReport_Pkg.h"
#include "AggregatePacket_4_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* ProvidePositionReport_Pkg::CollectData::posRep */ posRep;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_AggregatePacket_4_ProvidePositionReport_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_CollectData_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::CollectData */
extern void CollectData_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::CollectData::posBGs */ positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::CollectData::trainPos */ trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::CollectData::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* ProvidePositionReport_Pkg::CollectData::TrainRearEndPos */ L_TRAININT TrainRearEndPos,
  /* ProvidePositionReport_Pkg::CollectData::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* ProvidePositionReport_Pkg::CollectData::trigger */ kcg_bool trigger,
  /* ProvidePositionReport_Pkg::CollectData::errorMsg */ ErrorMessage_T_ProvidePositionReport_Pkg *errorMsg,
  /* ProvidePositionReport_Pkg::CollectData::train2trackStatus */ TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* ProvidePositionReport_Pkg::CollectData::directionLRBG */ BG_Orientation_T_ProvidePositionReport_Pkg directionLRBG,
  /* ProvidePositionReport_Pkg::CollectData::prvDirTrain */ Q_DIRTRAIN prvDirTrain,
  /* ProvidePositionReport_Pkg::CollectData::modeLevelStatus */ ModeAndLevelStatus_T_BG_Types_Pkg *modeLevelStatus,
  outC_CollectData_ProvidePositionReport_Pkg *outC);

extern void CollectData_reset_ProvidePositionReport_Pkg(
  outC_CollectData_ProvidePositionReport_Pkg *outC);
extern void CollectData_init_ProvidePositionReport_Pkg(
  outC_CollectData_ProvidePositionReport_Pkg *outC);

#endif /* _CollectData_ProvidePositionReport_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** CollectData_ProvidePositionReport_Pkg.h
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */

