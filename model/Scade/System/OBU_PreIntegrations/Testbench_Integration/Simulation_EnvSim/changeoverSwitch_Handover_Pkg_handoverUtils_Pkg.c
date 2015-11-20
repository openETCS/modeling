/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "changeoverSwitch_Handover_Pkg_handoverUtils_Pkg.h"

void changeoverSwitch_reset_Handover_Pkg_handoverUtils_Pkg(
  outC_changeoverSwitch_Handover_Pkg_handoverUtils_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ FallingEdge_reset_digital(&outC->Context_1);
}

/* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch */
void changeoverSwitch_Handover_Pkg_handoverUtils_Pkg(
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::handoverInprogress */kcg_bool handoverInprogress,
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::sessionManagementAbility */abilityToHandleCommunicationSessions_Handover_Pkg sessionManagementAbility,
  outC_changeoverSwitch_Handover_Pkg_handoverUtils_Pkg *outC)
{
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::SM1 */
  static _4_SSM_ST_SM1 SM1_state_sel;
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::SM1 */
  static _4_SSM_ST_SM1 SM1_state_act;
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::toogle */
  static kcg_bool toogle;
  
  /* 1 */ FallingEdge_digital(handoverInprogress, &outC->Context_1);
  toogle = (sessionManagementAbility ==
      isAbleToManageTwoSessions_Handover_Pkg) & outC->Context_1.FE_Output;
  if (outC->init) {
    outC->init = kcg_false;
    SM1_state_sel = SSM_st_mobile_1_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  switch (SM1_state_sel) {
    case SSM_st_mobile_1_SM1 :
      if (toogle) {
        SM1_state_act = SSM_st_mobile_2_SM1;
      }
      else {
        SM1_state_act = SSM_st_mobile_1_SM1;
      }
      break;
    case SSM_st_mobile_2_SM1 :
      if (toogle) {
        SM1_state_act = SSM_st_mobile_1_SM1;
      }
      else {
        SM1_state_act = SSM_st_mobile_2_SM1;
      }
      break;
    
  }
  switch (SM1_state_act) {
    case SSM_st_mobile_1_SM1 :
      outC->handingOverMobile_is_mobile_1 = kcg_true;
      outC->SM1_state_nxt = SSM_st_mobile_1_SM1;
      break;
    case SSM_st_mobile_2_SM1 :
      outC->handingOverMobile_is_mobile_1 = kcg_false;
      outC->SM1_state_nxt = SSM_st_mobile_2_SM1;
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** changeoverSwitch_Handover_Pkg_handoverUtils_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

