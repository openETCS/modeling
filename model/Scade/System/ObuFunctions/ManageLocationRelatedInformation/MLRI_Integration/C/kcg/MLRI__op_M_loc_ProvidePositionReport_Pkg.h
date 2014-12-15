/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */
#ifndef _MLRI__op_M_loc_ProvidePositionReport_Pkg_H_
#define _MLRI__op_M_loc_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "MLRI__op_3_6_5_1_4_j_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ProvidePositionReport_Pkg::op_M_loc::b */ b;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  MLRI__PresentxMLOC_T_ProvidePositionReport_Pkg /* ProvidePositionReport_Pkg::op_M_loc::_L24 */ _L24;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} MLRI__outC_op_M_loc_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::op_M_loc */
extern void MLRI__op_M_loc_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_M_loc::pRepPara */MLRI__PositionReportParameter_T_ProvidePositionReport_Pkg *pRepPara,
  /* ProvidePositionReport_Pkg::op_M_loc::posBGs */MLRI__positionedBG_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::op_M_loc::trainPos */MLRI__trainPosition_T_TrainPosition_Types_Pck *trainPos,
  MLRI__outC_op_M_loc_ProvidePositionReport_Pkg *outC);

extern void MLRI__op_M_loc_reset_ProvidePositionReport_Pkg(
  MLRI__outC_op_M_loc_ProvidePositionReport_Pkg *outC);

#endif /* _MLRI__op_M_loc_ProvidePositionReport_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__op_M_loc_ProvidePositionReport_Pkg.h
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

