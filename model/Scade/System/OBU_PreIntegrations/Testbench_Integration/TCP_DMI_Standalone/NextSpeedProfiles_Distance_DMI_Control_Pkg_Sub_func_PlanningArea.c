/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NextSpeedProfiles_Distance_DMI_Control_Pkg_Sub_func_PlanningArea.h"

/* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Distance */
void NextSpeedProfiles_Distance_DMI_Control_Pkg_Sub_func_PlanningArea(
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Distance::inSpeedProfiles_FirstIndex */kcg_int inSpeedProfiles_FirstIndex,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Distance::inSpeedProfiles_Distance */array_real_32 *inSpeedProfiles_Distance,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Distance::SpeedProfiles_Distance */array_real_10 *SpeedProfiles_Distance)
{
  if ((0 <= inSpeedProfiles_FirstIndex) & (inSpeedProfiles_FirstIndex < 32)) {
    (*SpeedProfiles_Distance)[0] =
      (*inSpeedProfiles_Distance)[inSpeedProfiles_FirstIndex];
  }
  else {
    (*SpeedProfiles_Distance)[0] = 0.0;
  }
  if ((0 <= inSpeedProfiles_FirstIndex + 1) & (inSpeedProfiles_FirstIndex + 1 <
      32)) {
    (*SpeedProfiles_Distance)[1] =
      (*inSpeedProfiles_Distance)[inSpeedProfiles_FirstIndex + 1];
  }
  else {
    (*SpeedProfiles_Distance)[1] = 0.0;
  }
  if ((0 <= inSpeedProfiles_FirstIndex + 2) & (inSpeedProfiles_FirstIndex + 2 <
      32)) {
    (*SpeedProfiles_Distance)[2] =
      (*inSpeedProfiles_Distance)[inSpeedProfiles_FirstIndex + 2];
  }
  else {
    (*SpeedProfiles_Distance)[2] = 0.0;
  }
  if ((0 <= inSpeedProfiles_FirstIndex + 3) & (inSpeedProfiles_FirstIndex + 3 <
      32)) {
    (*SpeedProfiles_Distance)[3] =
      (*inSpeedProfiles_Distance)[inSpeedProfiles_FirstIndex + 3];
  }
  else {
    (*SpeedProfiles_Distance)[3] = 0.0;
  }
  if ((0 <= inSpeedProfiles_FirstIndex + 4) & (inSpeedProfiles_FirstIndex + 4 <
      32)) {
    (*SpeedProfiles_Distance)[4] =
      (*inSpeedProfiles_Distance)[inSpeedProfiles_FirstIndex + 4];
  }
  else {
    (*SpeedProfiles_Distance)[4] = 0.0;
  }
  if ((0 <= inSpeedProfiles_FirstIndex + 5) & (inSpeedProfiles_FirstIndex + 5 <
      32)) {
    (*SpeedProfiles_Distance)[5] =
      (*inSpeedProfiles_Distance)[inSpeedProfiles_FirstIndex + 5];
  }
  else {
    (*SpeedProfiles_Distance)[5] = 0.0;
  }
  if ((0 <= inSpeedProfiles_FirstIndex + 6) & (inSpeedProfiles_FirstIndex + 6 <
      32)) {
    (*SpeedProfiles_Distance)[6] =
      (*inSpeedProfiles_Distance)[inSpeedProfiles_FirstIndex + 6];
  }
  else {
    (*SpeedProfiles_Distance)[6] = 0.0;
  }
  if ((0 <= inSpeedProfiles_FirstIndex + 7) & (inSpeedProfiles_FirstIndex + 7 <
      32)) {
    (*SpeedProfiles_Distance)[7] =
      (*inSpeedProfiles_Distance)[inSpeedProfiles_FirstIndex + 7];
  }
  else {
    (*SpeedProfiles_Distance)[7] = 0.0;
  }
  if ((0 <= inSpeedProfiles_FirstIndex + 8) & (inSpeedProfiles_FirstIndex + 8 <
      32)) {
    (*SpeedProfiles_Distance)[8] =
      (*inSpeedProfiles_Distance)[inSpeedProfiles_FirstIndex + 8];
  }
  else {
    (*SpeedProfiles_Distance)[8] = 0.0;
  }
  if ((0 <= inSpeedProfiles_FirstIndex + 9) & (inSpeedProfiles_FirstIndex + 9 <
      32)) {
    (*SpeedProfiles_Distance)[9] =
      (*inSpeedProfiles_Distance)[inSpeedProfiles_FirstIndex + 9];
  }
  else {
    (*SpeedProfiles_Distance)[9] = 0.0;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** NextSpeedProfiles_Distance_DMI_Control_Pkg_Sub_func_PlanningArea.c
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

