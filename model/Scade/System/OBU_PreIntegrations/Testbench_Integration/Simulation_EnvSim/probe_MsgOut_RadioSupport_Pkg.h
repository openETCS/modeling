/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:00
*************************************************************$ */
#ifndef _probe_MsgOut_RadioSupport_Pkg_H_
#define _probe_MsgOut_RadioSupport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  NID_MESSAGE /* RadioSupport_Pkg::probe_MsgOut::Msg_0ut */ Msg_0ut;
  T_TRAIN /* RadioSupport_Pkg::probe_MsgOut::outTTrain */ outTTrain;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_probe_MsgOut_RadioSupport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RadioSupport_Pkg::probe_MsgOut */
extern void probe_MsgOut_RadioSupport_Pkg(
  /* RadioSupport_Pkg::probe_MsgOut::fromEVC */M_TrainTrack_Message_T_TM_radio_messages *fromEVC,
  /* RadioSupport_Pkg::probe_MsgOut::show136 */kcg_bool show136,
  outC_probe_MsgOut_RadioSupport_Pkg *outC);

extern void probe_MsgOut_reset_RadioSupport_Pkg(
  outC_probe_MsgOut_RadioSupport_Pkg *outC);

#endif /* _probe_MsgOut_RadioSupport_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** probe_MsgOut_RadioSupport_Pkg.h
** Generation date: 2015-11-20T19:47:00
*************************************************************$ */

