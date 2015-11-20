/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _RmDigit_DMI_Control_Pkg_Sub_func_Keyboard_H_
#define _RmDigit_DMI_Control_Pkg_Sub_func_Keyboard_H_

#include "kcg_types.h"
#include "ReplaceDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard.h"
#include "FindIndexEmptyLoc_DMI_Control_Pkg_Utils.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_int_9 /* DMI_Control_Pkg::Sub_func::Keyboard::RmDigit::out_digit_display */ out_digit_display;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ReplaceDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard /* 1 */ _1_Context_1[9];
  outC_FindIndexEmptyLoc_DMI_Control_Pkg_Utils /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* DMI_Control_Pkg::Sub_func::Keyboard::RmDigit::_L7 */ _L7;
  array_int_9 /* DMI_Control_Pkg::Sub_func::Keyboard::RmDigit::_L11 */ _L11;
  array_int_9 /* DMI_Control_Pkg::Sub_func::Keyboard::RmDigit::_L12 */ _L12;
  array_int_9 /* DMI_Control_Pkg::Sub_func::Keyboard::RmDigit::_L13 */ _L13;
  kcg_bool /* DMI_Control_Pkg::Sub_func::Keyboard::RmDigit::_L15 */ _L15;
  kcg_int /* DMI_Control_Pkg::Sub_func::Keyboard::RmDigit::_L16 */ _L16;
  kcg_int /* DMI_Control_Pkg::Sub_func::Keyboard::RmDigit::_L17 */ _L17;
  kcg_bool /* DMI_Control_Pkg::Sub_func::Keyboard::RmDigit::_L18 */ _L18;
  kcg_int /* DMI_Control_Pkg::Sub_func::Keyboard::RmDigit::_L19 */ _L19;
  kcg_int /* DMI_Control_Pkg::Sub_func::Keyboard::RmDigit::_L20 */ _L20;
  kcg_int /* DMI_Control_Pkg::Sub_func::Keyboard::RmDigit::_L21 */ _L21;
  array_int_9 /* DMI_Control_Pkg::Sub_func::Keyboard::RmDigit::_L9 */ _L9;
  kcg_int /* DMI_Control_Pkg::Sub_func::Keyboard::RmDigit::_L10 */ _L10;
} outC_RmDigit_DMI_Control_Pkg_Sub_func_Keyboard;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::Keyboard::RmDigit */
extern void RmDigit_DMI_Control_Pkg_Sub_func_Keyboard(
  /* DMI_Control_Pkg::Sub_func::Keyboard::RmDigit::in_digit_display */ array_int_9 *in_digit_display,
  outC_RmDigit_DMI_Control_Pkg_Sub_func_Keyboard *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RmDigit_reset_DMI_Control_Pkg_Sub_func_Keyboard(
  outC_RmDigit_DMI_Control_Pkg_Sub_func_Keyboard *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RmDigit_init_DMI_Control_Pkg_Sub_func_Keyboard(
  outC_RmDigit_DMI_Control_Pkg_Sub_func_Keyboard *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _RmDigit_DMI_Control_Pkg_Sub_func_Keyboard_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** RmDigit_DMI_Control_Pkg_Sub_func_Keyboard.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

