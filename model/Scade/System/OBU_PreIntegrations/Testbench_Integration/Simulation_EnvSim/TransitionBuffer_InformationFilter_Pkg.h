/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:56
*************************************************************$ */
#ifndef _TransitionBuffer_InformationFilter_Pkg_H_
#define _TransitionBuffer_InformationFilter_Pkg_H_

#include "kcg_types.h"
#include "TransitionBuffer_write_only_InformationFilter_Pkg.h"
#include "TransitionBuffer_read_write_InformationFilter_Pkg.h"
#include "TransitionBuffer_read_only_InformationFilter_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::TransitionBuffer::Out */ Out;
  kcg_int /* InformationFilter_Pkg::TransitionBuffer::outStacksize */ outStacksize;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  TransitionBuffer_T_InformationFilter_Pkg /* InformationFilter_Pkg::TransitionBuffer::buffer */ buffer;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_TransitionBuffer_InformationFilter_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::TransitionBuffer */
extern void TransitionBuffer_InformationFilter_Pkg(
  /* InformationFilter_Pkg::TransitionBuffer::In */ReceivedMessage_T_Common_Types_Pkg *In,
  /* InformationFilter_Pkg::TransitionBuffer::Write */kcg_bool Write,
  /* InformationFilter_Pkg::TransitionBuffer::Reset */kcg_bool Reset,
  outC_TransitionBuffer_InformationFilter_Pkg *outC);

extern void TransitionBuffer_reset_InformationFilter_Pkg(
  outC_TransitionBuffer_InformationFilter_Pkg *outC);

#endif /* _TransitionBuffer_InformationFilter_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TransitionBuffer_InformationFilter_Pkg.h
** Generation date: 2015-11-20T19:46:56
*************************************************************$ */

