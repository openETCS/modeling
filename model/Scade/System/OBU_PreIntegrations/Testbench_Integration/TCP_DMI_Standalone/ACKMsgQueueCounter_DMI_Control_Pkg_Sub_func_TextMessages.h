/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:32
*************************************************************$ */
#ifndef _ACKMsgQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _ACKMsgQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"
#include "Counter_pwlinear_int.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::ACKMsgQueueCounter::NumElem */ NumElem;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Counter_pwlinear_int /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_ACKMsgQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::ACKMsgQueueCounter */
extern void ACKMsgQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::ACKMsgQueueCounter::insert */kcg_bool insert,
  /* DMI_Control_Pkg::Sub_func::TextMessages::ACKMsgQueueCounter::isFull */kcg_bool isFull,
  /* DMI_Control_Pkg::Sub_func::TextMessages::ACKMsgQueueCounter::countCommand */kcg_int countCommand,
  /* DMI_Control_Pkg::Sub_func::TextMessages::ACKMsgQueueCounter::num_last */kcg_int num_last,
  outC_ACKMsgQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void ACKMsgQueueCounter_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_ACKMsgQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#endif /* _ACKMsgQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ACKMsgQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2015-11-20T19:43:32
*************************************************************$ */

