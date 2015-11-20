/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_SB_PriorityManagement.h"

/* PriorityManagement::From_SB */
T_Mode_Level_And_Mode_Types_Pkg From_SB_PriorityManagement(
  /* PriorityManagement::From_SB::Condition1 */ kcg_bool Condition1,
  /* PriorityManagement::From_SB::Condition5 */ kcg_bool Condition5,
  /* PriorityManagement::From_SB::Condition6 */ kcg_bool Condition6,
  /* PriorityManagement::From_SB::Condition8 */ kcg_bool Condition8,
  /* PriorityManagement::From_SB::Condition10 */ kcg_bool Condition10,
  /* PriorityManagement::From_SB::Condition13 */ kcg_bool Condition13,
  /* PriorityManagement::From_SB::Condition14 */ kcg_bool Condition14,
  /* PriorityManagement::From_SB::Condition15 */ kcg_bool Condition15,
  /* PriorityManagement::From_SB::Condition29 */ kcg_bool Condition29,
  /* PriorityManagement::From_SB::Condition37 */ kcg_bool Condition37,
  /* PriorityManagement::From_SB::Condition46 */ kcg_bool Condition46,
  /* PriorityManagement::From_SB::Condition50 */ kcg_bool Condition50,
  /* PriorityManagement::From_SB::Condition58 */ kcg_bool Condition58,
  /* PriorityManagement::From_SB::Condition60 */ kcg_bool Condition60,
  /* PriorityManagement::From_SB::Condition70 */ kcg_bool Condition70,
  /* PriorityManagement::From_SB::ConditionSB2TR */ kcg_bool ConditionSB2TR,
  /* PriorityManagement::From_SB::previousMode_Loc */ T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc)
{
  /* PriorityManagement::From_SB::FromSB_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _1_FromSB_To_NewMode;
  /* PriorityManagement::From_SB::IfBlock1::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L1_IfBlock1;
  /* PriorityManagement::From_SB::FromSB_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg FromSB_To_NewMode;
  /* PriorityManagement::From_SB::IfBlock1::else */
  static kcg_bool _36_else_clock_IfBlock1;
  /* PriorityManagement::From_SB::FromSB_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _5_FromSB_To_NewMode;
  /* PriorityManagement::From_SB::IfBlock1::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L138_IfBlock1;
  /* PriorityManagement::From_SB::FromSB_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _4_FromSB_To_NewMode;
  /* PriorityManagement::From_SB::IfBlock1::else::else::else */
  static kcg_bool _34_else_clock_IfBlock1;
  /* PriorityManagement::From_SB::FromSB_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _9_FromSB_To_NewMode;
  /* PriorityManagement::From_SB::IfBlock1::else::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L140_IfBlock1;
  /* PriorityManagement::From_SB::FromSB_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _8_FromSB_To_NewMode;
  /* PriorityManagement::From_SB::IfBlock1::else::else::else::else::else */
  static kcg_bool _32_else_clock_IfBlock1;
  /* PriorityManagement::From_SB::FromSB_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _13_FromSB_To_NewMode;
  /* PriorityManagement::From_SB::IfBlock1::else::else::else::else::else::else::then::_L2 */
  static T_Mode_Level_And_Mode_Types_Pkg _L2_IfBlock1;
  /* PriorityManagement::From_SB::FromSB_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _12_FromSB_To_NewMode;
  /* PriorityManagement::From_SB::IfBlock1::else::else::else::else::else::else::else */
  static kcg_bool _30_else_clock_IfBlock1;
  /* PriorityManagement::From_SB::FromSB_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _17_FromSB_To_NewMode;
  /* PriorityManagement::From_SB::IfBlock1::else::else::else::else::else::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L143_IfBlock1;
  /* PriorityManagement::From_SB::FromSB_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _16_FromSB_To_NewMode;
  /* PriorityManagement::From_SB::IfBlock1::else::else::else::else::else::else::else::else::else */
  static kcg_bool _28_else_clock_IfBlock1;
  /* PriorityManagement::From_SB::FromSB_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _21_FromSB_To_NewMode;
  /* PriorityManagement::From_SB::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L145_IfBlock1;
  /* PriorityManagement::From_SB::FromSB_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _20_FromSB_To_NewMode;
  /* PriorityManagement::From_SB::IfBlock1::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _26_else_clock_IfBlock1;
  /* PriorityManagement::From_SB::FromSB_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _25_FromSB_To_NewMode;
  /* PriorityManagement::From_SB::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L147_IfBlock1;
  /* PriorityManagement::From_SB::FromSB_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _24_FromSB_To_NewMode;
  /* PriorityManagement::From_SB::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L148_IfBlock1;
  /* PriorityManagement::From_SB::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* PriorityManagement::From_SB::FromSB_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _22_FromSB_To_NewMode;
  /* PriorityManagement::From_SB::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L146_IfBlock1;
  /* PriorityManagement::From_SB::FromSB_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _23_FromSB_To_NewMode;
  /* PriorityManagement::From_SB::IfBlock1::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _27_else_clock_IfBlock1;
  /* PriorityManagement::From_SB::FromSB_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _18_FromSB_To_NewMode;
  /* PriorityManagement::From_SB::IfBlock1::else::else::else::else::else::else::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L144_IfBlock1;
  /* PriorityManagement::From_SB::FromSB_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _19_FromSB_To_NewMode;
  /* PriorityManagement::From_SB::IfBlock1::else::else::else::else::else::else::else::else */
  static kcg_bool _29_else_clock_IfBlock1;
  /* PriorityManagement::From_SB::FromSB_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _14_FromSB_To_NewMode;
  /* PriorityManagement::From_SB::IfBlock1::else::else::else::else::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L142_IfBlock1;
  /* PriorityManagement::From_SB::FromSB_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _15_FromSB_To_NewMode;
  /* PriorityManagement::From_SB::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _31_else_clock_IfBlock1;
  /* PriorityManagement::From_SB::FromSB_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _10_FromSB_To_NewMode;
  /* PriorityManagement::From_SB::IfBlock1::else::else::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L141_IfBlock1;
  /* PriorityManagement::From_SB::FromSB_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _11_FromSB_To_NewMode;
  /* PriorityManagement::From_SB::IfBlock1::else::else::else::else */
  static kcg_bool _33_else_clock_IfBlock1;
  /* PriorityManagement::From_SB::FromSB_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _6_FromSB_To_NewMode;
  /* PriorityManagement::From_SB::IfBlock1::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L139_IfBlock1;
  /* PriorityManagement::From_SB::FromSB_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _7_FromSB_To_NewMode;
  /* PriorityManagement::From_SB::IfBlock1::else::else */
  static kcg_bool _35_else_clock_IfBlock1;
  /* PriorityManagement::From_SB::FromSB_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _2_FromSB_To_NewMode;
  /* PriorityManagement::From_SB::IfBlock1::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L137_IfBlock1;
  /* PriorityManagement::From_SB::FromSB_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _3_FromSB_To_NewMode;
  /* PriorityManagement::From_SB::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* PriorityManagement::From_SB::Condition2SH */
  static kcg_bool Condition2SH;
  /* PriorityManagement::From_SB::Condition2SR */
  static kcg_bool Condition2SR;
  /* PriorityManagement::From_SB::_L2 */
  static kcg_bool _L2;
  /* PriorityManagement::From_SB::_L3 */
  static kcg_bool _L3;
  /* PriorityManagement::From_SB::_L4 */
  static kcg_bool _L4;
  /* PriorityManagement::From_SB::_L8 */
  static kcg_bool _L8;
  /* PriorityManagement::From_SB::_L9 */
  static kcg_bool _L9;
  /* PriorityManagement::From_SB::_L10 */
  static kcg_bool _L10;
  /* PriorityManagement::From_SB::_L11 */
  static kcg_bool _L11;
  /* PriorityManagement::From_SB::FromSB_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _49_FromSB_To_NewMode;
  
  IfBlock1_clock = Condition1;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else {
    _36_else_clock_IfBlock1 = Condition29;
    /* ck_anon_activ */ if (_36_else_clock_IfBlock1) {
    }
    else {
      _35_else_clock_IfBlock1 = Condition13;
      /* ck_anon_activ */ if (_35_else_clock_IfBlock1) {
      }
      else {
        _34_else_clock_IfBlock1 = ConditionSB2TR;
        /* ck_anon_activ */ if (_34_else_clock_IfBlock1) {
        }
        else {
          _33_else_clock_IfBlock1 = Condition14;
          /* ck_anon_activ */ if (_33_else_clock_IfBlock1) {
          }
          else {
            _32_else_clock_IfBlock1 = Condition46;
          }
        }
      }
    }
  }
  _L2 = Condition5;
  _L3 = Condition6;
  _L4 = Condition50;
  _L10 = _L2 | _L3 | _L4;
  Condition2SH = _L10;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else /* ck_anon_activ */ if (_36_else_clock_IfBlock1) {
  }
  else /* ck_anon_activ */ if (_35_else_clock_IfBlock1) {
  }
  else /* ck_anon_activ */ if (_34_else_clock_IfBlock1) {
  }
  else /* ck_anon_activ */ if (_33_else_clock_IfBlock1) {
  }
  else /* ck_anon_activ */ if (_32_else_clock_IfBlock1) {
  }
  else {
    _31_else_clock_IfBlock1 = Condition2SH;
    /* ck_anon_activ */ if (_31_else_clock_IfBlock1) {
    }
    else {
      _30_else_clock_IfBlock1 = Condition10;
      /* ck_anon_activ */ if (_30_else_clock_IfBlock1) {
      }
      else {
        _29_else_clock_IfBlock1 = Condition70;
      }
    }
  }
  _L8 = Condition8;
  _L9 = Condition37;
  _L11 = _L8 | _L9;
  Condition2SR = _L11;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L1_IfBlock1 = IS_Level_And_Mode_Types_Pkg;
    _1_FromSB_To_NewMode = _L1_IfBlock1;
    _49_FromSB_To_NewMode = _1_FromSB_To_NewMode;
  }
  else {
    /* ck_anon_activ */ if (_36_else_clock_IfBlock1) {
      _L137_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
      _3_FromSB_To_NewMode = _L137_IfBlock1;
      FromSB_To_NewMode = _3_FromSB_To_NewMode;
    }
    else {
      /* ck_anon_activ */ if (_35_else_clock_IfBlock1) {
        _L138_IfBlock1 = SF_Level_And_Mode_Types_Pkg;
        _5_FromSB_To_NewMode = _L138_IfBlock1;
        _2_FromSB_To_NewMode = _5_FromSB_To_NewMode;
      }
      else {
        /* ck_anon_activ */ if (_34_else_clock_IfBlock1) {
          _L139_IfBlock1 = TR_Level_And_Mode_Types_Pkg;
          _7_FromSB_To_NewMode = _L139_IfBlock1;
          _4_FromSB_To_NewMode = _7_FromSB_To_NewMode;
        }
        else {
          /* ck_anon_activ */ if (_33_else_clock_IfBlock1) {
            _L140_IfBlock1 = SL_Level_And_Mode_Types_Pkg;
            _9_FromSB_To_NewMode = _L140_IfBlock1;
            _6_FromSB_To_NewMode = _9_FromSB_To_NewMode;
          }
          else {
            /* ck_anon_activ */ if (_32_else_clock_IfBlock1) {
              _L141_IfBlock1 = NL_Level_And_Mode_Types_Pkg;
              _11_FromSB_To_NewMode = _L141_IfBlock1;
              _8_FromSB_To_NewMode = _11_FromSB_To_NewMode;
            }
            else {
              /* ck_anon_activ */ if (_31_else_clock_IfBlock1) {
                _L2_IfBlock1 = SH_Level_And_Mode_Types_Pkg;
                _13_FromSB_To_NewMode = _L2_IfBlock1;
                _10_FromSB_To_NewMode = _13_FromSB_To_NewMode;
              }
              else {
                /* ck_anon_activ */ if (_30_else_clock_IfBlock1) {
                  _L142_IfBlock1 = FS_Level_And_Mode_Types_Pkg;
                  _15_FromSB_To_NewMode = _L142_IfBlock1;
                  _12_FromSB_To_NewMode = _15_FromSB_To_NewMode;
                }
                else {
                  /* ck_anon_activ */ if (_29_else_clock_IfBlock1) {
                    _L143_IfBlock1 = LS_Level_And_Mode_Types_Pkg;
                    _17_FromSB_To_NewMode = _L143_IfBlock1;
                    _14_FromSB_To_NewMode = _17_FromSB_To_NewMode;
                  }
                  else {
                    _28_else_clock_IfBlock1 = Condition2SR;
                    /* ck_anon_activ */ if (_28_else_clock_IfBlock1) {
                      _L144_IfBlock1 = SR_Level_And_Mode_Types_Pkg;
                      _19_FromSB_To_NewMode = _L144_IfBlock1;
                      _16_FromSB_To_NewMode = _19_FromSB_To_NewMode;
                    }
                    else {
                      _27_else_clock_IfBlock1 = Condition15;
                      /* ck_anon_activ */ if (_27_else_clock_IfBlock1) {
                        _L145_IfBlock1 = OS_Level_And_Mode_Types_Pkg;
                        _21_FromSB_To_NewMode = _L145_IfBlock1;
                        _18_FromSB_To_NewMode = _21_FromSB_To_NewMode;
                      }
                      else {
                        _26_else_clock_IfBlock1 = Condition60;
                        /* ck_anon_activ */ if (_26_else_clock_IfBlock1) {
                          _L146_IfBlock1 = UN_Level_And_Mode_Types_Pkg;
                          _23_FromSB_To_NewMode = _L146_IfBlock1;
                          _20_FromSB_To_NewMode = _23_FromSB_To_NewMode;
                        }
                        else {
                          else_clock_IfBlock1 = Condition58;
                          /* ck_anon_activ */ if (else_clock_IfBlock1) {
                            _L147_IfBlock1 = SN_Level_And_Mode_Types_Pkg;
                            _25_FromSB_To_NewMode = _L147_IfBlock1;
                            _22_FromSB_To_NewMode = _25_FromSB_To_NewMode;
                          }
                          else {
                            _L148_IfBlock1 = previousMode_Loc;
                            _24_FromSB_To_NewMode = _L148_IfBlock1;
                            _22_FromSB_To_NewMode = _24_FromSB_To_NewMode;
                          }
                          _20_FromSB_To_NewMode = _22_FromSB_To_NewMode;
                        }
                        _18_FromSB_To_NewMode = _20_FromSB_To_NewMode;
                      }
                      _16_FromSB_To_NewMode = _18_FromSB_To_NewMode;
                    }
                    _14_FromSB_To_NewMode = _16_FromSB_To_NewMode;
                  }
                  _12_FromSB_To_NewMode = _14_FromSB_To_NewMode;
                }
                _10_FromSB_To_NewMode = _12_FromSB_To_NewMode;
              }
              _8_FromSB_To_NewMode = _10_FromSB_To_NewMode;
            }
            _6_FromSB_To_NewMode = _8_FromSB_To_NewMode;
          }
          _4_FromSB_To_NewMode = _6_FromSB_To_NewMode;
        }
        _2_FromSB_To_NewMode = _4_FromSB_To_NewMode;
      }
      FromSB_To_NewMode = _2_FromSB_To_NewMode;
    }
    _49_FromSB_To_NewMode = FromSB_To_NewMode;
  }
  return _49_FromSB_To_NewMode;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** From_SB_PriorityManagement.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

