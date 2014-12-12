/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */
#ifndef _MLRI__op_N_iter_ProvidePositionReport_Pkg_H_
#define _MLRI__op_N_iter_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "MLRI__op_StoreIterPacket58_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ProvidePositionReport_Pkg::op_N_iter::b */ b;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int /* ProvidePositionReport_Pkg::op_N_iter::currTriggerDistance */ currTriggerDistance;
  /* ---------------------  sub nodes' contexts  --------------------- */
  MLRI__outC_op_StoreIterPacket58_ProvidePositionReport_Pkg /* op_StoreIterPacket58 */ Context_op_StoreIterPacket58;
  /* ----------------- no clocks of observable data ------------------ */
} MLRI__outC_op_N_iter_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::op_N_iter */
extern void MLRI__op_N_iter_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_N_iter::trainPosition */MLRI__trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* ProvidePositionReport_Pkg::op_N_iter::pRepPara */MLRI__PositionReportParameter_T_ProvidePositionReport_Pkg *pRepPara,
  /* ProvidePositionReport_Pkg::op_N_iter::minSafeRearEnd */kcg_int minSafeRearEnd,
  MLRI__outC_op_N_iter_ProvidePositionReport_Pkg *outC);

extern void MLRI__op_N_iter_reset_ProvidePositionReport_Pkg(
  MLRI__outC_op_N_iter_ProvidePositionReport_Pkg *outC);

#endif /* _MLRI__op_N_iter_ProvidePositionReport_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__op_N_iter_ProvidePositionReport_Pkg.h
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

