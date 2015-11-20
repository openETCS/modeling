/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_SN_PriorityManagement.h"

/* PriorityManagement::From_SN */
T_Mode_Level_And_Mode_Types_Pkg From_SN_PriorityManagement(
  /* PriorityManagement::From_SN::Condition1 */ kcg_bool Condition1,
  /* PriorityManagement::From_SN::Condition5 */ kcg_bool Condition5,
  /* PriorityManagement::From_SN::Condition13 */ kcg_bool Condition13,
  /* PriorityManagement::From_SN::Condition21 */ kcg_bool Condition21,
  /* PriorityManagement::From_SN::Condition25 */ kcg_bool Condition25,
  /* PriorityManagement::From_SN::Condition28 */ kcg_bool Condition28,
  /* PriorityManagement::From_SN::Condition29 */ kcg_bool Condition29,
  /* PriorityManagement::From_SN::Condition34 */ kcg_bool Condition34,
  /* PriorityManagement::From_SN::Condition44 */ kcg_bool Condition44,
  /* PriorityManagement::From_SN::Condition45 */ kcg_bool Condition45,
  /* PriorityManagement::From_SN::Condition61 */ kcg_bool Condition61,
  /* PriorityManagement::From_SN::Condition71 */ kcg_bool Condition71,
  /* PriorityManagement::From_SN::ConditionSN2TR */ kcg_bool ConditionSN2TR,
  /* PriorityManagement::From_SN::previousMode_Loc */ T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc)
{
  /* PriorityManagement::From_SN::FromSN_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _1_FromSN_To_NewMode;
  /* PriorityManagement::From_SN::IfBlock1::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L1_IfBlock1;
  /* PriorityManagement::From_SN::FromSN_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg FromSN_To_NewMode;
  /* PriorityManagement::From_SN::IfBlock1::else */
  static kcg_bool _30_else_clock_IfBlock1;
  /* PriorityManagement::From_SN::FromSN_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _5_FromSN_To_NewMode;
  /* PriorityManagement::From_SN::IfBlock1::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L132_IfBlock1;
  /* PriorityManagement::From_SN::FromSN_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _4_FromSN_To_NewMode;
  /* PriorityManagement::From_SN::IfBlock1::else::else::else */
  static kcg_bool _28_else_clock_IfBlock1;
  /* PriorityManagement::From_SN::FromSN_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _9_FromSN_To_NewMode;
  /* PriorityManagement::From_SN::IfBlock1::else::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L134_IfBlock1;
  /* PriorityManagement::From_SN::FromSN_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _8_FromSN_To_NewMode;
  /* PriorityManagement::From_SN::IfBlock1::else::else::else::else::else */
  static kcg_bool _26_else_clock_IfBlock1;
  /* PriorityManagement::From_SN::FromSN_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _13_FromSN_To_NewMode;
  /* PriorityManagement::From_SN::IfBlock1::else::else::else::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L136_IfBlock1;
  /* PriorityManagement::From_SN::FromSN_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _12_FromSN_To_NewMode;
  /* PriorityManagement::From_SN::IfBlock1::else::else::else::else::else::else::else */
  static kcg_bool _24_else_clock_IfBlock1;
  /* PriorityManagement::From_SN::FromSN_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _17_FromSN_To_NewMode;
  /* PriorityManagement::From_SN::IfBlock1::else::else::else::else::else::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L137_IfBlock1;
  /* PriorityManagement::From_SN::FromSN_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _16_FromSN_To_NewMode;
  /* PriorityManagement::From_SN::IfBlock1::else::else::else::else::else::else::else::else::else */
  static kcg_bool _22_else_clock_IfBlock1;
  /* PriorityManagement::From_SN::FromSN_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _21_FromSN_To_NewMode;
  /* PriorityManagement::From_SN::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L139_IfBlock1;
  /* PriorityManagement::From_SN::FromSN_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _20_FromSN_To_NewMode;
  /* PriorityManagement::From_SN::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L140_IfBlock1;
  /* PriorityManagement::From_SN::IfBlock1::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* PriorityManagement::From_SN::FromSN_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _18_FromSN_To_NewMode;
  /* PriorityManagement::From_SN::IfBlock1::else::else::else::else::else::else::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L138_IfBlock1;
  /* PriorityManagement::From_SN::FromSN_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _19_FromSN_To_NewMode;
  /* PriorityManagement::From_SN::IfBlock1::else::else::else::else::else::else::else::else */
  static kcg_bool _23_else_clock_IfBlock1;
  /* PriorityManagement::From_SN::FromSN_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _14_FromSN_To_NewMode;
  /* PriorityManagement::From_SN::IfBlock1::else::else::else::else::else::else::else::then::_L2 */
  static T_Mode_Level_And_Mode_Types_Pkg _L2_IfBlock1;
  /* PriorityManagement::From_SN::FromSN_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _15_FromSN_To_NewMode;
  /* PriorityManagement::From_SN::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _25_else_clock_IfBlock1;
  /* PriorityManagement::From_SN::FromSN_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _10_FromSN_To_NewMode;
  /* PriorityManagement::From_SN::IfBlock1::else::else::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L135_IfBlock1;
  /* PriorityManagement::From_SN::FromSN_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _11_FromSN_To_NewMode;
  /* PriorityManagement::From_SN::IfBlock1::else::else::else::else */
  static kcg_bool _27_else_clock_IfBlock1;
  /* PriorityManagement::From_SN::FromSN_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _6_FromSN_To_NewMode;
  /* PriorityManagement::From_SN::IfBlock1::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L133_IfBlock1;
  /* PriorityManagement::From_SN::FromSN_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _7_FromSN_To_NewMode;
  /* PriorityManagement::From_SN::IfBlock1::else::else */
  static kcg_bool _29_else_clock_IfBlock1;
  /* PriorityManagement::From_SN::FromSN_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _2_FromSN_To_NewMode;
  /* PriorityManagement::From_SN::IfBlock1::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L131_IfBlock1;
  /* PriorityManagement::From_SN::FromSN_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _3_FromSN_To_NewMode;
  /* PriorityManagement::From_SN::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* PriorityManagement::From_SN::Condition2SR */
  static kcg_bool Condition2SR;
  /* PriorityManagement::From_SN::Condition2SH */
  static kcg_bool Condition2SH;
  /* PriorityManagement::From_SN::_L5 */
  static kcg_bool _L5;
  /* PriorityManagement::From_SN::_L4 */
  static kcg_bool _L4;
  /* PriorityManagement::From_SN::_L3 */
  static kcg_bool _L3;
  /* PriorityManagement::From_SN::_L1 */
  static kcg_bool _L1;
  /* PriorityManagement::From_SN::_L8 */
  static kcg_bool _L8;
  /* PriorityManagement::From_SN::_L9 */
  static kcg_bool _L9;
  /* PriorityManagement::From_SN::FromSN_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _41_FromSN_To_NewMode;
  
  IfBlock1_clock = Condition1;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else {
    _30_else_clock_IfBlock1 = Condition29;
    /* ck_anon_activ */ if (_30_else_clock_IfBlock1) {
    }
    else {
      _29_else_clock_IfBlock1 = Condition13;
    }
  }
  _L3 = Condition44;
  _L4 = Condition45;
  _L9 = _L3 | _L4;
  Condition2SR = _L9;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else /* ck_anon_activ */ if (_30_else_clock_IfBlock1) {
  }
  else /* ck_anon_activ */ if (_29_else_clock_IfBlock1) {
  }
  else {
    _28_else_clock_IfBlock1 = Condition2SR;
    /* ck_anon_activ */ if (_28_else_clock_IfBlock1) {
    }
    else {
      _27_else_clock_IfBlock1 = ConditionSN2TR;
      /* ck_anon_activ */ if (_27_else_clock_IfBlock1) {
      }
      else {
        _26_else_clock_IfBlock1 = Condition28;
        /* ck_anon_activ */ if (_26_else_clock_IfBlock1) {
        }
        else {
          _25_else_clock_IfBlock1 = Condition25;
        }
      }
    }
  }
  _L5 = Condition5;
  _L1 = Condition61;
  _L8 = _L5 | _L1;
  Condition2SH = _L8;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L1_IfBlock1 = IS_Level_And_Mode_Types_Pkg;
    _1_FromSN_To_NewMode = _L1_IfBlock1;
    _41_FromSN_To_NewMode = _1_FromSN_To_NewMode;
  }
  else {
    /* ck_anon_activ */ if (_30_else_clock_IfBlock1) {
      _L131_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
      _3_FromSN_To_NewMode = _L131_IfBlock1;
      FromSN_To_NewMode = _3_FromSN_To_NewMode;
    }
    else {
      /* ck_anon_activ */ if (_29_else_clock_IfBlock1) {
        _L132_IfBlock1 = SF_Level_And_Mode_Types_Pkg;
        _5_FromSN_To_NewMode = _L132_IfBlock1;
        _2_FromSN_To_NewMode = _5_FromSN_To_NewMode;
      }
      else {
        /* ck_anon_activ */ if (_28_else_clock_IfBlock1) {
          _L133_IfBlock1 = SR_Level_And_Mode_Types_Pkg;
          _7_FromSN_To_NewMode = _L133_IfBlock1;
          _4_FromSN_To_NewMode = _7_FromSN_To_NewMode;
        }
        else {
          /* ck_anon_activ */ if (_27_else_clock_IfBlock1) {
            _L134_IfBlock1 = TR_Level_And_Mode_Types_Pkg;
            _9_FromSN_To_NewMode = _L134_IfBlock1;
            _6_FromSN_To_NewMode = _9_FromSN_To_NewMode;
          }
          else {
            /* ck_anon_activ */ if (_26_else_clock_IfBlock1) {
              _L135_IfBlock1 = SB_Level_And_Mode_Types_Pkg;
              _11_FromSN_To_NewMode = _L135_IfBlock1;
              _8_FromSN_To_NewMode = _11_FromSN_To_NewMode;
            }
            else {
              /* ck_anon_activ */ if (_25_else_clock_IfBlock1) {
                _L136_IfBlock1 = FS_Level_And_Mode_Types_Pkg;
                _13_FromSN_To_NewMode = _L136_IfBlock1;
                _10_FromSN_To_NewMode = _13_FromSN_To_NewMode;
              }
              else {
                _24_else_clock_IfBlock1 = Condition2SH;
                /* ck_anon_activ */ if (_24_else_clock_IfBlock1) {
                  _L2_IfBlock1 = SH_Level_And_Mode_Types_Pkg;
                  _15_FromSN_To_NewMode = _L2_IfBlock1;
                  _12_FromSN_To_NewMode = _15_FromSN_To_NewMode;
                }
                else {
                  _23_else_clock_IfBlock1 = Condition21;
                  /* ck_anon_activ */ if (_23_else_clock_IfBlock1) {
                    _L137_IfBlock1 = UN_Level_And_Mode_Types_Pkg;
                    _17_FromSN_To_NewMode = _L137_IfBlock1;
                    _14_FromSN_To_NewMode = _17_FromSN_To_NewMode;
                  }
                  else {
                    _22_else_clock_IfBlock1 = Condition71;
                    /* ck_anon_activ */ if (_22_else_clock_IfBlock1) {
                      _L138_IfBlock1 = LS_Level_And_Mode_Types_Pkg;
                      _19_FromSN_To_NewMode = _L138_IfBlock1;
                      _16_FromSN_To_NewMode = _19_FromSN_To_NewMode;
                    }
                    else {
                      else_clock_IfBlock1 = Condition34;
                      /* ck_anon_activ */ if (else_clock_IfBlock1) {
                        _L139_IfBlock1 = OS_Level_And_Mode_Types_Pkg;
                        _21_FromSN_To_NewMode = _L139_IfBlock1;
                        _18_FromSN_To_NewMode = _21_FromSN_To_NewMode;
                      }
                      else {
                        _L140_IfBlock1 = previousMode_Loc;
                        _20_FromSN_To_NewMode = _L140_IfBlock1;
                        _18_FromSN_To_NewMode = _20_FromSN_To_NewMode;
                      }
                      _16_FromSN_To_NewMode = _18_FromSN_To_NewMode;
                    }
                    _14_FromSN_To_NewMode = _16_FromSN_To_NewMode;
                  }
                  _12_FromSN_To_NewMode = _14_FromSN_To_NewMode;
                }
                _10_FromSN_To_NewMode = _12_FromSN_To_NewMode;
              }
              _8_FromSN_To_NewMode = _10_FromSN_To_NewMode;
            }
            _6_FromSN_To_NewMode = _8_FromSN_To_NewMode;
          }
          _4_FromSN_To_NewMode = _6_FromSN_To_NewMode;
        }
        _2_FromSN_To_NewMode = _4_FromSN_To_NewMode;
      }
      FromSN_To_NewMode = _2_FromSN_To_NewMode;
    }
    _41_FromSN_To_NewMode = FromSN_To_NewMode;
  }
  return _41_FromSN_To_NewMode;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** From_SN_PriorityManagement.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

