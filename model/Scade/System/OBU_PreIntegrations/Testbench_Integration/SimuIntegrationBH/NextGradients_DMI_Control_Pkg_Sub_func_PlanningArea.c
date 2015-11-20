/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NextGradients_DMI_Control_Pkg_Sub_func_PlanningArea.h"

#ifndef KCG_USER_DEFINED_INIT
void NextGradients_init_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextGradients_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
{
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
  
  outC->_L12 = 0;
  outC->_L13 = 0;
  outC->_L51 = 0.0;
  for (i = 0; i < 32; i++) {
    outC->_L48[i] = 0.0;
  }
  for (i1 = 0; i1 < 32; i1++) {
    outC->_L47[i1] = 0.0;
  }
  outC->_L46 = 0;
  outC->_L45 = 0;
  outC->_L44 = 0;
  for (i2 = 0; i2 < 32; i2++) {
    outC->_L43[i2] = 0.0;
  }
  for (i3 = 0; i3 < 12; i3++) {
    outC->_L40[i3] = 0.0;
  }
  for (i4 = 0; i4 < 12; i4++) {
    outC->_L39[i4] = 0.0;
  }
  for (i5 = 0; i5 < 12; i5++) {
    outC->_L38[i5] = 0.0;
  }
  outC->_L7 = kcg_true;
  outC->_L6 = 0;
  for (i6 = 0; i6 < 32; i6++) {
    outC->_L3[i6] = 0.0;
  }
  outC->_L2 = 0.0;
  outC->lGradientsFirstIndex = 0;
  for (i7 = 0; i7 < 12; i7++) {
    outC->GradientsValueDMI[i7] = 0.0;
  }
  for (i8 = 0; i8 < 12; i8++) {
    outC->GradientsEndDMI[i8] = 0.0;
  }
  for (i9 = 0; i9 < 12; i9++) {
    outC->GradientsStartDMI[i9] = 0.0;
  }
  /* 1 */
  NextGradients_Value_init_DMI_Control_Pkg_Sub_func_PlanningArea(
    &outC->_3_Context_1);
  /* 1 */
  NextGradients_End_init_DMI_Control_Pkg_Sub_func_PlanningArea(
    &outC->_2_Context_1);
  /* 1 */
  NextGradients_Start_init_DMI_Control_Pkg_Sub_func_PlanningArea(
    &outC->_1_Context_1);
  for (i10 = 0; i10 < 32; i10++) {
    /* 1 */
    NextGradients_Iterator_init_DMI_Control_Pkg_Sub_func_PlanningArea(
      &outC->Context_1[i10]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void NextGradients_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextGradients_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
{
  static kcg_int i;
  
  /* 1 */
  NextGradients_Value_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
    &outC->_3_Context_1);
  /* 1 */
  NextGradients_End_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
    &outC->_2_Context_1);
  /* 1 */
  NextGradients_Start_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
    &outC->_1_Context_1);
  for (i = 0; i < 32; i++) {
    /* 1 */
    NextGradients_Iterator_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
      &outC->Context_1[i]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients */
void NextGradients_DMI_Control_Pkg_Sub_func_PlanningArea(
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients::inTrainPosition */ kcg_real inTrainPosition,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients::inGradientsStart */ array_real_32 *inGradientsStart,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients::inGradientsEnd */ array_real_32 *inGradientsEnd,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients::inGradientsValue */ array_real_32 *inGradientsValue,
  outC_NextGradients_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
{
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients */
  static kcg_real acc;
  static kcg_int i;
  static kcg_real noname;
  
  outC->_L2 = inTrainPosition;
  kcg_copy_array_real_32(&outC->_L3, inGradientsStart);
  outC->_L7 = kcg_true;
  outC->_L51 = outC->_L2;
  /* 1 */ if (outC->_L7) {
    /* 1 */ for (i = 0; i < 32; i++) {
      acc = outC->_L51;
      /* 1 */
      NextGradients_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea(
        acc,
        outC->_L3[i],
        &outC->Context_1[i]);
      outC->_L51 = outC->Context_1[i].AccOut;
      outC->_L6 = i + 1;
      /* 1 */ if (!outC->Context_1[i].outFirstIndexOfNextGradients) {
        break;
      }
    }
  }
  else {
    outC->_L6 = 0;
  }
  outC->_L13 = 2;
  outC->_L12 = outC->_L6 - outC->_L13;
  outC->lGradientsFirstIndex = outC->_L12;
  outC->_L44 = outC->lGradientsFirstIndex;
  kcg_copy_array_real_32(&outC->_L43, inGradientsStart);
  /* 1 */
  NextGradients_Start_DMI_Control_Pkg_Sub_func_PlanningArea(
    outC->_L44,
    &outC->_L43,
    &outC->_1_Context_1);
  kcg_copy_array_real_12(&outC->_L38, &outC->_1_Context_1.GradientsStart);
  outC->_L45 = outC->lGradientsFirstIndex;
  kcg_copy_array_real_32(&outC->_L47, inGradientsEnd);
  /* 1 */
  NextGradients_End_DMI_Control_Pkg_Sub_func_PlanningArea(
    outC->_L45,
    &outC->_L47,
    &outC->_2_Context_1);
  kcg_copy_array_real_12(&outC->_L39, &outC->_2_Context_1.GradientsEnd);
  outC->_L46 = outC->lGradientsFirstIndex;
  kcg_copy_array_real_32(&outC->_L48, inGradientsValue);
  /* 1 */
  NextGradients_Value_DMI_Control_Pkg_Sub_func_PlanningArea(
    outC->_L46,
    &outC->_L48,
    &outC->_3_Context_1);
  kcg_copy_array_real_12(&outC->_L40, &outC->_3_Context_1.GradientsValue);
  kcg_copy_array_real_12(&outC->GradientsStartDMI, &outC->_L38);
  kcg_copy_array_real_12(&outC->GradientsEndDMI, &outC->_L39);
  kcg_copy_array_real_12(&outC->GradientsValueDMI, &outC->_L40);
  noname = outC->_L51;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** NextGradients_DMI_Control_Pkg_Sub_func_PlanningArea.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

