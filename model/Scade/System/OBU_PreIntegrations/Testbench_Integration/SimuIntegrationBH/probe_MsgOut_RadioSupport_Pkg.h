/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _probe_MsgOut_RadioSupport_Pkg_H_
#define _probe_MsgOut_RadioSupport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  NID_MESSAGE /* RadioSupport_Pkg::probe_MsgOut::Msg_0ut */ Msg_0ut;
  T_TRAIN /* RadioSupport_Pkg::probe_MsgOut::outTTrain */ outTTrain;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  NID_MESSAGE /* RadioSupport_Pkg::probe_MsgOut::lastMSG */ lastMSG;
  T_TRAIN /* RadioSupport_Pkg::probe_MsgOut::lastTTrain */ lastTTrain;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_probe_MsgOut_RadioSupport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RadioSupport_Pkg::probe_MsgOut */
extern void probe_MsgOut_RadioSupport_Pkg(
  /* RadioSupport_Pkg::probe_MsgOut::fromEVC */ M_TrainTrack_Message_T_TM_radio_messages *fromEVC,
  /* RadioSupport_Pkg::probe_MsgOut::show136 */ kcg_bool show136,
  outC_probe_MsgOut_RadioSupport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void probe_MsgOut_reset_RadioSupport_Pkg(
  outC_probe_MsgOut_RadioSupport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void probe_MsgOut_init_RadioSupport_Pkg(
  outC_probe_MsgOut_RadioSupport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _probe_MsgOut_RadioSupport_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** probe_MsgOut_RadioSupport_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

