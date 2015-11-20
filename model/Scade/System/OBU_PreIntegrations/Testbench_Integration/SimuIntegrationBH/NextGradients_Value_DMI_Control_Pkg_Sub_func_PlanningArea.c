/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NextGradients_Value_DMI_Control_Pkg_Sub_func_PlanningArea.h"

#ifndef KCG_USER_DEFINED_INIT
void NextGradients_Value_init_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextGradients_Value_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
{
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->_L13 = 0.0;
  outC->_L14 = 0.0;
  outC->_L15 = 0.0;
  outC->_L16 = 0.0;
  outC->_L17 = 0.0;
  outC->_L18 = 0.0;
  outC->_L19 = 0.0;
  outC->_L20 = 0.0;
  outC->_L21 = 0.0;
  outC->_L22 = 0.0;
  for (i = 0; i < 12; i++) {
    outC->_L23[i] = 0.0;
  }
  for (i1 = 0; i1 < 32; i1++) {
    outC->_L24[i1] = 0.0;
  }
  outC->_L25 = 0.0;
  outC->_L26 = 0.0;
  for (i2 = 0; i2 < 12; i2++) {
    outC->GradientsValue[i2] = 0.0;
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void NextGradients_Value_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextGradients_Value_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Value */
void NextGradients_Value_DMI_Control_Pkg_Sub_func_PlanningArea(
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Value::GradientsFirstIndex */ kcg_int GradientsFirstIndex,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Value::inGradientsValue */ array_real_32 *inGradientsValue,
  outC_NextGradients_Value_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
{
  kcg_copy_array_real_32(&outC->_L24, inGradientsValue);
  if ((0 <= GradientsFirstIndex + 7) & (GradientsFirstIndex + 7 < 32)) {
    outC->_L13 = outC->_L24[GradientsFirstIndex + 7];
  }
  else {
    outC->_L13 = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 9) & (GradientsFirstIndex + 9 < 32)) {
    outC->_L14 = outC->_L24[GradientsFirstIndex + 9];
  }
  else {
    outC->_L14 = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 6) & (GradientsFirstIndex + 6 < 32)) {
    outC->_L15 = outC->_L24[GradientsFirstIndex + 6];
  }
  else {
    outC->_L15 = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 4) & (GradientsFirstIndex + 4 < 32)) {
    outC->_L16 = outC->_L24[GradientsFirstIndex + 4];
  }
  else {
    outC->_L16 = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 8) & (GradientsFirstIndex + 8 < 32)) {
    outC->_L17 = outC->_L24[GradientsFirstIndex + 8];
  }
  else {
    outC->_L17 = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 1) & (GradientsFirstIndex + 1 < 32)) {
    outC->_L18 = outC->_L24[GradientsFirstIndex + 1];
  }
  else {
    outC->_L18 = 0.0;
  }
  if ((0 <= GradientsFirstIndex) & (GradientsFirstIndex < 32)) {
    outC->_L19 = outC->_L24[GradientsFirstIndex];
  }
  else {
    outC->_L19 = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 3) & (GradientsFirstIndex + 3 < 32)) {
    outC->_L20 = outC->_L24[GradientsFirstIndex + 3];
  }
  else {
    outC->_L20 = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 10) & (GradientsFirstIndex + 10 < 32)) {
    outC->_L21 = outC->_L24[GradientsFirstIndex + 10];
  }
  else {
    outC->_L21 = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 5) & (GradientsFirstIndex + 5 < 32)) {
    outC->_L22 = outC->_L24[GradientsFirstIndex + 5];
  }
  else {
    outC->_L22 = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 2) & (GradientsFirstIndex + 2 < 32)) {
    outC->_L25 = outC->_L24[GradientsFirstIndex + 2];
  }
  else {
    outC->_L25 = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 11) & (GradientsFirstIndex + 11 < 32)) {
    outC->_L26 = outC->_L24[GradientsFirstIndex + 11];
  }
  else {
    outC->_L26 = 0.0;
  }
  outC->_L23[0] = outC->_L19;
  outC->_L23[1] = outC->_L18;
  outC->_L23[2] = outC->_L25;
  outC->_L23[3] = outC->_L20;
  outC->_L23[4] = outC->_L16;
  outC->_L23[5] = outC->_L22;
  outC->_L23[6] = outC->_L15;
  outC->_L23[7] = outC->_L13;
  outC->_L23[8] = outC->_L17;
  outC->_L23[9] = outC->_L14;
  outC->_L23[10] = outC->_L21;
  outC->_L23[11] = outC->_L26;
  kcg_copy_array_real_12(&outC->GradientsValue, &outC->_L23);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** NextGradients_Value_DMI_Control_Pkg_Sub_func_PlanningArea.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

