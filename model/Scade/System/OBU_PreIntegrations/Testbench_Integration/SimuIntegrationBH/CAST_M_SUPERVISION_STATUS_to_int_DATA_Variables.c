/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_M_SUPERVISION_STATUS_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int */
M_SUPERVISION_STATUS_INT_T_DATA CAST_M_SUPERVISION_STATUS_to_int_DATA_Variables(
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::m_supervision_status_ct */ M_SUPERVISION_STATUS_DMI_Types_Pkg m_supervision_status_ct)
{
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::error */
  static kcg_bool error2;
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::m_supervision_status_int */
  static M_SUPERVISION_STATUS_INT_T_DATA _1_m_supervision_status_int;
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::IfBlock1::then::_L4 */
  static kcg_int _L4_IfBlock1;
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::IfBlock1::then::_L3 */
  static kcg_bool _L3_IfBlock1;
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::error */
  static kcg_bool error;
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::m_supervision_status_int */
  static M_SUPERVISION_STATUS_INT_T_DATA m_supervision_status_int;
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::IfBlock1::else */
  static kcg_bool _21_else_clock_IfBlock1;
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::error */
  static kcg_bool error10;
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::m_supervision_status_int */
  static M_SUPERVISION_STATUS_INT_T_DATA _9_m_supervision_status_int;
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::IfBlock1::else::else::then::_L4 */
  static kcg_int _L423_IfBlock1;
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::IfBlock1::else::else::then::_L3 */
  static kcg_bool _L324_IfBlock1;
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::error */
  static kcg_bool error8;
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::m_supervision_status_int */
  static M_SUPERVISION_STATUS_INT_T_DATA _7_m_supervision_status_int;
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::IfBlock1::else::else::else */
  static kcg_bool _19_else_clock_IfBlock1;
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::error */
  static kcg_bool error18;
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::m_supervision_status_int */
  static M_SUPERVISION_STATUS_INT_T_DATA _17_m_supervision_status_int;
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::IfBlock1::else::else::else::else::then::_L3 */
  static kcg_int _L327_IfBlock1;
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::IfBlock1::else::else::else::else::then::_L2 */
  static kcg_bool _L228_IfBlock1;
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::error */
  static kcg_bool error16;
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::m_supervision_status_int */
  static M_SUPERVISION_STATUS_INT_T_DATA _15_m_supervision_status_int;
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::IfBlock1::else::else::else::else::else::_L5 */
  static kcg_int _L5_IfBlock1;
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::IfBlock1::else::else::else::else::else::_L3 */
  static kcg_bool _L329_IfBlock1;
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::IfBlock1::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::m_supervision_status_int */
  static M_SUPERVISION_STATUS_INT_T_DATA _11_m_supervision_status_int;
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::error */
  static kcg_bool error12;
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::IfBlock1::else::else::else::then::_L2 */
  static kcg_bool _L226_IfBlock1;
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::IfBlock1::else::else::else::then::_L3 */
  static kcg_int _L325_IfBlock1;
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::m_supervision_status_int */
  static M_SUPERVISION_STATUS_INT_T_DATA _13_m_supervision_status_int;
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::error */
  static kcg_bool error14;
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::IfBlock1::else::else */
  static kcg_bool _20_else_clock_IfBlock1;
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::m_supervision_status_int */
  static M_SUPERVISION_STATUS_INT_T_DATA _3_m_supervision_status_int;
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::error */
  static kcg_bool error4;
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::IfBlock1::else::then::_L2 */
  static kcg_bool _L2_IfBlock1;
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::IfBlock1::else::then::_L3 */
  static kcg_int _L322_IfBlock1;
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::m_supervision_status_int */
  static M_SUPERVISION_STATUS_INT_T_DATA _5_m_supervision_status_int;
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::error */
  static kcg_bool error6;
  static kcg_bool noname;
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::error */
  static kcg_bool error30;
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::_L1 */
  static kcg_bool _L1;
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::m_supervision_status_int */
  static M_SUPERVISION_STATUS_INT_T_DATA _31_m_supervision_status_int;
  
  IfBlock1_clock = m_supervision_status_ct == ENUM_M_SUPERVISION_STATUS_CSM;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L3_IfBlock1 = kcg_false;
    error2 = _L3_IfBlock1;
    error30 = error2;
  }
  else {
    _21_else_clock_IfBlock1 = m_supervision_status_ct ==
      ENUM_M_SUPERVISION_STATUS_PIM;
    /* ck_anon_activ */ if (_21_else_clock_IfBlock1) {
      _L2_IfBlock1 = kcg_false;
      error6 = _L2_IfBlock1;
      error = error6;
    }
    else {
      _20_else_clock_IfBlock1 = m_supervision_status_ct ==
        ENUM_M_SUPERVISION_STATUS_TSM;
      /* ck_anon_activ */ if (_20_else_clock_IfBlock1) {
        _L324_IfBlock1 = kcg_false;
        error10 = _L324_IfBlock1;
        error4 = error10;
      }
      else {
        _19_else_clock_IfBlock1 = m_supervision_status_ct ==
          ENUM_M_SUPERVISION_STATUS_RSM;
        /* ck_anon_activ */ if (_19_else_clock_IfBlock1) {
          _L226_IfBlock1 = kcg_false;
          error14 = _L226_IfBlock1;
          error8 = error14;
        }
        else {
          else_clock_IfBlock1 = m_supervision_status_ct ==
            ENUM_M_SUPERVISION_STATUS_supervision_status_unknown;
          /* ck_anon_activ */ if (else_clock_IfBlock1) {
            _L228_IfBlock1 = kcg_false;
            error18 = _L228_IfBlock1;
            error12 = error18;
          }
          else {
            _L329_IfBlock1 = kcg_true;
            error16 = _L329_IfBlock1;
            error12 = error16;
          }
          error8 = error12;
        }
        error4 = error8;
      }
      error = error4;
    }
    error30 = error;
  }
  _L1 = error30;
  noname = _L1;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L4_IfBlock1 = INT_M_SUPERVISION_STATUS_CSM;
    _1_m_supervision_status_int = _L4_IfBlock1;
    _31_m_supervision_status_int = _1_m_supervision_status_int;
  }
  else {
    /* ck_anon_activ */ if (_21_else_clock_IfBlock1) {
      _L322_IfBlock1 = INT_M_SUPERVISION_STATUS_PIM;
      _5_m_supervision_status_int = _L322_IfBlock1;
      m_supervision_status_int = _5_m_supervision_status_int;
    }
    else {
      /* ck_anon_activ */ if (_20_else_clock_IfBlock1) {
        _L423_IfBlock1 = INT_M_SUPERVISION_STATUS_TSM;
        _9_m_supervision_status_int = _L423_IfBlock1;
        _3_m_supervision_status_int = _9_m_supervision_status_int;
      }
      else {
        /* ck_anon_activ */ if (_19_else_clock_IfBlock1) {
          _L325_IfBlock1 = INT_M_SUPERVISION_STATUS_RSM;
          _13_m_supervision_status_int = _L325_IfBlock1;
          _7_m_supervision_status_int = _13_m_supervision_status_int;
        }
        else {
          /* ck_anon_activ */ if (else_clock_IfBlock1) {
            _L327_IfBlock1 =
              INT_M_SUPERVISION_STATUS_supervision_status_unknown;
            _17_m_supervision_status_int = _L327_IfBlock1;
            _11_m_supervision_status_int = _17_m_supervision_status_int;
          }
          else {
            _L5_IfBlock1 = INT_M_SUPERVISION_STATUS_CSM;
            _15_m_supervision_status_int = _L5_IfBlock1;
            _11_m_supervision_status_int = _15_m_supervision_status_int;
          }
          _7_m_supervision_status_int = _11_m_supervision_status_int;
        }
        _3_m_supervision_status_int = _7_m_supervision_status_int;
      }
      m_supervision_status_int = _3_m_supervision_status_int;
    }
    _31_m_supervision_status_int = m_supervision_status_int;
  }
  return _31_m_supervision_status_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_M_SUPERVISION_STATUS_to_int_DATA_Variables.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

