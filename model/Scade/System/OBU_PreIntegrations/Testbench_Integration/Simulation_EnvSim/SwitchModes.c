/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SwitchModes.h"

void SwitchModes_reset(outC_SwitchModes *outC)
{
  outC->init = kcg_true;
}

/* SwitchModes */
void SwitchModes(
  /* SwitchModes::Condition1 */kcg_bool Condition1,
  /* SwitchModes::Condition2 */kcg_bool Condition2,
  /* SwitchModes::Condition3 */kcg_bool Condition3,
  /* SwitchModes::Condition4 */kcg_bool Condition4,
  /* SwitchModes::Condition5 */kcg_bool Condition5,
  /* SwitchModes::Condition6 */kcg_bool Condition6,
  /* SwitchModes::Condition7 */kcg_bool Condition7,
  /* SwitchModes::Condition8 */kcg_bool Condition8,
  /* SwitchModes::Condition10 */kcg_bool Condition10,
  /* SwitchModes::Condition13 */kcg_bool Condition13,
  /* SwitchModes::Condition14 */kcg_bool Condition14,
  /* SwitchModes::Condition15 */kcg_bool Condition15,
  /* SwitchModes::Condition19 */kcg_bool Condition19,
  /* SwitchModes::Condition21 */kcg_bool Condition21,
  /* SwitchModes::Condition22 */kcg_bool Condition22,
  /* SwitchModes::Condition23 */kcg_bool Condition23,
  /* SwitchModes::Condition25 */kcg_bool Condition25,
  /* SwitchModes::Condition26 */kcg_bool Condition26,
  /* SwitchModes::Condition27 */kcg_bool Condition27,
  /* SwitchModes::Condition28 */kcg_bool Condition28,
  /* SwitchModes::Condition29 */kcg_bool Condition29,
  /* SwitchModes::Condition30 */kcg_bool Condition30,
  /* SwitchModes::Condition31 */kcg_bool Condition31,
  /* SwitchModes::Condition32 */kcg_bool Condition32,
  /* SwitchModes::Condition34 */kcg_bool Condition34,
  /* SwitchModes::Condition37 */kcg_bool Condition37,
  /* SwitchModes::Condition40 */kcg_bool Condition40,
  /* SwitchModes::Condition44 */kcg_bool Condition44,
  /* SwitchModes::Condition45 */kcg_bool Condition45,
  /* SwitchModes::Condition46 */kcg_bool Condition46,
  /* SwitchModes::Condition47 */kcg_bool Condition47,
  /* SwitchModes::Condition50 */kcg_bool Condition50,
  /* SwitchModes::Condition51 */kcg_bool Condition51,
  /* SwitchModes::Condition56 */kcg_bool Condition56,
  /* SwitchModes::Condition58 */kcg_bool Condition58,
  /* SwitchModes::Condition59 */kcg_bool Condition59,
  /* SwitchModes::Condition60 */kcg_bool Condition60,
  /* SwitchModes::Condition61 */kcg_bool Condition61,
  /* SwitchModes::Condition62 */kcg_bool Condition62,
  /* SwitchModes::Condition63 */kcg_bool Condition63,
  /* SwitchModes::Condition68 */kcg_bool Condition68,
  /* SwitchModes::Condition70 */kcg_bool Condition70,
  /* SwitchModes::Condition71 */kcg_bool Condition71,
  /* SwitchModes::Condition72 */kcg_bool Condition72,
  /* SwitchModes::Condition73 */kcg_bool Condition73,
  /* SwitchModes::Condition74 */kcg_bool Condition74,
  /* SwitchModes::ConditionTrip */kcg_bool ConditionTrip,
  outC_SwitchModes *outC)
{
  /* SwitchModes::previousMode_Loc */
  static T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc;
  
  if (outC->init) {
    outC->init = kcg_false;
    previousMode_Loc = SB_Level_And_Mode_Types_Pkg;
  }
  else {
    previousMode_Loc = outC->currentMode;
  }
  switch (previousMode_Loc) {
    case NP_Level_And_Mode_Types_Pkg :
      outC->currentMode = /* 1 */
        From_NP_PriorityManagement(Condition1, Condition4, previousMode_Loc);
      break;
    case SB_Level_And_Mode_Types_Pkg :
      outC->currentMode = /* 1 */
        From_SB_PriorityManagement(
          Condition1,
          Condition5,
          Condition6,
          Condition8,
          Condition10,
          Condition13,
          Condition14,
          Condition15,
          Condition29,
          Condition37,
          Condition46,
          Condition50,
          Condition58,
          Condition60,
          Condition70,
          ConditionTrip,
          previousMode_Loc);
      break;
    case PS_Level_And_Mode_Types_Pkg :
      outC->currentMode = /* 1 */
        From_PS_PriorityManagement(
          Condition1,
          Condition13,
          Condition14,
          Condition22,
          Condition23,
          Condition29,
          previousMode_Loc);
      break;
    case SH_Level_And_Mode_Types_Pkg :
      outC->currentMode = /* 1 */
        From_SH_PriorityManagement(
          Condition1,
          Condition13,
          Condition19,
          Condition26,
          Condition27,
          Condition29,
          Condition30,
          Condition46,
          ConditionTrip,
          previousMode_Loc);
      break;
    case FS_Level_And_Mode_Types_Pkg :
      outC->currentMode = /* 1 */
        From_FS_PriorityManagement(
          Condition1,
          Condition5,
          Condition6,
          Condition13,
          Condition15,
          Condition21,
          Condition28,
          Condition29,
          Condition37,
          Condition40,
          Condition46,
          Condition50,
          Condition51,
          Condition56,
          Condition59,
          Condition70,
          Condition72,
          ConditionTrip,
          previousMode_Loc);
      break;
    case LS_Level_And_Mode_Types_Pkg :
      outC->currentMode = /* 1 */
        From_LS_PriorityManagement(
          Condition1,
          Condition5,
          Condition6,
          Condition13,
          Condition15,
          Condition21,
          Condition28,
          Condition29,
          Condition31,
          Condition32,
          Condition37,
          Condition46,
          Condition50,
          Condition51,
          Condition56,
          Condition59,
          Condition73,
          ConditionTrip,
          previousMode_Loc);
      break;
    case SR_Level_And_Mode_Types_Pkg :
      outC->currentMode = /* 1 */
        From_SR_PriorityManagement(
          Condition1,
          Condition5,
          Condition6,
          Condition13,
          Condition21,
          Condition28,
          Condition29,
          Condition31,
          Condition32,
          Condition40,
          Condition46,
          Condition51,
          Condition56,
          Condition59,
          Condition72,
          ConditionTrip,
          previousMode_Loc);
      break;
    case OS_Level_And_Mode_Types_Pkg :
      outC->currentMode = /* 1 */
        From_OS_PriorityManagement(
          Condition1,
          Condition5,
          Condition6,
          Condition13,
          Condition21,
          Condition28,
          Condition29,
          Condition31,
          Condition32,
          Condition37,
          Condition46,
          Condition50,
          Condition51,
          Condition56,
          Condition59,
          Condition70,
          Condition74,
          ConditionTrip,
          previousMode_Loc);
      break;
    case SL_Level_And_Mode_Types_Pkg :
      outC->currentMode = /* 1 */
        From_SL_PriorityManagement(
          Condition1,
          Condition2,
          Condition3,
          Condition29,
          previousMode_Loc);
      break;
    case NL_Level_And_Mode_Types_Pkg :
      outC->currentMode = /* 1 */
        From_NL_PriorityManagement(
          Condition1,
          Condition28,
          Condition29,
          Condition47,
          previousMode_Loc);
      break;
    case TR_Level_And_Mode_Types_Pkg :
      outC->currentMode = /* 1 */
        From_TR_PriorityManagement(
          Condition1,
          Condition7,
          Condition13,
          Condition29,
          Condition62,
          Condition63,
          Condition68,
          previousMode_Loc);
      break;
    case PT_Level_And_Mode_Types_Pkg :
      outC->currentMode = /* 1 */
        From_PT_PriorityManagement(
          Condition1,
          Condition5,
          Condition6,
          Condition8,
          Condition13,
          Condition15,
          Condition28,
          Condition29,
          Condition31,
          Condition37,
          Condition50,
          Condition70,
          previousMode_Loc);
      break;
    case SF_Level_And_Mode_Types_Pkg :
      outC->currentMode = /* 1 */
        From_SF_PriorityManagement(Condition1, Condition29, previousMode_Loc);
      break;
    case IS_Level_And_Mode_Types_Pkg :
      outC->currentMode = IS_Level_And_Mode_Types_Pkg;
      break;
    case SN_Level_And_Mode_Types_Pkg :
      outC->currentMode = /* 1 */
        From_SN_PriorityManagement(
          Condition1,
          Condition5,
          Condition13,
          Condition21,
          Condition25,
          Condition28,
          Condition29,
          Condition34,
          Condition44,
          Condition45,
          Condition61,
          Condition71,
          ConditionTrip,
          previousMode_Loc);
      break;
    case RV_Level_And_Mode_Types_Pkg :
      outC->currentMode = /* 1 */
        From_RV_PriorityManagement(
          Condition1,
          Condition13,
          Condition28,
          Condition29,
          previousMode_Loc);
      break;
    case UN_Level_And_Mode_Types_Pkg :
      outC->currentMode = /* 1 */
        From_UN_PriorityManagement(
          Condition1,
          Condition5,
          Condition13,
          Condition25,
          Condition28,
          Condition29,
          Condition34,
          Condition44,
          Condition45,
          Condition56,
          Condition61,
          Condition71,
          ConditionTrip,
          previousMode_Loc);
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SwitchModes.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

