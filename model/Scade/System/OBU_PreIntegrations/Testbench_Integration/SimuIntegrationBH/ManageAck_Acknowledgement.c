/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ManageAck_Acknowledgement.h"

#ifndef KCG_USER_DEFINED_INIT
void ManageAck_init_Acknowledgement(outC_ManageAck_Acknowledgement *outC)
{
  outC->service_brake = kcg_true;
  outC->needsAckFromDriver = kcg_true;
  /* 1 */ RequestAck_init_Acknowledgement(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ManageAck_reset_Acknowledgement(outC_ManageAck_Acknowledgement *outC)
{
  /* 1 */ RequestAck_reset_Acknowledgement(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Acknowledgement::ManageAck */
void ManageAck_Acknowledgement(
  /* Acknowledgement::ManageAck::selected_level_transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *selected_level_transition,
  /* Acknowledgement::ManageAck::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* Acknowledgement::ManageAck::last_level */ M_LEVEL last_level,
  /* Acknowledgement::ManageAck::levelAck */ kcg_bool levelAck,
  /* Acknowledgement::ManageAck::IsNewLevel */ kcg_bool IsNewLevel,
  outC_ManageAck_Acknowledgement *outC)
{
  /* Acknowledgement::ManageAck::_L3 */
  static kcg_bool _L3;
  /* Acknowledgement::ManageAck::_L4 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L4;
  /* Acknowledgement::ManageAck::_L5 */
  static M_LEVEL _L5;
  /* Acknowledgement::ManageAck::_L6 */
  static kcg_bool _L6;
  /* Acknowledgement::ManageAck::_L7 */
  static kcg_bool _L7;
  /* Acknowledgement::ManageAck::_L8 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L8;
  /* Acknowledgement::ManageAck::_L9 */
  static trainPosition_T_TrainPosition_Types_Pck _L9;
  /* Acknowledgement::ManageAck::_L10 */
  static kcg_bool _L10;
  /* Acknowledgement::ManageAck::_L11 */
  static kcg_bool _L11;
  
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &_L4,
    selected_level_transition);
  _L5 = last_level;
  _L3 = /* 1 */ IsAckNeeded_Acknowledgement(&_L4, _L5);
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &_L8,
    selected_level_transition);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L9, trainPosition);
  _L10 = levelAck;
  _L11 = IsNewLevel;
  /* 1 */
  RequestAck_Acknowledgement(_L3, &_L8, &_L9, _L10, _L11, &outC->Context_1);
  _L7 = outC->Context_1.needsAckFromDriver;
  _L6 = outC->Context_1.service_brake;
  outC->needsAckFromDriver = _L7;
  outC->service_brake = _L6;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ManageAck_Acknowledgement.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

