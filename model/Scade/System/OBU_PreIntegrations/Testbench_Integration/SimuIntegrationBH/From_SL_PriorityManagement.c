/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_SL_PriorityManagement.h"

/* PriorityManagement::From_SL */
T_Mode_Level_And_Mode_Types_Pkg From_SL_PriorityManagement(
  /* PriorityManagement::From_SL::Condition1 */ kcg_bool Condition1,
  /* PriorityManagement::From_SL::Condition3 */ kcg_bool Condition3,
  /* PriorityManagement::From_SL::Condition2 */ kcg_bool Condition2,
  /* PriorityManagement::From_SL::Condition29 */ kcg_bool Condition29,
  /* PriorityManagement::From_SL::previousMode_Loc */ T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc)
{
  /* PriorityManagement::From_SL::FromSL_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _1_FromSL_To_NewMode;
  /* PriorityManagement::From_SL::IfBlock1::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L1_IfBlock1;
  /* PriorityManagement::From_SL::FromSL_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg FromSL_To_NewMode;
  /* PriorityManagement::From_SL::IfBlock1::else */
  static kcg_bool _9_else_clock_IfBlock1;
  /* PriorityManagement::From_SL::FromSL_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _5_FromSL_To_NewMode;
  /* PriorityManagement::From_SL::IfBlock1::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L111_IfBlock1;
  /* PriorityManagement::From_SL::FromSL_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _4_FromSL_To_NewMode;
  /* PriorityManagement::From_SL::IfBlock1::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* PriorityManagement::From_SL::IfBlock1::else::else::else::else::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L113_IfBlock1;
  /* PriorityManagement::From_SL::FromSL_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _6_FromSL_To_NewMode;
  /* PriorityManagement::From_SL::IfBlock1::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L112_IfBlock1;
  /* PriorityManagement::From_SL::FromSL_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _7_FromSL_To_NewMode;
  /* PriorityManagement::From_SL::IfBlock1::else::else */
  static kcg_bool _8_else_clock_IfBlock1;
  /* PriorityManagement::From_SL::FromSL_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _2_FromSL_To_NewMode;
  /* PriorityManagement::From_SL::IfBlock1::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L110_IfBlock1;
  /* PriorityManagement::From_SL::FromSL_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _3_FromSL_To_NewMode;
  /* PriorityManagement::From_SL::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* PriorityManagement::From_SL::FromSL_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _14_FromSL_To_NewMode;
  
  IfBlock1_clock = Condition1;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L1_IfBlock1 = IS_Level_And_Mode_Types_Pkg;
    _1_FromSL_To_NewMode = _L1_IfBlock1;
    _14_FromSL_To_NewMode = _1_FromSL_To_NewMode;
  }
  else {
    _9_else_clock_IfBlock1 = Condition29;
    /* ck_anon_activ */ if (_9_else_clock_IfBlock1) {
      _L110_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
      _3_FromSL_To_NewMode = _L110_IfBlock1;
      FromSL_To_NewMode = _3_FromSL_To_NewMode;
    }
    else {
      _8_else_clock_IfBlock1 = Condition2;
      /* ck_anon_activ */ if (_8_else_clock_IfBlock1) {
        _L111_IfBlock1 = SB_Level_And_Mode_Types_Pkg;
        _5_FromSL_To_NewMode = _L111_IfBlock1;
        _2_FromSL_To_NewMode = _5_FromSL_To_NewMode;
      }
      else {
        else_clock_IfBlock1 = Condition3;
        /* ck_anon_activ */ if (else_clock_IfBlock1) {
          _L112_IfBlock1 = SB_Level_And_Mode_Types_Pkg;
          _7_FromSL_To_NewMode = _L112_IfBlock1;
          _4_FromSL_To_NewMode = _7_FromSL_To_NewMode;
        }
        else {
          _L113_IfBlock1 = previousMode_Loc;
          _6_FromSL_To_NewMode = _L113_IfBlock1;
          _4_FromSL_To_NewMode = _6_FromSL_To_NewMode;
        }
        _2_FromSL_To_NewMode = _4_FromSL_To_NewMode;
      }
      FromSL_To_NewMode = _2_FromSL_To_NewMode;
    }
    _14_FromSL_To_NewMode = FromSL_To_NewMode;
  }
  return _14_FromSL_To_NewMode;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** From_SL_PriorityManagement.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

