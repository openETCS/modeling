/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */
#ifndef _MLRI__op_D_cycloc_ProvidePositionReport_Pkg_H_
#define _MLRI__op_D_cycloc_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ProvidePositionReport_Pkg::op_D_cycloc::b */ b;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  MLRI__SSM_ST_SM1 /* ProvidePositionReport_Pkg::op_D_cycloc::SM1 */ SM1_state_nxt;
  kcg_int /* ProvidePositionReport_Pkg::op_D_cycloc::currTriggerDistance */ currTriggerDistance;
  MLRI__D_CYCLOC /* ProvidePositionReport_Pkg::op_D_cycloc::_L21 */ _L21;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} MLRI__outC_op_D_cycloc_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::op_D_cycloc */
extern void MLRI__op_D_cycloc_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_D_cycloc::pRepPara */MLRI__PositionReportParameter_T_ProvidePositionReport_Pkg *pRepPara,
  /* ProvidePositionReport_Pkg::op_D_cycloc::trainPos */MLRI__trainPosition_T_TrainPosition_Types_Pck *trainPos,
  MLRI__outC_op_D_cycloc_ProvidePositionReport_Pkg *outC);

extern void MLRI__op_D_cycloc_reset_ProvidePositionReport_Pkg(
  MLRI__outC_op_D_cycloc_ProvidePositionReport_Pkg *outC);

#endif /* _MLRI__op_D_cycloc_ProvidePositionReport_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__op_D_cycloc_ProvidePositionReport_Pkg.h
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

