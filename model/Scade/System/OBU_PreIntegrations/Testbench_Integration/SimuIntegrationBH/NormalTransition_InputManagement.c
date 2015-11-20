/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NormalTransition_InputManagement.h"

/* InputManagement::NormalTransition */
void NormalTransition_InputManagement(
  /* InputManagement::NormalTransition::LRBG */ NID_LRBG LRBG,
  /* InputManagement::NormalTransition::referenceLocation */ L_internal_Type_Obu_BasicTypes_Pkg referenceLocation,
  /* InputManagement::NormalTransition::P41_OneIter */ P41_LevelTransitionOrder_T_Packet_Types_Pkg *P41_OneIter,
  /* InputManagement::NormalTransition::One_Iter */ T_LevelTransition_Level_And_Mode_Types_Pkg *One_Iter)
{
  static Q_DIR noname;
  static NID_NTC _1_noname;
  /* InputManagement::NormalTransition::Loc_Req_Level */
  static M_LEVEL Loc_Req_Level;
  /* InputManagement::NormalTransition::Loc_Level_Transition */
  static M_LEVELTR Loc_Level_Transition;
  /* InputManagement::NormalTransition::Loc_ImmediateAck */
  static kcg_bool Loc_ImmediateAck;
  /* InputManagement::NormalTransition::Loc_Ack_Length */
  static L_internal_Type_Obu_BasicTypes_Pkg Loc_Ack_Length;
  /* InputManagement::NormalTransition::_L4 */
  static P41_LevelTransitionOrder_T_Packet_Types_Pkg _L4;
  /* InputManagement::NormalTransition::_L3 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L3;
  /* InputManagement::NormalTransition::_L2 */
  static NID_LRBG _L2;
  /* InputManagement::NormalTransition::_L10 */
  static kcg_bool _L10;
  /* InputManagement::NormalTransition::_L11 */
  static Q_DIR _L11;
  /* InputManagement::NormalTransition::_L12 */
  static Q_SCALE _L12;
  /* InputManagement::NormalTransition::_L13 */
  static D_LEVELTR _L13;
  /* InputManagement::NormalTransition::_L14 */
  static M_LEVELTR _L14;
  /* InputManagement::NormalTransition::_L15 */
  static NID_NTC _L15;
  /* InputManagement::NormalTransition::_L16 */
  static L_ACKLEVELTR _L16;
  /* InputManagement::NormalTransition::_L18 */
  static M_LEVEL _L18;
  /* InputManagement::NormalTransition::_L19 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L19;
  /* InputManagement::NormalTransition::_L20 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L20;
  /* InputManagement::NormalTransition::_L21 */
  static kcg_bool _L21;
  /* InputManagement::NormalTransition::_L22 */
  static D_LEVELTR _L22;
  /* InputManagement::NormalTransition::_L23 */
  static kcg_bool _L23;
  /* InputManagement::NormalTransition::_L24 */
  static T_TransitionType_Level_And_Mode_Types_Pkg _L24;
  /* InputManagement::NormalTransition::_L26 */
  static M_LEVELTR _L26;
  /* InputManagement::NormalTransition::_L27 */
  static M_LEVEL _L27;
  /* InputManagement::NormalTransition::_L28 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L28;
  /* InputManagement::NormalTransition::_L29 */
  static T_LevelTansitionInfo_Level_And_Mode_Types_Pkg _L29;
  /* InputManagement::NormalTransition::_L30 */
  static kcg_bool _L30;
  /* InputManagement::NormalTransition::_L32 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L32;
  /* InputManagement::NormalTransition::_L33 */
  static kcg_int _L33;
  /* InputManagement::NormalTransition::_L34 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L34;
  
  kcg_copy_P41_LevelTransitionOrder_T_Packet_Types_Pkg(&_L4, P41_OneIter);
  _L3 = referenceLocation;
  _L2 = LRBG;
  _L10 = _L4.valid;
  _L14 = _L4.m_leveltr;
  Loc_Level_Transition = _L14;
  _L26 = Loc_Level_Transition;
  _L18 = /* 1 */ LevelTR2Level_InputManagement(_L26);
  Loc_Req_Level = _L18;
  _L27 = Loc_Req_Level;
  _L12 = _L4.q_scale;
  _L13 = _L4.d_leveltr;
  _L19 = /* 1 */ scaledDistance_2_distance_InputManagement(_L12, _L13);
  _L34 = referenceLocation;
  _L33 = _L19 + _L34;
  _L24 = M_TransitionType_Normal_Level_And_Mode_Types_Pkg;
  _L22 = cImmediateAck_Distance_InputManagement;
  _L21 = _L22 == _L13;
  _L23 = _L10 & _L21;
  Loc_ImmediateAck = _L23;
  _L30 = Loc_ImmediateAck;
  _L16 = _L4.l_ackleveltr;
  _L20 = /* 2 */ scaledDistance_2_distance_InputManagement(_L12, _L16);
  Loc_Ack_Length = _L20;
  _L32 = Loc_Ack_Length;
  _L29.level = _L27;
  _L29.position = _L33;
  _L29.transitionType = _L24;
  _L29.immediateAck = _L30;
  _L29.AckLength = _L32;
  _L28.is_set = _L10;
  kcg_copy_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg(
    &_L28.transition,
    &_L29);
  _L28.LRBG = _L2;
  _L28.referenceLocation = _L3;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(One_Iter, &_L28);
  _L15 = _L4.nid_ntc;
  _L11 = _L4.q_dir;
  noname = _L11;
  _1_noname = _L15;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** NormalTransition_InputManagement.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

