/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _MergeMsg_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _MergeMsg_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"
#include "MergeMSG_iterator_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_169451 /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMsg::OutQueue */ OutQueue;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MergeMSG_iterator_DMI_Control_Pkg_Sub_func_TextMessages /* 1 */ Context_1[10];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array_169451 /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMsg::_L14 */ _L14;
  array_169451 /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMsg::_L39 */ _L39;
  array_169451 /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMsg::_L43 */ _L43;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMsg::_L45 */ _L45;
  array_168969 /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMsg::_L40 */ _L40;
  array_int_10 /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMsg::_L46 */ _L46;
  array_168969 /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMsg::_L47 */ _L47;
} outC_MergeMsg_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::MergeMsg */
extern void MergeMsg_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMsg::num */ kcg_int num,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMsg::impQueue */ array_169451 *impQueue,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMsg::AuxiQueue */ array_169451 *AuxiQueue,
  outC_MergeMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void MergeMsg_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MergeMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void MergeMsg_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MergeMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _MergeMsg_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** MergeMsg_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

