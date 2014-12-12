/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */
#ifndef _MLRI__EvaluateEvents_ProvidePositionReport_Pkg_H_
#define _MLRI__EvaluateEvents_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "MLRI__op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg.h"
#include "MLRI__op_3_6_5_1_4_e_f_h_k_ProvidePositionReport_Pkg.h"
#include "MLRI__op_3_6_5_1_4_j_ProvidePositionReport_Pkg.h"
#include "MLRI__op_GetLRBGfromBGs_ProvidePositionReport_Pkg.h"
#include "MLRI__op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg.h"
#include "MLRI__op_3_6_5_1_4_g_ProvidePositionReport_Pkg.h"
#include "MLRI__op_3_6_5_1_4_b_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ProvidePositionReport_Pkg::EvaluateEvents::result */ result;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  MLRI__outC_op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg /* 1 */ _2_Context_1;
  MLRI__outC_op_3_6_5_1_4_b_ProvidePositionReport_Pkg /* 1 */ _1_Context_1;
  MLRI__outC_op_3_6_5_1_4_g_ProvidePositionReport_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} MLRI__outC_EvaluateEvents_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::EvaluateEvents */
extern void MLRI__EvaluateEvents_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::EvaluateEvents::trackInfo */MLRI__LocationBasedEvents_T_ProvidePositionReport_Pkg *trackInfo,
  /* ProvidePositionReport_Pkg::EvaluateEvents::trainPos */MLRI__trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::EvaluateEvents::posBGs */MLRI__positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::EvaluateEvents::rbcComm */MLRI__RBC_Communication_T_ProvidePositionReport_Pkg *rbcComm,
  /* ProvidePositionReport_Pkg::EvaluateEvents::train2trackStatus */MLRI__TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* ProvidePositionReport_Pkg::EvaluateEvents::trainPosInfo */MLRI__trainPositionInfo_T_TrainPosition_Types_Pck *trainPosInfo,
  MLRI__outC_EvaluateEvents_ProvidePositionReport_Pkg *outC);

extern void MLRI__EvaluateEvents_reset_ProvidePositionReport_Pkg(
  MLRI__outC_EvaluateEvents_ProvidePositionReport_Pkg *outC);

#endif /* _MLRI__EvaluateEvents_ProvidePositionReport_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__EvaluateEvents_ProvidePositionReport_Pkg.h
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

