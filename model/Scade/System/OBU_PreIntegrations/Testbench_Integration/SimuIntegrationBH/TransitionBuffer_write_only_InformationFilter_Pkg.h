/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _TransitionBuffer_write_only_InformationFilter_Pkg_H_
#define _TransitionBuffer_write_only_InformationFilter_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* InformationFilter_Pkg::TransitionBuffer_write_only */
extern void TransitionBuffer_write_only_InformationFilter_Pkg(
  /* InformationFilter_Pkg::TransitionBuffer_write_only::Buffer_In */ TransitionBuffer_T_InformationFilter_Pkg *Buffer_In,
  /* InformationFilter_Pkg::TransitionBuffer_write_only::Stacksize_old */ kcg_int Stacksize_old,
  /* InformationFilter_Pkg::TransitionBuffer_write_only::Message_In */ ReceivedMessage_T_Common_Types_Pkg *Message_In,
  /* InformationFilter_Pkg::TransitionBuffer_write_only::Reset */ kcg_bool Reset,
  /* InformationFilter_Pkg::TransitionBuffer_write_only::Buffer_Out */ TransitionBuffer_T_InformationFilter_Pkg *Buffer_Out,
  /* InformationFilter_Pkg::TransitionBuffer_write_only::Stacksize_new */ kcg_int *Stacksize_new,
  /* InformationFilter_Pkg::TransitionBuffer_write_only::Message_out */ ReceivedMessage_T_Common_Types_Pkg *Message_out);

#endif /* _TransitionBuffer_write_only_InformationFilter_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** TransitionBuffer_write_only_InformationFilter_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

