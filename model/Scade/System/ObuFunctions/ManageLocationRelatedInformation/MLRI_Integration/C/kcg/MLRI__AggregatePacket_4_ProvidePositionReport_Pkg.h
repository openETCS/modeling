/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */
#ifndef _MLRI__AggregatePacket_4_ProvidePositionReport_Pkg_H_
#define _MLRI__AggregatePacket_4_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MLRI__Packet4_T_ProvidePositionReport_Pkg /* ProvidePositionReport_Pkg::AggregatePacket_4::packet4 */ packet4;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  MLRI___1_SSM_ST_SM1 /* ProvidePositionReport_Pkg::AggregatePacket_4::SM1 */ SM1_state_nxt;
  MLRI__M_ERROR /* ProvidePositionReport_Pkg::AggregatePacket_4::_L33 */ _L33;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} MLRI__outC_AggregatePacket_4_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::AggregatePacket_4 */
extern void MLRI__AggregatePacket_4_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::AggregatePacket_4::errorMsg */MLRI__ErrorMessage_T_ProvidePositionReport_Pkg *errorMsg,
  /* ProvidePositionReport_Pkg::AggregatePacket_4::trigger */kcg_bool trigger,
  MLRI__outC_AggregatePacket_4_ProvidePositionReport_Pkg *outC);

extern void MLRI__AggregatePacket_4_reset_ProvidePositionReport_Pkg(
  MLRI__outC_AggregatePacket_4_ProvidePositionReport_Pkg *outC);

#endif /* _MLRI__AggregatePacket_4_ProvidePositionReport_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__AggregatePacket_4_ProvidePositionReport_Pkg.h
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

