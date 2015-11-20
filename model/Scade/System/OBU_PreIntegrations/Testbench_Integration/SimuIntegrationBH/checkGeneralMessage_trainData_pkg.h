/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _checkGeneralMessage_trainData_pkg_H_
#define _checkGeneralMessage_trainData_pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* trainData_pkg::checkGeneralMessage::genMessageReceived */ genMessageReceived;
  kcg_bool /* trainData_pkg::checkGeneralMessage::ackRequested */ ackRequested;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* trainData_pkg::checkGeneralMessage::GeneralMsgReceived */ GeneralMsgReceived;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_checkGeneralMessage_trainData_pkg;

/* ===========  node initialization and cycle functions  =========== */
/* trainData_pkg::checkGeneralMessage */
extern void checkGeneralMessage_trainData_pkg(
  /* trainData_pkg::checkGeneralMessage::trackMessages */ ReceivedMessage_T_Common_Types_Pkg *trackMessages,
  outC_checkGeneralMessage_trainData_pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void checkGeneralMessage_reset_trainData_pkg(
  outC_checkGeneralMessage_trainData_pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void checkGeneralMessage_init_trainData_pkg(
  outC_checkGeneralMessage_trainData_pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _checkGeneralMessage_trainData_pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** checkGeneralMessage_trainData_pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

