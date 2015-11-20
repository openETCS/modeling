/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "changeoverSwitch_Handover_Pkg_handoverUtils_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void changeoverSwitch_init_Handover_Pkg_handoverUtils_Pkg(
  outC_changeoverSwitch_Handover_Pkg_handoverUtils_Pkg *outC)
{
  outC->init = kcg_true;
  outC->SM1_reset_nxt = kcg_true;
  outC->SM1_reset_act = kcg_true;
  outC->SM1_state_nxt = SSM_st_mobile_1_SM1;
  outC->handingOverMobile_is_mobile_1 = kcg_true;
  /* 1 */ FallingEdge_init_digital(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void changeoverSwitch_reset_Handover_Pkg_handoverUtils_Pkg(
  outC_changeoverSwitch_Handover_Pkg_handoverUtils_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ FallingEdge_reset_digital(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch */
void changeoverSwitch_Handover_Pkg_handoverUtils_Pkg(
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::handoverInprogress */ kcg_bool handoverInprogress,
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::sessionManagementAbility */ abilityToHandleCommunicationSessions_Handover_Pkg sessionManagementAbility,
  outC_changeoverSwitch_Handover_Pkg_handoverUtils_Pkg *outC)
{
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::SM1 */
  static _22_SSM_TR_SM1 _4_SM1_fired;
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::SM1 */
  static kcg_bool _3_SM1_reset_nxt;
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::SM1 */
  static _20_SSM_ST_SM1 _2_SM1_state_nxt;
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::handingOverMobile_is_mobile_1 */
  static kcg_bool _1_handingOverMobile_is_mobile_1;
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::SM1::mobile_1::_L1 */
  static kcg_bool _L1_SM1_mobile_1;
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::SM1 */
  static _22_SSM_TR_SM1 SM1_fired;
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::SM1 */
  static kcg_bool SM1_reset_nxt;
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::SM1 */
  static _20_SSM_ST_SM1 SM1_state_nxt;
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::handingOverMobile_is_mobile_1 */
  static kcg_bool handingOverMobile_is_mobile_1;
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::SM1::mobile_2::_L1 */
  static kcg_bool _L1_SM1_mobile_2;
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::SM1 */
  static _22_SSM_TR_SM1 _7_SM1_fired_strong;
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::SM1 */
  static kcg_bool _6_SM1_reset_act;
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::SM1 */
  static _20_SSM_ST_SM1 _5_SM1_state_act;
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::SM1::mobile_1 */
  static kcg_bool br_1_guard_SM1_mobile_1;
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::SM1 */
  static _22_SSM_TR_SM1 SM1_fired_strong;
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::SM1 */
  static kcg_bool SM1_reset_act;
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::SM1 */
  static _20_SSM_ST_SM1 SM1_state_act;
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::SM1::mobile_2 */
  static kcg_bool br_1_guard_SM1_mobile_2;
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::SM1 */
  static _20_SSM_ST_SM1 SM1_state_sel;
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::SM1 */
  static _20_SSM_ST_SM1 _10_SM1_state_act;
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::SM1 */
  static kcg_bool SM1_reset_sel;
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::SM1 */
  static kcg_bool SM1_reset_prv;
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::SM1 */
  static _22_SSM_TR_SM1 _9_SM1_fired_strong;
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::SM1 */
  static _22_SSM_TR_SM1 _8_SM1_fired;
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::toogle */
  static kcg_bool toogle;
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::_L1 */
  static kcg_bool _L1;
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::_L2 */
  static kcg_bool _L2;
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::_L4 */
  static abilityToHandleCommunicationSessions_Handover_Pkg _L4;
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::_L5 */
  static kcg_bool _L5;
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::_L6 */
  static abilityToHandleCommunicationSessions_Handover_Pkg _L6;
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::_L7 */
  static kcg_bool _L7;
  
  /* init_SM1 */ if (outC->init) {
    SM1_state_sel = SSM_st_mobile_1_SM1;
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
  _L6 = sessionManagementAbility;
  _L4 = isAbleToManageTwoSessions_Handover_Pkg;
  _L7 = _L6 == _L4;
  _L1 = handoverInprogress;
  /* 1 */ FallingEdge_digital(_L1, &outC->Context_1);
  _L2 = outC->Context_1.FE_Output;
  _L5 = _L7 & _L2;
  toogle = _L5;
  /* sel_SM1 */ switch (SM1_state_sel) {
    case SSM_st_mobile_1_SM1 :
      br_1_guard_SM1_mobile_1 = toogle;
      if (br_1_guard_SM1_mobile_1) {
        _5_SM1_state_act = SSM_st_mobile_2_SM1;
      }
      else {
        _5_SM1_state_act = SSM_st_mobile_1_SM1;
      }
      _10_SM1_state_act = _5_SM1_state_act;
      _6_SM1_reset_act = br_1_guard_SM1_mobile_1;
      outC->SM1_reset_act = _6_SM1_reset_act;
      if (br_1_guard_SM1_mobile_1) {
        _7_SM1_fired_strong = SSM_TR_mobile_1_1_SM1;
      }
      else {
        _7_SM1_fired_strong = _21_SSM_TR_no_trans_SM1;
      }
      _9_SM1_fired_strong = _7_SM1_fired_strong;
      break;
    case SSM_st_mobile_2_SM1 :
      br_1_guard_SM1_mobile_2 = toogle;
      if (br_1_guard_SM1_mobile_2) {
        SM1_state_act = SSM_st_mobile_1_SM1;
      }
      else {
        SM1_state_act = SSM_st_mobile_2_SM1;
      }
      _10_SM1_state_act = SM1_state_act;
      SM1_reset_act = br_1_guard_SM1_mobile_2;
      outC->SM1_reset_act = SM1_reset_act;
      if (br_1_guard_SM1_mobile_2) {
        SM1_fired_strong = SSM_TR_mobile_2_1_SM1;
      }
      else {
        SM1_fired_strong = _21_SSM_TR_no_trans_SM1;
      }
      _9_SM1_fired_strong = SM1_fired_strong;
      break;
    
  }
  /* act_SM1 */ switch (_10_SM1_state_act) {
    case SSM_st_mobile_1_SM1 :
      _L1_SM1_mobile_1 = kcg_true;
      _1_handingOverMobile_is_mobile_1 = _L1_SM1_mobile_1;
      outC->handingOverMobile_is_mobile_1 = _1_handingOverMobile_is_mobile_1;
      _2_SM1_state_nxt = SSM_st_mobile_1_SM1;
      outC->SM1_state_nxt = _2_SM1_state_nxt;
      _3_SM1_reset_nxt = kcg_false;
      outC->SM1_reset_nxt = _3_SM1_reset_nxt;
      _4_SM1_fired = _9_SM1_fired_strong;
      _8_SM1_fired = _4_SM1_fired;
      break;
    case SSM_st_mobile_2_SM1 :
      _L1_SM1_mobile_2 = kcg_false;
      handingOverMobile_is_mobile_1 = _L1_SM1_mobile_2;
      outC->handingOverMobile_is_mobile_1 = handingOverMobile_is_mobile_1;
      SM1_state_nxt = SSM_st_mobile_2_SM1;
      outC->SM1_state_nxt = SM1_state_nxt;
      SM1_reset_nxt = kcg_false;
      outC->SM1_reset_nxt = SM1_reset_nxt;
      SM1_fired = _9_SM1_fired_strong;
      _8_SM1_fired = SM1_fired;
      break;
    
  }
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** changeoverSwitch_Handover_Pkg_handoverUtils_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

