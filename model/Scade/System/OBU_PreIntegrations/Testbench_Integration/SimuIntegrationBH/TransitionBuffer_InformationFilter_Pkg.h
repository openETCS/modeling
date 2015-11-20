/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _TransitionBuffer_InformationFilter_Pkg_H_
#define _TransitionBuffer_InformationFilter_Pkg_H_

#include "kcg_types.h"
#include "TransitionBuffer_write_only_InformationFilter_Pkg.h"
#include "TransitionBuffer_read_write_InformationFilter_Pkg.h"
#include "TransitionBuffer_read_only_InformationFilter_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::TransitionBuffer::Out */ Out;
  kcg_int /* InformationFilter_Pkg::TransitionBuffer::outStacksize */ outStacksize;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int /* InformationFilter_Pkg::TransitionBuffer::stacksize */ stacksize;
  TransitionBuffer_T_InformationFilter_Pkg /* InformationFilter_Pkg::TransitionBuffer::buffer */ buffer;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_TransitionBuffer_InformationFilter_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::TransitionBuffer */
extern void TransitionBuffer_InformationFilter_Pkg(
  /* InformationFilter_Pkg::TransitionBuffer::In */ ReceivedMessage_T_Common_Types_Pkg *In,
  /* InformationFilter_Pkg::TransitionBuffer::Write */ kcg_bool Write,
  /* InformationFilter_Pkg::TransitionBuffer::Reset */ kcg_bool Reset,
  outC_TransitionBuffer_InformationFilter_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TransitionBuffer_reset_InformationFilter_Pkg(
  outC_TransitionBuffer_InformationFilter_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TransitionBuffer_init_InformationFilter_Pkg(
  outC_TransitionBuffer_InformationFilter_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _TransitionBuffer_InformationFilter_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** TransitionBuffer_InformationFilter_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

