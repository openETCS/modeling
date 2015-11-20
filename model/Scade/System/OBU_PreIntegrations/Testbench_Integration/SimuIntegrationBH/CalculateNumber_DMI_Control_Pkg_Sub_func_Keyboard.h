/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard_H_
#define _CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard_H_

#include "kcg_types.h"
#include "CalculateNumber_iterator_DMI_Control_Pkg_Sub_func_Keyboard.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber::out_KeyNumber */ out_KeyNumber;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CalculateNumber_iterator_DMI_Control_Pkg_Sub_func_Keyboard /* 1 */ Context_1[12];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array_bool_12 /* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber::_L2 */ _L2;
  kcg_int /* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber::_L3 */ _L3;
  kcg_int /* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber::_L4 */ _L4;
  kcg_int /* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber::_L5 */ _L5;
  kcg_bool /* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber::_L7 */ _L7;
  kcg_int /* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber::_L8 */ _L8;
  kcg_int /* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber::_L10 */ _L10;
  kcg_bool /* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber::_L11 */ _L11;
  kcg_int /* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber::_L12 */ _L12;
  kcg_int /* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber::_L13 */ _L13;
  kcg_int /* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber::_L16 */ _L16;
  kcg_int /* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber::_L17 */ _L17;
  kcg_int /* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber::_L18 */ _L18;
  kcg_int /* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber::_L19 */ _L19;
} outC_CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber */
extern void CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard(
  /* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber::start */ kcg_bool start,
  /* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber::in_arraykey */ array_bool_12 *in_arraykey,
  outC_CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CalculateNumber_reset_DMI_Control_Pkg_Sub_func_Keyboard(
  outC_CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CalculateNumber_init_DMI_Control_Pkg_Sub_func_Keyboard(
  outC_CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

