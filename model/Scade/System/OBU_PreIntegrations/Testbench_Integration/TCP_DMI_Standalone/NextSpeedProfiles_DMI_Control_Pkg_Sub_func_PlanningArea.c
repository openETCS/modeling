/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NextSpeedProfiles_DMI_Control_Pkg_Sub_func_PlanningArea.h"

/* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles */
void NextSpeedProfiles_DMI_Control_Pkg_Sub_func_PlanningArea(
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles::inTrainPosition */kcg_real inTrainPosition,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles::inSpeedProfile_Distance */array_real_32 *inSpeedProfile_Distance,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles::inSpeedProfile_Speed */array_real_32 *inSpeedProfile_Speed,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles::SpeedProfile_Distance_DMI */array_real_10 *SpeedProfile_Distance_DMI,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles::SpeedProfile_Speed_DMI */array_real_10 *SpeedProfile_Speed_DMI)
{
  kcg_real tmp1;
  kcg_bool tmp;
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles::lSpeedProfileFirstIndex */ kcg_int lSpeedProfileFirstIndex;
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles::_L6 */ kcg_int _L6;
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles::_L51 */ kcg_real _L51;
  
  _L51 = inTrainPosition;
  for (
    lSpeedProfileFirstIndex = 0;
    lSpeedProfileFirstIndex < 32;
    lSpeedProfileFirstIndex++) {
    tmp1 = _L51;
    /* 1 */
    NextSpeedProfiles_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea(
      tmp1,
      (*inSpeedProfile_Distance)[lSpeedProfileFirstIndex],
      &tmp,
      &_L51);
    _L6 = lSpeedProfileFirstIndex + 1;
    if (!tmp) {
      break;
    }
  }
  lSpeedProfileFirstIndex = _L6 - 2;
  /* 1 */
  NextSpeedProfiles_Speed_DMI_Control_Pkg_Sub_func_PlanningArea(
    lSpeedProfileFirstIndex,
    inSpeedProfile_Speed,
    SpeedProfile_Speed_DMI);
  /* 1 */
  NextSpeedProfiles_Distance_DMI_Control_Pkg_Sub_func_PlanningArea(
    lSpeedProfileFirstIndex,
    inSpeedProfile_Distance,
    SpeedProfile_Distance_DMI);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** NextSpeedProfiles_DMI_Control_Pkg_Sub_func_PlanningArea.c
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

