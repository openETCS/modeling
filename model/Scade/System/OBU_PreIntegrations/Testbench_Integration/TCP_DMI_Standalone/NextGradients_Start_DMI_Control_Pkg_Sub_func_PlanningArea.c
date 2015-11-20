/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NextGradients_Start_DMI_Control_Pkg_Sub_func_PlanningArea.h"

/* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Start */
void NextGradients_Start_DMI_Control_Pkg_Sub_func_PlanningArea(
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Start::GradientsFirstIndex */kcg_int GradientsFirstIndex,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Start::inGradientsStart */array_real_32 *inGradientsStart,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Start::GradientsStart */array_real_12 *GradientsStart)
{
  if ((0 <= GradientsFirstIndex) & (GradientsFirstIndex < 32)) {
    (*GradientsStart)[0] = (*inGradientsStart)[GradientsFirstIndex];
  }
  else {
    (*GradientsStart)[0] = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 1) & (GradientsFirstIndex + 1 < 32)) {
    (*GradientsStart)[1] = (*inGradientsStart)[GradientsFirstIndex + 1];
  }
  else {
    (*GradientsStart)[1] = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 2) & (GradientsFirstIndex + 2 < 32)) {
    (*GradientsStart)[2] = (*inGradientsStart)[GradientsFirstIndex + 2];
  }
  else {
    (*GradientsStart)[2] = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 3) & (GradientsFirstIndex + 3 < 32)) {
    (*GradientsStart)[3] = (*inGradientsStart)[GradientsFirstIndex + 3];
  }
  else {
    (*GradientsStart)[3] = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 4) & (GradientsFirstIndex + 4 < 32)) {
    (*GradientsStart)[4] = (*inGradientsStart)[GradientsFirstIndex + 4];
  }
  else {
    (*GradientsStart)[4] = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 5) & (GradientsFirstIndex + 5 < 32)) {
    (*GradientsStart)[5] = (*inGradientsStart)[GradientsFirstIndex + 5];
  }
  else {
    (*GradientsStart)[5] = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 6) & (GradientsFirstIndex + 6 < 32)) {
    (*GradientsStart)[6] = (*inGradientsStart)[GradientsFirstIndex + 6];
  }
  else {
    (*GradientsStart)[6] = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 7) & (GradientsFirstIndex + 7 < 32)) {
    (*GradientsStart)[7] = (*inGradientsStart)[GradientsFirstIndex + 7];
  }
  else {
    (*GradientsStart)[7] = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 8) & (GradientsFirstIndex + 8 < 32)) {
    (*GradientsStart)[8] = (*inGradientsStart)[GradientsFirstIndex + 8];
  }
  else {
    (*GradientsStart)[8] = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 9) & (GradientsFirstIndex + 9 < 32)) {
    (*GradientsStart)[9] = (*inGradientsStart)[GradientsFirstIndex + 9];
  }
  else {
    (*GradientsStart)[9] = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 10) & (GradientsFirstIndex + 10 < 32)) {
    (*GradientsStart)[10] = (*inGradientsStart)[GradientsFirstIndex + 10];
  }
  else {
    (*GradientsStart)[10] = 0.0;
  }
  if ((0 <= GradientsFirstIndex + 11) & (GradientsFirstIndex + 11 < 32)) {
    (*GradientsStart)[11] = (*inGradientsStart)[GradientsFirstIndex + 11];
  }
  else {
    (*GradientsStart)[11] = 0.0;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** NextGradients_Start_DMI_Control_Pkg_Sub_func_PlanningArea.c
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

