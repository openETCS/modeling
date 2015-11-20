/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:57
*************************************************************$ */
#ifndef _Supervision_M_Loc_ProvidePositionReport_Pkg_H_
#define _Supervision_M_Loc_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "op_GetLRBGfromBGs_ProvidePositionReport_Pkg.h"
#include "op_3_6_5_1_4_j_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ProvidePositionReport_Pkg::Supervision_M_Loc::trigger */ trigger;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_op_3_6_5_1_4_j_ProvidePositionReport_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Supervision_M_Loc_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::Supervision_M_Loc */
extern void Supervision_M_Loc_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::trainPos */trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::posBGs */positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::mloc */M_LOC mloc,
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::present */kcg_bool present,
  outC_Supervision_M_Loc_ProvidePositionReport_Pkg *outC);

extern void Supervision_M_Loc_reset_ProvidePositionReport_Pkg(
  outC_Supervision_M_Loc_ProvidePositionReport_Pkg *outC);

#endif /* _Supervision_M_Loc_ProvidePositionReport_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Supervision_M_Loc_ProvidePositionReport_Pkg.h
** Generation date: 2015-11-20T19:46:57
*************************************************************$ */

