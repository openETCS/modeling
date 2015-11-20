/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_NVCONTACT_TM_conversions.h"

/* TM_conversions::CAST_Int_to_M_NVCONTACT */
M_NVCONTACT CAST_Int_to_M_NVCONTACT_TM_conversions(
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::int_in */ kcg_int int_in)
{
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::error */
  static kcg_bool error2;
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::m_nvcontact */
  static M_NVCONTACT _1_m_nvcontact;
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::IfBlock1::then::_L5 */
  static kcg_bool _L5_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::IfBlock1::then::_L4 */
  static M_NVCONTACT _L4_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::error */
  static kcg_bool error;
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::m_nvcontact */
  static M_NVCONTACT m_nvcontact;
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::IfBlock1::else */
  static kcg_bool _11_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::error */
  static kcg_bool error10;
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::m_nvcontact */
  static M_NVCONTACT _9_m_nvcontact;
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::IfBlock1::else::else::then::_L3 */
  static kcg_bool _L313_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::IfBlock1::else::else::then::_L2 */
  static M_NVCONTACT _L2_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::error */
  static kcg_bool error8;
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::m_nvcontact */
  static M_NVCONTACT _7_m_nvcontact;
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::IfBlock1::else::else::else::_L3 */
  static kcg_bool _L314_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::IfBlock1::else::else::else::_L2 */
  static M_NVCONTACT _L215_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::m_nvcontact */
  static M_NVCONTACT _3_m_nvcontact;
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::error */
  static kcg_bool error4;
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::IfBlock1::else::then::_L3 */
  static M_NVCONTACT _L3_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::IfBlock1::else::then::_L4 */
  static kcg_bool _L412_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::m_nvcontact */
  static M_NVCONTACT _5_m_nvcontact;
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::error */
  static kcg_bool error6;
  static kcg_bool noname;
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::m_nvcontact_in */
  static kcg_int m_nvcontact_in;
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::error */
  static kcg_bool error16;
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::_L2 */
  static kcg_int _L2;
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::_L3 */
  static kcg_bool _L3;
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::m_nvcontact */
  static M_NVCONTACT _17_m_nvcontact;
  
  _L2 = int_in;
  m_nvcontact_in = _L2;
  IfBlock1_clock = m_nvcontact_in ==
    INT_M_NVCONTACT_Apply_service_brake_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L4_IfBlock1 = ENUM_M_NVCONTACT_Apply_service_brake_TM_conversions;
    _1_m_nvcontact = _L4_IfBlock1;
    _17_m_nvcontact = _1_m_nvcontact;
    _L5_IfBlock1 = kcg_false;
    error2 = _L5_IfBlock1;
    error16 = error2;
  }
  else {
    _11_else_clock_IfBlock1 = m_nvcontact_in ==
      INT_M_NVCONTACT_No_Reaction_TM_conversions;
    /* ck_anon_activ */ if (_11_else_clock_IfBlock1) {
      _L3_IfBlock1 = ENUM_M_NVCONTACT_No_Reaction_TM_conversions;
      _5_m_nvcontact = _L3_IfBlock1;
      m_nvcontact = _5_m_nvcontact;
    }
    else {
      else_clock_IfBlock1 = m_nvcontact_in ==
        INT_M_NVCONTACT_Train_trip_TM_conversions;
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        _L2_IfBlock1 = ENUM_M_NVCONTACT_Train_trip_TM_conversions;
        _9_m_nvcontact = _L2_IfBlock1;
        _3_m_nvcontact = _9_m_nvcontact;
      }
      else {
        _L215_IfBlock1 = ENUM_M_NVCONTACT_Train_trip_TM_conversions;
        _7_m_nvcontact = _L215_IfBlock1;
        _3_m_nvcontact = _7_m_nvcontact;
      }
      m_nvcontact = _3_m_nvcontact;
    }
    _17_m_nvcontact = m_nvcontact;
    /* ck_anon_activ */ if (_11_else_clock_IfBlock1) {
      _L412_IfBlock1 = kcg_false;
      error6 = _L412_IfBlock1;
      error = error6;
    }
    else {
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        _L313_IfBlock1 = kcg_false;
        error10 = _L313_IfBlock1;
        error4 = error10;
      }
      else {
        _L314_IfBlock1 = kcg_true;
        error8 = _L314_IfBlock1;
        error4 = error8;
      }
      error = error4;
    }
    error16 = error;
  }
  _L3 = error16;
  noname = _L3;
  return _17_m_nvcontact;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_M_NVCONTACT_TM_conversions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

