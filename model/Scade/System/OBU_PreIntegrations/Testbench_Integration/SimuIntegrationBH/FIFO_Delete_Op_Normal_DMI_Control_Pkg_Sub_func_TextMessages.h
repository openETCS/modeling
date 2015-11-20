/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _FIFO_Delete_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _FIFO_Delete_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"
#include "DeleteMSGFIFO_iterator_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_169451 /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Delete_Op_Normal::Queue */ Queue;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_DeleteMSGFIFO_iterator_DMI_Control_Pkg_Sub_func_TextMessages /* 1 */ Context_1[10];
  /* ----------------- no clocks of observable data ------------------ */
} outC_FIFO_Delete_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Delete_Op_Normal */
extern void FIFO_Delete_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Delete_Op_Normal::DeletePos */ kcg_int DeletePos,
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Delete_Op_Normal::queueIn */ array_169451 *queueIn,
  outC_FIFO_Delete_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void FIFO_Delete_Op_Normal_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_FIFO_Delete_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void FIFO_Delete_Op_Normal_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_FIFO_Delete_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _FIFO_Delete_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** FIFO_Delete_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

