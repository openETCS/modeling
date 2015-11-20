/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _ACKMsgQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _ACKMsgQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"
#include "Counter_pwlinear_int.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::ACKMsgQueueCounter::NumElem */ NumElem;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Counter_pwlinear_int /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_ACKMsgQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::ACKMsgQueueCounter */
extern void ACKMsgQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::ACKMsgQueueCounter::insert */ kcg_bool insert,
  /* DMI_Control_Pkg::Sub_func::TextMessages::ACKMsgQueueCounter::isFull */ kcg_bool isFull,
  /* DMI_Control_Pkg::Sub_func::TextMessages::ACKMsgQueueCounter::countCommand */ kcg_int countCommand,
  /* DMI_Control_Pkg::Sub_func::TextMessages::ACKMsgQueueCounter::num_last */ kcg_int num_last,
  outC_ACKMsgQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void ACKMsgQueueCounter_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_ACKMsgQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void ACKMsgQueueCounter_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_ACKMsgQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _ACKMsgQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** ACKMsgQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

