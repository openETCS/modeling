/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Normalize_Distance_d_internal_t_TA_Lib_internal.h"

/* TA_Lib_internal::Normalize_Distance_d_internal_t */
L_internal_Type_Obu_BasicTypes_Pkg Normalize_Distance_d_internal_t_TA_Lib_internal(
  /* TA_Lib_internal::Normalize_Distance_d_internal_t::q_scale */ Q_SCALE q_scale,
  /* TA_Lib_internal::Normalize_Distance_d_internal_t::d */ kcg_int d)
{
  /* TA_Lib_internal::Normalize_Distance_d_internal_t::d_internal */
  static L_internal_Type_Obu_BasicTypes_Pkg _1_d_internal;
  /* TA_Lib_internal::Normalize_Distance_d_internal_t::IfBlock1::then::_L3 */
  static kcg_int _L3_IfBlock1;
  /* TA_Lib_internal::Normalize_Distance_d_internal_t::IfBlock1::then::_L2 */
  static kcg_int _L2_IfBlock1;
  /* TA_Lib_internal::Normalize_Distance_d_internal_t::IfBlock1::then::_L1 */
  static kcg_int _L1_IfBlock1;
  /* TA_Lib_internal::Normalize_Distance_d_internal_t::d_internal */
  static L_internal_Type_Obu_BasicTypes_Pkg d_internal;
  /* TA_Lib_internal::Normalize_Distance_d_internal_t::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TA_Lib_internal::Normalize_Distance_d_internal_t::IfBlock1::else::else::_L3 */
  static kcg_int _L39_IfBlock1;
  /* TA_Lib_internal::Normalize_Distance_d_internal_t::IfBlock1::else::else::_L2 */
  static kcg_int _L28_IfBlock1;
  /* TA_Lib_internal::Normalize_Distance_d_internal_t::IfBlock1::else::else::_L1 */
  static kcg_int _L17_IfBlock1;
  /* TA_Lib_internal::Normalize_Distance_d_internal_t::d_internal */
  static L_internal_Type_Obu_BasicTypes_Pkg _2_d_internal;
  /* TA_Lib_internal::Normalize_Distance_d_internal_t::IfBlock1::else::then::_L3 */
  static kcg_int _L36_IfBlock1;
  /* TA_Lib_internal::Normalize_Distance_d_internal_t::IfBlock1::else::then::_L2 */
  static kcg_int _L25_IfBlock1;
  /* TA_Lib_internal::Normalize_Distance_d_internal_t::IfBlock1::else::then::_L1 */
  static kcg_int _L14_IfBlock1;
  /* TA_Lib_internal::Normalize_Distance_d_internal_t::d_internal */
  static L_internal_Type_Obu_BasicTypes_Pkg _3_d_internal;
  /* TA_Lib_internal::Normalize_Distance_d_internal_t::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TA_Lib_internal::Normalize_Distance_d_internal_t::q_scale_in */
  static Q_SCALE q_scale_in;
  /* TA_Lib_internal::Normalize_Distance_d_internal_t::_L1 */
  static Q_SCALE _L1;
  /* TA_Lib_internal::Normalize_Distance_d_internal_t::d_internal */
  static L_internal_Type_Obu_BasicTypes_Pkg _10_d_internal;
  
  _L1 = q_scale;
  q_scale_in = _L1;
  IfBlock1_clock = q_scale_in == ENUM_Q_SCALE_10cm_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L1_IfBlock1 = d;
    _L3_IfBlock1 = 10;
    _L2_IfBlock1 = _L1_IfBlock1 * _L3_IfBlock1;
    _1_d_internal = _L2_IfBlock1;
    _10_d_internal = _1_d_internal;
  }
  else {
    else_clock_IfBlock1 = q_scale_in == ENUM_Q_SCALE_1m_TM_conversions;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _L14_IfBlock1 = d;
      _L25_IfBlock1 = 100;
      _L36_IfBlock1 = _L14_IfBlock1 * _L25_IfBlock1;
      _3_d_internal = _L36_IfBlock1;
      d_internal = _3_d_internal;
    }
    else {
      _L28_IfBlock1 = d;
      _L17_IfBlock1 = 1000;
      _L39_IfBlock1 = _L28_IfBlock1 * _L17_IfBlock1;
      _2_d_internal = _L39_IfBlock1;
      d_internal = _2_d_internal;
    }
    _10_d_internal = d_internal;
  }
  return _10_d_internal;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Normalize_Distance_d_internal_t_TA_Lib_internal.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

