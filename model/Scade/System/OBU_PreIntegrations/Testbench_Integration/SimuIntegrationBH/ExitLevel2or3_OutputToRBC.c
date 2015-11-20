/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ExitLevel2or3_OutputToRBC.h"

#ifndef KCG_USER_DEFINED_INIT
void ExitLevel2or3_init_OutputToRBC(outC_ExitLevel2or3_OutputToRBC *outC)
{
  outC->init = kcg_true;
  outC->Loc_Position = 0;
  outC->SM1_reset_nxt = kcg_true;
  outC->SM1_reset_act = kcg_true;
  outC->SM1_state_nxt = SSM_st_BeforeChange_SM1;
  outC->PositionReportNeeded = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ExitLevel2or3_reset_OutputToRBC(outC_ExitLevel2or3_OutputToRBC *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* OutputToRBC::ExitLevel2or3 */
void ExitLevel2or3_OutputToRBC(
  /* OutputToRBC::ExitLevel2or3::new_level */ M_LEVEL new_level,
  /* OutputToRBC::ExitLevel2or3::last_level */ M_LEVEL last_level,
  /* OutputToRBC::ExitLevel2or3::selected_level_transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *selected_level_transition,
  /* OutputToRBC::ExitLevel2or3::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  outC_ExitLevel2or3_OutputToRBC *outC)
{
  /* OutputToRBC::ExitLevel2or3::SM1 */
  static _53_SSM_TR_SM1 _5_SM1_fired;
  /* OutputToRBC::ExitLevel2or3::SM1 */
  static kcg_bool _4_SM1_reset_nxt;
  /* OutputToRBC::ExitLevel2or3::SM1 */
  static _50_SSM_ST_SM1 _3_SM1_state_nxt;
  /* OutputToRBC::ExitLevel2or3::Loc_Position */
  static M_POSITION _2_Loc_Position;
  /* OutputToRBC::ExitLevel2or3::PositionReportNeeded */
  static kcg_bool _1_PositionReportNeeded;
  /* OutputToRBC::ExitLevel2or3::SM1::BeforeChange */
  static kcg_bool br_1_guard_SM1_BeforeChange;
  /* OutputToRBC::ExitLevel2or3::SM1::BeforeChange::_L3 */
  static M_POSITION _L3_SM1_BeforeChange;
  /* OutputToRBC::ExitLevel2or3::SM1::BeforeChange::_L2 */
  static T_LevelTansitionInfo_Level_And_Mode_Types_Pkg _L2_SM1_BeforeChange;
  /* OutputToRBC::ExitLevel2or3::SM1::BeforeChange::_L1 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L1_SM1_BeforeChange;
  /* OutputToRBC::ExitLevel2or3::SM1 */
  static _53_SSM_TR_SM1 SM1_fired;
  /* OutputToRBC::ExitLevel2or3::SM1 */
  static kcg_bool SM1_reset_nxt;
  /* OutputToRBC::ExitLevel2or3::SM1 */
  static _50_SSM_ST_SM1 SM1_state_nxt;
  /* OutputToRBC::ExitLevel2or3::Loc_Position */
  static M_POSITION Loc_Position;
  /* OutputToRBC::ExitLevel2or3::PositionReportNeeded */
  static kcg_bool PositionReportNeeded;
  /* OutputToRBC::ExitLevel2or3::SM1::State2 */
  static kcg_bool br_1_guard_SM1_State2;
  /* OutputToRBC::ExitLevel2or3::SM1::State2::_L1 */
  static M_POSITION _L1_SM1_State2;
  /* OutputToRBC::ExitLevel2or3::SM1::State2 */
  static kcg_bool br_1_clock_SM1_State2;
  /* OutputToRBC::ExitLevel2or3::PositionReportNeeded */
  static kcg_bool _6_PositionReportNeeded;
  /* OutputToRBC::ExitLevel2or3::PositionReportNeeded */
  static kcg_bool _7_PositionReportNeeded;
  /* OutputToRBC::ExitLevel2or3::Loc_Position */
  static M_POSITION last_Loc_Position;
  /* OutputToRBC::ExitLevel2or3::SM1 */
  static _50_SSM_ST_SM1 SM1_state_sel;
  /* OutputToRBC::ExitLevel2or3::SM1 */
  static _50_SSM_ST_SM1 SM1_state_act;
  /* OutputToRBC::ExitLevel2or3::SM1 */
  static kcg_bool SM1_reset_sel;
  /* OutputToRBC::ExitLevel2or3::SM1 */
  static kcg_bool SM1_reset_prv;
  /* OutputToRBC::ExitLevel2or3::SM1 */
  static _53_SSM_TR_SM1 SM1_fired_strong;
  /* OutputToRBC::ExitLevel2or3::SM1 */
  static _53_SSM_TR_SM1 _8_SM1_fired;
  /* OutputToRBC::ExitLevel2or3::Loc_PositionReportToPlan */
  static kcg_bool Loc_PositionReportToPlan;
  /* OutputToRBC::ExitLevel2or3::Loc_MinSafeRearEnd */
  static Location_T_Obu_BasicTypes_Pkg Loc_MinSafeRearEnd;
  /* OutputToRBC::ExitLevel2or3::_L11 */
  static kcg_bool _L11;
  /* OutputToRBC::ExitLevel2or3::_L10 */
  static kcg_bool _L10;
  /* OutputToRBC::ExitLevel2or3::_L9 */
  static kcg_bool _L9;
  /* OutputToRBC::ExitLevel2or3::_L8 */
  static kcg_bool _L8;
  /* OutputToRBC::ExitLevel2or3::_L7 */
  static M_LEVEL _L7;
  /* OutputToRBC::ExitLevel2or3::_L6 */
  static M_LEVEL _L6;
  /* OutputToRBC::ExitLevel2or3::_L5 */
  static kcg_bool _L5;
  /* OutputToRBC::ExitLevel2or3::_L4 */
  static kcg_bool _L4;
  /* OutputToRBC::ExitLevel2or3::_L3 */
  static kcg_bool _L3;
  /* OutputToRBC::ExitLevel2or3::_L2 */
  static kcg_bool _L2;
  /* OutputToRBC::ExitLevel2or3::_L1 */
  static kcg_bool _L1;
  /* OutputToRBC::ExitLevel2or3::_L15 */
  static Location_T_Obu_BasicTypes_Pkg _L15;
  /* OutputToRBC::ExitLevel2or3::_L26 */
  static trainPosition_T_TrainPosition_Types_Pck _L26;
  
  _L7 = last_level;
  _L6 = new_level;
  _L1 = _L7 != _L6;
  _L5 = last_level == M_LEVEL_Level_2;
  _L10 = last_level == M_LEVEL_Level_3;
  _L2 = _L5 | _L10;
  _L3 = new_level == M_LEVEL_Level_1;
  _L4 = new_level == M_LEVEL_Level_0;
  _L11 = new_level == M_LEVEL_Level_NTC_specified_by_NID_NTC;
  _L9 = _L4 | _L3 | _L11;
  _L8 = _L1 & _L2 & _L9;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L26, trainPosition);
  _L15 = _L26.minSafeRearEndPosition;
  Loc_PositionReportToPlan = _L8;
  /* init_SM1 */ if (outC->init) {
    SM1_state_sel = SSM_st_BeforeChange_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  /* init_SM1 */ if (outC->init) {
    SM1_reset_sel = kcg_false;
  }
  else {
    SM1_reset_sel = outC->SM1_reset_nxt;
  }
  /* init_SM1 */ if (outC->init) {
    SM1_reset_prv = kcg_false;
  }
  else {
    SM1_reset_prv = outC->SM1_reset_act;
  }
  SM1_state_act = SM1_state_sel;
  outC->SM1_reset_act = kcg_false;
  SM1_fired_strong = _52_SSM_TR_no_trans_SM1;
  /* last_init_ck_Loc_Position */ if (outC->init) {
    last_Loc_Position = 0;
  }
  else {
    last_Loc_Position = outC->Loc_Position;
  }
  /* act_SM1 */ switch (SM1_state_act) {
    case _49_SSM_st_State2_SM1 :
      _L1_SM1_State2 = last_Loc_Position;
      Loc_Position = _L1_SM1_State2;
      break;
    
  }
  Loc_MinSafeRearEnd = _L15;
  /* act_SM1 */ switch (SM1_state_act) {
    case SSM_st_BeforeChange_SM1 :
      _1_PositionReportNeeded = kcg_false;
      outC->PositionReportNeeded = _1_PositionReportNeeded;
      kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
        &_L1_SM1_BeforeChange,
        selected_level_transition);
      kcg_copy_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg(
        &_L2_SM1_BeforeChange,
        &_L1_SM1_BeforeChange.transition);
      _L3_SM1_BeforeChange = _L2_SM1_BeforeChange.position;
      _2_Loc_Position = _L3_SM1_BeforeChange;
      outC->Loc_Position = _2_Loc_Position;
      br_1_guard_SM1_BeforeChange = Loc_PositionReportToPlan;
      if (br_1_guard_SM1_BeforeChange) {
        _3_SM1_state_nxt = _49_SSM_st_State2_SM1;
      }
      else {
        _3_SM1_state_nxt = SSM_st_BeforeChange_SM1;
      }
      outC->SM1_state_nxt = _3_SM1_state_nxt;
      _4_SM1_reset_nxt = br_1_guard_SM1_BeforeChange;
      outC->SM1_reset_nxt = _4_SM1_reset_nxt;
      if (br_1_guard_SM1_BeforeChange) {
        _5_SM1_fired = SSM_TR_BeforeChange_1_SM1;
      }
      else {
        _5_SM1_fired = _52_SSM_TR_no_trans_SM1;
      }
      _8_SM1_fired = _5_SM1_fired;
      break;
    case _49_SSM_st_State2_SM1 :
      br_1_guard_SM1_State2 = Loc_Position <= Loc_MinSafeRearEnd;
      br_1_clock_SM1_State2 = br_1_guard_SM1_State2;
      /* cb_anon_sm */ if (br_1_clock_SM1_State2) {
        _7_PositionReportNeeded = kcg_true;
        PositionReportNeeded = _7_PositionReportNeeded;
      }
      else {
        _6_PositionReportNeeded = kcg_false;
        PositionReportNeeded = _6_PositionReportNeeded;
      }
      outC->PositionReportNeeded = PositionReportNeeded;
      outC->Loc_Position = Loc_Position;
      if (br_1_guard_SM1_State2) {
        SM1_state_nxt = SSM_st_BeforeChange_SM1;
      }
      else {
        SM1_state_nxt = _49_SSM_st_State2_SM1;
      }
      outC->SM1_state_nxt = SM1_state_nxt;
      SM1_reset_nxt = br_1_guard_SM1_State2;
      outC->SM1_reset_nxt = SM1_reset_nxt;
      if (br_1_guard_SM1_State2) {
        SM1_fired = _51_SSM_TR_State2_1_SM1;
      }
      else {
        SM1_fired = _52_SSM_TR_no_trans_SM1;
      }
      _8_SM1_fired = SM1_fired;
      break;
    
  }
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ExitLevel2or3_OutputToRBC.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

