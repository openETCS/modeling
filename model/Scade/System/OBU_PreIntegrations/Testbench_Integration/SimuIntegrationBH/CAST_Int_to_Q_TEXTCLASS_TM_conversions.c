/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_TEXTCLASS_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_TEXTCLASS */
Q_TEXTCLASS CAST_Int_to_Q_TEXTCLASS_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_TEXTCLASS::q_textclass_int */ kcg_int q_textclass_int)
{
  /* TM_conversions::CAST_Int_to_Q_TEXTCLASS::error */
  static kcg_bool error2;
  /* TM_conversions::CAST_Int_to_Q_TEXTCLASS::q_textclass */
  static Q_TEXTCLASS _1_q_textclass;
  /* TM_conversions::CAST_Int_to_Q_TEXTCLASS::IfBlock1::then::_L5 */
  static kcg_bool _L5_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_TEXTCLASS::IfBlock1::then::_L4 */
  static Q_TEXTCLASS _L4_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_TEXTCLASS::error */
  static kcg_bool error;
  /* TM_conversions::CAST_Int_to_Q_TEXTCLASS::q_textclass */
  static Q_TEXTCLASS q_textclass;
  /* TM_conversions::CAST_Int_to_Q_TEXTCLASS::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_TEXTCLASS::IfBlock1::else::else::_L2 */
  static kcg_bool _L2_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_TEXTCLASS::IfBlock1::else::else::_L1 */
  static Q_TEXTCLASS _L1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_TEXTCLASS::q_textclass */
  static Q_TEXTCLASS _3_q_textclass;
  /* TM_conversions::CAST_Int_to_Q_TEXTCLASS::error */
  static kcg_bool error4;
  /* TM_conversions::CAST_Int_to_Q_TEXTCLASS::IfBlock1::else::then::_L3 */
  static Q_TEXTCLASS _L3_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_TEXTCLASS::IfBlock1::else::then::_L5 */
  static kcg_bool _L57_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_TEXTCLASS::q_textclass */
  static Q_TEXTCLASS _5_q_textclass;
  /* TM_conversions::CAST_Int_to_Q_TEXTCLASS::error */
  static kcg_bool error6;
  static kcg_bool noname;
  /* TM_conversions::CAST_Int_to_Q_TEXTCLASS::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_TEXTCLASS::error */
  static kcg_bool error8;
  /* TM_conversions::CAST_Int_to_Q_TEXTCLASS::q_textclass_in */
  static kcg_int q_textclass_in;
  /* TM_conversions::CAST_Int_to_Q_TEXTCLASS::_L13 */
  static kcg_bool _L13;
  /* TM_conversions::CAST_Int_to_Q_TEXTCLASS::_L12 */
  static kcg_int _L12;
  /* TM_conversions::CAST_Int_to_Q_TEXTCLASS::q_textclass */
  static Q_TEXTCLASS _9_q_textclass;
  
  _L12 = q_textclass_int;
  q_textclass_in = _L12;
  IfBlock1_clock = q_textclass_in == INT_Q_TEXTCLASS_important_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L5_IfBlock1 = kcg_false;
    error2 = _L5_IfBlock1;
    error8 = error2;
  }
  else {
    else_clock_IfBlock1 = q_textclass_in == INT_Q_TEXTCLASS_aux_TM_conversions;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _L57_IfBlock1 = kcg_false;
      error6 = _L57_IfBlock1;
      error = error6;
    }
    else {
      _L2_IfBlock1 = kcg_true;
      error4 = _L2_IfBlock1;
      error = error4;
    }
    error8 = error;
  }
  _L13 = error8;
  noname = _L13;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L4_IfBlock1 = ENUM_Q_TEXTCLASS_important_TM_conversions;
    _1_q_textclass = _L4_IfBlock1;
    _9_q_textclass = _1_q_textclass;
  }
  else {
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _L3_IfBlock1 = ENUM_Q_TEXTCLASS_aux_TM_conversions;
      _5_q_textclass = _L3_IfBlock1;
      q_textclass = _5_q_textclass;
    }
    else {
      _L1_IfBlock1 = ENUM_Q_TEXTCLASS_important_TM_conversions;
      _3_q_textclass = _L1_IfBlock1;
      q_textclass = _3_q_textclass;
    }
    _9_q_textclass = q_textclass;
  }
  return _9_q_textclass;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_Q_TEXTCLASS_TM_conversions.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

