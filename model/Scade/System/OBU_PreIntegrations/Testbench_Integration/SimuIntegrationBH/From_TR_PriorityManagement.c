/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_TR_PriorityManagement.h"

/* PriorityManagement::From_TR */
T_Mode_Level_And_Mode_Types_Pkg From_TR_PriorityManagement(
  /* PriorityManagement::From_TR::Condition1 */ kcg_bool Condition1,
  /* PriorityManagement::From_TR::Condition7 */ kcg_bool Condition7,
  /* PriorityManagement::From_TR::Condition13 */ kcg_bool Condition13,
  /* PriorityManagement::From_TR::Condition29 */ kcg_bool Condition29,
  /* PriorityManagement::From_TR::Condition62 */ kcg_bool Condition62,
  /* PriorityManagement::From_TR::Condition63 */ kcg_bool Condition63,
  /* PriorityManagement::From_TR::Condition68 */ kcg_bool Condition68,
  /* PriorityManagement::From_TR::previousMode_Loc */ T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc)
{
  /* PriorityManagement::From_TR::FromTR_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _1_FromTR_To_NewMode;
  /* PriorityManagement::From_TR::IfBlock1::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L1_IfBlock1;
  /* PriorityManagement::From_TR::FromTR_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg FromTR_To_NewMode;
  /* PriorityManagement::From_TR::IfBlock1::else */
  static kcg_bool _18_else_clock_IfBlock1;
  /* PriorityManagement::From_TR::FromTR_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _5_FromTR_To_NewMode;
  /* PriorityManagement::From_TR::IfBlock1::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L120_IfBlock1;
  /* PriorityManagement::From_TR::FromTR_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _4_FromTR_To_NewMode;
  /* PriorityManagement::From_TR::IfBlock1::else::else::else */
  static kcg_bool _16_else_clock_IfBlock1;
  /* PriorityManagement::From_TR::FromTR_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _9_FromTR_To_NewMode;
  /* PriorityManagement::From_TR::IfBlock1::else::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L122_IfBlock1;
  /* PriorityManagement::From_TR::FromTR_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _8_FromTR_To_NewMode;
  /* PriorityManagement::From_TR::IfBlock1::else::else::else::else::else */
  static kcg_bool _14_else_clock_IfBlock1;
  /* PriorityManagement::From_TR::FromTR_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _13_FromTR_To_NewMode;
  /* PriorityManagement::From_TR::IfBlock1::else::else::else::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L124_IfBlock1;
  /* PriorityManagement::From_TR::FromTR_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _12_FromTR_To_NewMode;
  /* PriorityManagement::From_TR::IfBlock1::else::else::else::else::else::else::else::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L125_IfBlock1;
  /* PriorityManagement::From_TR::IfBlock1::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* PriorityManagement::From_TR::FromTR_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _10_FromTR_To_NewMode;
  /* PriorityManagement::From_TR::IfBlock1::else::else::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L123_IfBlock1;
  /* PriorityManagement::From_TR::FromTR_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _11_FromTR_To_NewMode;
  /* PriorityManagement::From_TR::IfBlock1::else::else::else::else */
  static kcg_bool _15_else_clock_IfBlock1;
  /* PriorityManagement::From_TR::FromTR_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _6_FromTR_To_NewMode;
  /* PriorityManagement::From_TR::IfBlock1::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L121_IfBlock1;
  /* PriorityManagement::From_TR::FromTR_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _7_FromTR_To_NewMode;
  /* PriorityManagement::From_TR::IfBlock1::else::else */
  static kcg_bool _17_else_clock_IfBlock1;
  /* PriorityManagement::From_TR::FromTR_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _2_FromTR_To_NewMode;
  /* PriorityManagement::From_TR::IfBlock1::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L119_IfBlock1;
  /* PriorityManagement::From_TR::FromTR_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _3_FromTR_To_NewMode;
  /* PriorityManagement::From_TR::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* PriorityManagement::From_TR::FromTR_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _26_FromTR_To_NewMode;
  
  IfBlock1_clock = Condition1;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L1_IfBlock1 = IS_Level_And_Mode_Types_Pkg;
    _1_FromTR_To_NewMode = _L1_IfBlock1;
    _26_FromTR_To_NewMode = _1_FromTR_To_NewMode;
  }
  else {
    _18_else_clock_IfBlock1 = Condition29;
    /* ck_anon_activ */ if (_18_else_clock_IfBlock1) {
      _L119_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
      _3_FromTR_To_NewMode = _L119_IfBlock1;
      FromTR_To_NewMode = _3_FromTR_To_NewMode;
    }
    else {
      _17_else_clock_IfBlock1 = Condition13;
      /* ck_anon_activ */ if (_17_else_clock_IfBlock1) {
        _L120_IfBlock1 = SF_Level_And_Mode_Types_Pkg;
        _5_FromTR_To_NewMode = _L120_IfBlock1;
        _2_FromTR_To_NewMode = _5_FromTR_To_NewMode;
      }
      else {
        _16_else_clock_IfBlock1 = Condition68;
        /* ck_anon_activ */ if (_16_else_clock_IfBlock1) {
          _L121_IfBlock1 = SH_Level_And_Mode_Types_Pkg;
          _7_FromTR_To_NewMode = _L121_IfBlock1;
          _4_FromTR_To_NewMode = _7_FromTR_To_NewMode;
        }
        else {
          _15_else_clock_IfBlock1 = Condition7;
          /* ck_anon_activ */ if (_15_else_clock_IfBlock1) {
            _L122_IfBlock1 = PT_Level_And_Mode_Types_Pkg;
            _9_FromTR_To_NewMode = _L122_IfBlock1;
            _6_FromTR_To_NewMode = _9_FromTR_To_NewMode;
          }
          else {
            _14_else_clock_IfBlock1 = Condition62;
            /* ck_anon_activ */ if (_14_else_clock_IfBlock1) {
              _L123_IfBlock1 = UN_Level_And_Mode_Types_Pkg;
              _11_FromTR_To_NewMode = _L123_IfBlock1;
              _8_FromTR_To_NewMode = _11_FromTR_To_NewMode;
            }
            else {
              else_clock_IfBlock1 = Condition63;
              /* ck_anon_activ */ if (else_clock_IfBlock1) {
                _L124_IfBlock1 = SN_Level_And_Mode_Types_Pkg;
                _13_FromTR_To_NewMode = _L124_IfBlock1;
                _10_FromTR_To_NewMode = _13_FromTR_To_NewMode;
              }
              else {
                _L125_IfBlock1 = previousMode_Loc;
                _12_FromTR_To_NewMode = _L125_IfBlock1;
                _10_FromTR_To_NewMode = _12_FromTR_To_NewMode;
              }
              _8_FromTR_To_NewMode = _10_FromTR_To_NewMode;
            }
            _6_FromTR_To_NewMode = _8_FromTR_To_NewMode;
          }
          _4_FromTR_To_NewMode = _6_FromTR_To_NewMode;
        }
        _2_FromTR_To_NewMode = _4_FromTR_To_NewMode;
      }
      FromTR_To_NewMode = _2_FromTR_To_NewMode;
    }
    _26_FromTR_To_NewMode = FromTR_To_NewMode;
  }
  return _26_FromTR_To_NewMode;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** From_TR_PriorityManagement.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

