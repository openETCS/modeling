/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */
#ifndef _MLRI__op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg_H_
#define _MLRI__op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ProvidePositionReport_Pkg::op_3_6_5_1_4_a_i::b */ b;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  MLRI__Speed_T_Obu_BasicTypes_Pkg /* ProvidePositionReport_Pkg::op_3_6_5_1_4_a_i::_L20 */ _L20;
  MLRI__trainPositionInfo_T_TrainPosition_Types_Pck /* ProvidePositionReport_Pkg::op_3_6_5_1_4_a_i::trainPosInfo */ rem_trainPosInfo;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} MLRI__outC_op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::op_3_6_5_1_4_a_i */
extern void MLRI__op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_a_i::trainPosInfo */MLRI__trainPositionInfo_T_TrainPosition_Types_Pck *trainPosInfo,
  MLRI__outC_op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg *outC);

extern void MLRI__op_3_6_5_1_4_a_i_reset_ProvidePositionReport_Pkg(
  MLRI__outC_op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg *outC);

#endif /* _MLRI__op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg.h
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

