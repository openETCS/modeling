/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ManageLevels.h"

#ifndef KCG_USER_DEFINED_INIT
void ManageLevels_init(outC_ManageLevels *outC)
{
  outC->isAvailableForUse = kcg_true;
  outC->levelIsNew = kcg_true;
  outC->positionReportNeeded = kcg_true;
  outC->connectionToRBCRequested = kcg_true;
  outC->serviceBrakeRequested = kcg_true;
  outC->announcedLevelTransition.is_set = kcg_true;
  outC->announcedLevelTransition.transition.level = M_LEVEL_Level_0;
  outC->announcedLevelTransition.transition.position = 0;
  outC->announcedLevelTransition.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->announcedLevelTransition.transition.immediateAck = kcg_true;
  outC->announcedLevelTransition.transition.AckLength = 0;
  outC->announcedLevelTransition.LRBG = 0;
  outC->announcedLevelTransition.referenceLocation = 0;
  outC->needsAckFromDriver = kcg_true;
  outC->TripTrainRequested = kcg_true;
  outC->nextLevel = M_LEVEL_Level_0;
  /* 1 */ BuildOutputToRBC_init_OutputToRBC(&outC->_2_Context_1);
  /* 1 */ ManageAck_init_Acknowledgement(&outC->_1_Context_1);
  /* 1 */ SelectLevelTransition_init_LevelTransitionSelection(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ManageLevels_reset(outC_ManageLevels *outC)
{
  /* 1 */ BuildOutputToRBC_reset_OutputToRBC(&outC->_2_Context_1);
  /* 1 */ ManageAck_reset_Acknowledgement(&outC->_1_Context_1);
  /* 1 */
  SelectLevelTransition_reset_LevelTransitionSelection(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* ManageLevels */
void ManageLevels(
  /* ManageLevels::trainStandstill */ kcg_bool trainStandstill,
  /* ManageLevels::driverLevelTransition */ T_LevelTransition_Level_And_Mode_Types_Pkg *driverLevelTransition,
  /* ManageLevels::levelAck */ kcg_bool levelAck,
  /* ManageLevels::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* ManageLevels::ERTMScapabilities */ T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMScapabilities,
  /* ManageLevels::DataFromTrackToLevel */ T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg *DataFromTrackToLevel,
  /* ManageLevels::MemorizedLevelIn */ M_LEVEL MemorizedLevelIn,
  outC_ManageLevels *outC)
{
  /* ManageLevels::Loc_IsNewLevel */
  static kcg_bool Loc_IsNewLevel;
  /* ManageLevels::Loc_NextLevel */
  static M_LEVEL Loc_NextLevel;
  /* ManageLevels::_L15 */
  static kcg_bool _L15;
  /* ManageLevels::_L18 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L18;
  /* ManageLevels::_L19 */
  static kcg_bool _L19;
  /* ManageLevels::_L21 */
  static trainPosition_T_TrainPosition_Types_Pck _L21;
  /* ManageLevels::_L24 */
  static T_ERTMS_capabilities_Level_And_Mode_Types_Pkg _L24;
  /* ManageLevels::_L35 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L35;
  /* ManageLevels::_L38 */
  static kcg_bool _L38;
  /* ManageLevels::_L54 */
  static T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg _L54;
  /* ManageLevels::_L57 */
  static kcg_bool _L57;
  /* ManageLevels::_L56 */
  static kcg_bool _L56;
  /* ManageLevels::_L55 */
  static M_LEVEL _L55;
  /* ManageLevels::_L61 */
  static T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg _L61;
  /* ManageLevels::_L67 */
  static M_LEVEL _L67;
  /* ManageLevels::_L69 */
  static kcg_bool _L69;
  /* ManageLevels::_L68 */
  static kcg_bool _L68;
  /* ManageLevels::_L70 */
  static M_LEVEL _L70;
  /* ManageLevels::_L72 */
  static trainPosition_T_TrainPosition_Types_Pck _L72;
  /* ManageLevels::_L76 */
  static kcg_bool _L76;
  /* ManageLevels::_L75 */
  static kcg_bool _L75;
  /* ManageLevels::_L78 */
  static trainPosition_T_TrainPosition_Types_Pck _L78;
  /* ManageLevels::_L80 */
  static kcg_bool _L80;
  /* ManageLevels::_L82 */
  static kcg_bool _L82;
  /* ManageLevels::_L84 */
  static M_LEVEL _L84;
  /* ManageLevels::_L85 */
  static M_LEVEL _L85;
  /* ManageLevels::_L86 */
  static M_LEVEL _L86;
  /* ManageLevels::_L87 */
  static M_LEVEL _L87;
  
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &_L18,
    driverLevelTransition);
  _L15 = trainStandstill;
  _L19 = levelAck;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L21, trainPosition);
  kcg_copy_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg(
    &_L24,
    ERTMScapabilities);
  _L85 = MemorizedLevelIn;
  kcg_copy_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg(
    &_L54,
    DataFromTrackToLevel);
  /* 1 */
  SelectLevelTransition_LevelTransitionSelection(
    _L85,
    _L15,
    &_L18,
    &_L24,
    &_L54,
    &outC->Context_1);
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &_L35,
    &outC->Context_1.selected_level_transition);
  _L38 = outC->Context_1.IsAvailableForUse;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L78, trainPosition);
  _L87 = MemorizedLevelIn;
  _L86 = MemorizedLevelIn;
  kcg_copy_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg(
    &_L61,
    DataFromTrackToLevel);
  /* 1 */
  ProceedOnLevelChange_LevelChangement(
    _L86,
    &_L35,
    &_L21,
    &_L61,
    &_L55,
    &_L56,
    &_L57);
  Loc_IsNewLevel = _L56;
  _L80 = Loc_IsNewLevel;
  /* 1 */
  ManageAck_Acknowledgement(
    &_L35,
    &_L78,
    _L87,
    _L19,
    _L80,
    &outC->_1_Context_1);
  _L75 = outC->_1_Context_1.needsAckFromDriver;
  _L76 = outC->_1_Context_1.service_brake;
  outC->needsAckFromDriver = _L75;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->announcedLevelTransition,
    &_L35);
  outC->serviceBrakeRequested = _L76;
  Loc_NextLevel = _L55;
  _L67 = Loc_NextLevel;
  outC->nextLevel = _L67;
  outC->TripTrainRequested = _L57;
  _L84 = MemorizedLevelIn;
  _L70 = Loc_NextLevel;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L72, trainPosition);
  /* 1 */
  BuildOutputToRBC_OutputToRBC(&_L35, _L84, _L70, &_L72, &outC->_2_Context_1);
  _L68 = outC->_2_Context_1.Connection_to_RBC_Requested;
  _L69 = outC->_2_Context_1.PositionReportNeeded;
  outC->connectionToRBCRequested = _L68;
  outC->positionReportNeeded = _L69;
  _L82 = Loc_IsNewLevel;
  outC->levelIsNew = _L82;
  outC->isAvailableForUse = _L38;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ManageLevels.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

