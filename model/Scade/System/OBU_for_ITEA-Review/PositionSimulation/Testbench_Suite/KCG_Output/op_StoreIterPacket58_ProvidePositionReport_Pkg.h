/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */
#ifndef _op_StoreIterPacket58_ProvidePositionReport_Pkg_H_
#define _op_StoreIterPacket58_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ProvidePositionReport_Pkg::op_StoreIterPacket58::newN_ITER */ newN_ITER;
  Location_T_Obu_BasicTypes_Pkg /* ProvidePositionReport_Pkg::op_StoreIterPacket58::initialLocation */ initialLocation;
  D_LOC /* ProvidePositionReport_Pkg::op_StoreIterPacket58::currDLOC */ currDLOC;
  Q_LGTLOC /* ProvidePositionReport_Pkg::op_StoreIterPacket58::currLGTLOC */ currLGTLOC;
  kcg_bool /* ProvidePositionReport_Pkg::op_StoreIterPacket58::valid */ valid;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int /* ProvidePositionReport_Pkg::op_StoreIterPacket58::counter */ counter;
  IterPacket58List_T_Packet_Types_Pkg /* ProvidePositionReport_Pkg::op_StoreIterPacket58::_L15 */ _L15;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_op_StoreIterPacket58_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::op_StoreIterPacket58 */
extern void op_StoreIterPacket58_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_StoreIterPacket58::pRepPara */ PositionReportParameter_T_Common_Types_Pkg *pRepPara,
  /* ProvidePositionReport_Pkg::op_StoreIterPacket58::incrCounter */ kcg_bool incrCounter,
  outC_op_StoreIterPacket58_ProvidePositionReport_Pkg *outC);

extern void op_StoreIterPacket58_reset_ProvidePositionReport_Pkg(
  outC_op_StoreIterPacket58_ProvidePositionReport_Pkg *outC);
extern void op_StoreIterPacket58_init_ProvidePositionReport_Pkg(
  outC_op_StoreIterPacket58_ProvidePositionReport_Pkg *outC);

#endif /* _op_StoreIterPacket58_ProvidePositionReport_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** op_StoreIterPacket58_ProvidePositionReport_Pkg.h
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */

