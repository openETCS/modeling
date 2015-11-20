/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_NVEMRRLS_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_NVEMRRLS */
Q_NVEMRRLS CAST_Int_to_Q_NVEMRRLS_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_NVEMRRLS::q_nvemrrls_int */ kcg_int q_nvemrrls_int)
{
  /* TM_conversions::CAST_Int_to_Q_NVEMRRLS::error */
  static kcg_bool error2;
  /* TM_conversions::CAST_Int_to_Q_NVEMRRLS::q_nvemrrls */
  static Q_NVEMRRLS _1_q_nvemrrls;
  /* TM_conversions::CAST_Int_to_Q_NVEMRRLS::IfBlock1::then::_L5 */
  static kcg_bool _L5_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_NVEMRRLS::IfBlock1::then::_L4 */
  static Q_NVEMRRLS _L4_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_NVEMRRLS::error */
  static kcg_bool error;
  /* TM_conversions::CAST_Int_to_Q_NVEMRRLS::q_nvemrrls */
  static Q_NVEMRRLS q_nvemrrls;
  /* TM_conversions::CAST_Int_to_Q_NVEMRRLS::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_NVEMRRLS::IfBlock1::else::else::_L2 */
  static kcg_bool _L2_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_NVEMRRLS::IfBlock1::else::else::_L1 */
  static Q_NVEMRRLS _L1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_NVEMRRLS::q_nvemrrls */
  static Q_NVEMRRLS _3_q_nvemrrls;
  /* TM_conversions::CAST_Int_to_Q_NVEMRRLS::error */
  static kcg_bool error4;
  /* TM_conversions::CAST_Int_to_Q_NVEMRRLS::IfBlock1::else::then::_L3 */
  static Q_NVEMRRLS _L3_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_NVEMRRLS::IfBlock1::else::then::_L5 */
  static kcg_bool _L57_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_NVEMRRLS::q_nvemrrls */
  static Q_NVEMRRLS _5_q_nvemrrls;
  /* TM_conversions::CAST_Int_to_Q_NVEMRRLS::error */
  static kcg_bool error6;
  static kcg_bool noname;
  /* TM_conversions::CAST_Int_to_Q_NVEMRRLS::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_NVEMRRLS::error */
  static kcg_bool error8;
  /* TM_conversions::CAST_Int_to_Q_NVEMRRLS::q_nvemrrls_in */
  static kcg_int q_nvemrrls_in;
  /* TM_conversions::CAST_Int_to_Q_NVEMRRLS::_L13 */
  static kcg_bool _L13;
  /* TM_conversions::CAST_Int_to_Q_NVEMRRLS::_L12 */
  static kcg_int _L12;
  /* TM_conversions::CAST_Int_to_Q_NVEMRRLS::q_nvemrrls */
  static Q_NVEMRRLS _9_q_nvemrrls;
  
  _L12 = q_nvemrrls_int;
  q_nvemrrls_in = _L12;
  IfBlock1_clock = q_nvemrrls_in ==
    INT_Q_NVEMRRLS_revoke_at_standstill_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L5_IfBlock1 = kcg_false;
    error2 = _L5_IfBlock1;
    error8 = error2;
  }
  else {
    else_clock_IfBlock1 = q_nvemrrls_in ==
      INT_Q_NVEMRRLS_revoke_when_no_speed_exceeded_TM_conversions;
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
    _L4_IfBlock1 = ENUM_Q_NVEMRRLS_revoke_at_standstill_TM_conversions;
    _1_q_nvemrrls = _L4_IfBlock1;
    _9_q_nvemrrls = _1_q_nvemrrls;
  }
  else {
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _L3_IfBlock1 =
        ENUM_Q_NVEMRRLS_revoke_when_no_speed_exceeded_TM_conversions;
      _5_q_nvemrrls = _L3_IfBlock1;
      q_nvemrrls = _5_q_nvemrrls;
    }
    else {
      _L1_IfBlock1 = ENUM_Q_NVEMRRLS_revoke_at_standstill_TM_conversions;
      _3_q_nvemrrls = _L1_IfBlock1;
      q_nvemrrls = _3_q_nvemrrls;
    }
    _9_q_nvemrrls = q_nvemrrls;
  }
  return _9_q_nvemrrls;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_Q_NVEMRRLS_TM_conversions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

