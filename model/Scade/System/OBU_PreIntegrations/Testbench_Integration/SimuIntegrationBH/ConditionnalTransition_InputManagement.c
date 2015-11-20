/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConditionnalTransition_InputManagement.h"

/* InputManagement::ConditionnalTransition */
void ConditionnalTransition_InputManagement(
  /* InputManagement::ConditionnalTransition::LRBG */ NID_LRBG LRBG,
  /* InputManagement::ConditionnalTransition::referenceLocation */ L_internal_Type_Obu_BasicTypes_Pkg referenceLocation,
  /* InputManagement::ConditionnalTransition::Packet_46_One_Iter */ P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg *Packet_46_One_Iter,
  /* InputManagement::ConditionnalTransition::One_Transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *One_Transition)
{
  static Q_DIR noname;
  static NID_NTC _1_noname;
  /* InputManagement::ConditionnalTransition::Loc_Level_Transition */
  static M_LEVELTR Loc_Level_Transition;
  /* InputManagement::ConditionnalTransition::Loc_Req_Level */
  static M_LEVEL Loc_Req_Level;
  /* InputManagement::ConditionnalTransition::_L4 */
  static P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg _L4;
  /* InputManagement::ConditionnalTransition::_L2 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L2;
  /* InputManagement::ConditionnalTransition::_L1 */
  static NID_LRBG _L1;
  /* InputManagement::ConditionnalTransition::_L6 */
  static kcg_bool _L6;
  /* InputManagement::ConditionnalTransition::_L7 */
  static Q_DIR _L7;
  /* InputManagement::ConditionnalTransition::_L8 */
  static M_LEVELTR _L8;
  /* InputManagement::ConditionnalTransition::_L9 */
  static NID_NTC _L9;
  /* InputManagement::ConditionnalTransition::_L10 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L10;
  /* InputManagement::ConditionnalTransition::_L12 */
  static kcg_int _L12;
  /* InputManagement::ConditionnalTransition::_L13 */
  static T_TransitionType_Level_And_Mode_Types_Pkg _L13;
  /* InputManagement::ConditionnalTransition::_L16 */
  static M_LEVEL _L16;
  /* InputManagement::ConditionnalTransition::_L17 */
  static M_LEVELTR _L17;
  /* InputManagement::ConditionnalTransition::_L18 */
  static M_LEVEL _L18;
  /* InputManagement::ConditionnalTransition::_L19 */
  static T_LevelTansitionInfo_Level_And_Mode_Types_Pkg _L19;
  /* InputManagement::ConditionnalTransition::_L20 */
  static kcg_bool _L20;
  /* InputManagement::ConditionnalTransition::_L21 */
  static kcg_int _L21;
  
  kcg_copy_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg(
    &_L4,
    Packet_46_One_Iter);
  _L6 = _L4.valid;
  _L8 = _L4.m_leveltr;
  Loc_Level_Transition = _L8;
  _L17 = Loc_Level_Transition;
  _L16 = /* 2 */ LevelTR2Level_InputManagement(_L17);
  Loc_Req_Level = _L16;
  _L18 = Loc_Req_Level;
  _L12 = 0;
  _L13 = M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  _L20 = kcg_false;
  _L21 = 0;
  _L19.level = _L18;
  _L19.position = _L12;
  _L19.transitionType = _L13;
  _L19.immediateAck = _L20;
  _L19.AckLength = _L21;
  _L1 = LRBG;
  _L2 = referenceLocation;
  _L10.is_set = _L6;
  kcg_copy_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg(
    &_L10.transition,
    &_L19);
  _L10.LRBG = _L1;
  _L10.referenceLocation = _L2;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(One_Transition, &_L10);
  _L9 = _L4.nid_ntc;
  _L7 = _L4.q_dir;
  noname = _L7;
  _1_noname = _L9;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ConditionnalTransition_InputManagement.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

