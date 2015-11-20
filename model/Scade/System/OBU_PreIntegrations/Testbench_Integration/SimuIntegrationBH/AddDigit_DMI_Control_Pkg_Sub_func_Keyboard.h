/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _AddDigit_DMI_Control_Pkg_Sub_func_Keyboard_H_
#define _AddDigit_DMI_Control_Pkg_Sub_func_Keyboard_H_

#include "kcg_types.h"
#include "AddDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_int_9 /* DMI_Control_Pkg::Sub_func::Keyboard::AddDigit::out_digit_display */ out_digit_display;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_AddDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard /* 1 */ Context_1[9];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array_int_9 /* DMI_Control_Pkg::Sub_func::Keyboard::AddDigit::_L2 */ _L2;
  array_int_9 /* DMI_Control_Pkg::Sub_func::Keyboard::AddDigit::_L4 */ _L4;
  kcg_int /* DMI_Control_Pkg::Sub_func::Keyboard::AddDigit::_L3 */ _L3;
  array_int_9 /* DMI_Control_Pkg::Sub_func::Keyboard::AddDigit::_L12 */ _L12;
  kcg_int /* DMI_Control_Pkg::Sub_func::Keyboard::AddDigit::_L13 */ _L13;
  kcg_bool /* DMI_Control_Pkg::Sub_func::Keyboard::AddDigit::_L14 */ _L14;
  kcg_int /* DMI_Control_Pkg::Sub_func::Keyboard::AddDigit::_L15 */ _L15;
} outC_AddDigit_DMI_Control_Pkg_Sub_func_Keyboard;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::Keyboard::AddDigit */
extern void AddDigit_DMI_Control_Pkg_Sub_func_Keyboard(
  /* DMI_Control_Pkg::Sub_func::Keyboard::AddDigit::in_digit_display */ array_int_9 *in_digit_display,
  /* DMI_Control_Pkg::Sub_func::Keyboard::AddDigit::KeyNumber */ kcg_int KeyNumber,
  outC_AddDigit_DMI_Control_Pkg_Sub_func_Keyboard *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void AddDigit_reset_DMI_Control_Pkg_Sub_func_Keyboard(
  outC_AddDigit_DMI_Control_Pkg_Sub_func_Keyboard *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void AddDigit_init_DMI_Control_Pkg_Sub_func_Keyboard(
  outC_AddDigit_DMI_Control_Pkg_Sub_func_Keyboard *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _AddDigit_DMI_Control_Pkg_Sub_func_Keyboard_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** AddDigit_DMI_Control_Pkg_Sub_func_Keyboard.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

