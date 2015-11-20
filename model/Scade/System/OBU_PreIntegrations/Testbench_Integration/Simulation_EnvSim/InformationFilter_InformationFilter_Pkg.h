/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:56
*************************************************************$ */
#ifndef _InformationFilter_InformationFilter_Pkg_H_
#define _InformationFilter_InformationFilter_Pkg_H_

#include "kcg_types.h"
#include "FilterSequence_InformationFilter_Pkg.h"
#include "TransitionBuffer_InformationFilter_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::InformationFilter::outMessage */ outMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  _37_SSM_ST_SM1 /* InformationFilter_Pkg::InformationFilter::SM1 */ SM1_state_nxt;
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::InformationFilter::bufferMsg */ bufferMsg;
  kcg_bool /* InformationFilter_Pkg::InformationFilter::storeInBuffer */ storeInBuffer;
  kcg_bool /* InformationFilter_Pkg::InformationFilter::bufferHasPriority */ bufferHasPriority;
  kcg_int /* InformationFilter_Pkg::InformationFilter::currBuffersize */ currBuffersize;
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::InformationFilter::_L108 */ _L108;
  kcg_int /* InformationFilter_Pkg::InformationFilter::inSupervisingDevice */ rem_inSupervisingDevice;
  M_LEVEL /* InformationFilter_Pkg::InformationFilter::inLevel */ rem_inLevel;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TransitionBuffer_InformationFilter_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_InformationFilter_InformationFilter_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::InformationFilter */
extern void InformationFilter_InformationFilter_Pkg(
  /* InformationFilter_Pkg::InformationFilter::inMessage */ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* InformationFilter_Pkg::InformationFilter::inLevel */M_LEVEL inLevel,
  /* InformationFilter_Pkg::InformationFilter::inMode */M_MODE inMode,
  /* InformationFilter_Pkg::InformationFilter::inSupervisingDevice */kcg_int inSupervisingDevice,
  /* InformationFilter_Pkg::InformationFilter::inFilterEvents */filterRelatedEvents_T_Common_Types_Pkg *inFilterEvents,
  /* InformationFilter_Pkg::InformationFilter::inActiveCab */kcg_bool inActiveCab,
  /* InformationFilter_Pkg::InformationFilter::inTrainDataValid */kcg_bool inTrainDataValid,
  /* InformationFilter_Pkg::InformationFilter::inMorcStatus */morcStatus_T_RCM_Session_Types_Pkg *inMorcStatus,
  outC_InformationFilter_InformationFilter_Pkg *outC);

extern void InformationFilter_reset_InformationFilter_Pkg(
  outC_InformationFilter_InformationFilter_Pkg *outC);

#endif /* _InformationFilter_InformationFilter_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** InformationFilter_InformationFilter_Pkg.h
** Generation date: 2015-11-20T19:46:56
*************************************************************$ */

