/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:57
*************************************************************$ */
#ifndef _Supervise_Events_ProvidePositionReport_Pkg_H_
#define _Supervise_Events_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "op_GetLRBGfromBGs_ProvidePositionReport_Pkg.h"
#include "op_3_6_5_1_4_j_ProvidePositionReport_Pkg.h"
#include "op_3_6_5_1_4_f_g_ProvidePositionReport_Pkg.h"
#include "op_3_6_5_1_4_b_ProvidePositionReport_Pkg.h"
#include "op_3_6_5_1_4_e_h_k_ProvidePositionReport_Pkg.h"
#include "op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg.h"
#include "op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ProvidePositionReport_Pkg::Supervise_Events::result */ result;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg /* 1 */ _5_Context_1;
  outC_op_3_6_5_1_4_b_ProvidePositionReport_Pkg /* 1 */ _4_Context_1;
  outC_op_3_6_5_1_4_f_g_ProvidePositionReport_Pkg /* 1 */ _3_Context_1;
  outC_op_3_6_5_1_4_e_h_k_ProvidePositionReport_Pkg /* 1 */ _2_Context_1;
  outC_op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg /* 1 */ _1_Context_1;
  outC_op_3_6_5_1_4_j_ProvidePositionReport_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Supervise_Events_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::Supervise_Events */
extern void Supervise_Events_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Supervise_Events::posBGs */positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::Supervise_Events::trainPos */trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::Supervise_Events::modeLevelStatus */ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *modeLevelStatus,
  /* ProvidePositionReport_Pkg::Supervise_Events::odometry */odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* ProvidePositionReport_Pkg::Supervise_Events::train2trackStatus */TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* ProvidePositionReport_Pkg::Supervise_Events::rbcComm */RBC_Communication_T_ProvidePositionReport_Pkg *rbcComm,
  /* ProvidePositionReport_Pkg::Supervise_Events::trackInfo */LocationBasedEvents_T_ProvidePositionReport_Pkg *trackInfo,
  outC_Supervise_Events_ProvidePositionReport_Pkg *outC);

extern void Supervise_Events_reset_ProvidePositionReport_Pkg(
  outC_Supervise_Events_ProvidePositionReport_Pkg *outC);

#endif /* _Supervise_Events_ProvidePositionReport_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Supervise_Events_ProvidePositionReport_Pkg.h
** Generation date: 2015-11-20T19:46:57
*************************************************************$ */

