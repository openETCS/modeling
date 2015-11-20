/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_LS_PriorityManagement.h"

/* PriorityManagement::From_LS */
T_Mode_Level_And_Mode_Types_Pkg From_LS_PriorityManagement(
  /* PriorityManagement::From_LS::Condition1 */ kcg_bool Condition1,
  /* PriorityManagement::From_LS::Condition5 */ kcg_bool Condition5,
  /* PriorityManagement::From_LS::Condition6 */ kcg_bool Condition6,
  /* PriorityManagement::From_LS::Condition13 */ kcg_bool Condition13,
  /* PriorityManagement::From_LS::Condition15 */ kcg_bool Condition15,
  /* PriorityManagement::From_LS::Condition21 */ kcg_bool Condition21,
  /* PriorityManagement::From_LS::Condition28 */ kcg_bool Condition28,
  /* PriorityManagement::From_LS::Condition29 */ kcg_bool Condition29,
  /* PriorityManagement::From_LS::Condition31 */ kcg_bool Condition31,
  /* PriorityManagement::From_LS::Condition32 */ kcg_bool Condition32,
  /* PriorityManagement::From_LS::Condition37 */ kcg_bool Condition37,
  /* PriorityManagement::From_LS::Condition46 */ kcg_bool Condition46,
  /* PriorityManagement::From_LS::Condition50 */ kcg_bool Condition50,
  /* PriorityManagement::From_LS::Condition51 */ kcg_bool Condition51,
  /* PriorityManagement::From_LS::Condition56 */ kcg_bool Condition56,
  /* PriorityManagement::From_LS::Condition59 */ kcg_bool Condition59,
  /* PriorityManagement::From_LS::Condition73 */ kcg_bool Condition73,
  /* PriorityManagement::From_LS::ConditionLS2TR */ kcg_bool ConditionLS2TR,
  /* PriorityManagement::From_LS::previousMode_Loc */ T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc)
{
  /* PriorityManagement::From_LS::FromLS_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _1_FromLS_To_NewMode;
  /* PriorityManagement::From_LS::IfBlock1::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L1_IfBlock1;
  /* PriorityManagement::From_LS::FromLS_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg FromLS_To_NewMode;
  /* PriorityManagement::From_LS::IfBlock1::else */
  static kcg_bool _36_else_clock_IfBlock1;
  /* PriorityManagement::From_LS::FromLS_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _5_FromLS_To_NewMode;
  /* PriorityManagement::From_LS::IfBlock1::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L138_IfBlock1;
  /* PriorityManagement::From_LS::FromLS_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _4_FromLS_To_NewMode;
  /* PriorityManagement::From_LS::IfBlock1::else::else::else */
  static kcg_bool _34_else_clock_IfBlock1;
  /* PriorityManagement::From_LS::FromLS_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _9_FromLS_To_NewMode;
  /* PriorityManagement::From_LS::IfBlock1::else::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L140_IfBlock1;
  /* PriorityManagement::From_LS::FromLS_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _8_FromLS_To_NewMode;
  /* PriorityManagement::From_LS::IfBlock1::else::else::else::else::else */
  static kcg_bool _32_else_clock_IfBlock1;
  /* PriorityManagement::From_LS::FromLS_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _13_FromLS_To_NewMode;
  /* PriorityManagement::From_LS::IfBlock1::else::else::else::else::else::else::then::_L2 */
  static T_Mode_Level_And_Mode_Types_Pkg _L2_IfBlock1;
  /* PriorityManagement::From_LS::FromLS_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _12_FromLS_To_NewMode;
  /* PriorityManagement::From_LS::IfBlock1::else::else::else::else::else::else::else */
  static kcg_bool _30_else_clock_IfBlock1;
  /* PriorityManagement::From_LS::FromLS_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _17_FromLS_To_NewMode;
  /* PriorityManagement::From_LS::IfBlock1::else::else::else::else::else::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L143_IfBlock1;
  /* PriorityManagement::From_LS::FromLS_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _16_FromLS_To_NewMode;
  /* PriorityManagement::From_LS::IfBlock1::else::else::else::else::else::else::else::else::else */
  static kcg_bool _28_else_clock_IfBlock1;
  /* PriorityManagement::From_LS::FromLS_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _21_FromLS_To_NewMode;
  /* PriorityManagement::From_LS::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L145_IfBlock1;
  /* PriorityManagement::From_LS::FromLS_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _20_FromLS_To_NewMode;
  /* PriorityManagement::From_LS::IfBlock1::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _26_else_clock_IfBlock1;
  /* PriorityManagement::From_LS::FromLS_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _25_FromLS_To_NewMode;
  /* PriorityManagement::From_LS::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L147_IfBlock1;
  /* PriorityManagement::From_LS::FromLS_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _24_FromLS_To_NewMode;
  /* PriorityManagement::From_LS::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L148_IfBlock1;
  /* PriorityManagement::From_LS::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* PriorityManagement::From_LS::FromLS_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _22_FromLS_To_NewMode;
  /* PriorityManagement::From_LS::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L146_IfBlock1;
  /* PriorityManagement::From_LS::FromLS_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _23_FromLS_To_NewMode;
  /* PriorityManagement::From_LS::IfBlock1::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _27_else_clock_IfBlock1;
  /* PriorityManagement::From_LS::FromLS_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _18_FromLS_To_NewMode;
  /* PriorityManagement::From_LS::IfBlock1::else::else::else::else::else::else::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L144_IfBlock1;
  /* PriorityManagement::From_LS::FromLS_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _19_FromLS_To_NewMode;
  /* PriorityManagement::From_LS::IfBlock1::else::else::else::else::else::else::else::else */
  static kcg_bool _29_else_clock_IfBlock1;
  /* PriorityManagement::From_LS::FromLS_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _14_FromLS_To_NewMode;
  /* PriorityManagement::From_LS::IfBlock1::else::else::else::else::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L142_IfBlock1;
  /* PriorityManagement::From_LS::FromLS_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _15_FromLS_To_NewMode;
  /* PriorityManagement::From_LS::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _31_else_clock_IfBlock1;
  /* PriorityManagement::From_LS::FromLS_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _10_FromLS_To_NewMode;
  /* PriorityManagement::From_LS::IfBlock1::else::else::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L141_IfBlock1;
  /* PriorityManagement::From_LS::FromLS_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _11_FromLS_To_NewMode;
  /* PriorityManagement::From_LS::IfBlock1::else::else::else::else */
  static kcg_bool _33_else_clock_IfBlock1;
  /* PriorityManagement::From_LS::FromLS_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _6_FromLS_To_NewMode;
  /* PriorityManagement::From_LS::IfBlock1::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L139_IfBlock1;
  /* PriorityManagement::From_LS::FromLS_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _7_FromLS_To_NewMode;
  /* PriorityManagement::From_LS::IfBlock1::else::else */
  static kcg_bool _35_else_clock_IfBlock1;
  /* PriorityManagement::From_LS::FromLS_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _2_FromLS_To_NewMode;
  /* PriorityManagement::From_LS::IfBlock1::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L137_IfBlock1;
  /* PriorityManagement::From_LS::FromLS_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _3_FromLS_To_NewMode;
  /* PriorityManagement::From_LS::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* PriorityManagement::From_LS::Condition2OS */
  static kcg_bool Condition2OS;
  /* PriorityManagement::From_LS::Condition2FS */
  static kcg_bool Condition2FS;
  /* PriorityManagement::From_LS::Condition2SH */
  static kcg_bool Condition2SH;
  /* PriorityManagement::From_LS::_L11 */
  static kcg_bool _L11;
  /* PriorityManagement::From_LS::_L9 */
  static kcg_bool _L9;
  /* PriorityManagement::From_LS::_L8 */
  static kcg_bool _L8;
  /* PriorityManagement::From_LS::_L6 */
  static kcg_bool _L6;
  /* PriorityManagement::From_LS::_L5 */
  static kcg_bool _L5;
  /* PriorityManagement::From_LS::_L4 */
  static kcg_bool _L4;
  /* PriorityManagement::From_LS::_L2 */
  static kcg_bool _L2;
  /* PriorityManagement::From_LS::_L1 */
  static kcg_bool _L1;
  /* PriorityManagement::From_LS::_L12 */
  static kcg_bool _L12;
  /* PriorityManagement::From_LS::_L13 */
  static kcg_bool _L13;
  /* PriorityManagement::From_LS::_L14 */
  static kcg_bool _L14;
  /* PriorityManagement::From_LS::FromLS_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _49_FromLS_To_NewMode;
  
  _L1 = Condition32;
  _L2 = Condition51;
  _L6 = Condition31;
  _L13 = _L6 | _L1;
  Condition2FS = _L13;
  _L4 = Condition6;
  _L5 = Condition15;
  _L11 = Condition5;
  _L8 = Condition50;
  _L12 = _L11 | _L4 | _L8 | _L2;
  Condition2SH = _L12;
  _L9 = Condition73;
  _L14 = _L5 | _L9;
  Condition2OS = _L14;
  IfBlock1_clock = Condition1;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L1_IfBlock1 = IS_Level_And_Mode_Types_Pkg;
    _1_FromLS_To_NewMode = _L1_IfBlock1;
    _49_FromLS_To_NewMode = _1_FromLS_To_NewMode;
  }
  else {
    _36_else_clock_IfBlock1 = Condition29;
    /* ck_anon_activ */ if (_36_else_clock_IfBlock1) {
      _L137_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
      _3_FromLS_To_NewMode = _L137_IfBlock1;
      FromLS_To_NewMode = _3_FromLS_To_NewMode;
    }
    else {
      _35_else_clock_IfBlock1 = Condition13;
      /* ck_anon_activ */ if (_35_else_clock_IfBlock1) {
        _L138_IfBlock1 = SF_Level_And_Mode_Types_Pkg;
        _5_FromLS_To_NewMode = _L138_IfBlock1;
        _2_FromLS_To_NewMode = _5_FromLS_To_NewMode;
      }
      else {
        _34_else_clock_IfBlock1 = ConditionLS2TR;
        /* ck_anon_activ */ if (_34_else_clock_IfBlock1) {
          _L139_IfBlock1 = TR_Level_And_Mode_Types_Pkg;
          _7_FromLS_To_NewMode = _L139_IfBlock1;
          _4_FromLS_To_NewMode = _7_FromLS_To_NewMode;
        }
        else {
          _33_else_clock_IfBlock1 = Condition28;
          /* ck_anon_activ */ if (_33_else_clock_IfBlock1) {
            _L140_IfBlock1 = SB_Level_And_Mode_Types_Pkg;
            _9_FromLS_To_NewMode = _L140_IfBlock1;
            _6_FromLS_To_NewMode = _9_FromLS_To_NewMode;
          }
          else {
            _32_else_clock_IfBlock1 = Condition46;
            /* ck_anon_activ */ if (_32_else_clock_IfBlock1) {
              _L141_IfBlock1 = NL_Level_And_Mode_Types_Pkg;
              _11_FromLS_To_NewMode = _L141_IfBlock1;
              _8_FromLS_To_NewMode = _11_FromLS_To_NewMode;
            }
            else {
              _31_else_clock_IfBlock1 = Condition2SH;
              /* ck_anon_activ */ if (_31_else_clock_IfBlock1) {
                _L2_IfBlock1 = SH_Level_And_Mode_Types_Pkg;
                _13_FromLS_To_NewMode = _L2_IfBlock1;
                _10_FromLS_To_NewMode = _13_FromLS_To_NewMode;
              }
              else {
                _30_else_clock_IfBlock1 = Condition56;
                /* ck_anon_activ */ if (_30_else_clock_IfBlock1) {
                  _L142_IfBlock1 = SN_Level_And_Mode_Types_Pkg;
                  _15_FromLS_To_NewMode = _L142_IfBlock1;
                  _12_FromLS_To_NewMode = _15_FromLS_To_NewMode;
                }
                else {
                  _29_else_clock_IfBlock1 = Condition2FS;
                  /* ck_anon_activ */ if (_29_else_clock_IfBlock1) {
                    _L143_IfBlock1 = FS_Level_And_Mode_Types_Pkg;
                    _17_FromLS_To_NewMode = _L143_IfBlock1;
                    _14_FromLS_To_NewMode = _17_FromLS_To_NewMode;
                  }
                  else {
                    _28_else_clock_IfBlock1 = Condition37;
                    /* ck_anon_activ */ if (_28_else_clock_IfBlock1) {
                      _L144_IfBlock1 = SR_Level_And_Mode_Types_Pkg;
                      _19_FromLS_To_NewMode = _L144_IfBlock1;
                      _16_FromLS_To_NewMode = _19_FromLS_To_NewMode;
                    }
                    else {
                      _27_else_clock_IfBlock1 = Condition2OS;
                      /* ck_anon_activ */ if (_27_else_clock_IfBlock1) {
                        _L145_IfBlock1 = OS_Level_And_Mode_Types_Pkg;
                        _21_FromLS_To_NewMode = _L145_IfBlock1;
                        _18_FromLS_To_NewMode = _21_FromLS_To_NewMode;
                      }
                      else {
                        _26_else_clock_IfBlock1 = Condition21;
                        /* ck_anon_activ */ if (_26_else_clock_IfBlock1) {
                          _L146_IfBlock1 = UN_Level_And_Mode_Types_Pkg;
                          _23_FromLS_To_NewMode = _L146_IfBlock1;
                          _20_FromLS_To_NewMode = _23_FromLS_To_NewMode;
                        }
                        else {
                          else_clock_IfBlock1 = Condition59;
                          /* ck_anon_activ */ if (else_clock_IfBlock1) {
                            _L147_IfBlock1 = RV_Level_And_Mode_Types_Pkg;
                            _25_FromLS_To_NewMode = _L147_IfBlock1;
                            _22_FromLS_To_NewMode = _25_FromLS_To_NewMode;
                          }
                          else {
                            _L148_IfBlock1 = previousMode_Loc;
                            _24_FromLS_To_NewMode = _L148_IfBlock1;
                            _22_FromLS_To_NewMode = _24_FromLS_To_NewMode;
                          }
                          _20_FromLS_To_NewMode = _22_FromLS_To_NewMode;
                        }
                        _18_FromLS_To_NewMode = _20_FromLS_To_NewMode;
                      }
                      _16_FromLS_To_NewMode = _18_FromLS_To_NewMode;
                    }
                    _14_FromLS_To_NewMode = _16_FromLS_To_NewMode;
                  }
                  _12_FromLS_To_NewMode = _14_FromLS_To_NewMode;
                }
                _10_FromLS_To_NewMode = _12_FromLS_To_NewMode;
              }
              _8_FromLS_To_NewMode = _10_FromLS_To_NewMode;
            }
            _6_FromLS_To_NewMode = _8_FromLS_To_NewMode;
          }
          _4_FromLS_To_NewMode = _6_FromLS_To_NewMode;
        }
        _2_FromLS_To_NewMode = _4_FromLS_To_NewMode;
      }
      FromLS_To_NewMode = _2_FromLS_To_NewMode;
    }
    _49_FromLS_To_NewMode = FromLS_To_NewMode;
  }
  return _49_FromLS_To_NewMode;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** From_LS_PriorityManagement.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

