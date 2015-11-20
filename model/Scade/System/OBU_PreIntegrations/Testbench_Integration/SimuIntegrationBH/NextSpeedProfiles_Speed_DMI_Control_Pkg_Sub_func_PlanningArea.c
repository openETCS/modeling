/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NextSpeedProfiles_Speed_DMI_Control_Pkg_Sub_func_PlanningArea.h"

#ifndef KCG_USER_DEFINED_INIT
void NextSpeedProfiles_Speed_init_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextSpeedProfiles_Speed_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
{
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->_L27 = 0.0;
  outC->_L28 = 0.0;
  outC->_L29 = 0.0;
  outC->_L31 = 0.0;
  for (i = 0; i < 32; i++) {
    outC->_L32[i] = 0.0;
  }
  outC->_L34 = 0.0;
  outC->_L35 = 0.0;
  outC->_L36 = 0.0;
  outC->_L37 = 0.0;
  for (i1 = 0; i1 < 10; i1++) {
    outC->_L38[i1] = 0.0;
  }
  outC->_L39 = 0.0;
  outC->_L40 = 0.0;
  for (i2 = 0; i2 < 10; i2++) {
    outC->SpeedProfiles_Speed[i2] = 0.0;
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void NextSpeedProfiles_Speed_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextSpeedProfiles_Speed_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Speed */
void NextSpeedProfiles_Speed_DMI_Control_Pkg_Sub_func_PlanningArea(
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Speed::inSpeedProfiles_FirstIndex */ kcg_int inSpeedProfiles_FirstIndex,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Speed::inSpeedProfiles_Speed */ array_real_32 *inSpeedProfiles_Speed,
  outC_NextSpeedProfiles_Speed_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
{
  kcg_copy_array_real_32(&outC->_L32, inSpeedProfiles_Speed);
  if ((0 <= inSpeedProfiles_FirstIndex + 5) & (inSpeedProfiles_FirstIndex + 5 <
      32)) {
    outC->_L27 = outC->_L32[inSpeedProfiles_FirstIndex + 5];
  }
  else {
    outC->_L27 = 0.0;
  }
  if ((0 <= inSpeedProfiles_FirstIndex + 6) & (inSpeedProfiles_FirstIndex + 6 <
      32)) {
    outC->_L28 = outC->_L32[inSpeedProfiles_FirstIndex + 6];
  }
  else {
    outC->_L28 = 0.0;
  }
  if ((0 <= inSpeedProfiles_FirstIndex + 2) & (inSpeedProfiles_FirstIndex + 2 <
      32)) {
    outC->_L29 = outC->_L32[inSpeedProfiles_FirstIndex + 2];
  }
  else {
    outC->_L29 = 0.0;
  }
  if ((0 <= inSpeedProfiles_FirstIndex + 1) & (inSpeedProfiles_FirstIndex + 1 <
      32)) {
    outC->_L31 = outC->_L32[inSpeedProfiles_FirstIndex + 1];
  }
  else {
    outC->_L31 = 0.0;
  }
  if ((0 <= inSpeedProfiles_FirstIndex) & (inSpeedProfiles_FirstIndex < 32)) {
    outC->_L36 = outC->_L32[inSpeedProfiles_FirstIndex];
  }
  else {
    outC->_L36 = 0.0;
  }
  if ((0 <= inSpeedProfiles_FirstIndex + 3) & (inSpeedProfiles_FirstIndex + 3 <
      32)) {
    outC->_L35 = outC->_L32[inSpeedProfiles_FirstIndex + 3];
  }
  else {
    outC->_L35 = 0.0;
  }
  if ((0 <= inSpeedProfiles_FirstIndex + 4) & (inSpeedProfiles_FirstIndex + 4 <
      32)) {
    outC->_L40 = outC->_L32[inSpeedProfiles_FirstIndex + 4];
  }
  else {
    outC->_L40 = 0.0;
  }
  if ((0 <= inSpeedProfiles_FirstIndex + 7) & (inSpeedProfiles_FirstIndex + 7 <
      32)) {
    outC->_L34 = outC->_L32[inSpeedProfiles_FirstIndex + 7];
  }
  else {
    outC->_L34 = 0.0;
  }
  if ((0 <= inSpeedProfiles_FirstIndex + 8) & (inSpeedProfiles_FirstIndex + 8 <
      32)) {
    outC->_L39 = outC->_L32[inSpeedProfiles_FirstIndex + 8];
  }
  else {
    outC->_L39 = 0.0;
  }
  if ((0 <= inSpeedProfiles_FirstIndex + 9) & (inSpeedProfiles_FirstIndex + 9 <
      32)) {
    outC->_L37 = outC->_L32[inSpeedProfiles_FirstIndex + 9];
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
  kcg_copy_array_real_10(&outC->SpeedProfiles_Speed, &outC->_L38);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** NextSpeedProfiles_Speed_DMI_Control_Pkg_Sub_func_PlanningArea.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

