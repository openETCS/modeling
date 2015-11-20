/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */
#ifndef _setProbes_xdebugSupport_Pkg_H_
#define _setProbes_xdebugSupport_Pkg_H_

#include "kcg_types.h"
#include "countPackets_xdebugSupport_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* xdebugSupport_Pkg::setProbes::isChanged */ isChanged;
  NID_MESSAGE /* xdebugSupport_Pkg::setProbes::radioMSG */ radioMSG;
  NID_BG /* xdebugSupport_Pkg::setProbes::BG_ID */ BG_ID;
  NID_PACKET /* xdebugSupport_Pkg::setProbes::packet_id1 */ packet_id1;
  NID_PACKET /* xdebugSupport_Pkg::setProbes::packet_id2 */ packet_id2;
  NID_MESSAGE /* xdebugSupport_Pkg::setProbes::lastRadioMSG */ lastRadioMSG;
  NID_BG /* xdebugSupport_Pkg::setProbes::lastBG_ID */ lastBG_ID;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  NID_BG /* xdebugSupport_Pkg::setProbes::lastBG_ID */ rem_lastBG_ID;
  NID_BG /* xdebugSupport_Pkg::setProbes::BG_ID */ rem_BG_ID;
  NID_MESSAGE /* xdebugSupport_Pkg::setProbes::radioMSG */ rem_radioMSG;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_setProbes_xdebugSupport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* xdebugSupport_Pkg::setProbes */
extern void setProbes_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::setProbes::inMsg */API_TrackSideInput_T_API_Msg_Pkg *inMsg,
  /* xdebugSupport_Pkg::setProbes::show24 */kcg_bool show24,
  outC_setProbes_xdebugSupport_Pkg *outC);

extern void setProbes_reset_xdebugSupport_Pkg(
  outC_setProbes_xdebugSupport_Pkg *outC);

#endif /* _setProbes_xdebugSupport_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** setProbes_xdebugSupport_Pkg.h
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */

