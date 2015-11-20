/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Gradient_Profile_LIst_Operator_DMI_Control_Pkg_Sub_func.h"

/* DMI_Control_Pkg::Sub_func::Gradient_Profile_LIst_Operator */
void Gradient_Profile_LIst_Operator_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::Gradient_Profile_LIst_Operator::Index */kcg_int Index,
  /* DMI_Control_Pkg::Sub_func::Gradient_Profile_LIst_Operator::Gradient_information_from_Track_Atlas */DMI_gradientProfileElement_T_DMI_Types_Pkg *Gradient_information_from_Track_Atlas,
  /* DMI_Control_Pkg::Sub_func::Gradient_Profile_LIst_Operator::continue */kcg_bool *_1_continue,
  /* DMI_Control_Pkg::Sub_func::Gradient_Profile_LIst_Operator::Gradient_Visible_Flag */kcg_bool *Gradient_Visible_Flag,
  /* DMI_Control_Pkg::Sub_func::Gradient_Profile_LIst_Operator::Gradient_Begin_Section */kcg_real *Gradient_Begin_Section,
  /* DMI_Control_Pkg::Sub_func::Gradient_Profile_LIst_Operator::Gradient_End_Section */kcg_real *Gradient_End_Section,
  /* DMI_Control_Pkg::Sub_func::Gradient_Profile_LIst_Operator::Gradient_Value_Section */kcg_real *Gradient_Value_Section)
{
  *_1_continue = (*Gradient_information_from_Track_Atlas).valid;
  *Gradient_Visible_Flag = *_1_continue;
  *Gradient_End_Section = (kcg_real)
      (*Gradient_information_from_Track_Atlas).end_section / 100.0;
  *Gradient_Begin_Section = (kcg_real)
      (*Gradient_information_from_Track_Atlas).begin_section / 100.0;
  *Gradient_Value_Section = (kcg_real)
      (*Gradient_information_from_Track_Atlas).gradient;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Gradient_Profile_LIst_Operator_DMI_Control_Pkg_Sub_func.c
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

