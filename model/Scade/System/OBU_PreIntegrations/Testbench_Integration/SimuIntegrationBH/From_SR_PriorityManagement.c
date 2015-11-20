/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_SR_PriorityManagement.h"

/* PriorityManagement::From_SR */
T_Mode_Level_And_Mode_Types_Pkg From_SR_PriorityManagement(
  /* PriorityManagement::From_SR::Condition1 */ kcg_bool Condition1,
  /* PriorityManagement::From_SR::Condition5 */ kcg_bool Condition5,
  /* PriorityManagement::From_SR::Condition6 */ kcg_bool Condition6,
  /* PriorityManagement::From_SR::Condition13 */ kcg_bool Condition13,
  /* PriorityManagement::From_SR::Condition21 */ kcg_bool Condition21,
  /* PriorityManagement::From_SR::Condition28 */ kcg_bool Condition28,
  /* PriorityManagement::From_SR::Condition29 */ kcg_bool Condition29,
  /* PriorityManagement::From_SR::Condition31 */ kcg_bool Condition31,
  /* PriorityManagement::From_SR::Condition32 */ kcg_bool Condition32,
  /* PriorityManagement::From_SR::Condition40 */ kcg_bool Condition40,
  /* PriorityManagement::From_SR::Condition46 */ kcg_bool Condition46,
  /* PriorityManagement::From_SR::Condition51 */ kcg_bool Condition51,
  /* PriorityManagement::From_SR::Condition56 */ kcg_bool Condition56,
  /* PriorityManagement::From_SR::Condition59 */ kcg_bool Condition59,
  /* PriorityManagement::From_SR::Condition72 */ kcg_bool Condition72,
  /* PriorityManagement::From_SR::ConditionSR2TR */ kcg_bool ConditionSR2TR,
  /* PriorityManagement::From_SR::previousMode_Loc */ T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc)
{
  /* PriorityManagement::From_SR::FromSR_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _1_FromSR_To_NewMode;
  /* PriorityManagement::From_SR::IfBlock1::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L1_IfBlock1;
  /* PriorityManagement::From_SR::FromSR_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg FromSR_To_NewMode;
  /* PriorityManagement::From_SR::IfBlock1::else */
  static kcg_bool _36_else_clock_IfBlock1;
  /* PriorityManagement::From_SR::FromSR_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _5_FromSR_To_NewMode;
  /* PriorityManagement::From_SR::IfBlock1::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L138_IfBlock1;
  /* PriorityManagement::From_SR::FromSR_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _4_FromSR_To_NewMode;
  /* PriorityManagement::From_SR::IfBlock1::else::else::else */
  static kcg_bool _34_else_clock_IfBlock1;
  /* PriorityManagement::From_SR::FromSR_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _9_FromSR_To_NewMode;
  /* PriorityManagement::From_SR::IfBlock1::else::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L140_IfBlock1;
  /* PriorityManagement::From_SR::FromSR_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _8_FromSR_To_NewMode;
  /* PriorityManagement::From_SR::IfBlock1::else::else::else::else::else */
  static kcg_bool _32_else_clock_IfBlock1;
  /* PriorityManagement::From_SR::FromSR_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _13_FromSR_To_NewMode;
  /* PriorityManagement::From_SR::IfBlock1::else::else::else::else::else::else::then::_L2 */
  static T_Mode_Level_And_Mode_Types_Pkg _L2_IfBlock1;
  /* PriorityManagement::From_SR::FromSR_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _12_FromSR_To_NewMode;
  /* PriorityManagement::From_SR::IfBlock1::else::else::else::else::else::else::else */
  static kcg_bool _30_else_clock_IfBlock1;
  /* PriorityManagement::From_SR::FromSR_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _17_FromSR_To_NewMode;
  /* PriorityManagement::From_SR::IfBlock1::else::else::else::else::else::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L143_IfBlock1;
  /* PriorityManagement::From_SR::FromSR_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _16_FromSR_To_NewMode;
  /* PriorityManagement::From_SR::IfBlock1::else::else::else::else::else::else::else::else::else */
  static kcg_bool _28_else_clock_IfBlock1;
  /* PriorityManagement::From_SR::FromSR_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _21_FromSR_To_NewMode;
  /* PriorityManagement::From_SR::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L145_IfBlock1;
  /* PriorityManagement::From_SR::FromSR_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _20_FromSR_To_NewMode;
  /* PriorityManagement::From_SR::IfBlock1::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _26_else_clock_IfBlock1;
  /* PriorityManagement::From_SR::FromSR_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _25_FromSR_To_NewMode;
  /* PriorityManagement::From_SR::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L147_IfBlock1;
  /* PriorityManagement::From_SR::FromSR_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _24_FromSR_To_NewMode;
  /* PriorityManagement::From_SR::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L148_IfBlock1;
  /* PriorityManagement::From_SR::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* PriorityManagement::From_SR::FromSR_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _22_FromSR_To_NewMode;
  /* PriorityManagement::From_SR::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L146_IfBlock1;
  /* PriorityManagement::From_SR::FromSR_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _23_FromSR_To_NewMode;
  /* PriorityManagement::From_SR::IfBlock1::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _27_else_clock_IfBlock1;
  /* PriorityManagement::From_SR::FromSR_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _18_FromSR_To_NewMode;
  /* PriorityManagement::From_SR::IfBlock1::else::else::else::else::else::else::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L144_IfBlock1;
  /* PriorityManagement::From_SR::FromSR_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _19_FromSR_To_NewMode;
  /* PriorityManagement::From_SR::IfBlock1::else::else::else::else::else::else::else::else */
  static kcg_bool _29_else_clock_IfBlock1;
  /* PriorityManagement::From_SR::FromSR_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _14_FromSR_To_NewMode;
  /* PriorityManagement::From_SR::IfBlock1::else::else::else::else::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L142_IfBlock1;
  /* PriorityManagement::From_SR::FromSR_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _15_FromSR_To_NewMode;
  /* PriorityManagement::From_SR::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _31_else_clock_IfBlock1;
  /* PriorityManagement::From_SR::FromSR_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _10_FromSR_To_NewMode;
  /* PriorityManagement::From_SR::IfBlock1::else::else::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L141_IfBlock1;
  /* PriorityManagement::From_SR::FromSR_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _11_FromSR_To_NewMode;
  /* PriorityManagement::From_SR::IfBlock1::else::else::else::else */
  static kcg_bool _33_else_clock_IfBlock1;
  /* PriorityManagement::From_SR::FromSR_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _6_FromSR_To_NewMode;
  /* PriorityManagement::From_SR::IfBlock1::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L139_IfBlock1;
  /* PriorityManagement::From_SR::FromSR_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _7_FromSR_To_NewMode;
  /* PriorityManagement::From_SR::IfBlock1::else::else */
  static kcg_bool _35_else_clock_IfBlock1;
  /* PriorityManagement::From_SR::FromSR_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _2_FromSR_To_NewMode;
  /* PriorityManagement::From_SR::IfBlock1::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L137_IfBlock1;
  /* PriorityManagement::From_SR::FromSR_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _3_FromSR_To_NewMode;
  /* PriorityManagement::From_SR::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* PriorityManagement::From_SR::Condition2FS */
  static kcg_bool Condition2FS;
  /* PriorityManagement::From_SR::Condition2SH */
  static kcg_bool Condition2SH;
  /* PriorityManagement::From_SR::_L7 */
  static kcg_bool _L7;
  /* PriorityManagement::From_SR::_L5 */
  static kcg_bool _L5;
  /* PriorityManagement::From_SR::_L3 */
  static kcg_bool _L3;
  /* PriorityManagement::From_SR::_L2 */
  static kcg_bool _L2;
  /* PriorityManagement::From_SR::_L1 */
  static kcg_bool _L1;
  /* PriorityManagement::From_SR::_L12 */
  static kcg_bool _L12;
  /* PriorityManagement::From_SR::_L13 */
  static kcg_bool _L13;
  /* PriorityManagement::From_SR::FromSR_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _49_FromSR_To_NewMode;
  
  _L1 = Condition31;
  _L3 = Condition5;
  _L5 = Condition6;
  _L7 = Condition51;
  _L12 = _L3 | _L5 | _L7;
  Condition2SH = _L12;
  _L2 = Condition32;
  _L13 = _L1 | _L2;
  Condition2FS = _L13;
  IfBlock1_clock = Condition1;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L1_IfBlock1 = IS_Level_And_Mode_Types_Pkg;
    _1_FromSR_To_NewMode = _L1_IfBlock1;
    _49_FromSR_To_NewMode = _1_FromSR_To_NewMode;
  }
  else {
    _36_else_clock_IfBlock1 = Condition29;
    /* ck_anon_activ */ if (_36_else_clock_IfBlock1) {
      _L137_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
      _3_FromSR_To_NewMode = _L137_IfBlock1;
      FromSR_To_NewMode = _3_FromSR_To_NewMode;
    }
    else {
      _35_else_clock_IfBlock1 = Condition13;
      /* ck_anon_activ */ if (_35_else_clock_IfBlock1) {
        _L138_IfBlock1 = SF_Level_And_Mode_Types_Pkg;
        _5_FromSR_To_NewMode = _L138_IfBlock1;
        _2_FromSR_To_NewMode = _5_FromSR_To_NewMode;
      }
      else {
        _34_else_clock_IfBlock1 = ConditionSR2TR;
        /* ck_anon_activ */ if (_34_else_clock_IfBlock1) {
          _L139_IfBlock1 = TR_Level_And_Mode_Types_Pkg;
          _7_FromSR_To_NewMode = _L139_IfBlock1;
          _4_FromSR_To_NewMode = _7_FromSR_To_NewMode;
        }
        else {
          _33_else_clock_IfBlock1 = Condition28;
          /* ck_anon_activ */ if (_33_else_clock_IfBlock1) {
            _L140_IfBlock1 = SB_Level_And_Mode_Types_Pkg;
            _9_FromSR_To_NewMode = _L140_IfBlock1;
            _6_FromSR_To_NewMode = _9_FromSR_To_NewMode;
          }
          else {
            _32_else_clock_IfBlock1 = Condition46;
            /* ck_anon_activ */ if (_32_else_clock_IfBlock1) {
              _L141_IfBlock1 = NL_Level_And_Mode_Types_Pkg;
              _11_FromSR_To_NewMode = _L141_IfBlock1;
              _8_FromSR_To_NewMode = _11_FromSR_To_NewMode;
            }
            else {
              _31_else_clock_IfBlock1 = Condition2SH;
              /* ck_anon_activ */ if (_31_else_clock_IfBlock1) {
                _L2_IfBlock1 = SH_Level_And_Mode_Types_Pkg;
                _13_FromSR_To_NewMode = _L2_IfBlock1;
                _10_FromSR_To_NewMode = _13_FromSR_To_NewMode;
              }
              else {
                _30_else_clock_IfBlock1 = Condition56;
                /* ck_anon_activ */ if (_30_else_clock_IfBlock1) {
                  _L142_IfBlock1 = SN_Level_And_Mode_Types_Pkg;
                  _15_FromSR_To_NewMode = _L142_IfBlock1;
                  _12_FromSR_To_NewMode = _15_FromSR_To_NewMode;
                }
                else {
                  _29_else_clock_IfBlock1 = Condition72;
                  /* ck_anon_activ */ if (_29_else_clock_IfBlock1) {
                    _L143_IfBlock1 = LS_Level_And_Mode_Types_Pkg;
                    _17_FromSR_To_NewMode = _L143_IfBlock1;
                    _14_FromSR_To_NewMode = _17_FromSR_To_NewMode;
                  }
                  else {
                    _28_else_clock_IfBlock1 = Condition2FS;
                    /* ck_anon_activ */ if (_28_else_clock_IfBlock1) {
                      _L144_IfBlock1 = SR_Level_And_Mode_Types_Pkg;
                      _19_FromSR_To_NewMode = _L144_IfBlock1;
                      _16_FromSR_To_NewMode = _19_FromSR_To_NewMode;
                    }
                    else {
                      _27_else_clock_IfBlock1 = Condition40;
                      /* ck_anon_activ */ if (_27_else_clock_IfBlock1) {
                        _L145_IfBlock1 = OS_Level_And_Mode_Types_Pkg;
                        _21_FromSR_To_NewMode = _L145_IfBlock1;
                        _18_FromSR_To_NewMode = _21_FromSR_To_NewMode;
                      }
                      else {
                        _26_else_clock_IfBlock1 = Condition21;
                        /* ck_anon_activ */ if (_26_else_clock_IfBlock1) {
                          _L146_IfBlock1 = UN_Level_And_Mode_Types_Pkg;
                          _23_FromSR_To_NewMode = _L146_IfBlock1;
                          _20_FromSR_To_NewMode = _23_FromSR_To_NewMode;
                        }
                        else {
                          else_clock_IfBlock1 = Condition59;
                          /* ck_anon_activ */ if (else_clock_IfBlock1) {
                            _L147_IfBlock1 = RV_Level_And_Mode_Types_Pkg;
                            _25_FromSR_To_NewMode = _L147_IfBlock1;
                            _22_FromSR_To_NewMode = _25_FromSR_To_NewMode;
                          }
                          else {
                            _L148_IfBlock1 = previousMode_Loc;
                            _24_FromSR_To_NewMode = _L148_IfBlock1;
                            _22_FromSR_To_NewMode = _24_FromSR_To_NewMode;
                          }
                          _20_FromSR_To_NewMode = _22_FromSR_To_NewMode;
                        }
                        _18_FromSR_To_NewMode = _20_FromSR_To_NewMode;
                      }
                      _16_FromSR_To_NewMode = _18_FromSR_To_NewMode;
                    }
                    _14_FromSR_To_NewMode = _16_FromSR_To_NewMode;
                  }
                  _12_FromSR_To_NewMode = _14_FromSR_To_NewMode;
                }
                _10_FromSR_To_NewMode = _12_FromSR_To_NewMode;
              }
              _8_FromSR_To_NewMode = _10_FromSR_To_NewMode;
            }
            _6_FromSR_To_NewMode = _8_FromSR_To_NewMode;
          }
          _4_FromSR_To_NewMode = _6_FromSR_To_NewMode;
        }
        _2_FromSR_To_NewMode = _4_FromSR_To_NewMode;
      }
      FromSR_To_NewMode = _2_FromSR_To_NewMode;
    }
    _49_FromSR_To_NewMode = FromSR_To_NewMode;
  }
  return _49_FromSR_To_NewMode;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** From_SR_PriorityManagement.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

