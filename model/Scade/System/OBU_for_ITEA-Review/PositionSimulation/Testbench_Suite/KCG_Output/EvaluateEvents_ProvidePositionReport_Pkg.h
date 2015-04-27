/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */
#ifndef _EvaluateEvents_ProvidePositionReport_Pkg_H_
#define _EvaluateEvents_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "op_GetLRBGfromBGs_ProvidePositionReport_Pkg.h"
#include "op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg.h"
#include "op_3_6_5_1_4_e_f_h_k_ProvidePositionReport_Pkg.h"
#include "op_3_6_5_1_4_j_ProvidePositionReport_Pkg.h"
#include "op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg.h"
#include "op_3_6_5_1_4_b_ProvidePositionReport_Pkg.h"
#include "op_3_6_5_1_4_g_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ProvidePositionReport_Pkg::EvaluateEvents::result */ result;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_op_3_6_5_1_4_g_ProvidePositionReport_Pkg /* 1 */ _2_Context_1;
  outC_op_3_6_5_1_4_b_ProvidePositionReport_Pkg /* 1 */ _1_Context_1;
  outC_op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_EvaluateEvents_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::EvaluateEvents */
extern void EvaluateEvents_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::EvaluateEvents::trackInfo */ LocationBasedEvents_T_ProvidePositionReport_Pkg *trackInfo,
  /* ProvidePositionReport_Pkg::EvaluateEvents::trainPos */ trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::EvaluateEvents::posBGs */ positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::EvaluateEvents::rbcComm */ RBC_Communication_T_ProvidePositionReport_Pkg *rbcComm,
  /* ProvidePositionReport_Pkg::EvaluateEvents::train2trackStatus */ TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* ProvidePositionReport_Pkg::EvaluateEvents::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* ProvidePositionReport_Pkg::EvaluateEvents::modeLevelStatus */ ModeAndLevelStatus_T_BG_Types_Pkg *modeLevelStatus,
  outC_EvaluateEvents_ProvidePositionReport_Pkg *outC);

extern void EvaluateEvents_reset_ProvidePositionReport_Pkg(
  outC_EvaluateEvents_ProvidePositionReport_Pkg *outC);
extern void EvaluateEvents_init_ProvidePositionReport_Pkg(
  outC_EvaluateEvents_ProvidePositionReport_Pkg *outC);

#endif /* _EvaluateEvents_ProvidePositionReport_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** EvaluateEvents_ProvidePositionReport_Pkg.h
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */

