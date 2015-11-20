/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _ReplaceDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard_H_
#define _ReplaceDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* DMI_Control_Pkg::Sub_func::Keyboard::ReplaceDigit_iterator::condition */ condition;
  kcg_int /* DMI_Control_Pkg::Sub_func::Keyboard::ReplaceDigit_iterator::out_array */ out_array;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* DMI_Control_Pkg::Sub_func::Keyboard::ReplaceDigit_iterator::_L1 */ _L1;
  kcg_int /* DMI_Control_Pkg::Sub_func::Keyboard::ReplaceDigit_iterator::_L2 */ _L2;
  kcg_int /* DMI_Control_Pkg::Sub_func::Keyboard::ReplaceDigit_iterator::_L3 */ _L3;
  kcg_bool /* DMI_Control_Pkg::Sub_func::Keyboard::ReplaceDigit_iterator::_L4 */ _L4;
  kcg_bool /* DMI_Control_Pkg::Sub_func::Keyboard::ReplaceDigit_iterator::_L5 */ _L5;
  kcg_int /* DMI_Control_Pkg::Sub_func::Keyboard::ReplaceDigit_iterator::_L6 */ _L6;
  kcg_int /* DMI_Control_Pkg::Sub_func::Keyboard::ReplaceDigit_iterator::_L8 */ _L8;
  kcg_int /* DMI_Control_Pkg::Sub_func::Keyboard::ReplaceDigit_iterator::_L9 */ _L9;
  kcg_int /* DMI_Control_Pkg::Sub_func::Keyboard::ReplaceDigit_iterator::_L10 */ _L10;
} outC_ReplaceDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::Keyboard::ReplaceDigit_iterator */
extern void ReplaceDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard(
  /* DMI_Control_Pkg::Sub_func::Keyboard::ReplaceDigit_iterator::index */ kcg_int index,
  /* DMI_Control_Pkg::Sub_func::Keyboard::ReplaceDigit_iterator::in_digit_display */ kcg_int in_digit_display,
  /* DMI_Control_Pkg::Sub_func::Keyboard::ReplaceDigit_iterator::Calc_index */ kcg_int Calc_index,
  outC_ReplaceDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ReplaceDigit_iterator_reset_DMI_Control_Pkg_Sub_func_Keyboard(
  outC_ReplaceDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ReplaceDigit_iterator_init_DMI_Control_Pkg_Sub_func_Keyboard(
  outC_ReplaceDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _ReplaceDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** ReplaceDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

