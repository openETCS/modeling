/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _InformationFilter_InformationFilter_Pkg_H_
#define _InformationFilter_InformationFilter_Pkg_H_

#include "kcg_types.h"
#include "FilterSequence_InformationFilter_Pkg.h"
#include "TransitionBuffer_InformationFilter_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::InformationFilter::outMessage */ outMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  struct_172526 /* linear::MemoryBasic::_L4 */ _L4_1;
  _56_SSM_ST_SM1 /* InformationFilter_Pkg::InformationFilter::SM1 */ SM1_state_nxt;
  kcg_bool /* InformationFilter_Pkg::InformationFilter::SM1 */ SM1_reset_act;
  kcg_bool /* InformationFilter_Pkg::InformationFilter::SM1 */ SM1_reset_nxt;
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::InformationFilter::bufferMsg */ bufferMsg;
  kcg_bool /* InformationFilter_Pkg::InformationFilter::storeInBuffer */ storeInBuffer;
  kcg_bool /* InformationFilter_Pkg::InformationFilter::bufferHasPriority */ bufferHasPriority;
  kcg_int /* InformationFilter_Pkg::InformationFilter::currBuffersize */ currBuffersize;
  kcg_int /* InformationFilter_Pkg::InformationFilter::inSupervisingDevice */ rem_inSupervisingDevice;
  M_LEVEL /* InformationFilter_Pkg::InformationFilter::inLevel */ rem_inLevel;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TransitionBuffer_InformationFilter_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_InformationFilter_InformationFilter_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::InformationFilter */
extern void InformationFilter_InformationFilter_Pkg(
  /* InformationFilter_Pkg::InformationFilter::inMessage */ ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* InformationFilter_Pkg::InformationFilter::inLevel */ M_LEVEL inLevel,
  /* InformationFilter_Pkg::InformationFilter::inMode */ M_MODE inMode,
  /* InformationFilter_Pkg::InformationFilter::inSupervisingDevice */ kcg_int inSupervisingDevice,
  /* InformationFilter_Pkg::InformationFilter::inFilterEvents */ filterRelatedEvents_T_Common_Types_Pkg *inFilterEvents,
  /* InformationFilter_Pkg::InformationFilter::inActiveCab */ kcg_bool inActiveCab,
  /* InformationFilter_Pkg::InformationFilter::inTrainDataValid */ kcg_bool inTrainDataValid,
  /* InformationFilter_Pkg::InformationFilter::inMorcStatus */ morcStatus_T_RCM_Session_Types_Pkg *inMorcStatus,
  outC_InformationFilter_InformationFilter_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void InformationFilter_reset_InformationFilter_Pkg(
  outC_InformationFilter_InformationFilter_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void InformationFilter_init_InformationFilter_Pkg(
  outC_InformationFilter_InformationFilter_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _InformationFilter_InformationFilter_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** InformationFilter_InformationFilter_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

