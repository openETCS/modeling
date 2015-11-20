/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "dataForLevelTransition_xdebugSupport_Pkg.h"

/* xdebugSupport_Pkg::dataForLevelTransition */
void dataForLevelTransition_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::dataForLevelTransition::actualMessage */ReceivedMessage_T_Common_Types_Pkg *actualMessage,
  /* xdebugSupport_Pkg::dataForLevelTransition::storedData */dataCollectionForLevelTransition_T_xdebugSupport_Pkg *storedData,
  /* xdebugSupport_Pkg::dataForLevelTransition::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* xdebugSupport_Pkg::dataForLevelTransition::positionNeeded */kcg_bool positionNeeded,
  /* xdebugSupport_Pkg::dataForLevelTransition::actualLevel */M_LEVEL actualLevel,
  /* xdebugSupport_Pkg::dataForLevelTransition::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* xdebugSupport_Pkg::dataForLevelTransition::outstoredData */dataCollectionForLevelTransition_T_xdebugSupport_Pkg *outstoredData,
  /* xdebugSupport_Pkg::dataForLevelTransition::outPositionNeeded */kcg_bool *outPositionNeeded)
{
  static kcg_bool tmp1;
  static P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg tmp;
  static L_internal_Type_Obu_BasicTypes_Pkg tmp2;
  /* xdebugSupport_Pkg::dataForLevelTransition::ntcRequested */
  static kcg_bool ntcRequested;
  /* xdebugSupport_Pkg::dataForLevelTransition::_L3 */
  static kcg_bool _L3;
  /* xdebugSupport_Pkg::dataForLevelTransition::_L4 */
  static P015_OBU_T_TM _L4;
  /* xdebugSupport_Pkg::dataForLevelTransition::_L18 */
  static P41_LevelTransistionOrders_T_Packet_Types_Pkg _L18;
  /* xdebugSupport_Pkg::dataForLevelTransition::_L21 */
  static P021_OBU_T_TM _L21;
  /* xdebugSupport_Pkg::dataForLevelTransition::_L20 */
  static kcg_bool _L20;
  /* xdebugSupport_Pkg::dataForLevelTransition::_L71 */
  static kcg_bool _L71;
  /* xdebugSupport_Pkg::dataForLevelTransition::_L116 */
  static NID_LRBG _L116;
  
  tmp1 = /* 1 */
    packetValid_xdebugSupport_Pkg(
      &(*actualMessage).packets.PacketHeaders,
      cp041_Level_Transition_Order_Id_Pkg);
  _L71 = positionNeeded | tmp1;
  if (tmp1) {
    _L116 = /* 1 */ getLRBGFromMsg_xdebugSupport_Pkg(actualMessage);
  }
  else {
    _L116 = (*storedData).LRBG;
  }
  /* 1 */ Read_P041_Legacy_TM_specific(&(*actualMessage).packets, &_L18);
  if (_L71) {
    /* 1 */
    locationOfReferenceLRBG_xdebugSupport_Pkg(
      _L116,
      trainPosition,
      trainProperties,
      &tmp2,
      &_L3);
    *outPositionNeeded = !_L3;
  }
  else {
    *outPositionNeeded = !positionNeeded;
  }
  /* 1 */ Read_P015_TM(&(*actualMessage).packets, &_L3, &_L4);
  /* 1 */ Read_P021_TM(&(*actualMessage).packets, &_L20, &_L21);
  kcg_copy_dataCollectionForLevelTransition_T_xdebugSupport_Pkg(
    outstoredData,
    storedData);
  if (tmp1) {
    ntcRequested = /* 2 */ checkNTCPriority_xdebugSupport_Pkg(&_L18);
    kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
      &(*outstoredData).p41,
      &_L18);
  }
  else {
    ntcRequested = kcg_false;
    if (actualLevel == M_LEVEL_Level_0) {
      kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
        &(*outstoredData).p41,
        (P41_LevelTransistionOrders_T_Packet_Types_Pkg *)
          &cNoP41_xdebugSupport_Pkg);
    }
    else {
      kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
        &(*outstoredData).p41,
        &(*storedData).p41);
    }
  }
  tmp1 = /* 2 */
    packetValid_xdebugSupport_Pkg(
      &(*actualMessage).packets.PacketHeaders,
      cp046_Conditional_Level_Transition_Order_Id_Pkg);
  if (tmp1) {
    /* 1 */
    Read_P046_Legacy_TM_specific(
      &(*actualMessage).packets,
      &(*outstoredData).p46);
  }
  else {
    kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(
      &(*outstoredData).p46,
      &(*storedData).p46);
  }
  (*outstoredData).p15_received = _L3 | (*storedData).p15_received |
    ntcRequested;
  (*outstoredData).p21_received = _L20 | (*storedData).p21_received;
  /* 1 */
  Read_P027V1_Legacy_for_ML_TM_specific(&(*actualMessage).packets, &tmp);
  (*outstoredData).p27_received = tmp.valid | (*storedData).p27_received |
    ntcRequested;
  (*outstoredData).LRBG = _L116;
  if (_L71) {
    (*outstoredData).referenceLocation = tmp2;
  }
  else {
    (*outstoredData).referenceLocation = (*storedData).referenceLocation;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** dataForLevelTransition_xdebugSupport_Pkg.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

