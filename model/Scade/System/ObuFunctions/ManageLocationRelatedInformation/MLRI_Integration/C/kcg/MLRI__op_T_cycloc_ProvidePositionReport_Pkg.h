/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */
#ifndef _MLRI__op_T_cycloc_ProvidePositionReport_Pkg_H_
#define _MLRI__op_T_cycloc_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ProvidePositionReport_Pkg::op_T_cycloc::b */ b;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int /* ProvidePositionReport_Pkg::op_T_cycloc::Local1 */ Local1;
  MLRI__T_CYCLOC /* ProvidePositionReport_Pkg::op_T_cycloc::_L21 */ _L21;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} MLRI__outC_op_T_cycloc_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::op_T_cycloc */
extern void MLRI__op_T_cycloc_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_T_cycloc::pRepPara */MLRI__PositionReportParameter_T_ProvidePositionReport_Pkg *pRepPara,
  /* ProvidePositionReport_Pkg::op_T_cycloc::systemTime */MLRI__SystemTime_T_ProvidePositionReport_Pkg systemTime,
  MLRI__outC_op_T_cycloc_ProvidePositionReport_Pkg *outC);

extern void MLRI__op_T_cycloc_reset_ProvidePositionReport_Pkg(
  MLRI__outC_op_T_cycloc_ProvidePositionReport_Pkg *outC);

#endif /* _MLRI__op_T_cycloc_ProvidePositionReport_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__op_T_cycloc_ProvidePositionReport_Pkg.h
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

