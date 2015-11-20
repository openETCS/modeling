/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Area_D_DMI_Control_Pkg_Sub_func_PlanningArea.h"

/* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D */
void Area_D_DMI_Control_Pkg_Sub_func_PlanningArea(
  /* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D::inTrainPosition */kcg_real inTrainPosition,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D::inGradientsValue */array_real_32 *inGradientsValue,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D::inGradientsEnd */array_real_32 *inGradientsEnd,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D::inGradientsStart */array_real_32 *inGradientsStart,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D::inCeilingPermittedSpeed */kcg_real inCeilingPermittedSpeed,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D::inSpeedProfile_Distance */array_real_32 *inSpeedProfile_Distance,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D::inSpeedProfile_Speed */array_real_32 *inSpeedProfile_Speed,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D::GradientsStart */array_real_12 *GradientsStart,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D::GradientsEnd */array_real_12 *GradientsEnd,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D::PlaningAreaSpeedProfile */array_real_10_2 *PlaningAreaSpeedProfile,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D::CeilingPermittedSpeed */kcg_real *CeilingPermittedSpeed,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D::GradientsValue */array_real_12 *GradientsValue)
{
  /* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D::_L14 */ array_real_10 _L14;
  
  *CeilingPermittedSpeed = inCeilingPermittedSpeed;
  /* 1 */
  NextSpeedProfiles_DMI_Control_Pkg_Sub_func_PlanningArea(
    inTrainPosition,
    inSpeedProfile_Distance,
    inSpeedProfile_Speed,
    &(*PlaningAreaSpeedProfile)[0],
    &_L14);
  kcg_copy_array_real_10(&(*PlaningAreaSpeedProfile)[1], &_L14);
  /* 1 */
  NextGradients_DMI_Control_Pkg_Sub_func_PlanningArea(
    inTrainPosition,
    inGradientsStart,
    inGradientsEnd,
    inGradientsValue,
    GradientsStart,
    GradientsEnd,
    GradientsValue);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Area_D_DMI_Control_Pkg_Sub_func_PlanningArea.c
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

