/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BuildOutputToRBC_OutputToRBC.h"

#ifndef KCG_USER_DEFINED_INIT
void BuildOutputToRBC_init_OutputToRBC(outC_BuildOutputToRBC_OutputToRBC *outC)
{
  outC->PositionReportNeeded = kcg_true;
  outC->Connection_to_RBC_Requested = kcg_true;
  /* 1 */ ExitLevel2or3_init_OutputToRBC(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void BuildOutputToRBC_reset_OutputToRBC(outC_BuildOutputToRBC_OutputToRBC *outC)
{
  /* 1 */ ExitLevel2or3_reset_OutputToRBC(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* OutputToRBC::BuildOutputToRBC */
void BuildOutputToRBC_OutputToRBC(
  /* OutputToRBC::BuildOutputToRBC::selected_level_transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *selected_level_transition,
  /* OutputToRBC::BuildOutputToRBC::last_level */ M_LEVEL last_level,
  /* OutputToRBC::BuildOutputToRBC::new_level */ M_LEVEL new_level,
  /* OutputToRBC::BuildOutputToRBC::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  outC_BuildOutputToRBC_OutputToRBC *outC)
{
  /* OutputToRBC::BuildOutputToRBC::_L2 */
  static kcg_bool _L2;
  /* OutputToRBC::BuildOutputToRBC::_L3 */
  static M_LEVEL _L3;
  /* OutputToRBC::BuildOutputToRBC::_L4 */
  static M_LEVEL _L4;
  /* OutputToRBC::BuildOutputToRBC::_L5 */
  static kcg_bool _L5;
  /* OutputToRBC::BuildOutputToRBC::_L6 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L6;
  /* OutputToRBC::BuildOutputToRBC::_L7 */
  static M_LEVEL _L7;
  /* OutputToRBC::BuildOutputToRBC::_L8 */
  static kcg_bool _L8;
  /* OutputToRBC::BuildOutputToRBC::_L9 */
  static M_LEVEL _L9;
  /* OutputToRBC::BuildOutputToRBC::_L10 */
  static M_LEVEL _L10;
  /* OutputToRBC::BuildOutputToRBC::_L11 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L11;
  /* OutputToRBC::BuildOutputToRBC::_L12 */
  static trainPosition_T_TrainPosition_Types_Pck _L12;
  /* OutputToRBC::BuildOutputToRBC::_L13 */
  static kcg_bool _L13;
  
  _L3 = last_level;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &_L6,
    selected_level_transition);
  _L2 = /* 2 */ RBCSessionRequests_OutputToRBC(_L3, &_L6);
  _L4 = new_level;
  outC->Connection_to_RBC_Requested = _L2;
  _L7 = last_level;
  _L5 = /* 1 */ EntryInLevel2or3_OutputToRBC(_L7, _L4);
  _L10 = new_level;
  _L9 = last_level;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &_L11,
    selected_level_transition);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L12, trainPosition);
  /* 1 */ ExitLevel2or3_OutputToRBC(_L10, _L9, &_L11, &_L12, &outC->Context_1);
  _L8 = outC->Context_1.PositionReportNeeded;
  _L13 = _L5 | _L8;
  outC->PositionReportNeeded = _L13;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BuildOutputToRBC_OutputToRBC.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

