/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */
#ifndef _MLRI__op_StoreIterPacket58_ProvidePositionReport_Pkg_H_
#define _MLRI__op_StoreIterPacket58_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ProvidePositionReport_Pkg::op_StoreIterPacket58::newN_ITER */ newN_ITER;
  MLRI__Location_T_Obu_BasicTypes_Pkg /* ProvidePositionReport_Pkg::op_StoreIterPacket58::initialLocation */ initialLocation;
  MLRI__D_LOC /* ProvidePositionReport_Pkg::op_StoreIterPacket58::currDLOC */ currDLOC;
  MLRI__Q_LGTLOC /* ProvidePositionReport_Pkg::op_StoreIterPacket58::currLGTLOC */ currLGTLOC;
  kcg_bool /* ProvidePositionReport_Pkg::op_StoreIterPacket58::valid */ valid;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int /* ProvidePositionReport_Pkg::op_StoreIterPacket58::counter */ counter;
  MLRI__IterPacket58List_T_ProvidePositionReport_Pkg /* ProvidePositionReport_Pkg::op_StoreIterPacket58::_L15 */ _L15;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} MLRI__outC_op_StoreIterPacket58_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::op_StoreIterPacket58 */
extern void MLRI__op_StoreIterPacket58_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_StoreIterPacket58::pRepPara */MLRI__PositionReportParameter_T_ProvidePositionReport_Pkg *pRepPara,
  /* ProvidePositionReport_Pkg::op_StoreIterPacket58::incrCounter */kcg_bool incrCounter,
  MLRI__outC_op_StoreIterPacket58_ProvidePositionReport_Pkg *outC);

extern void MLRI__op_StoreIterPacket58_reset_ProvidePositionReport_Pkg(
  MLRI__outC_op_StoreIterPacket58_ProvidePositionReport_Pkg *outC);

#endif /* _MLRI__op_StoreIterPacket58_ProvidePositionReport_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__op_StoreIterPacket58_ProvidePositionReport_Pkg.h
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

