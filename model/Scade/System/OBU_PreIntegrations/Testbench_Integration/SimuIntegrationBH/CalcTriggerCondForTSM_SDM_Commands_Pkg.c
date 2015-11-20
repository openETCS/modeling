/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcTriggerCondForTSM_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::CalcTriggerCondForTSM */
void CalcTriggerCondForTSM_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::mrdt */ Target_T_TargetManagement_types *mrdt,
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::trainLocations */ trainPosition_T_TrainPosition_Types_Pck *trainLocations,
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::floiIsSB1 */ kcg_bool floiIsSB1,
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::triggerConds */ TSM_triggerCond_T_SDM_Commands_Pkg *triggerConds)
{
  static kcg_int i;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L1 */
  static Speeds_T_SDM_Types_Pkg _L1;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L2 */
  static SDM_Locations_T_SDM_Types_Pkg _L2;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L3 */
  static TSM_triggerCond_T_SDM_Commands_Pkg _L3;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L4 */
  static Target_T_TargetManagement_types _L4;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L5 */
  static kcg_bool _L5;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L6 */
  static kcg_bool _L6;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L7 */
  static kcg_bool _L7;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L8 */
  static TargetType_T_TargetManagement_types _L8;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L9 */
  static TargetType_T_TargetManagement_types _L9;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L10 */
  static TSM_triggerCond_T_SDM_Commands_Pkg _L10;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L11 */
  static TSM_triggerCond_T_SDM_Commands_Pkg _L11;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L12 */
  static TSM_triggerCond_T_SDM_Commands_Pkg _L12;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L13 */
  static MyArray_SDM_Commands_Pkg _L13;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L196 */
  static TSM_triggerCond_T_SDM_Commands_Pkg _L196;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L224 */
  static kcg_bool _L224;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L223 */
  static kcg_bool _L223;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L222 */
  static kcg_bool _L222;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L221 */
  static kcg_bool _L221;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L220 */
  static kcg_bool _L220;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L219 */
  static kcg_bool _L219;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L218 */
  static kcg_bool _L218;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L217 */
  static kcg_bool _L217;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L216 */
  static kcg_bool _L216;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L215 */
  static kcg_bool _L215;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L214 */
  static kcg_bool _L214;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L213 */
  static kcg_bool _L213;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L212 */
  static kcg_bool _L212;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L211 */
  static kcg_bool _L211;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L252 */
  static kcg_bool _L252;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L251 */
  static kcg_bool _L251;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L250 */
  static kcg_bool _L250;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L249 */
  static kcg_bool _L249;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L248 */
  static kcg_bool _L248;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L247 */
  static kcg_bool _L247;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L246 */
  static kcg_bool _L246;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L245 */
  static kcg_bool _L245;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L244 */
  static kcg_bool _L244;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L243 */
  static kcg_bool _L243;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L242 */
  static kcg_bool _L242;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L241 */
  static kcg_bool _L241;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L240 */
  static kcg_bool _L240;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L239 */
  static kcg_bool _L239;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L365 */
  static MyArray_SDM_Commands_Pkg _L365;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L422 */
  static kcg_bool _L422;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L421 */
  static kcg_bool _L421;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L420 */
  static kcg_bool _L420;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L419 */
  static kcg_bool _L419;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L418 */
  static kcg_bool _L418;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L417 */
  static kcg_bool _L417;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L416 */
  static kcg_bool _L416;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L415 */
  static kcg_bool _L415;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L414 */
  static kcg_bool _L414;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L413 */
  static kcg_bool _L413;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L412 */
  static kcg_bool _L412;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L411 */
  static kcg_bool _L411;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L410 */
  static kcg_bool _L410;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L409 */
  static kcg_bool _L409;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L479 */
  static MyArray_SDM_Commands_Pkg _L479;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L480 */
  static TargetType_T_TargetManagement_types _L480;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L481 */
  static trainPosition_T_TrainPosition_Types_Pck _L481;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L482 */
  static kcg_bool _L482;
  
  kcg_copy_Speeds_T_SDM_Types_Pkg(&_L1, speeds);
  kcg_copy_SDM_Locations_T_SDM_Types_Pkg(&_L2, locations);
  _L8 = EoA_TargetManagement_types;
  kcg_copy_Target_T_TargetManagement_types(&_L4, mrdt);
  _L480 = _L4.targetType;
  _L6 = _L8 == _L480;
  _L9 = SvL_TargetManagement_types;
  _L5 = _L480 == _L9;
  _L7 = _L6 | _L5;
  /* 1 */ TSM_EstSpeedCond_EOA_SvL_SDM_Commands_Pkg(&_L1, &_L10);
  /* 1 */ TSM_EstSpeedCond_MRSP_LOA_SDM_Commands_Pkg(&_L1, &_L11);
  /* 1 */ if (_L7) {
    kcg_copy_TSM_triggerCond_T_SDM_Commands_Pkg(&_L3, &_L10);
  }
  else {
    kcg_copy_TSM_triggerCond_T_SDM_Commands_Pkg(&_L3, &_L11);
  }
  _L409 = _L3.t1;
  _L410 = _L3.t2;
  _L411 = _L3.t3;
  _L412 = _L3.t4;
  _L413 = _L3.t5;
  _L414 = _L3.t6;
  _L415 = _L3.t7;
  _L416 = _L3.t8;
  _L417 = _L3.t9;
  _L418 = _L3.t10;
  _L419 = _L3.t11;
  _L420 = _L3.t12;
  _L421 = _L3.t13;
  _L422 = _L3.t14;
  _L479[0] = _L409;
  _L479[1] = _L410;
  _L479[2] = _L411;
  _L479[3] = _L412;
  _L479[4] = _L413;
  _L479[5] = _L414;
  _L479[6] = _L415;
  _L479[7] = _L416;
  _L479[8] = _L417;
  _L479[9] = _L418;
  _L479[10] = _L419;
  _L479[11] = _L420;
  _L479[12] = _L421;
  _L479[13] = _L422;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L481, trainLocations);
  _L482 = floiIsSB1;
  /* 1 */ TSM_PositionCond_SDM_Commands_Pkg(&_L2, &_L481, _L482, &_L12);
  _L239 = _L12.t1;
  _L240 = _L12.t2;
  _L241 = _L12.t3;
  _L242 = _L12.t4;
  _L243 = _L12.t5;
  _L244 = _L12.t6;
  _L245 = _L12.t7;
  _L246 = _L12.t8;
  _L247 = _L12.t9;
  _L248 = _L12.t10;
  _L249 = _L12.t11;
  _L250 = _L12.t12;
  _L251 = _L12.t13;
  _L252 = _L12.t14;
  _L365[0] = _L239;
  _L365[1] = _L240;
  _L365[2] = _L241;
  _L365[3] = _L242;
  _L365[4] = _L243;
  _L365[5] = _L244;
  _L365[6] = _L245;
  _L365[7] = _L246;
  _L365[8] = _L247;
  _L365[9] = _L248;
  _L365[10] = _L249;
  _L365[11] = _L250;
  _L365[12] = _L251;
  _L365[13] = _L252;
  for (i = 0; i < 14; i++) {
    _L13[i] = _L479[i] & _L365[i];
  }
  _L211 = _L13[0];
  _L212 = _L13[1];
  _L213 = _L13[2];
  _L214 = _L13[3];
  _L215 = _L13[4];
  _L216 = _L13[5];
  _L217 = _L13[6];
  _L218 = _L13[7];
  _L219 = _L13[8];
  _L220 = _L13[9];
  _L221 = _L13[10];
  _L222 = _L13[11];
  _L223 = _L13[12];
  _L224 = _L13[13];
  _L196.t1 = _L211;
  _L196.t2 = _L212;
  _L196.t3 = _L213;
  _L196.t4 = _L214;
  _L196.t5 = _L215;
  _L196.t6 = _L216;
  _L196.t7 = _L217;
  _L196.t8 = _L218;
  _L196.t9 = _L219;
  _L196.t10 = _L220;
  _L196.t11 = _L221;
  _L196.t12 = _L222;
  _L196.t13 = _L223;
  _L196.t14 = _L224;
  kcg_copy_TSM_triggerCond_T_SDM_Commands_Pkg(triggerConds, &_L196);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CalcTriggerCondForTSM_SDM_Commands_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

