/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _SpeedToDigit_DMI_Control_Pkg_Sub_func_Speed_H_
#define _SpeedToDigit_DMI_Control_Pkg_Sub_func_Speed_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* DMI_Control_Pkg::Sub_func::Speed::SpeedToDigit::SpeedDigitOne */ SpeedDigitOne;
  kcg_real /* DMI_Control_Pkg::Sub_func::Speed::SpeedToDigit::SpeedDigitTwo */ SpeedDigitTwo;
  kcg_real /* DMI_Control_Pkg::Sub_func::Speed::SpeedToDigit::SpeedDigitThree */ SpeedDigitThree;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_real /* DMI_Control_Pkg::Sub_func::Speed::SpeedToDigit::_L1 */ _L1;
  kcg_int /* DMI_Control_Pkg::Sub_func::Speed::SpeedToDigit::_L2 */ _L2;
  kcg_int /* DMI_Control_Pkg::Sub_func::Speed::SpeedToDigit::_L3 */ _L3;
  kcg_real /* DMI_Control_Pkg::Sub_func::Speed::SpeedToDigit::_L4 */ _L4;
  kcg_int /* DMI_Control_Pkg::Sub_func::Speed::SpeedToDigit::_L5 */ _L5;
  kcg_real /* DMI_Control_Pkg::Sub_func::Speed::SpeedToDigit::_L6 */ _L6;
  kcg_real /* DMI_Control_Pkg::Sub_func::Speed::SpeedToDigit::_L7 */ _L7;
  kcg_int /* DMI_Control_Pkg::Sub_func::Speed::SpeedToDigit::_L9 */ _L9;
  kcg_int /* DMI_Control_Pkg::Sub_func::Speed::SpeedToDigit::_L8 */ _L8;
  kcg_int /* DMI_Control_Pkg::Sub_func::Speed::SpeedToDigit::_L12 */ _L12;
  kcg_int /* DMI_Control_Pkg::Sub_func::Speed::SpeedToDigit::_L13 */ _L13;
  kcg_int /* DMI_Control_Pkg::Sub_func::Speed::SpeedToDigit::_L14 */ _L14;
  kcg_int /* DMI_Control_Pkg::Sub_func::Speed::SpeedToDigit::_L15 */ _L15;
  kcg_int /* DMI_Control_Pkg::Sub_func::Speed::SpeedToDigit::_L16 */ _L16;
  kcg_int /* DMI_Control_Pkg::Sub_func::Speed::SpeedToDigit::_L17 */ _L17;
} outC_SpeedToDigit_DMI_Control_Pkg_Sub_func_Speed;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::Speed::SpeedToDigit */
extern void SpeedToDigit_DMI_Control_Pkg_Sub_func_Speed(
  /* DMI_Control_Pkg::Sub_func::Speed::SpeedToDigit::TrainSpeed */ kcg_real TrainSpeed,
  outC_SpeedToDigit_DMI_Control_Pkg_Sub_func_Speed *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SpeedToDigit_reset_DMI_Control_Pkg_Sub_func_Speed(
  outC_SpeedToDigit_DMI_Control_Pkg_Sub_func_Speed *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SpeedToDigit_init_DMI_Control_Pkg_Sub_func_Speed(
  outC_SpeedToDigit_DMI_Control_Pkg_Sub_func_Speed *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _SpeedToDigit_DMI_Control_Pkg_Sub_func_Speed_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** SpeedToDigit_DMI_Control_Pkg_Sub_func_Speed.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

