/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NextSpeedProfiles_DMI_Control_Pkg_Sub_func_PlanningArea.h"

#ifndef KCG_USER_DEFINED_INIT
void NextSpeedProfiles_init_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextSpeedProfiles_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
{
  static kcg_int i7;
  static kcg_int i6;
  static kcg_int i5;
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  for (i = 0; i < 32; i++) {
    outC->_L48[i] = 0.0;
  }
  outC->_L12 = 0;
  outC->_L13 = 0;
  outC->_L51 = 0.0;
  outC->_L46 = 0;
  outC->_L44 = 0;
  for (i1 = 0; i1 < 32; i1++) {
    outC->_L43[i1] = 0.0;
  }
  for (i2 = 0; i2 < 10; i2++) {
    outC->_L40[i2] = 0.0;
  }
  for (i3 = 0; i3 < 10; i3++) {
    outC->_L38[i3] = 0.0;
  }
  outC->_L7 = kcg_true;
  outC->_L6 = 0;
  for (i4 = 0; i4 < 32; i4++) {
    outC->_L3[i4] = 0.0;
  }
  outC->_L2 = 0.0;
  outC->lSpeedProfileFirstIndex = 0;
  for (i5 = 0; i5 < 10; i5++) {
    outC->SpeedProfile_Speed_DMI[i5] = 0.0;
  }
  for (i6 = 0; i6 < 10; i6++) {
    outC->SpeedProfile_Distance_DMI[i6] = 0.0;
  }
  /* 1 */
  NextSpeedProfiles_Speed_init_DMI_Control_Pkg_Sub_func_PlanningArea(
    &outC->_2_Context_1);
  /* 1 */
  NextSpeedProfiles_Distance_init_DMI_Control_Pkg_Sub_func_PlanningArea(
    &outC->_1_Context_1);
  for (i7 = 0; i7 < 32; i7++) {
    /* 1 */
    NextSpeedProfiles_Iterator_init_DMI_Control_Pkg_Sub_func_PlanningArea(
      &outC->Context_1[i7]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void NextSpeedProfiles_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextSpeedProfiles_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
{
  static kcg_int i;
  
  /* 1 */
  NextSpeedProfiles_Speed_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
    &outC->_2_Context_1);
  /* 1 */
  NextSpeedProfiles_Distance_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
    &outC->_1_Context_1);
  for (i = 0; i < 32; i++) {
    /* 1 */
    NextSpeedProfiles_Iterator_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
      &outC->Context_1[i]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles */
void NextSpeedProfiles_DMI_Control_Pkg_Sub_func_PlanningArea(
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles::inTrainPosition */ kcg_real inTrainPosition,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles::inSpeedProfile_Distance */ array_real_32 *inSpeedProfile_Distance,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles::inSpeedProfile_Speed */ array_real_32 *inSpeedProfile_Speed,
  outC_NextSpeedProfiles_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
{
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles */
  static kcg_real acc;
  static kcg_int i;
  static kcg_real noname;
  
  outC->_L2 = inTrainPosition;
  kcg_copy_array_real_32(&outC->_L3, inSpeedProfile_Distance);
  outC->_L7 = kcg_true;
  outC->_L51 = outC->_L2;
  /* 1 */ if (outC->_L7) {
    /* 1 */ for (i = 0; i < 32; i++) {
      acc = outC->_L51;
      /* 1 */
      NextSpeedProfiles_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea(
        acc,
        outC->_L3[i],
        &outC->Context_1[i]);
      outC->_L51 = outC->Context_1[i].AccOut;
      outC->_L6 = i + 1;
      /* 1 */ if (!outC->Context_1[i].outFirstIndexOfNextSpeedProfiles) {
        break;
      }
    }
  }
  else {
    outC->_L6 = 0;
  }
  outC->_L13 = 2;
  outC->_L12 = outC->_L6 - outC->_L13;
  outC->lSpeedProfileFirstIndex = outC->_L12;
  outC->_L44 = outC->lSpeedProfileFirstIndex;
  kcg_copy_array_real_32(&outC->_L43, inSpeedProfile_Distance);
  /* 1 */
  NextSpeedProfiles_Distance_DMI_Control_Pkg_Sub_func_PlanningArea(
    outC->_L44,
    &outC->_L43,
    &outC->_1_Context_1);
  kcg_copy_array_real_10(
    &outC->_L38,
    &outC->_1_Context_1.SpeedProfiles_Distance);
  outC->_L46 = outC->lSpeedProfileFirstIndex;
  kcg_copy_array_real_32(&outC->_L48, inSpeedProfile_Speed);
  /* 1 */
  NextSpeedProfiles_Speed_DMI_Control_Pkg_Sub_func_PlanningArea(
    outC->_L46,
    &outC->_L48,
    &outC->_2_Context_1);
  kcg_copy_array_real_10(&outC->_L40, &outC->_2_Context_1.SpeedProfiles_Speed);
  kcg_copy_array_real_10(&outC->SpeedProfile_Distance_DMI, &outC->_L38);
  kcg_copy_array_real_10(&outC->SpeedProfile_Speed_DMI, &outC->_L40);
  noname = outC->_L51;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** NextSpeedProfiles_DMI_Control_Pkg_Sub_func_PlanningArea.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

