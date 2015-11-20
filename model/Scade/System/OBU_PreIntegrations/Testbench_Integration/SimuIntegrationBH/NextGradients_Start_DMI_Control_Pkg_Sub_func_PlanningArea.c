/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NextGradients_Start_DMI_Control_Pkg_Sub_func_PlanningArea.h"

#ifndef KCG_USER_DEFINED_INIT
void NextGradients_Start_init_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextGradients_Start_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
{
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->_L13 = 0.0;
  outC->_L14 = 0.0;
  for (i = 0; i < 12; i++) {
    outC->_L1[i] = 0.0;
  }
  outC->_L2 = 0.0;
  outC->_L3 = 0.0;
  outC->_L4 = 0.0;
  for (i1 = 0; i1 < 32; i1++) {
    outC->_L5[i1] = 0.0;
  }
  outC->_L6 = 0.0;
  outC->_L7 = 0.0;
  outC->_L8 = 0.0;
  outC->_L9 = 0.0;
  outC->_L10 = 0.0;
  outC->_L11 = 0.0;
  outC->_L12 = 0.0;
  for (i2 = 0; i2 < 12; i2++) {
    outC->GradientsStart[i2] = 0.0;
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void NextGradients_Start_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextGradients_Start_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Start */
void NextGradients_Start_DMI_Control_Pkg_Sub_func_PlanningArea(
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Start::GradientsFirstIndex */ kcg_int GradientsFirstIndex,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Start::inGradientsStart */ array_real_32 *inGradientsStart,
  outC_NextGradients_Start_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
{
  kcg_copy_array_real_32(&outC->_L5, inGradientsStart);
  if ((0 <= GradientsFirstIndex) & (GradientsFirstIndex < 32)) {
    outC->_L8 = outC->_L5[GradientsFirstIndex];
  }
  else {
    outC->_L8 = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 1) & (GradientsFirstIndex + 1 < 32)) {
    outC->_L3 = outC->_L5[GradientsFirstIndex + 1];
  }
  else {
    outC->_L3 = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 2) & (GradientsFirstIndex + 2 < 32)) {
    outC->_L10 = outC->_L5[GradientsFirstIndex + 2];
  }
  else {
    outC->_L10 = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 3) & (GradientsFirstIndex + 3 < 32)) {
    outC->_L11 = outC->_L5[GradientsFirstIndex + 3];
  }
  else {
    outC->_L11 = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 4) & (GradientsFirstIndex + 4 < 32)) {
    outC->_L9 = outC->_L5[GradientsFirstIndex + 4];
  }
  else {
    outC->_L9 = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 5) & (GradientsFirstIndex + 5 < 32)) {
    outC->_L2 = outC->_L5[GradientsFirstIndex + 5];
  }
  else {
    outC->_L2 = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 6) & (GradientsFirstIndex + 6 < 32)) {
    outC->_L6 = outC->_L5[GradientsFirstIndex + 6];
  }
  else {
    outC->_L6 = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 7) & (GradientsFirstIndex + 7 < 32)) {
    outC->_L7 = outC->_L5[GradientsFirstIndex + 7];
  }
  else {
    outC->_L7 = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 8) & (GradientsFirstIndex + 8 < 32)) {
    outC->_L12 = outC->_L5[GradientsFirstIndex + 8];
  }
  else {
    outC->_L12 = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 9) & (GradientsFirstIndex + 9 < 32)) {
    outC->_L4 = outC->_L5[GradientsFirstIndex + 9];
  }
  else {
    outC->_L4 = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 10) & (GradientsFirstIndex + 10 < 32)) {
    outC->_L14 = outC->_L5[GradientsFirstIndex + 10];
  }
  else {
    outC->_L14 = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 11) & (GradientsFirstIndex + 11 < 32)) {
    outC->_L13 = outC->_L5[GradientsFirstIndex + 11];
  }
  else {
    outC->_L13 = 0.0;
  }
  outC->_L1[0] = outC->_L8;
  outC->_L1[1] = outC->_L3;
  outC->_L1[2] = outC->_L10;
  outC->_L1[3] = outC->_L11;
  outC->_L1[4] = outC->_L9;
  outC->_L1[5] = outC->_L2;
  outC->_L1[6] = outC->_L6;
  outC->_L1[7] = outC->_L7;
  outC->_L1[8] = outC->_L12;
  outC->_L1[9] = outC->_L4;
  outC->_L1[10] = outC->_L14;
  outC->_L1[11] = outC->_L13;
  kcg_copy_array_real_12(&outC->GradientsStart, &outC->_L1);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** NextGradients_Start_DMI_Control_Pkg_Sub_func_PlanningArea.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

