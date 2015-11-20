/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_EMERGENCYSTOP_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP */
Q_EMERGENCYSTOP CAST_Int_to_Q_EMERGENCYSTOP_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::q_emergencystop_int */ kcg_int q_emergencystop_int)
{
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::error */
  static kcg_bool error2;
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::q_emergencystop */
  static Q_EMERGENCYSTOP _1_q_emergencystop;
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::IfBlock1::then::_L5 */
  static kcg_bool _L5_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::IfBlock1::then::_L4 */
  static Q_EMERGENCYSTOP _L4_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::error */
  static kcg_bool error;
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::q_emergencystop */
  static Q_EMERGENCYSTOP q_emergencystop;
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::IfBlock1::else */
  static kcg_bool _16_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::error */
  static kcg_bool error10;
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::q_emergencystop */
  static Q_EMERGENCYSTOP _9_q_emergencystop;
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::IfBlock1::else::else::then::_L4 */
  static kcg_bool _L418_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::IfBlock1::else::else::then::_L2 */
  static Q_EMERGENCYSTOP _L2_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::error */
  static kcg_bool error8;
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::q_emergencystop */
  static Q_EMERGENCYSTOP _7_q_emergencystop;
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::IfBlock1::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::IfBlock1::else::else::else::else::_L2 */
  static Q_EMERGENCYSTOP _L221_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::IfBlock1::else::else::else::else::_L1 */
  static kcg_bool _L120_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::q_emergencystop */
  static Q_EMERGENCYSTOP _11_q_emergencystop;
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::error */
  static kcg_bool error12;
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::IfBlock1::else::else::else::then::_L2 */
  static kcg_bool _L219_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::IfBlock1::else::else::else::then::_L1 */
  static Q_EMERGENCYSTOP _L1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::q_emergencystop */
  static Q_EMERGENCYSTOP _13_q_emergencystop;
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::error */
  static kcg_bool error14;
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::IfBlock1::else::else */
  static kcg_bool _15_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::q_emergencystop */
  static Q_EMERGENCYSTOP _3_q_emergencystop;
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::error */
  static kcg_bool error4;
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::IfBlock1::else::then::_L3 */
  static Q_EMERGENCYSTOP _L3_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::IfBlock1::else::then::_L5 */
  static kcg_bool _L517_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::q_emergencystop */
  static Q_EMERGENCYSTOP _5_q_emergencystop;
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::error */
  static kcg_bool error6;
  static kcg_bool noname;
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::error */
  static kcg_bool error22;
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::q_emergencystop_in */
  static kcg_int q_emergencystop_in;
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::_L13 */
  static kcg_bool _L13;
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::_L12 */
  static kcg_int _L12;
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::q_emergencystop */
  static Q_EMERGENCYSTOP _23_q_emergencystop;
  
  _L12 = q_emergencystop_int;
  q_emergencystop_in = _L12;
  IfBlock1_clock = q_emergencystop_in ==
    INT_Q_EMERGENCYSTOP_cond_accepted_with_EOA_update_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L5_IfBlock1 = kcg_false;
    error2 = _L5_IfBlock1;
    error22 = error2;
  }
  else {
    _16_else_clock_IfBlock1 = q_emergencystop_in ==
      INT_Q_EMERGENCYSTOP_cond_accepted_with_no_EOA_update_TM_conversions;
    /* ck_anon_activ */ if (_16_else_clock_IfBlock1) {
      _L517_IfBlock1 = kcg_false;
      error6 = _L517_IfBlock1;
      error = error6;
    }
    else {
      _15_else_clock_IfBlock1 = q_emergencystop_in ==
        INT_Q_EMERGENCYSTOP_uncond_accepted_TM_conversions;
      /* ck_anon_activ */ if (_15_else_clock_IfBlock1) {
        _L418_IfBlock1 = kcg_false;
        error10 = _L418_IfBlock1;
        error4 = error10;
      }
      else {
        else_clock_IfBlock1 = q_emergencystop_in ==
          INT_Q_EMERGENCYSTOP_rejected_TM_conversions;
        /* ck_anon_activ */ if (else_clock_IfBlock1) {
          _L219_IfBlock1 = kcg_false;
          error14 = _L219_IfBlock1;
          error8 = error14;
        }
        else {
          _L120_IfBlock1 = kcg_true;
          error12 = _L120_IfBlock1;
          error8 = error12;
        }
        error4 = error8;
      }
      error = error4;
    }
    error22 = error;
  }
  _L13 = error22;
  noname = _L13;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L4_IfBlock1 =
      ENUM_Q_EMERGENCYSTOP_cond_accepted_with_EOA_update_TM_conversions;
    _1_q_emergencystop = _L4_IfBlock1;
    _23_q_emergencystop = _1_q_emergencystop;
  }
  else {
    /* ck_anon_activ */ if (_16_else_clock_IfBlock1) {
      _L3_IfBlock1 =
        ENUM_Q_EMERGENCYSTOP_cond_accepted_with_no_EOA_update_TM_conversions;
      _5_q_emergencystop = _L3_IfBlock1;
      q_emergencystop = _5_q_emergencystop;
    }
    else {
      /* ck_anon_activ */ if (_15_else_clock_IfBlock1) {
        _L2_IfBlock1 = ENUM_Q_EMERGENCYSTOP_uncond_accepted_TM_conversions;
        _9_q_emergencystop = _L2_IfBlock1;
        _3_q_emergencystop = _9_q_emergencystop;
      }
      else {
        /* ck_anon_activ */ if (else_clock_IfBlock1) {
          _L1_IfBlock1 = ENUM_Q_EMERGENCYSTOP_rejected_TM_conversions;
          _13_q_emergencystop = _L1_IfBlock1;
          _7_q_emergencystop = _13_q_emergencystop;
        }
        else {
          _L221_IfBlock1 = ENUM_Q_EMERGENCYSTOP_rejected_TM_conversions;
          _11_q_emergencystop = _L221_IfBlock1;
          _7_q_emergencystop = _11_q_emergencystop;
        }
        _3_q_emergencystop = _7_q_emergencystop;
      }
      q_emergencystop = _3_q_emergencystop;
    }
    _23_q_emergencystop = q_emergencystop;
  }
  return _23_q_emergencystop;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_Q_EMERGENCYSTOP_TM_conversions.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

