/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */
#ifndef _AggregatePacket_4_ProvidePositionReport_Pkg_H_
#define _AggregatePacket_4_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg /* ProvidePositionReport_Pkg::AggregatePacket_4::packet4 */ packet4;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  _28_SSM_ST_SM1 /* ProvidePositionReport_Pkg::AggregatePacket_4::SM1 */ SM1_state_nxt;
  M_ERROR /* ProvidePositionReport_Pkg::AggregatePacket_4::_L33 */ _L33;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_AggregatePacket_4_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::AggregatePacket_4 */
extern void AggregatePacket_4_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::AggregatePacket_4::errorMsg */ ErrorMessage_T_ProvidePositionReport_Pkg *errorMsg,
  /* ProvidePositionReport_Pkg::AggregatePacket_4::trigger */ kcg_bool trigger,
  outC_AggregatePacket_4_ProvidePositionReport_Pkg *outC);

extern void AggregatePacket_4_reset_ProvidePositionReport_Pkg(
  outC_AggregatePacket_4_ProvidePositionReport_Pkg *outC);
extern void AggregatePacket_4_init_ProvidePositionReport_Pkg(
  outC_AggregatePacket_4_ProvidePositionReport_Pkg *outC);

#endif /* _AggregatePacket_4_ProvidePositionReport_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** AggregatePacket_4_ProvidePositionReport_Pkg.h
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */

