/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NextGradients_End_DMI_Control_Pkg_Sub_func_PlanningArea.h"

/* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_End */
void NextGradients_End_DMI_Control_Pkg_Sub_func_PlanningArea(
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_End::GradientsFirstIndex */kcg_int GradientsFirstIndex,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_End::inGradientsEnd */array_real_32 *inGradientsEnd,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_End::GradientsEnd */array_real_12 *GradientsEnd)
{
  if ((0 <= GradientsFirstIndex) & (GradientsFirstIndex < 32)) {
    (*GradientsEnd)[0] = (*inGradientsEnd)[GradientsFirstIndex];
  }
  else {
    (*GradientsEnd)[0] = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 1) & (GradientsFirstIndex + 1 < 32)) {
    (*GradientsEnd)[1] = (*inGradientsEnd)[GradientsFirstIndex + 1];
  }
  else {
    (*GradientsEnd)[1] = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 2) & (GradientsFirstIndex + 2 < 32)) {
    (*GradientsEnd)[2] = (*inGradientsEnd)[GradientsFirstIndex + 2];
  }
  else {
    (*GradientsEnd)[2] = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 3) & (GradientsFirstIndex + 3 < 32)) {
    (*GradientsEnd)[3] = (*inGradientsEnd)[GradientsFirstIndex + 3];
  }
  else {
    (*GradientsEnd)[3] = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 4) & (GradientsFirstIndex + 4 < 32)) {
    (*GradientsEnd)[4] = (*inGradientsEnd)[GradientsFirstIndex + 4];
  }
  else {
    (*GradientsEnd)[4] = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 5) & (GradientsFirstIndex + 5 < 32)) {
    (*GradientsEnd)[5] = (*inGradientsEnd)[GradientsFirstIndex + 5];
  }
  else {
    (*GradientsEnd)[5] = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 6) & (GradientsFirstIndex + 6 < 32)) {
    (*GradientsEnd)[6] = (*inGradientsEnd)[GradientsFirstIndex + 6];
  }
  else {
    (*GradientsEnd)[6] = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 7) & (GradientsFirstIndex + 7 < 32)) {
    (*GradientsEnd)[7] = (*inGradientsEnd)[GradientsFirstIndex + 7];
  }
  else {
    (*GradientsEnd)[7] = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 8) & (GradientsFirstIndex + 8 < 32)) {
    (*GradientsEnd)[8] = (*inGradientsEnd)[GradientsFirstIndex + 8];
  }
  else {
    (*GradientsEnd)[8] = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 9) & (GradientsFirstIndex + 9 < 32)) {
    (*GradientsEnd)[9] = (*inGradientsEnd)[GradientsFirstIndex + 9];
  }
  else {
    (*GradientsEnd)[9] = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 10) & (GradientsFirstIndex + 10 < 32)) {
    (*GradientsEnd)[10] = (*inGradientsEnd)[GradientsFirstIndex + 10];
  }
  else {
    (*GradientsEnd)[10] = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 11) & (GradientsFirstIndex + 11 < 32)) {
    (*GradientsEnd)[11] = (*inGradientsEnd)[GradientsFirstIndex + 11];
  }
  else {
    (*GradientsEnd)[11] = 0.0;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** NextGradients_End_DMI_Control_Pkg_Sub_func_PlanningArea.c
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

