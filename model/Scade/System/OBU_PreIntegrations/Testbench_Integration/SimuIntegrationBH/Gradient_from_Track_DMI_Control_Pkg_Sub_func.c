/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Gradient_from_Track_DMI_Control_Pkg_Sub_func.h"

#ifndef KCG_USER_DEFINED_INIT
void Gradient_from_Track_init_DMI_Control_Pkg_Sub_func(
  outC_Gradient_from_Track_DMI_Control_Pkg_Sub_func *outC)
{
  static kcg_int i9;
  static kcg_int i8;
  static kcg_int i7;
  static kcg_int i6;
  static kcg_int i5;
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  for (i = 0; i < 32; i++) {
    outC->_L31[i] = kcg_true;
  }
  outC->_L29 = kcg_true;
  for (i1 = 0; i1 < 32; i1++) {
    outC->_L28[i1] = 0.0;
  }
  for (i2 = 0; i2 < 32; i2++) {
    outC->_L26[i2] = 0.0;
  }
  for (i3 = 0; i3 < 32; i3++) {
    outC->_L25[i3] = 0.0;
  }
  outC->_L24 = 0;
  for (i4 = 0; i4 < 32; i4++) {
    outC->_L12[i4].valid = kcg_true;
    outC->_L12[i4].begin_section = 0;
    outC->_L12[i4].end_section = 0;
    outC->_L12[i4].gradient = 0;
  }
  for (i5 = 0; i5 < 32; i5++) {
    outC->Gradient_Visible_Flag[i5] = kcg_true;
  }
  for (i6 = 0; i6 < 32; i6++) {
    outC->Gradient_Value[i6] = 0.0;
  }
  for (i7 = 0; i7 < 32; i7++) {
    outC->Gradient_Begin[i7] = 0.0;
  }
  for (i8 = 0; i8 < 32; i8++) {
    outC->Gradient_End[i8] = 0.0;
  }
  for (i9 = 0; i9 < 32; i9++) {
    /* 1 */
    Gradient_Profile_LIst_Operator_init_DMI_Control_Pkg_Sub_func(
      &outC->Context_1[i9]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Gradient_from_Track_reset_DMI_Control_Pkg_Sub_func(
  outC_Gradient_from_Track_DMI_Control_Pkg_Sub_func *outC)
{
  static kcg_int i;
  
  for (i = 0; i < 32; i++) {
    /* 1 */
    Gradient_Profile_LIst_Operator_reset_DMI_Control_Pkg_Sub_func(
      &outC->Context_1[i]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Sub_func::Gradient_from_Track */
void Gradient_from_Track_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::Gradient_from_Track::Track_Atlas_Gradient */ DMI_gradientProfileArray_T_DMI_Types_Pkg *Track_Atlas_Gradient,
  outC_Gradient_from_Track_DMI_Control_Pkg_Sub_func *outC)
{
  static kcg_int i;
  static kcg_int noname;
  
  kcg_copy_DMI_gradientProfileArray_T_DMI_Types_Pkg(
    &outC->_L12,
    Track_Atlas_Gradient);
  outC->_L29 = kcg_true;
  /* 2 */ if (outC->_L29) {
    /* 2 */ for (i = 0; i < 32; i++) {
      /* 1 */
      Gradient_Profile_LIst_Operator_DMI_Control_Pkg_Sub_func(
        i,
        &outC->_L12[i],
        &outC->Context_1[i]);
      outC->_L31[i] = outC->Context_1[i].Gradient_Visible_Flag;
      outC->_L28[i] = outC->Context_1[i].Gradient_Begin_Section;
      outC->_L25[i] = outC->Context_1[i].Gradient_End_Section;
      outC->_L26[i] = outC->Context_1[i].Gradient_Value_Section;
      outC->_L24 = i + 1;
      /* 2 */ if (!outC->Context_1[i]._1_continue) {
        break;
      }
    }
  }
  else {
    outC->_L24 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  /* 2 */ for (i = outC->_L24; i < 32; i++) {
    outC->_L31[i] = kcg_false;
    outC->_L28[i] = 0.0;
    outC->_L25[i] = 0.0;
    outC->_L26[i] = 0.0;
  }
#endif /* KCG_MAPW_CPY */
  
  kcg_copy_array_real_32(&outC->Gradient_End, &outC->_L25);
  kcg_copy_array_real_32(&outC->Gradient_Begin, &outC->_L28);
  kcg_copy_array_real_32(&outC->Gradient_Value, &outC->_L26);
  noname = outC->_L24;
  kcg_copy_array_bool_32(&outC->Gradient_Visible_Flag, &outC->_L31);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Gradient_from_Track_DMI_Control_Pkg_Sub_func.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

