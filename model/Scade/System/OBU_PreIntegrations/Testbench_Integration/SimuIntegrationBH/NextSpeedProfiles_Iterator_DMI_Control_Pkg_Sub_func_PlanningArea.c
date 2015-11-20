/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NextSpeedProfiles_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea.h"

#ifndef KCG_USER_DEFINED_INIT
void NextSpeedProfiles_Iterator_init_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextSpeedProfiles_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
{
  outC->_L3 = kcg_true;
  outC->_L2 = 0.0;
  outC->_L1 = 0.0;
  outC->AccOut = 0.0;
  outC->outFirstIndexOfNextSpeedProfiles = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void NextSpeedProfiles_Iterator_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextSpeedProfiles_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Iterator */
void NextSpeedProfiles_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea(
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Iterator::inTrainPosition */ kcg_real inTrainPosition,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Iterator::inSpeedProfile_Distance */ kcg_real inSpeedProfile_Distance,
  outC_NextSpeedProfiles_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
{
  outC->_L1 = inTrainPosition;
  outC->_L2 = inSpeedProfile_Distance;
  outC->_L3 = outC->_L1 >= outC->_L2;
  outC->outFirstIndexOfNextSpeedProfiles = outC->_L3;
  outC->AccOut = outC->_L1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** NextSpeedProfiles_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

