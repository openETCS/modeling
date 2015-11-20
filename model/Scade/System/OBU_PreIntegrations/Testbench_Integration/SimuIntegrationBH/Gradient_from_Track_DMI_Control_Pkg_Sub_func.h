/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _Gradient_from_Track_DMI_Control_Pkg_Sub_func_H_
#define _Gradient_from_Track_DMI_Control_Pkg_Sub_func_H_

#include "kcg_types.h"
#include "Gradient_Profile_LIst_Operator_DMI_Control_Pkg_Sub_func.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_real_32 /* DMI_Control_Pkg::Sub_func::Gradient_from_Track::Gradient_End */ Gradient_End;
  array_real_32 /* DMI_Control_Pkg::Sub_func::Gradient_from_Track::Gradient_Begin */ Gradient_Begin;
  array_real_32 /* DMI_Control_Pkg::Sub_func::Gradient_from_Track::Gradient_Value */ Gradient_Value;
  array_bool_32 /* DMI_Control_Pkg::Sub_func::Gradient_from_Track::Gradient_Visible_Flag */ Gradient_Visible_Flag;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Gradient_Profile_LIst_Operator_DMI_Control_Pkg_Sub_func /* 1 */ Context_1[32];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_gradientProfileArray_T_DMI_Types_Pkg /* DMI_Control_Pkg::Sub_func::Gradient_from_Track::_L12 */ _L12;
  kcg_int /* DMI_Control_Pkg::Sub_func::Gradient_from_Track::_L24 */ _L24;
  array_real_32 /* DMI_Control_Pkg::Sub_func::Gradient_from_Track::_L25 */ _L25;
  array_real_32 /* DMI_Control_Pkg::Sub_func::Gradient_from_Track::_L26 */ _L26;
  array_real_32 /* DMI_Control_Pkg::Sub_func::Gradient_from_Track::_L28 */ _L28;
  kcg_bool /* DMI_Control_Pkg::Sub_func::Gradient_from_Track::_L29 */ _L29;
  array_bool_32 /* DMI_Control_Pkg::Sub_func::Gradient_from_Track::_L31 */ _L31;
} outC_Gradient_from_Track_DMI_Control_Pkg_Sub_func;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::Gradient_from_Track */
extern void Gradient_from_Track_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::Gradient_from_Track::Track_Atlas_Gradient */ DMI_gradientProfileArray_T_DMI_Types_Pkg *Track_Atlas_Gradient,
  outC_Gradient_from_Track_DMI_Control_Pkg_Sub_func *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Gradient_from_Track_reset_DMI_Control_Pkg_Sub_func(
  outC_Gradient_from_Track_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Gradient_from_Track_init_DMI_Control_Pkg_Sub_func(
  outC_Gradient_from_Track_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Gradient_from_Track_DMI_Control_Pkg_Sub_func_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Gradient_from_Track_DMI_Control_Pkg_Sub_func.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

