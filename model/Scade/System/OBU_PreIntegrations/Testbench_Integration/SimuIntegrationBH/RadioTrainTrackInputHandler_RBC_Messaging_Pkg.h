/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _RadioTrainTrackInputHandler_RBC_Messaging_Pkg_H_
#define _RadioTrainTrackInputHandler_RBC_Messaging_Pkg_H_

#include "kcg_types.h"
#include "RadioTrainTrackFactory__CreateDefaultMsg_RBC_Messaging_Pkg_RBC_RadioTrainTrackFactory_Pkg.h"
#include "RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* RBC_Messaging_Pkg::RadioTrainTrackInputHandler::outRadioTrainTrack */ outRadioTrainTrack;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_RadioTrainTrackInputHandler_RBC_Messaging_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Messaging_Pkg::RadioTrainTrackInputHandler */
extern void RadioTrainTrackInputHandler_RBC_Messaging_Pkg(
  /* RBC_Messaging_Pkg::RadioTrainTrackInputHandler::inRadioTrainTrack */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrack,
  outC_RadioTrainTrackInputHandler_RBC_Messaging_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RadioTrainTrackInputHandler_reset_RBC_Messaging_Pkg(
  outC_RadioTrainTrackInputHandler_RBC_Messaging_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RadioTrainTrackInputHandler_init_RBC_Messaging_Pkg(
  outC_RadioTrainTrackInputHandler_RBC_Messaging_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _RadioTrainTrackInputHandler_RBC_Messaging_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrainTrackInputHandler_RBC_Messaging_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

