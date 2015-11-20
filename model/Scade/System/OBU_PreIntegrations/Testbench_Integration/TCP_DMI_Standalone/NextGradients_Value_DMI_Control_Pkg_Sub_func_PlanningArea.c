/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NextGradients_Value_DMI_Control_Pkg_Sub_func_PlanningArea.h"

/* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Value */
void NextGradients_Value_DMI_Control_Pkg_Sub_func_PlanningArea(
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Value::GradientsFirstIndex */kcg_int GradientsFirstIndex,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Value::inGradientsValue */array_real_32 *inGradientsValue,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Value::GradientsValue */array_real_12 *GradientsValue)
{
  if ((0 <= GradientsFirstIndex) & (GradientsFirstIndex < 32)) {
    (*GradientsValue)[0] = (*inGradientsValue)[GradientsFirstIndex];
  }
  else {
    (*GradientsValue)[0] = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 1) & (GradientsFirstIndex + 1 < 32)) {
    (*GradientsValue)[1] = (*inGradientsValue)[GradientsFirstIndex + 1];
  }
  else {
    (*GradientsValue)[1] = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 2) & (GradientsFirstIndex + 2 < 32)) {
    (*GradientsValue)[2] = (*inGradientsValue)[GradientsFirstIndex + 2];
  }
  else {
    (*GradientsValue)[2] = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 3) & (GradientsFirstIndex + 3 < 32)) {
    (*GradientsValue)[3] = (*inGradientsValue)[GradientsFirstIndex + 3];
  }
  else {
    (*GradientsValue)[3] = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 4) & (GradientsFirstIndex + 4 < 32)) {
    (*GradientsValue)[4] = (*inGradientsValue)[GradientsFirstIndex + 4];
  }
  else {
    (*GradientsValue)[4] = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 5) & (GradientsFirstIndex + 5 < 32)) {
    (*GradientsValue)[5] = (*inGradientsValue)[GradientsFirstIndex + 5];
  }
  else {
    (*GradientsValue)[5] = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 6) & (GradientsFirstIndex + 6 < 32)) {
    (*GradientsValue)[6] = (*inGradientsValue)[GradientsFirstIndex + 6];
  }
  else {
    (*GradientsValue)[6] = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 7) & (GradientsFirstIndex + 7 < 32)) {
    (*GradientsValue)[7] = (*inGradientsValue)[GradientsFirstIndex + 7];
  }
  else {
    (*GradientsValue)[7] = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 8) & (GradientsFirstIndex + 8 < 32)) {
    (*GradientsValue)[8] = (*inGradientsValue)[GradientsFirstIndex + 8];
  }
  else {
    (*GradientsValue)[8] = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 9) & (GradientsFirstIndex + 9 < 32)) {
    (*GradientsValue)[9] = (*inGradientsValue)[GradientsFirstIndex + 9];
  }
  else {
    (*GradientsValue)[9] = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 10) & (GradientsFirstIndex + 10 < 32)) {
    (*GradientsValue)[10] = (*inGradientsValue)[GradientsFirstIndex + 10];
  }
  else {
    (*GradientsValue)[10] = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 11) & (GradientsFirstIndex + 11 < 32)) {
    (*GradientsValue)[11] = (*inGradientsValue)[GradientsFirstIndex + 11];
  }
  else {
    (*GradientsValue)[11] = 0.0;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** NextGradients_Value_DMI_Control_Pkg_Sub_func_PlanningArea.c
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

