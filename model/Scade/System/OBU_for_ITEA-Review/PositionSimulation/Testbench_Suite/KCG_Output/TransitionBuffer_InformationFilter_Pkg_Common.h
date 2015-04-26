/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */
#ifndef _TransitionBuffer_InformationFilter_Pkg_Common_H_
#define _TransitionBuffer_InformationFilter_Pkg_Common_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::Common::TransitionBuffer::outMessage */ outMessage;
  kcg_bool /* InformationFilter_Pkg::Common::TransitionBuffer::outMessageAvailable */ outMessageAvailable;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init1;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int /* InformationFilter_Pkg::Common::TransitionBuffer::IfBlock1::then::_L20 */ _L20_IfBlock1;
  Buffer_DataDictionary_Pkg /* InformationFilter_Pkg::Common::TransitionBuffer::IfBlock1::then::_L4 */ _L4_IfBlock1;
  Buffer_DataDictionary_Pkg /* InformationFilter_Pkg::Common::TransitionBuffer::buffer */ buffer;
  kcg_int /* InformationFilter_Pkg::Common::TransitionBuffer::_L32 */ _L32;
  kcg_int /* InformationFilter_Pkg::Common::TransitionBuffer::_L50 */ _L50;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_TransitionBuffer_InformationFilter_Pkg_Common;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::Common::TransitionBuffer */
extern void TransitionBuffer_InformationFilter_Pkg_Common(
  /* InformationFilter_Pkg::Common::TransitionBuffer::inMessage */ ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* InformationFilter_Pkg::Common::TransitionBuffer::inStoreMessage */ kcg_bool inStoreMessage,
  /* InformationFilter_Pkg::Common::TransitionBuffer::inReadMessage */ kcg_bool inReadMessage,
  outC_TransitionBuffer_InformationFilter_Pkg_Common *outC);

extern void TransitionBuffer_reset_InformationFilter_Pkg_Common(
  outC_TransitionBuffer_InformationFilter_Pkg_Common *outC);
extern void TransitionBuffer_init_InformationFilter_Pkg_Common(
  outC_TransitionBuffer_InformationFilter_Pkg_Common *outC);

#endif /* _TransitionBuffer_InformationFilter_Pkg_Common_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** TransitionBuffer_InformationFilter_Pkg_Common.h
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */

