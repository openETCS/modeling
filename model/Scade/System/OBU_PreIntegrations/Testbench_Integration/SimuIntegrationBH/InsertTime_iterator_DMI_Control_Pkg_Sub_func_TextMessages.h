/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::InsertTime_iterator::condition */ condition;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::InsertTime_iterator::hh */ hh;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::InsertTime_iterator::mm */ mm;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::InsertTime_iterator::_L1 */ _L1;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::InsertTime_iterator::_L2 */ _L2;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::InsertTime_iterator::_L4 */ _L4;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::InsertTime_iterator::_L6 */ _L6;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::InsertTime_iterator::_L7 */ _L7;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::InsertTime_iterator::_L15 */ _L15;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::InsertTime_iterator::_L5 */ _L5;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::InsertTime_iterator::_L17 */ _L17;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::InsertTime_iterator::_L16 */ _L16;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::InsertTime_iterator::_L18 */ _L18;
} outC_InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::InsertTime_iterator */
extern void InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertTime_iterator::index */ kcg_int index,
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertTime_iterator::Position */ kcg_int Position,
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertTime_iterator::new_hh */ kcg_real new_hh,
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertTime_iterator::new_mm */ kcg_real new_mm,
  outC_InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void InsertTime_iterator_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void InsertTime_iterator_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

