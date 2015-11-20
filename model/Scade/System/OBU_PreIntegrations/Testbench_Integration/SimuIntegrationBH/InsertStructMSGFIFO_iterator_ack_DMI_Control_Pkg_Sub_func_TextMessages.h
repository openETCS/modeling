/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _InsertStructMSGFIFO_iterator_ack_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _InsertStructMSGFIFO_iterator_ack_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_170229 /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::OutputArray */ OutputArray;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_InsertStructMSGFIFO_iterator_ack_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack */
extern void InsertStructMSGFIFO_iterator_ack_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::index */ kcg_int index,
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::acc */ array_170229 *acc,
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::Position */ kcg_int Position,
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::newMsg */ DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *newMsg,
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::isFull */ kcg_bool isFull,
  outC_InsertStructMSGFIFO_iterator_ack_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void InsertStructMSGFIFO_iterator_ack_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_InsertStructMSGFIFO_iterator_ack_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void InsertStructMSGFIFO_iterator_ack_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_InsertStructMSGFIFO_iterator_ack_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _InsertStructMSGFIFO_iterator_ack_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** InsertStructMSGFIFO_iterator_ack_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

