/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _FIFO_delete_time_Normal_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _FIFO_delete_time_Normal_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"
#include "deleteTime_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_delete_time_Normal::new_mm_array */ new_mm_array;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_delete_time_Normal::new_hh_array */ new_hh_array;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_FIFO_delete_time_Normal_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_delete_time_Normal */
extern void FIFO_delete_time_Normal_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_delete_time_Normal::hh_array */ array_real_10 *hh_array,
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_delete_time_Normal::mm_array */ array_real_10 *mm_array,
  outC_FIFO_delete_time_Normal_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void FIFO_delete_time_Normal_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_FIFO_delete_time_Normal_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void FIFO_delete_time_Normal_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_FIFO_delete_time_Normal_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _FIFO_delete_time_Normal_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** FIFO_delete_time_Normal_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

