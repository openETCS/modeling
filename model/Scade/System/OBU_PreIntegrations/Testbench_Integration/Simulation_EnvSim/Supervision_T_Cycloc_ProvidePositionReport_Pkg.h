/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:57
*************************************************************$ */
#ifndef _Supervision_T_Cycloc_ProvidePositionReport_Pkg_H_
#define _Supervision_T_Cycloc_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ProvidePositionReport_Pkg::Supervision_T_Cycloc::trigger */ trigger;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  T_internal_Type_Obu_BasicTypes_Pkg /* ProvidePositionReport_Pkg::Supervision_T_Cycloc::lastTime */ lastTime;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_Supervision_T_Cycloc_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::Supervision_T_Cycloc */
extern void Supervision_T_Cycloc_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Supervision_T_Cycloc::present */kcg_bool present,
  /* ProvidePositionReport_Pkg::Supervision_T_Cycloc::tcycloc */T_CYCLOC tcycloc,
  /* ProvidePositionReport_Pkg::Supervision_T_Cycloc::systemTime */SystemTime_T_ProvidePositionReport_Pkg systemTime,
  outC_Supervision_T_Cycloc_ProvidePositionReport_Pkg *outC);

extern void Supervision_T_Cycloc_reset_ProvidePositionReport_Pkg(
  outC_Supervision_T_Cycloc_ProvidePositionReport_Pkg *outC);

#endif /* _Supervision_T_Cycloc_ProvidePositionReport_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Supervision_T_Cycloc_ProvidePositionReport_Pkg.h
** Generation date: 2015-11-20T19:46:57
*************************************************************$ */

