/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _MergeTime_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _MergeTime_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"
#include "MergeTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::MergeTime::OutQueue */ OutQueue;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MergeTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages /* 1 */ Context_1[10];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array_real_10_10 /* DMI_Control_Pkg::Sub_func::TextMessages::MergeTime::_L14 */ _L14;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::MergeTime::_L13 */ _L13;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::MergeTime::_L12 */ _L12;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MergeTime::_L11 */ _L11;
  array_real_10_10 /* DMI_Control_Pkg::Sub_func::TextMessages::MergeTime::_L10 */ _L10;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::MergeTime::_L9 */ _L9;
  array_int_10 /* DMI_Control_Pkg::Sub_func::TextMessages::MergeTime::_L8 */ _L8;
} outC_MergeTime_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::MergeTime */
extern void MergeTime_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeTime::num */ kcg_int num,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeTime::AuxTimeiArray */ array_real_10 *AuxTimeiArray,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeTime::impTimeArray */ array_real_10 *impTimeArray,
  outC_MergeTime_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void MergeTime_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MergeTime_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void MergeTime_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MergeTime_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _MergeTime_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** MergeTime_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

