/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _Gradient_Profile_LIst_Operator_DMI_Control_Pkg_Sub_func_H_
#define _Gradient_Profile_LIst_Operator_DMI_Control_Pkg_Sub_func_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* DMI_Control_Pkg::Sub_func::Gradient_Profile_LIst_Operator::continue */ _1_continue;
  kcg_bool /* DMI_Control_Pkg::Sub_func::Gradient_Profile_LIst_Operator::Gradient_Visible_Flag */ Gradient_Visible_Flag;
  kcg_real /* DMI_Control_Pkg::Sub_func::Gradient_Profile_LIst_Operator::Gradient_Begin_Section */ Gradient_Begin_Section;
  kcg_real /* DMI_Control_Pkg::Sub_func::Gradient_Profile_LIst_Operator::Gradient_End_Section */ Gradient_End_Section;
  kcg_real /* DMI_Control_Pkg::Sub_func::Gradient_Profile_LIst_Operator::Gradient_Value_Section */ Gradient_Value_Section;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_gradientProfileElement_T_DMI_Types_Pkg /* DMI_Control_Pkg::Sub_func::Gradient_Profile_LIst_Operator::_L1 */ _L1;
  kcg_bool /* DMI_Control_Pkg::Sub_func::Gradient_Profile_LIst_Operator::_L18 */ _L18;
  L_internal_Type_Obu_BasicTypes_Pkg /* DMI_Control_Pkg::Sub_func::Gradient_Profile_LIst_Operator::_L17 */ _L17;
  L_internal_Type_Obu_BasicTypes_Pkg /* DMI_Control_Pkg::Sub_func::Gradient_Profile_LIst_Operator::_L16 */ _L16;
  G_internal_Type_Obu_BasicTypes_Pkg /* DMI_Control_Pkg::Sub_func::Gradient_Profile_LIst_Operator::_L15 */ _L15;
  kcg_real /* DMI_Control_Pkg::Sub_func::Gradient_Profile_LIst_Operator::_L21 */ _L21;
  kcg_real /* DMI_Control_Pkg::Sub_func::Gradient_Profile_LIst_Operator::_L22 */ _L22;
  kcg_real /* DMI_Control_Pkg::Sub_func::Gradient_Profile_LIst_Operator::_L23 */ _L23;
  kcg_real /* DMI_Control_Pkg::Sub_func::Gradient_Profile_LIst_Operator::_L25 */ _L25;
  kcg_real /* DMI_Control_Pkg::Sub_func::Gradient_Profile_LIst_Operator::_L26 */ _L26;
  kcg_int /* DMI_Control_Pkg::Sub_func::Gradient_Profile_LIst_Operator::_L27 */ _L27;
  kcg_real /* DMI_Control_Pkg::Sub_func::Gradient_Profile_LIst_Operator::_L28 */ _L28;
  kcg_real /* DMI_Control_Pkg::Sub_func::Gradient_Profile_LIst_Operator::_L29 */ _L29;
} outC_Gradient_Profile_LIst_Operator_DMI_Control_Pkg_Sub_func;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::Gradient_Profile_LIst_Operator */
extern void Gradient_Profile_LIst_Operator_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::Gradient_Profile_LIst_Operator::Index */ kcg_int Index,
  /* DMI_Control_Pkg::Sub_func::Gradient_Profile_LIst_Operator::Gradient_information_from_Track_Atlas */ DMI_gradientProfileElement_T_DMI_Types_Pkg *Gradient_information_from_Track_Atlas,
  outC_Gradient_Profile_LIst_Operator_DMI_Control_Pkg_Sub_func *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Gradient_Profile_LIst_Operator_reset_DMI_Control_Pkg_Sub_func(
  outC_Gradient_Profile_LIst_Operator_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Gradient_Profile_LIst_Operator_init_DMI_Control_Pkg_Sub_func(
  outC_Gradient_Profile_LIst_Operator_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Gradient_Profile_LIst_Operator_DMI_Control_Pkg_Sub_func_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Gradient_Profile_LIst_Operator_DMI_Control_Pkg_Sub_func.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

