/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_UN_PriorityManagement.h"

/* PriorityManagement::From_UN */
T_Mode_Level_And_Mode_Types_Pkg From_UN_PriorityManagement(
  /* PriorityManagement::From_UN::Condition1 */ kcg_bool Condition1,
  /* PriorityManagement::From_UN::Condition5 */ kcg_bool Condition5,
  /* PriorityManagement::From_UN::Condition13 */ kcg_bool Condition13,
  /* PriorityManagement::From_UN::Condition25 */ kcg_bool Condition25,
  /* PriorityManagement::From_UN::Condition28 */ kcg_bool Condition28,
  /* PriorityManagement::From_UN::Condition29 */ kcg_bool Condition29,
  /* PriorityManagement::From_UN::Condition34 */ kcg_bool Condition34,
  /* PriorityManagement::From_UN::Condition44 */ kcg_bool Condition44,
  /* PriorityManagement::From_UN::Condition45 */ kcg_bool Condition45,
  /* PriorityManagement::From_UN::Condition56 */ kcg_bool Condition56,
  /* PriorityManagement::From_UN::Condition61 */ kcg_bool Condition61,
  /* PriorityManagement::From_UN::Condition71 */ kcg_bool Condition71,
  /* PriorityManagement::From_UN::ConditionUN2TR */ kcg_bool ConditionUN2TR,
  /* PriorityManagement::From_UN::previousMode_Loc */ T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc)
{
  /* PriorityManagement::From_UN::FromUN_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _1_FromUN_To_NewMode;
  /* PriorityManagement::From_UN::IfBlock1::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L1_IfBlock1;
  /* PriorityManagement::From_UN::FromUN_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg FromUN_To_NewMode;
  /* PriorityManagement::From_UN::IfBlock1::else */
  static kcg_bool _30_else_clock_IfBlock1;
  /* PriorityManagement::From_UN::FromUN_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _5_FromUN_To_NewMode;
  /* PriorityManagement::From_UN::IfBlock1::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L132_IfBlock1;
  /* PriorityManagement::From_UN::FromUN_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _4_FromUN_To_NewMode;
  /* PriorityManagement::From_UN::IfBlock1::else::else::else */
  static kcg_bool _28_else_clock_IfBlock1;
  /* PriorityManagement::From_UN::FromUN_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _9_FromUN_To_NewMode;
  /* PriorityManagement::From_UN::IfBlock1::else::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L134_IfBlock1;
  /* PriorityManagement::From_UN::FromUN_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _8_FromUN_To_NewMode;
  /* PriorityManagement::From_UN::IfBlock1::else::else::else::else::else */
  static kcg_bool _26_else_clock_IfBlock1;
  /* PriorityManagement::From_UN::FromUN_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _13_FromUN_To_NewMode;
  /* PriorityManagement::From_UN::IfBlock1::else::else::else::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L136_IfBlock1;
  /* PriorityManagement::From_UN::FromUN_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _12_FromUN_To_NewMode;
  /* PriorityManagement::From_UN::IfBlock1::else::else::else::else::else::else::else */
  static kcg_bool _24_else_clock_IfBlock1;
  /* PriorityManagement::From_UN::FromUN_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _17_FromUN_To_NewMode;
  /* PriorityManagement::From_UN::IfBlock1::else::else::else::else::else::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L137_IfBlock1;
  /* PriorityManagement::From_UN::FromUN_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _16_FromUN_To_NewMode;
  /* PriorityManagement::From_UN::IfBlock1::else::else::else::else::else::else::else::else::else */
  static kcg_bool _22_else_clock_IfBlock1;
  /* PriorityManagement::From_UN::FromUN_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _21_FromUN_To_NewMode;
  /* PriorityManagement::From_UN::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L139_IfBlock1;
  /* PriorityManagement::From_UN::FromUN_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _20_FromUN_To_NewMode;
  /* PriorityManagement::From_UN::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L140_IfBlock1;
  /* PriorityManagement::From_UN::IfBlock1::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* PriorityManagement::From_UN::FromUN_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _18_FromUN_To_NewMode;
  /* PriorityManagement::From_UN::IfBlock1::else::else::else::else::else::else::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L138_IfBlock1;
  /* PriorityManagement::From_UN::FromUN_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _19_FromUN_To_NewMode;
  /* PriorityManagement::From_UN::IfBlock1::else::else::else::else::else::else::else::else */
  static kcg_bool _23_else_clock_IfBlock1;
  /* PriorityManagement::From_UN::FromUN_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _14_FromUN_To_NewMode;
  /* PriorityManagement::From_UN::IfBlock1::else::else::else::else::else::else::else::then::_L2 */
  static T_Mode_Level_And_Mode_Types_Pkg _L2_IfBlock1;
  /* PriorityManagement::From_UN::FromUN_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _15_FromUN_To_NewMode;
  /* PriorityManagement::From_UN::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _25_else_clock_IfBlock1;
  /* PriorityManagement::From_UN::FromUN_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _10_FromUN_To_NewMode;
  /* PriorityManagement::From_UN::IfBlock1::else::else::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L135_IfBlock1;
  /* PriorityManagement::From_UN::FromUN_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _11_FromUN_To_NewMode;
  /* PriorityManagement::From_UN::IfBlock1::else::else::else::else */
  static kcg_bool _27_else_clock_IfBlock1;
  /* PriorityManagement::From_UN::FromUN_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _6_FromUN_To_NewMode;
  /* PriorityManagement::From_UN::IfBlock1::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L133_IfBlock1;
  /* PriorityManagement::From_UN::FromUN_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _7_FromUN_To_NewMode;
  /* PriorityManagement::From_UN::IfBlock1::else::else */
  static kcg_bool _29_else_clock_IfBlock1;
  /* PriorityManagement::From_UN::FromUN_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _2_FromUN_To_NewMode;
  /* PriorityManagement::From_UN::IfBlock1::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L131_IfBlock1;
  /* PriorityManagement::From_UN::FromUN_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _3_FromUN_To_NewMode;
  /* PriorityManagement::From_UN::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* PriorityManagement::From_UN::Condition2SH */
  static kcg_bool Condition2SH;
  /* PriorityManagement::From_UN::Condition2SR */
  static kcg_bool Condition2SR;
  /* PriorityManagement::From_UN::_L5 */
  static kcg_bool _L5;
  /* PriorityManagement::From_UN::_L3 */
  static kcg_bool _L3;
  /* PriorityManagement::From_UN::_L2 */
  static kcg_bool _L2;
  /* PriorityManagement::From_UN::_L1 */
  static kcg_bool _L1;
  /* PriorityManagement::From_UN::_L7 */
  static kcg_bool _L7;
  /* PriorityManagement::From_UN::_L8 */
  static kcg_bool _L8;
  /* PriorityManagement::From_UN::FromUN_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _41_FromUN_To_NewMode;
  
  _L1 = Condition61;
  _L2 = Condition45;
  _L3 = Condition5;
  _L7 = _L3 | _L1;
  Condition2SH = _L7;
  _L5 = Condition44;
  _L8 = _L5 | _L2;
  Condition2SR = _L8;
  IfBlock1_clock = Condition1;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L1_IfBlock1 = IS_Level_And_Mode_Types_Pkg;
    _1_FromUN_To_NewMode = _L1_IfBlock1;
    _41_FromUN_To_NewMode = _1_FromUN_To_NewMode;
  }
  else {
    _30_else_clock_IfBlock1 = Condition29;
    /* ck_anon_activ */ if (_30_else_clock_IfBlock1) {
      _L131_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
      _3_FromUN_To_NewMode = _L131_IfBlock1;
      FromUN_To_NewMode = _3_FromUN_To_NewMode;
    }
    else {
      _29_else_clock_IfBlock1 = Condition13;
      /* ck_anon_activ */ if (_29_else_clock_IfBlock1) {
        _L132_IfBlock1 = SF_Level_And_Mode_Types_Pkg;
        _5_FromUN_To_NewMode = _L132_IfBlock1;
        _2_FromUN_To_NewMode = _5_FromUN_To_NewMode;
      }
      else {
        _28_else_clock_IfBlock1 = Condition2SR;
        /* ck_anon_activ */ if (_28_else_clock_IfBlock1) {
          _L133_IfBlock1 = SR_Level_And_Mode_Types_Pkg;
          _7_FromUN_To_NewMode = _L133_IfBlock1;
          _4_FromUN_To_NewMode = _7_FromUN_To_NewMode;
        }
        else {
          _27_else_clock_IfBlock1 = ConditionUN2TR;
          /* ck_anon_activ */ if (_27_else_clock_IfBlock1) {
            _L134_IfBlock1 = TR_Level_And_Mode_Types_Pkg;
            _9_FromUN_To_NewMode = _L134_IfBlock1;
            _6_FromUN_To_NewMode = _9_FromUN_To_NewMode;
          }
          else {
            _26_else_clock_IfBlock1 = Condition28;
            /* ck_anon_activ */ if (_26_else_clock_IfBlock1) {
              _L135_IfBlock1 = SB_Level_And_Mode_Types_Pkg;
              _11_FromUN_To_NewMode = _L135_IfBlock1;
              _8_FromUN_To_NewMode = _11_FromUN_To_NewMode;
            }
            else {
              _25_else_clock_IfBlock1 = Condition25;
              /* ck_anon_activ */ if (_25_else_clock_IfBlock1) {
                _L136_IfBlock1 = FS_Level_And_Mode_Types_Pkg;
                _13_FromUN_To_NewMode = _L136_IfBlock1;
                _10_FromUN_To_NewMode = _13_FromUN_To_NewMode;
              }
              else {
                _24_else_clock_IfBlock1 = Condition2SH;
                /* ck_anon_activ */ if (_24_else_clock_IfBlock1) {
                  _L2_IfBlock1 = SH_Level_And_Mode_Types_Pkg;
                  _15_FromUN_To_NewMode = _L2_IfBlock1;
                  _12_FromUN_To_NewMode = _15_FromUN_To_NewMode;
                }
                else {
                  _23_else_clock_IfBlock1 = Condition56;
                  /* ck_anon_activ */ if (_23_else_clock_IfBlock1) {
                    _L137_IfBlock1 = SN_Level_And_Mode_Types_Pkg;
                    _17_FromUN_To_NewMode = _L137_IfBlock1;
                    _14_FromUN_To_NewMode = _17_FromUN_To_NewMode;
                  }
                  else {
                    _22_else_clock_IfBlock1 = Condition71;
                    /* ck_anon_activ */ if (_22_else_clock_IfBlock1) {
                      _L138_IfBlock1 = LS_Level_And_Mode_Types_Pkg;
                      _19_FromUN_To_NewMode = _L138_IfBlock1;
                      _16_FromUN_To_NewMode = _19_FromUN_To_NewMode;
                    }
                    else {
                      else_clock_IfBlock1 = Condition34;
                      /* ck_anon_activ */ if (else_clock_IfBlock1) {
                        _L139_IfBlock1 = OS_Level_And_Mode_Types_Pkg;
                        _21_FromUN_To_NewMode = _L139_IfBlock1;
                        _18_FromUN_To_NewMode = _21_FromUN_To_NewMode;
                      }
                      else {
                        _L140_IfBlock1 = previousMode_Loc;
                        _20_FromUN_To_NewMode = _L140_IfBlock1;
                        _18_FromUN_To_NewMode = _20_FromUN_To_NewMode;
                      }
                      _16_FromUN_To_NewMode = _18_FromUN_To_NewMode;
                    }
                    _14_FromUN_To_NewMode = _16_FromUN_To_NewMode;
                  }
                  _12_FromUN_To_NewMode = _14_FromUN_To_NewMode;
                }
                _10_FromUN_To_NewMode = _12_FromUN_To_NewMode;
              }
              _8_FromUN_To_NewMode = _10_FromUN_To_NewMode;
            }
            _6_FromUN_To_NewMode = _8_FromUN_To_NewMode;
          }
          _4_FromUN_To_NewMode = _6_FromUN_To_NewMode;
        }
        _2_FromUN_To_NewMode = _4_FromUN_To_NewMode;
      }
      FromUN_To_NewMode = _2_FromUN_To_NewMode;
    }
    _41_FromUN_To_NewMode = FromUN_To_NewMode;
  }
  return _41_FromUN_To_NewMode;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** From_UN_PriorityManagement.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

