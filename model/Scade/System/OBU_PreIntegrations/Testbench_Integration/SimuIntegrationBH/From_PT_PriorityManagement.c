/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_PT_PriorityManagement.h"

/* PriorityManagement::From_PT */
T_Mode_Level_And_Mode_Types_Pkg From_PT_PriorityManagement(
  /* PriorityManagement::From_PT::Condition1 */ kcg_bool Condition1,
  /* PriorityManagement::From_PT::Condition5 */ kcg_bool Condition5,
  /* PriorityManagement::From_PT::Condition6 */ kcg_bool Condition6,
  /* PriorityManagement::From_PT::Condition8 */ kcg_bool Condition8,
  /* PriorityManagement::From_PT::Condition13 */ kcg_bool Condition13,
  /* PriorityManagement::From_PT::Condition15 */ kcg_bool Condition15,
  /* PriorityManagement::From_PT::Condition28 */ kcg_bool Condition28,
  /* PriorityManagement::From_PT::Condition29 */ kcg_bool Condition29,
  /* PriorityManagement::From_PT::Condition31 */ kcg_bool Condition31,
  /* PriorityManagement::From_PT::Condition37 */ kcg_bool Condition37,
  /* PriorityManagement::From_PT::Condition50 */ kcg_bool Condition50,
  /* PriorityManagement::From_PT::Condition70 */ kcg_bool Condition70,
  /* PriorityManagement::From_PT::previousMode_Loc */ T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc)
{
  /* PriorityManagement::From_PT::FromPT_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _1_FromPT_To_NewMode;
  /* PriorityManagement::From_PT::IfBlock1::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L1_IfBlock1;
  /* PriorityManagement::From_PT::FromPT_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg FromPT_To_NewMode;
  /* PriorityManagement::From_PT::IfBlock1::else */
  static kcg_bool _24_else_clock_IfBlock1;
  /* PriorityManagement::From_PT::FromPT_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _5_FromPT_To_NewMode;
  /* PriorityManagement::From_PT::IfBlock1::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L126_IfBlock1;
  /* PriorityManagement::From_PT::FromPT_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _4_FromPT_To_NewMode;
  /* PriorityManagement::From_PT::IfBlock1::else::else::else */
  static kcg_bool _22_else_clock_IfBlock1;
  /* PriorityManagement::From_PT::FromPT_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _9_FromPT_To_NewMode;
  /* PriorityManagement::From_PT::IfBlock1::else::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L128_IfBlock1;
  /* PriorityManagement::From_PT::FromPT_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _8_FromPT_To_NewMode;
  /* PriorityManagement::From_PT::IfBlock1::else::else::else::else::else */
  static kcg_bool _20_else_clock_IfBlock1;
  /* PriorityManagement::From_PT::FromPT_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _13_FromPT_To_NewMode;
  /* PriorityManagement::From_PT::IfBlock1::else::else::else::else::else::else::then::_L2 */
  static T_Mode_Level_And_Mode_Types_Pkg _L2_IfBlock1;
  /* PriorityManagement::From_PT::FromPT_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _12_FromPT_To_NewMode;
  /* PriorityManagement::From_PT::IfBlock1::else::else::else::else::else::else::else */
  static kcg_bool _18_else_clock_IfBlock1;
  /* PriorityManagement::From_PT::FromPT_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _17_FromPT_To_NewMode;
  /* PriorityManagement::From_PT::IfBlock1::else::else::else::else::else::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L131_IfBlock1;
  /* PriorityManagement::From_PT::FromPT_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _16_FromPT_To_NewMode;
  /* PriorityManagement::From_PT::IfBlock1::else::else::else::else::else::else::else::else::else::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L132_IfBlock1;
  /* PriorityManagement::From_PT::IfBlock1::else::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* PriorityManagement::From_PT::FromPT_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _14_FromPT_To_NewMode;
  /* PriorityManagement::From_PT::IfBlock1::else::else::else::else::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L130_IfBlock1;
  /* PriorityManagement::From_PT::FromPT_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _15_FromPT_To_NewMode;
  /* PriorityManagement::From_PT::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _19_else_clock_IfBlock1;
  /* PriorityManagement::From_PT::FromPT_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _10_FromPT_To_NewMode;
  /* PriorityManagement::From_PT::IfBlock1::else::else::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L129_IfBlock1;
  /* PriorityManagement::From_PT::FromPT_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _11_FromPT_To_NewMode;
  /* PriorityManagement::From_PT::IfBlock1::else::else::else::else */
  static kcg_bool _21_else_clock_IfBlock1;
  /* PriorityManagement::From_PT::FromPT_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _6_FromPT_To_NewMode;
  /* PriorityManagement::From_PT::IfBlock1::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L127_IfBlock1;
  /* PriorityManagement::From_PT::FromPT_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _7_FromPT_To_NewMode;
  /* PriorityManagement::From_PT::IfBlock1::else::else */
  static kcg_bool _23_else_clock_IfBlock1;
  /* PriorityManagement::From_PT::FromPT_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _2_FromPT_To_NewMode;
  /* PriorityManagement::From_PT::IfBlock1::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L125_IfBlock1;
  /* PriorityManagement::From_PT::FromPT_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _3_FromPT_To_NewMode;
  /* PriorityManagement::From_PT::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* PriorityManagement::From_PT::Condition2SR */
  static kcg_bool Condition2SR;
  /* PriorityManagement::From_PT::Condition2SH */
  static kcg_bool Condition2SH;
  /* PriorityManagement::From_PT::_L7 */
  static kcg_bool _L7;
  /* PriorityManagement::From_PT::_L5 */
  static kcg_bool _L5;
  /* PriorityManagement::From_PT::_L3 */
  static kcg_bool _L3;
  /* PriorityManagement::From_PT::_L2 */
  static kcg_bool _L2;
  /* PriorityManagement::From_PT::_L1 */
  static kcg_bool _L1;
  /* PriorityManagement::From_PT::_L8 */
  static kcg_bool _L8;
  /* PriorityManagement::From_PT::_L9 */
  static kcg_bool _L9;
  /* PriorityManagement::From_PT::FromPT_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _33_FromPT_To_NewMode;
  
  IfBlock1_clock = Condition1;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else {
    _24_else_clock_IfBlock1 = Condition29;
    /* ck_anon_activ */ if (_24_else_clock_IfBlock1) {
    }
    else {
      _23_else_clock_IfBlock1 = Condition13;
      /* ck_anon_activ */ if (_23_else_clock_IfBlock1) {
      }
      else {
        _22_else_clock_IfBlock1 = Condition28;
      }
    }
  }
  _L5 = Condition8;
  _L1 = Condition37;
  _L9 = _L5 | _L1;
  Condition2SR = _L9;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else /* ck_anon_activ */ if (_24_else_clock_IfBlock1) {
  }
  else /* ck_anon_activ */ if (_23_else_clock_IfBlock1) {
  }
  else /* ck_anon_activ */ if (_22_else_clock_IfBlock1) {
  }
  else {
    _21_else_clock_IfBlock1 = Condition2SR;
    /* ck_anon_activ */ if (_21_else_clock_IfBlock1) {
    }
    else {
      _20_else_clock_IfBlock1 = Condition15;
    }
  }
  _L7 = Condition5;
  _L3 = Condition6;
  _L2 = Condition50;
  _L8 = _L7 | _L3 | _L2;
  Condition2SH = _L8;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L1_IfBlock1 = IS_Level_And_Mode_Types_Pkg;
    _1_FromPT_To_NewMode = _L1_IfBlock1;
    _33_FromPT_To_NewMode = _1_FromPT_To_NewMode;
  }
  else {
    /* ck_anon_activ */ if (_24_else_clock_IfBlock1) {
      _L125_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
      _3_FromPT_To_NewMode = _L125_IfBlock1;
      FromPT_To_NewMode = _3_FromPT_To_NewMode;
    }
    else {
      /* ck_anon_activ */ if (_23_else_clock_IfBlock1) {
        _L126_IfBlock1 = SF_Level_And_Mode_Types_Pkg;
        _5_FromPT_To_NewMode = _L126_IfBlock1;
        _2_FromPT_To_NewMode = _5_FromPT_To_NewMode;
      }
      else {
        /* ck_anon_activ */ if (_22_else_clock_IfBlock1) {
          _L127_IfBlock1 = SB_Level_And_Mode_Types_Pkg;
          _7_FromPT_To_NewMode = _L127_IfBlock1;
          _4_FromPT_To_NewMode = _7_FromPT_To_NewMode;
        }
        else {
          /* ck_anon_activ */ if (_21_else_clock_IfBlock1) {
            _L128_IfBlock1 = SR_Level_And_Mode_Types_Pkg;
            _9_FromPT_To_NewMode = _L128_IfBlock1;
            _6_FromPT_To_NewMode = _9_FromPT_To_NewMode;
          }
          else {
            /* ck_anon_activ */ if (_20_else_clock_IfBlock1) {
              _L129_IfBlock1 = OS_Level_And_Mode_Types_Pkg;
              _11_FromPT_To_NewMode = _L129_IfBlock1;
              _8_FromPT_To_NewMode = _11_FromPT_To_NewMode;
            }
            else {
              _19_else_clock_IfBlock1 = Condition2SH;
              /* ck_anon_activ */ if (_19_else_clock_IfBlock1) {
                _L2_IfBlock1 = SH_Level_And_Mode_Types_Pkg;
                _13_FromPT_To_NewMode = _L2_IfBlock1;
                _10_FromPT_To_NewMode = _13_FromPT_To_NewMode;
              }
              else {
                _18_else_clock_IfBlock1 = Condition31;
                /* ck_anon_activ */ if (_18_else_clock_IfBlock1) {
                  _L130_IfBlock1 = FS_Level_And_Mode_Types_Pkg;
                  _15_FromPT_To_NewMode = _L130_IfBlock1;
                  _12_FromPT_To_NewMode = _15_FromPT_To_NewMode;
                }
                else {
                  else_clock_IfBlock1 = Condition70;
                  /* ck_anon_activ */ if (else_clock_IfBlock1) {
                    _L131_IfBlock1 = LS_Level_And_Mode_Types_Pkg;
                    _17_FromPT_To_NewMode = _L131_IfBlock1;
                    _14_FromPT_To_NewMode = _17_FromPT_To_NewMode;
                  }
                  else {
                    _L132_IfBlock1 = previousMode_Loc;
                    _16_FromPT_To_NewMode = _L132_IfBlock1;
                    _14_FromPT_To_NewMode = _16_FromPT_To_NewMode;
                  }
                  _12_FromPT_To_NewMode = _14_FromPT_To_NewMode;
                }
                _10_FromPT_To_NewMode = _12_FromPT_To_NewMode;
              }
              _8_FromPT_To_NewMode = _10_FromPT_To_NewMode;
            }
            _6_FromPT_To_NewMode = _8_FromPT_To_NewMode;
          }
          _4_FromPT_To_NewMode = _6_FromPT_To_NewMode;
        }
        _2_FromPT_To_NewMode = _4_FromPT_To_NewMode;
      }
      FromPT_To_NewMode = _2_FromPT_To_NewMode;
    }
    _33_FromPT_To_NewMode = FromPT_To_NewMode;
  }
  return _33_FromPT_To_NewMode;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** From_PT_PriorityManagement.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

