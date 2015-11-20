/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NextGradients_DMI_Control_Pkg_Sub_func_PlanningArea.h"

/* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients */
void NextGradients_DMI_Control_Pkg_Sub_func_PlanningArea(
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients::inTrainPosition */kcg_real inTrainPosition,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients::inGradientsStart */array_real_32 *inGradientsStart,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients::inGradientsEnd */array_real_32 *inGradientsEnd,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients::inGradientsValue */array_real_32 *inGradientsValue,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients::GradientsStartDMI */array_real_12 *GradientsStartDMI,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients::GradientsEndDMI */array_real_12 *GradientsEndDMI,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients::GradientsValueDMI */array_real_12 *GradientsValueDMI)
{
  kcg_real tmp1;
  kcg_bool tmp;
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients::lGradientsFirstIndex */ kcg_int lGradientsFirstIndex;
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients::_L6 */ kcg_int _L6;
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients::_L51 */ kcg_real _L51;
  
  _L51 = inTrainPosition;
  for (
    lGradientsFirstIndex = 0;
    lGradientsFirstIndex < 32;
    lGradientsFirstIndex++) {
    tmp1 = _L51;
    /* 1 */
    NextGradients_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea(
      tmp1,
      (*inGradientsStart)[lGradientsFirstIndex],
      &tmp,
      &_L51);
    _L6 = lGradientsFirstIndex + 1;
    if (!tmp) {
      break;
    }
  }
  lGradientsFirstIndex = _L6 - 2;
  /* 1 */
  NextGradients_Value_DMI_Control_Pkg_Sub_func_PlanningArea(
    lGradientsFirstIndex,
    inGradientsValue,
    GradientsValueDMI);
  /* 1 */
  NextGradients_End_DMI_Control_Pkg_Sub_func_PlanningArea(
    lGradientsFirstIndex,
    inGradientsEnd,
    GradientsEndDMI);
  /* 1 */
  NextGradients_Start_DMI_Control_Pkg_Sub_func_PlanningArea(
    lGradientsFirstIndex,
    inGradientsStart,
    GradientsStartDMI);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** NextGradients_DMI_Control_Pkg_Sub_func_PlanningArea.c
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

