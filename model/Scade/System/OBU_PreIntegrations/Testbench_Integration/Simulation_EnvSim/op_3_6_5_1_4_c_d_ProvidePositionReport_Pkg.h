/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:57
*************************************************************$ */
#ifndef _op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg_H_
#define _op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ProvidePositionReport_Pkg::op_3_6_5_1_4_c_d::trigger */ trigger;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  TrainToTrackStatus_T_BG_Types_Pkg /* ProvidePositionReport_Pkg::op_3_6_5_1_4_c_d::train2trackStatus */ rem_train2trackStatus;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::op_3_6_5_1_4_c_d */
extern void op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_c_d::train2trackStatus */TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  outC_op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg *outC);

extern void op_3_6_5_1_4_c_d_reset_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg *outC);

#endif /* _op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg.h
** Generation date: 2015-11-20T19:46:57
*************************************************************$ */

