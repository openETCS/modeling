/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_M_TRACKCOND_to_int_TM_conversions.h"

/* TM_conversions::CAST_M_TRACKCOND_to_int */
kcg_int CAST_M_TRACKCOND_to_int_TM_conversions(
  /* TM_conversions::CAST_M_TRACKCOND_to_int::m_trackcond */ M_TRACKCOND m_trackcond)
{
  /* TM_conversions::CAST_M_TRACKCOND_to_int::error */
  static kcg_bool error2;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::m_trackcond_int */
  static kcg_int _1_m_trackcond_int;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::then::_L5 */
  static kcg_bool _L5_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::then::_L4 */
  static kcg_int _L4_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::error */
  static kcg_bool error;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::m_trackcond_int */
  static kcg_int m_trackcond_int;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else */
  static kcg_bool _51_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::error */
  static kcg_bool error10;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::m_trackcond_int */
  static kcg_int _9_m_trackcond_int;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::else::then::_L4 */
  static kcg_bool _L453_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::else::then::_L2 */
  static kcg_int _L2_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::error */
  static kcg_bool error8;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::m_trackcond_int */
  static kcg_int _7_m_trackcond_int;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::else::else */
  static kcg_bool _49_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::error */
  static kcg_bool error18;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::m_trackcond_int */
  static kcg_int _17_m_trackcond_int;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::else::else::else::then::_L4 */
  static kcg_bool _L456_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::else::else::else::then::_L2 */
  static kcg_int _L257_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::error */
  static kcg_bool error16;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::m_trackcond_int */
  static kcg_int _15_m_trackcond_int;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::else::else::else::else */
  static kcg_bool _47_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::error */
  static kcg_bool error26;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::m_trackcond_int */
  static kcg_int _25_m_trackcond_int;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L460_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::else::else::else::else::else::then::_L2 */
  static kcg_int _L261_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::error */
  static kcg_bool error24;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::m_trackcond_int */
  static kcg_int _23_m_trackcond_int;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::else::else::else::else::else::else */
  static kcg_bool _45_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::error */
  static kcg_bool error34;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::m_trackcond_int */
  static kcg_int _33_m_trackcond_int;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::else::else::else::else::else::else::else::then::_L5 */
  static kcg_bool _L564_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::else::else::else::else::else::else::else::then::_L3 */
  static kcg_int _L365_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::error */
  static kcg_bool error32;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::m_trackcond_int */
  static kcg_int _31_m_trackcond_int;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::else::else::else::else::else::else::else::else */
  static kcg_bool _43_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::error */
  static kcg_bool error42;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::m_trackcond_int */
  static kcg_int _41_m_trackcond_int;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L1 */
  static kcg_bool _L1_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L2 */
  static kcg_int _L268_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::error */
  static kcg_bool error40;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::m_trackcond_int */
  static kcg_int _39_m_trackcond_int;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::_L1 */
  static kcg_int _L169_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::_L2 */
  static kcg_bool _L270_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::m_trackcond_int */
  static kcg_int _35_m_trackcond_int;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::error */
  static kcg_bool error36;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::then::_L2 */
  static kcg_int _L267_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L466_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::m_trackcond_int */
  static kcg_int _37_m_trackcond_int;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::error */
  static kcg_bool error38;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::else::else::else::else::else::else::else */
  static kcg_bool _44_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::m_trackcond_int */
  static kcg_int _27_m_trackcond_int;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::error */
  static kcg_bool error28;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::else::else::else::else::else::else::then::_L2 */
  static kcg_int _L263_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L462_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::m_trackcond_int */
  static kcg_int _29_m_trackcond_int;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::error */
  static kcg_bool error30;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _46_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::m_trackcond_int */
  static kcg_int _19_m_trackcond_int;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::error */
  static kcg_bool error20;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::else::else::else::else::then::_L2 */
  static kcg_int _L259_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::else::else::else::else::then::_L4 */
  static kcg_bool _L458_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::m_trackcond_int */
  static kcg_int _21_m_trackcond_int;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::error */
  static kcg_bool error22;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::else::else::else */
  static kcg_bool _48_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::m_trackcond_int */
  static kcg_int _11_m_trackcond_int;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::error */
  static kcg_bool error12;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::else::else::then::_L2 */
  static kcg_int _L255_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::else::else::then::_L4 */
  static kcg_bool _L454_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::m_trackcond_int */
  static kcg_int _13_m_trackcond_int;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::error */
  static kcg_bool error14;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::else */
  static kcg_bool _50_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::m_trackcond_int */
  static kcg_int _3_m_trackcond_int;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::error */
  static kcg_bool error4;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::then::_L3 */
  static kcg_int _L3_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::then::_L5 */
  static kcg_bool _L552_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::m_trackcond_int */
  static kcg_int _5_m_trackcond_int;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::error */
  static kcg_bool error6;
  static kcg_bool noname;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::m_trackcond_in */
  static M_TRACKCOND m_trackcond_in;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::error */
  static kcg_bool error71;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::_L4 */
  static M_TRACKCOND _L4;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::_L5 */
  static kcg_bool _L5;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::m_trackcond_int */
  static kcg_int _72_m_trackcond_int;
  
  _L4 = m_trackcond;
  m_trackcond_in = _L4;
  IfBlock1_clock = m_trackcond_in ==
    ENUM_M_TRACKCOND_Air_tightness_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L4_IfBlock1 = INT_M_TRACKCOND_Air_tightness_TM_conversions;
    _1_m_trackcond_int = _L4_IfBlock1;
    _72_m_trackcond_int = _1_m_trackcond_int;
    _L5_IfBlock1 = kcg_false;
    error2 = _L5_IfBlock1;
    error71 = error2;
  }
  else {
    _51_else_clock_IfBlock1 = m_trackcond_in ==
      ENUM_M_TRACKCOND_Non_stopping_area_TM_conversions;
    /* ck_anon_activ */ if (_51_else_clock_IfBlock1) {
      _L3_IfBlock1 = INT_M_TRACKCOND_Non_stopping_area_TM_conversions;
      _5_m_trackcond_int = _L3_IfBlock1;
      m_trackcond_int = _5_m_trackcond_int;
    }
    else {
      _50_else_clock_IfBlock1 = m_trackcond_in ==
        ENUM_M_TRACKCOND_Powerless_section_Lower_pantograph_TM_conversions;
      /* ck_anon_activ */ if (_50_else_clock_IfBlock1) {
        _L2_IfBlock1 =
          INT_M_TRACKCOND_Powerless_section_Lower_pantograph_TM_conversions;
        _9_m_trackcond_int = _L2_IfBlock1;
        _3_m_trackcond_int = _9_m_trackcond_int;
      }
      else {
        _49_else_clock_IfBlock1 = m_trackcond_in ==
          ENUM_M_TRACKCOND_Powerless_section_switch_off_the_main_power_switch_TM_conversions;
        /* ck_anon_activ */ if (_49_else_clock_IfBlock1) {
          _L255_IfBlock1 =
            INT_M_TRACKCOND_Powerless_section_switch_off_the_main_power_switch_TM_conversions;
          _13_m_trackcond_int = _L255_IfBlock1;
          _7_m_trackcond_int = _13_m_trackcond_int;
        }
        else {
          _48_else_clock_IfBlock1 = m_trackcond_in ==
            ENUM_M_TRACKCOND_Radio_hole_stop_supervising_T_NVCONTACT_TM_conversions;
          /* ck_anon_activ */ if (_48_else_clock_IfBlock1) {
            _L257_IfBlock1 =
              INT_M_TRACKCOND_Radio_hole_stop_supervising_T_NVCONTACT_TM_conversions;
            _17_m_trackcond_int = _L257_IfBlock1;
            _11_m_trackcond_int = _17_m_trackcond_int;
          }
          else {
            _47_else_clock_IfBlock1 = m_trackcond_in ==
              ENUM_M_TRACKCOND_Sound_horn_TM_conversions;
            /* ck_anon_activ */ if (_47_else_clock_IfBlock1) {
              _L259_IfBlock1 = INT_M_TRACKCOND_Sound_horn_TM_conversions;
              _21_m_trackcond_int = _L259_IfBlock1;
              _15_m_trackcond_int = _21_m_trackcond_int;
            }
            else {
              _46_else_clock_IfBlock1 = m_trackcond_in ==
                ENUM_M_TRACKCOND_Switch_off_eddy_current_brake_for_emergency_brake_TM_conversions;
              /* ck_anon_activ */ if (_46_else_clock_IfBlock1) {
                _L261_IfBlock1 =
                  INT_M_TRACKCOND_Switch_off_eddy_current_brake_for_emergency_brake_TM_conversions;
                _25_m_trackcond_int = _L261_IfBlock1;
                _19_m_trackcond_int = _25_m_trackcond_int;
              }
              else {
                _45_else_clock_IfBlock1 = m_trackcond_in ==
                  ENUM_M_TRACKCOND_Switch_off_eddy_current_brake_for_service_brake_TM_conversions;
                /* ck_anon_activ */ if (_45_else_clock_IfBlock1) {
                  _L263_IfBlock1 =
                    INT_M_TRACKCOND_Switch_off_eddy_current_brake_for_service_brake_TM_conversions;
                  _29_m_trackcond_int = _L263_IfBlock1;
                  _23_m_trackcond_int = _29_m_trackcond_int;
                }
                else {
                  _44_else_clock_IfBlock1 = m_trackcond_in ==
                    ENUM_M_TRACKCOND_Switch_off_magnetic_shoe_brake_TM_conversions;
                  /* ck_anon_activ */ if (_44_else_clock_IfBlock1) {
                    _L365_IfBlock1 =
                      INT_M_TRACKCOND_Switch_off_magnetic_shoe_brake_TM_conversions;
                    _33_m_trackcond_int = _L365_IfBlock1;
                    _27_m_trackcond_int = _33_m_trackcond_int;
                  }
                  else {
                    _43_else_clock_IfBlock1 = m_trackcond_in ==
                      ENUM_M_TRACKCOND_Switch_off_regenerative_brake_TM_conversions;
                    /* ck_anon_activ */ if (_43_else_clock_IfBlock1) {
                      _L267_IfBlock1 =
                        INT_M_TRACKCOND_Switch_off_regenerative_brake_TM_conversions;
                      _37_m_trackcond_int = _L267_IfBlock1;
                      _31_m_trackcond_int = _37_m_trackcond_int;
                    }
                    else {
                      else_clock_IfBlock1 = m_trackcond_in ==
                        ENUM_M_TRACKCOND_Tunnel_stopping_area_TM_conversions;
                      /* ck_anon_activ */ if (else_clock_IfBlock1) {
                        _L268_IfBlock1 =
                          INT_M_TRACKCOND_Tunnel_stopping_area_TM_conversions;
                        _41_m_trackcond_int = _L268_IfBlock1;
                        _35_m_trackcond_int = _41_m_trackcond_int;
                      }
                      else {
                        _L169_IfBlock1 =
                          INT_M_TRACKCOND_Non_stopping_area_TM_conversions;
                        _39_m_trackcond_int = _L169_IfBlock1;
                        _35_m_trackcond_int = _39_m_trackcond_int;
                      }
                      _31_m_trackcond_int = _35_m_trackcond_int;
                    }
                    _27_m_trackcond_int = _31_m_trackcond_int;
                  }
                  _23_m_trackcond_int = _27_m_trackcond_int;
                }
                _19_m_trackcond_int = _23_m_trackcond_int;
              }
              _15_m_trackcond_int = _19_m_trackcond_int;
            }
            _11_m_trackcond_int = _15_m_trackcond_int;
          }
          _7_m_trackcond_int = _11_m_trackcond_int;
        }
        _3_m_trackcond_int = _7_m_trackcond_int;
      }
      m_trackcond_int = _3_m_trackcond_int;
    }
    _72_m_trackcond_int = m_trackcond_int;
    /* ck_anon_activ */ if (_51_else_clock_IfBlock1) {
      _L552_IfBlock1 = kcg_false;
      error6 = _L552_IfBlock1;
      error = error6;
    }
    else {
      /* ck_anon_activ */ if (_50_else_clock_IfBlock1) {
        _L453_IfBlock1 = kcg_false;
        error10 = _L453_IfBlock1;
        error4 = error10;
      }
      else {
        /* ck_anon_activ */ if (_49_else_clock_IfBlock1) {
          _L454_IfBlock1 = kcg_false;
          error14 = _L454_IfBlock1;
          error8 = error14;
        }
        else {
          /* ck_anon_activ */ if (_48_else_clock_IfBlock1) {
            _L456_IfBlock1 = kcg_false;
            error18 = _L456_IfBlock1;
            error12 = error18;
          }
          else {
            /* ck_anon_activ */ if (_47_else_clock_IfBlock1) {
              _L458_IfBlock1 = kcg_false;
              error22 = _L458_IfBlock1;
              error16 = error22;
            }
            else {
              /* ck_anon_activ */ if (_46_else_clock_IfBlock1) {
                _L460_IfBlock1 = kcg_false;
                error26 = _L460_IfBlock1;
                error20 = error26;
              }
              else {
                /* ck_anon_activ */ if (_45_else_clock_IfBlock1) {
                  _L462_IfBlock1 = kcg_false;
                  error30 = _L462_IfBlock1;
                  error24 = error30;
                }
                else {
                  /* ck_anon_activ */ if (_44_else_clock_IfBlock1) {
                    _L564_IfBlock1 = kcg_false;
                    error34 = _L564_IfBlock1;
                    error28 = error34;
                  }
                  else {
                    /* ck_anon_activ */ if (_43_else_clock_IfBlock1) {
                      _L466_IfBlock1 = kcg_false;
                      error38 = _L466_IfBlock1;
                      error32 = error38;
                    }
                    else {
                      /* ck_anon_activ */ if (else_clock_IfBlock1) {
                        _L1_IfBlock1 = kcg_false;
                        error42 = _L1_IfBlock1;
                        error36 = error42;
                      }
                      else {
                        _L270_IfBlock1 = kcg_true;
                        error40 = _L270_IfBlock1;
                        error36 = error40;
                      }
                      error32 = error36;
                    }
                    error28 = error32;
                  }
                  error24 = error28;
                }
                error20 = error24;
              }
              error16 = error20;
            }
            error12 = error16;
          }
          error8 = error12;
        }
        error4 = error8;
      }
      error = error4;
    }
    error71 = error;
  }
  _L5 = error71;
  noname = _L5;
  return _72_m_trackcond_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_M_TRACKCOND_to_int_TM_conversions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

