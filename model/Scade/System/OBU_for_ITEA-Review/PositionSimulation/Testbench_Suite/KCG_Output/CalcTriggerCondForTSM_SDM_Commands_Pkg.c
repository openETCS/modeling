/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcTriggerCondForTSM_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::CalcTriggerCondForTSM */
void CalcTriggerCondForTSM_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::mrdt */ Target_real_T_TargetManagement_types *mrdt,
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::trainLocations */ TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::floiIsSB1 */ kcg_bool floiIsSB1,
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::triggerConds */ TSM_triggerCond_T_SDM_Commands_Pkg *triggerConds)
{
  MyArray_SDM_Commands_Pkg tmp1;
  MyArray_SDM_Commands_Pkg tmp;
  kcg_int i;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L12 */ TSM_triggerCond_T_SDM_Commands_Pkg _L12;
  /* SDM_Commands_Pkg::CalcTriggerCondForTSM::_L13 */ MyArray_SDM_Commands_Pkg _L13;
  
  if ((EoA_TargetManagement_types == (*mrdt).targetType) |
    ((*mrdt).targetType == SvL_TargetManagement_types)) {
    /* 1 */ TSM_EstSpeedCond_EOA_SvL_SDM_Commands_Pkg(speeds, &_L12);
  }
  else {
    /* 1 */ TSM_EstSpeedCond_MRSP_LOA_SDM_Commands_Pkg(speeds, &_L12);
  }
  tmp1[0] = _L12.t1;
  tmp1[1] = _L12.t2;
  tmp1[2] = _L12.t3;
  tmp1[3] = _L12.t4;
  tmp1[4] = _L12.t5;
  tmp1[5] = _L12.t6;
  tmp1[6] = _L12.t7;
  tmp1[7] = _L12.t8;
  tmp1[8] = _L12.t9;
  tmp1[9] = _L12.t10;
  tmp1[10] = _L12.t11;
  tmp1[11] = _L12.t12;
  tmp1[12] = _L12.t13;
  tmp1[13] = _L12.t14;
  /* 1 */
  TSM_PositionCond_SDM_Commands_Pkg(
    locations,
    trainLocations,
    floiIsSB1,
    &_L12);
  tmp[0] = _L12.t1;
  tmp[1] = _L12.t2;
  tmp[2] = _L12.t3;
  tmp[3] = _L12.t4;
  tmp[4] = _L12.t5;
  tmp[5] = _L12.t6;
  tmp[6] = _L12.t7;
  tmp[7] = _L12.t8;
  tmp[8] = _L12.t9;
  tmp[9] = _L12.t10;
  tmp[10] = _L12.t11;
  tmp[11] = _L12.t12;
  tmp[12] = _L12.t13;
  tmp[13] = _L12.t14;
  for (i = 0; i < 14; i++) {
    _L13[i] = tmp1[i] & tmp[i];
  }
  (*triggerConds).t1 = _L13[0];
  (*triggerConds).t2 = _L13[1];
  (*triggerConds).t3 = _L13[2];
  (*triggerConds).t4 = _L13[3];
  (*triggerConds).t5 = _L13[4];
  (*triggerConds).t6 = _L13[5];
  (*triggerConds).t7 = _L13[6];
  (*triggerConds).t8 = _L13[7];
  (*triggerConds).t9 = _L13[8];
  (*triggerConds).t10 = _L13[9];
  (*triggerConds).t11 = _L13[10];
  (*triggerConds).t12 = _L13[11];
  (*triggerConds).t13 = _L13[12];
  (*triggerConds).t14 = _L13[13];
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** CalcTriggerCondForTSM_SDM_Commands_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

