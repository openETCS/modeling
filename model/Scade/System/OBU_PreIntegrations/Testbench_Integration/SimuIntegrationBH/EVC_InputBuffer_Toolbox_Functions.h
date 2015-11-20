/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _EVC_InputBuffer_Toolbox_Functions_H_
#define _EVC_InputBuffer_Toolbox_Functions_H_

#include "kcg_types.h"
#include "TRAIN_TrackSideInputFifo_Toolbox_Functions_5.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  API_TrackSideInput_T_API_Msg_Pkg /* Toolbox::Functions::EVC_InputBuffer::TrackMessageToEVC */ TrackMessageToEVC;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* Toolbox::Functions::EVC_InputBuffer::sendRTM */ sendRTM;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TRAIN_TrackSideInputFifo_Toolbox_Functions_5 /* 2 */ Context_2;
  outC_TRAIN_TrackSideInputFifo_Toolbox_Functions_5 /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_EVC_InputBuffer_Toolbox_Functions;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::Functions::EVC_InputBuffer */
extern void EVC_InputBuffer_Toolbox_Functions(
  /* Toolbox::Functions::EVC_InputBuffer::BTMMessage */ API_TrackSideInput_T_API_Msg_Pkg *BTMMessage,
  /* Toolbox::Functions::EVC_InputBuffer::RTMMessage */ API_TrackSideInput_T_API_Msg_Pkg *RTMMessage,
  outC_EVC_InputBuffer_Toolbox_Functions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void EVC_InputBuffer_reset_Toolbox_Functions(
  outC_EVC_InputBuffer_Toolbox_Functions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void EVC_InputBuffer_init_Toolbox_Functions(
  outC_EVC_InputBuffer_Toolbox_Functions *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _EVC_InputBuffer_Toolbox_Functions_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** EVC_InputBuffer_Toolbox_Functions.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

