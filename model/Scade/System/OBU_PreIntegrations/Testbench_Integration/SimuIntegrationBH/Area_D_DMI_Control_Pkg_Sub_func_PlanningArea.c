/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Area_D_DMI_Control_Pkg_Sub_func_PlanningArea.h"

#ifndef KCG_USER_DEFINED_INIT
void Area_D_init_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_Area_D_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
{
  static kcg_int i16;
  static kcg_int i15;
  static kcg_int i14;
  static kcg_int i13;
  static kcg_int i12;
  static kcg_int i11;
  static kcg_int i10;
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
  
  for (i = 0; i < 10; i++) {
    outC->_L13[i] = 0.0;
  }
  for (i1 = 0; i1 < 10; i1++) {
    outC->_L14[i1] = 0.0;
  }
  outC->_L12 = 0.0;
  for (i3 = 0; i3 < 2; i3++) {
    for (i2 = 0; i2 < 10; i2++) {
      outC->_L11[i3][i2] = 0.0;
    }
  }
  for (i4 = 0; i4 < 32; i4++) {
    outC->_L10[i4] = 0.0;
  }
  for (i5 = 0; i5 < 32; i5++) {
    outC->_L9[i5] = 0.0;
  }
  outC->_L8 = 0.0;
  for (i6 = 0; i6 < 12; i6++) {
    outC->_L3[i6] = 0.0;
  }
  for (i7 = 0; i7 < 12; i7++) {
    outC->_L2[i7] = 0.0;
  }
  for (i8 = 0; i8 < 12; i8++) {
    outC->_L1[i8] = 0.0;
  }
  for (i9 = 0; i9 < 32; i9++) {
    outC->_L4[i9] = 0.0;
  }
  for (i10 = 0; i10 < 32; i10++) {
    outC->_L5[i10] = 0.0;
  }
  for (i11 = 0; i11 < 32; i11++) {
    outC->_L6[i11] = 0.0;
  }
  outC->_L7 = 0.0;
  for (i12 = 0; i12 < 12; i12++) {
    outC->GradientsValue[i12] = 0.0;
  }
  outC->CeilingPermittedSpeed = 0.0;
  for (i14 = 0; i14 < 2; i14++) {
    for (i13 = 0; i13 < 10; i13++) {
      outC->PlaningAreaSpeedProfile[i14][i13] = 0.0;
    }
  }
  for (i15 = 0; i15 < 12; i15++) {
    outC->GradientsEnd[i15] = 0.0;
  }
  for (i16 = 0; i16 < 12; i16++) {
    outC->GradientsStart[i16] = 0.0;
  }
  /* 1 */
  NextSpeedProfiles_init_DMI_Control_Pkg_Sub_func_PlanningArea(
    &outC->_1_Context_1);
  /* 1 */
  NextGradients_init_DMI_Control_Pkg_Sub_func_PlanningArea(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Area_D_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_Area_D_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
{
  /* 1 */
  NextSpeedProfiles_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
    &outC->_1_Context_1);
  /* 1 */
  NextGradients_reset_DMI_Control_Pkg_Sub_func_PlanningArea(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D */
void Area_D_DMI_Control_Pkg_Sub_func_PlanningArea(
  /* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D::inTrainPosition */ kcg_real inTrainPosition,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D::inGradientsValue */ array_real_32 *inGradientsValue,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D::inGradientsEnd */ array_real_32 *inGradientsEnd,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D::inGradientsStart */ array_real_32 *inGradientsStart,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D::inCeilingPermittedSpeed */ kcg_real inCeilingPermittedSpeed,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D::inSpeedProfile_Distance */ array_real_32 *inSpeedProfile_Distance,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D::inSpeedProfile_Speed */ array_real_32 *inSpeedProfile_Speed,
  outC_Area_D_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
{
  outC->_L7 = inTrainPosition;
  kcg_copy_array_real_32(&outC->_L4, inGradientsStart);
  kcg_copy_array_real_32(&outC->_L5, inGradientsEnd);
  kcg_copy_array_real_32(&outC->_L6, inGradientsValue);
  /* 1 */
  NextGradients_DMI_Control_Pkg_Sub_func_PlanningArea(
    outC->_L7,
    &outC->_L4,
    &outC->_L5,
    &outC->_L6,
    &outC->Context_1);
  kcg_copy_array_real_12(&outC->_L1, &outC->Context_1.GradientsStartDMI);
  kcg_copy_array_real_12(&outC->_L2, &outC->Context_1.GradientsEndDMI);
  kcg_copy_array_real_12(&outC->_L3, &outC->Context_1.GradientsValueDMI);
  kcg_copy_array_real_12(&outC->GradientsValue, &outC->_L3);
  kcg_copy_array_real_12(&outC->GradientsEnd, &outC->_L2);
  kcg_copy_array_real_12(&outC->GradientsStart, &outC->_L1);
  outC->_L8 = inCeilingPermittedSpeed;
  kcg_copy_array_real_32(&outC->_L9, inSpeedProfile_Distance);
  outC->CeilingPermittedSpeed = outC->_L8;
  outC->_L12 = inTrainPosition;
  kcg_copy_array_real_32(&outC->_L10, inSpeedProfile_Speed);
  /* 1 */
  NextSpeedProfiles_DMI_Control_Pkg_Sub_func_PlanningArea(
    outC->_L12,
    &outC->_L9,
    &outC->_L10,
    &outC->_1_Context_1);
  kcg_copy_array_real_10(
    &outC->_L13,
    &outC->_1_Context_1.SpeedProfile_Distance_DMI);
  kcg_copy_array_real_10(
    &outC->_L14,
    &outC->_1_Context_1.SpeedProfile_Speed_DMI);
  kcg_copy_array_real_10(&outC->_L11[0], &outC->_L13);
  kcg_copy_array_real_10(&outC->_L11[1], &outC->_L14);
  kcg_copy_tSpeedPoints(&outC->PlaningAreaSpeedProfile, &outC->_L11);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Area_D_DMI_Control_Pkg_Sub_func_PlanningArea.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

