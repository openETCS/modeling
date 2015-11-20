/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Gradient_Profile_LIst_Operator_DMI_Control_Pkg_Sub_func.h"

#ifndef KCG_USER_DEFINED_INIT
void Gradient_Profile_LIst_Operator_init_DMI_Control_Pkg_Sub_func(
  outC_Gradient_Profile_LIst_Operator_DMI_Control_Pkg_Sub_func *outC)
{
  outC->_L29 = 0.0;
  outC->_L28 = 0.0;
  outC->_L27 = 0;
  outC->_L26 = 0.0;
  outC->_L25 = 0.0;
  outC->_L23 = 0.0;
  outC->_L22 = 0.0;
  outC->_L21 = 0.0;
  outC->_L15 = 0;
  outC->_L16 = 0;
  outC->_L17 = 0;
  outC->_L18 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.begin_section = 0;
  outC->_L1.end_section = 0;
  outC->_L1.gradient = 0;
  outC->Gradient_Value_Section = 0.0;
  outC->Gradient_End_Section = 0.0;
  outC->Gradient_Begin_Section = 0.0;
  outC->Gradient_Visible_Flag = kcg_true;
  outC->_1_continue = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Gradient_Profile_LIst_Operator_reset_DMI_Control_Pkg_Sub_func(
  outC_Gradient_Profile_LIst_Operator_DMI_Control_Pkg_Sub_func *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Sub_func::Gradient_Profile_LIst_Operator */
void Gradient_Profile_LIst_Operator_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::Gradient_Profile_LIst_Operator::Index */ kcg_int Index,
  /* DMI_Control_Pkg::Sub_func::Gradient_Profile_LIst_Operator::Gradient_information_from_Track_Atlas */ DMI_gradientProfileElement_T_DMI_Types_Pkg *Gradient_information_from_Track_Atlas,
  outC_Gradient_Profile_LIst_Operator_DMI_Control_Pkg_Sub_func *outC)
{
  static kcg_int noname;
  
  kcg_copy_DMI_gradientProfileElement_T_DMI_Types_Pkg(
    &outC->_L1,
    Gradient_information_from_Track_Atlas);
  outC->_L17 = outC->_L1.begin_section;
  outC->_L21 = (kcg_real) outC->_L17;
  outC->_L22 = 100.0;
  outC->_L28 = outC->_L21 / outC->_L22;
  outC->Gradient_Begin_Section = outC->_L28;
  outC->_L15 = outC->_L1.gradient;
  outC->_L16 = outC->_L1.end_section;
  outC->_L18 = outC->_L1.valid;
  outC->_L23 = (kcg_real) outC->_L16;
  outC->_L25 = 100.0;
  outC->_L29 = outC->_L23 / outC->_L25;
  outC->Gradient_End_Section = outC->_L29;
  outC->_L26 = (kcg_real) outC->_L15;
  outC->Gradient_Value_Section = outC->_L26;
  outC->Gradient_Visible_Flag = outC->_L18;
  outC->_L27 = Index;
  noname = outC->_L27;
  outC->_1_continue = outC->_L18;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Gradient_Profile_LIst_Operator_DMI_Control_Pkg_Sub_func.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

