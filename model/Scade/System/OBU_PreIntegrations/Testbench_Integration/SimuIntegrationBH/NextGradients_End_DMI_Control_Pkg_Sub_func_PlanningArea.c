/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NextGradients_End_DMI_Control_Pkg_Sub_func_PlanningArea.h"

#ifndef KCG_USER_DEFINED_INIT
void NextGradients_End_init_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextGradients_End_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
{
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->_L27 = 0.0;
  outC->_L28 = 0.0;
  outC->_L29 = 0.0;
  outC->_L30 = 0.0;
  outC->_L31 = 0.0;
  for (i = 0; i < 32; i++) {
    outC->_L32[i] = 0.0;
  }
  outC->_L33 = 0.0;
  outC->_L34 = 0.0;
  outC->_L35 = 0.0;
  outC->_L36 = 0.0;
  outC->_L37 = 0.0;
  for (i1 = 0; i1 < 12; i1++) {
    outC->_L38[i1] = 0.0;
  }
  outC->_L39 = 0.0;
  outC->_L40 = 0.0;
  for (i2 = 0; i2 < 12; i2++) {
    outC->GradientsEnd[i2] = 0.0;
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void NextGradients_End_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextGradients_End_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_End */
void NextGradients_End_DMI_Control_Pkg_Sub_func_PlanningArea(
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_End::GradientsFirstIndex */ kcg_int GradientsFirstIndex,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_End::inGradientsEnd */ array_real_32 *inGradientsEnd,
  outC_NextGradients_End_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
{
  kcg_copy_array_real_32(&outC->_L32, inGradientsEnd);
  if ((0 <= GradientsFirstIndex + 5) & (GradientsFirstIndex + 5 < 32)) {
    outC->_L27 = outC->_L32[GradientsFirstIndex + 5];
  }
  else {
    outC->_L27 = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 6) & (GradientsFirstIndex + 6 < 32)) {
    outC->_L28 = outC->_L32[GradientsFirstIndex + 6];
  }
  else {
    outC->_L28 = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 2) & (GradientsFirstIndex + 2 < 32)) {
    outC->_L29 = outC->_L32[GradientsFirstIndex + 2];
  }
  else {
    outC->_L29 = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 10) & (GradientsFirstIndex + 10 < 32)) {
    outC->_L30 = outC->_L32[GradientsFirstIndex + 10];
  }
  else {
    outC->_L30 = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 1) & (GradientsFirstIndex + 1 < 32)) {
    outC->_L31 = outC->_L32[GradientsFirstIndex + 1];
  }
  else {
    outC->_L31 = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 11) & (GradientsFirstIndex + 11 < 32)) {
    outC->_L33 = outC->_L32[GradientsFirstIndex + 11];
  }
  else {
    outC->_L33 = 0.0;
  }
  if ((0 <= GradientsFirstIndex) & (GradientsFirstIndex < 32)) {
    outC->_L36 = outC->_L32[GradientsFirstIndex];
  }
  else {
    outC->_L36 = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 3) & (GradientsFirstIndex + 3 < 32)) {
    outC->_L35 = outC->_L32[GradientsFirstIndex + 3];
  }
  else {
    outC->_L35 = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 4) & (GradientsFirstIndex + 4 < 32)) {
    outC->_L40 = outC->_L32[GradientsFirstIndex + 4];
  }
  else {
    outC->_L40 = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 7) & (GradientsFirstIndex + 7 < 32)) {
    outC->_L34 = outC->_L32[GradientsFirstIndex + 7];
  }
  else {
    outC->_L34 = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 8) & (GradientsFirstIndex + 8 < 32)) {
    outC->_L39 = outC->_L32[GradientsFirstIndex + 8];
  }
  else {
    outC->_L39 = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 9) & (GradientsFirstIndex + 9 < 32)) {
    outC->_L37 = outC->_L32[GradientsFirstIndex + 9];
  }
  else {
    outC->_L37 = 0.0;
  }
  outC->_L38[0] = outC->_L36;
  outC->_L38[1] = outC->_L31;
  outC->_L38[2] = outC->_L29;
  outC->_L38[3] = outC->_L35;
  outC->_L38[4] = outC->_L40;
  outC->_L38[5] = outC->_L27;
  outC->_L38[6] = outC->_L28;
  outC->_L38[7] = outC->_L34;
  outC->_L38[8] = outC->_L39;
  outC->_L38[9] = outC->_L37;
  outC->_L38[10] = outC->_L30;
  outC->_L38[11] = outC->_L33;
  kcg_copy_array_real_12(&outC->GradientsEnd, &outC->_L38);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** NextGradients_End_DMI_Control_Pkg_Sub_func_PlanningArea.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

