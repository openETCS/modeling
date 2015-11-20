/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_SH_PriorityManagement.h"

/* PriorityManagement::From_SH */
T_Mode_Level_And_Mode_Types_Pkg From_SH_PriorityManagement(
  /* PriorityManagement::From_SH::Condition1 */ kcg_bool Condition1,
  /* PriorityManagement::From_SH::Condtition13 */ kcg_bool Condtition13,
  /* PriorityManagement::From_SH::Condition19 */ kcg_bool Condition19,
  /* PriorityManagement::From_SH::Condition26 */ kcg_bool Condition26,
  /* PriorityManagement::From_SH::Condition27 */ kcg_bool Condition27,
  /* PriorityManagement::From_SH::Condition29 */ kcg_bool Condition29,
  /* PriorityManagement::From_SH::Condition30 */ kcg_bool Condition30,
  /* PriorityManagement::From_SH::Condition46 */ kcg_bool Condition46,
  /* PriorityManagement::From_SH::ConditionSH2TR */ kcg_bool ConditionSH2TR,
  /* PriorityManagement::From_SH::previousMode_Loc */ T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc)
{
  /* PriorityManagement::From_SH::FromSH_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _1_FromSH_To_NewMode;
  /* PriorityManagement::From_SH::IfBlock1::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L1_IfBlock1;
  /* PriorityManagement::From_SH::FromSH_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg FromSH_To_NewMode;
  /* PriorityManagement::From_SH::IfBlock1::else */
  static kcg_bool _18_else_clock_IfBlock1;
  /* PriorityManagement::From_SH::FromSH_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _5_FromSH_To_NewMode;
  /* PriorityManagement::From_SH::IfBlock1::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L120_IfBlock1;
  /* PriorityManagement::From_SH::FromSH_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _4_FromSH_To_NewMode;
  /* PriorityManagement::From_SH::IfBlock1::else::else::else */
  static kcg_bool _16_else_clock_IfBlock1;
  /* PriorityManagement::From_SH::FromSH_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _9_FromSH_To_NewMode;
  /* PriorityManagement::From_SH::IfBlock1::else::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L122_IfBlock1;
  /* PriorityManagement::From_SH::FromSH_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _8_FromSH_To_NewMode;
  /* PriorityManagement::From_SH::IfBlock1::else::else::else::else::else */
  static kcg_bool _14_else_clock_IfBlock1;
  /* PriorityManagement::From_SH::FromSH_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _13_FromSH_To_NewMode;
  /* PriorityManagement::From_SH::IfBlock1::else::else::else::else::else::else::then::_L2 */
  static T_Mode_Level_And_Mode_Types_Pkg _L2_IfBlock1;
  /* PriorityManagement::From_SH::FromSH_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _12_FromSH_To_NewMode;
  /* PriorityManagement::From_SH::IfBlock1::else::else::else::else::else::else::else::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L124_IfBlock1;
  /* PriorityManagement::From_SH::IfBlock1::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* PriorityManagement::From_SH::FromSH_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _10_FromSH_To_NewMode;
  /* PriorityManagement::From_SH::IfBlock1::else::else::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L123_IfBlock1;
  /* PriorityManagement::From_SH::FromSH_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _11_FromSH_To_NewMode;
  /* PriorityManagement::From_SH::IfBlock1::else::else::else::else */
  static kcg_bool _15_else_clock_IfBlock1;
  /* PriorityManagement::From_SH::FromSH_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _6_FromSH_To_NewMode;
  /* PriorityManagement::From_SH::IfBlock1::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L121_IfBlock1;
  /* PriorityManagement::From_SH::FromSH_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _7_FromSH_To_NewMode;
  /* PriorityManagement::From_SH::IfBlock1::else::else */
  static kcg_bool _17_else_clock_IfBlock1;
  /* PriorityManagement::From_SH::FromSH_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _2_FromSH_To_NewMode;
  /* PriorityManagement::From_SH::IfBlock1::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L119_IfBlock1;
  /* PriorityManagement::From_SH::FromSH_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _3_FromSH_To_NewMode;
  /* PriorityManagement::From_SH::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* PriorityManagement::From_SH::Condition2SB */
  static kcg_bool Condition2SB;
  /* PriorityManagement::From_SH::_L2 */
  static kcg_bool _L2;
  /* PriorityManagement::From_SH::_L3 */
  static kcg_bool _L3;
  /* PriorityManagement::From_SH::_L4 */
  static kcg_bool _L4;
  /* PriorityManagement::From_SH::_L5 */
  static kcg_bool _L5;
  /* PriorityManagement::From_SH::FromSH_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _25_FromSH_To_NewMode;
  
  IfBlock1_clock = Condition1;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else {
    _18_else_clock_IfBlock1 = Condition29;
    /* ck_anon_activ */ if (_18_else_clock_IfBlock1) {
    }
    else {
      _17_else_clock_IfBlock1 = Condtition13;
      /* ck_anon_activ */ if (_17_else_clock_IfBlock1) {
      }
      else {
        _16_else_clock_IfBlock1 = ConditionSH2TR;
      }
    }
  }
  _L2 = Condition19;
  _L3 = Condition27;
  _L4 = Condition30;
  _L5 = _L2 | _L3 | _L4;
  Condition2SB = _L5;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L1_IfBlock1 = IS_Level_And_Mode_Types_Pkg;
    _1_FromSH_To_NewMode = _L1_IfBlock1;
    _25_FromSH_To_NewMode = _1_FromSH_To_NewMode;
  }
  else {
    /* ck_anon_activ */ if (_18_else_clock_IfBlock1) {
      _L119_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
      _3_FromSH_To_NewMode = _L119_IfBlock1;
      FromSH_To_NewMode = _3_FromSH_To_NewMode;
    }
    else {
      /* ck_anon_activ */ if (_17_else_clock_IfBlock1) {
        _L120_IfBlock1 = SF_Level_And_Mode_Types_Pkg;
        _5_FromSH_To_NewMode = _L120_IfBlock1;
        _2_FromSH_To_NewMode = _5_FromSH_To_NewMode;
      }
      else {
        /* ck_anon_activ */ if (_16_else_clock_IfBlock1) {
          _L121_IfBlock1 = TR_Level_And_Mode_Types_Pkg;
          _7_FromSH_To_NewMode = _L121_IfBlock1;
          _4_FromSH_To_NewMode = _7_FromSH_To_NewMode;
        }
        else {
          _15_else_clock_IfBlock1 = Condition2SB;
          /* ck_anon_activ */ if (_15_else_clock_IfBlock1) {
            _L122_IfBlock1 = SB_Level_And_Mode_Types_Pkg;
            _9_FromSH_To_NewMode = _L122_IfBlock1;
            _6_FromSH_To_NewMode = _9_FromSH_To_NewMode;
          }
          else {
            _14_else_clock_IfBlock1 = Condition46;
            /* ck_anon_activ */ if (_14_else_clock_IfBlock1) {
              _L123_IfBlock1 = NL_Level_And_Mode_Types_Pkg;
              _11_FromSH_To_NewMode = _L123_IfBlock1;
              _8_FromSH_To_NewMode = _11_FromSH_To_NewMode;
            }
            else {
              else_clock_IfBlock1 = Condition26;
              /* ck_anon_activ */ if (else_clock_IfBlock1) {
                _L2_IfBlock1 = PS_Level_And_Mode_Types_Pkg;
                _13_FromSH_To_NewMode = _L2_IfBlock1;
                _10_FromSH_To_NewMode = _13_FromSH_To_NewMode;
              }
              else {
                _L124_IfBlock1 = previousMode_Loc;
                _12_FromSH_To_NewMode = _L124_IfBlock1;
                _10_FromSH_To_NewMode = _12_FromSH_To_NewMode;
              }
              _8_FromSH_To_NewMode = _10_FromSH_To_NewMode;
            }
            _6_FromSH_To_NewMode = _8_FromSH_To_NewMode;
          }
          _4_FromSH_To_NewMode = _6_FromSH_To_NewMode;
        }
        _2_FromSH_To_NewMode = _4_FromSH_To_NewMode;
      }
      FromSH_To_NewMode = _2_FromSH_To_NewMode;
    }
    _25_FromSH_To_NewMode = FromSH_To_NewMode;
  }
  return _25_FromSH_To_NewMode;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** From_SH_PriorityManagement.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

