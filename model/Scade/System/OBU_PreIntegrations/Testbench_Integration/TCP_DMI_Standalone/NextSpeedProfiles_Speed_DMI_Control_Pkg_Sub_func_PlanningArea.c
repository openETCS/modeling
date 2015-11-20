/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NextSpeedProfiles_Speed_DMI_Control_Pkg_Sub_func_PlanningArea.h"

/* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Speed */
void NextSpeedProfiles_Speed_DMI_Control_Pkg_Sub_func_PlanningArea(
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Speed::inSpeedProfiles_FirstIndex */kcg_int inSpeedProfiles_FirstIndex,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Speed::inSpeedProfiles_Speed */array_real_32 *inSpeedProfiles_Speed,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Speed::SpeedProfiles_Speed */array_real_10 *SpeedProfiles_Speed)
{
  if ((0 <= inSpeedProfiles_FirstIndex) & (inSpeedProfiles_FirstIndex < 32)) {
    (*SpeedProfiles_Speed)[0] =
      (*inSpeedProfiles_Speed)[inSpeedProfiles_FirstIndex];
  }
  else {
    (*SpeedProfiles_Speed)[0] = 0.0;
  }
  if ((0 <= inSpeedProfiles_FirstIndex + 1) & (inSpeedProfiles_FirstIndex + 1 <
      32)) {
    (*SpeedProfiles_Speed)[1] =
      (*inSpeedProfiles_Speed)[inSpeedProfiles_FirstIndex + 1];
  }
  else {
    (*SpeedProfiles_Speed)[1] = 0.0;
  }
  if ((0 <= inSpeedProfiles_FirstIndex + 2) & (inSpeedProfiles_FirstIndex + 2 <
      32)) {
    (*SpeedProfiles_Speed)[2] =
      (*inSpeedProfiles_Speed)[inSpeedProfiles_FirstIndex + 2];
  }
  else {
    (*SpeedProfiles_Speed)[2] = 0.0;
  }
  if ((0 <= inSpeedProfiles_FirstIndex + 3) & (inSpeedProfiles_FirstIndex + 3 <
      32)) {
    (*SpeedProfiles_Speed)[3] =
      (*inSpeedProfiles_Speed)[inSpeedProfiles_FirstIndex + 3];
  }
  else {
    (*SpeedProfiles_Speed)[3] = 0.0;
  }
  if ((0 <= inSpeedProfiles_FirstIndex + 4) & (inSpeedProfiles_FirstIndex + 4 <
      32)) {
    (*SpeedProfiles_Speed)[4] =
      (*inSpeedProfiles_Speed)[inSpeedProfiles_FirstIndex + 4];
  }
  else {
    (*SpeedProfiles_Speed)[4] = 0.0;
  }
  if ((0 <= inSpeedProfiles_FirstIndex + 5) & (inSpeedProfiles_FirstIndex + 5 <
      32)) {
    (*SpeedProfiles_Speed)[5] =
      (*inSpeedProfiles_Speed)[inSpeedProfiles_FirstIndex + 5];
  }
  else {
    (*SpeedProfiles_Speed)[5] = 0.0;
  }
  if ((0 <= inSpeedProfiles_FirstIndex + 6) & (inSpeedProfiles_FirstIndex + 6 <
      32)) {
    (*SpeedProfiles_Speed)[6] =
      (*inSpeedProfiles_Speed)[inSpeedProfiles_FirstIndex + 6];
  }
  else {
    (*SpeedProfiles_Speed)[6] = 0.0;
  }
  if ((0 <= inSpeedProfiles_FirstIndex + 7) & (inSpeedProfiles_FirstIndex + 7 <
      32)) {
    (*SpeedProfiles_Speed)[7] =
      (*inSpeedProfiles_Speed)[inSpeedProfiles_FirstIndex + 7];
  }
  else {
    (*SpeedProfiles_Speed)[7] = 0.0;
  }
  if ((0 <= inSpeedProfiles_FirstIndex + 8) & (inSpeedProfiles_FirstIndex + 8 <
      32)) {
    (*SpeedProfiles_Speed)[8] =
      (*inSpeedProfiles_Speed)[inSpeedProfiles_FirstIndex + 8];
  }
  else {
    (*SpeedProfiles_Speed)[8] = 0.0;
  }
  if ((0 <= inSpeedProfiles_FirstIndex + 9) & (inSpeedProfiles_FirstIndex + 9 <
      32)) {
    (*SpeedProfiles_Speed)[9] =
      (*inSpeedProfiles_Speed)[inSpeedProfiles_FirstIndex + 9];
  }
  else {
    (*SpeedProfiles_Speed)[9] = 0.0;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** NextSpeedProfiles_Speed_DMI_Control_Pkg_Sub_func_PlanningArea.c
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

