/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_TRACKCOND_TM_conversions.h"

/* TM_conversions::CAST_Int_to_M_TRACKCOND */
M_TRACKCOND CAST_Int_to_M_TRACKCOND_TM_conversions(
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::m_trackcond_int */ kcg_int m_trackcond_int)
{
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::error */
  static kcg_bool error2;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::m_trackcond */
  static M_TRACKCOND _1_m_trackcond;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::IfBlock1::then::_L5 */
  static kcg_bool _L5_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::IfBlock1::then::_L4 */
  static M_TRACKCOND _L4_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::error */
  static kcg_bool error;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::m_trackcond */
  static M_TRACKCOND m_trackcond;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::IfBlock1::else */
  static kcg_bool _51_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::error */
  static kcg_bool error10;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::m_trackcond */
  static M_TRACKCOND _9_m_trackcond;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::IfBlock1::else::else::then::_L4 */
  static kcg_bool _L453_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::IfBlock1::else::else::then::_L2 */
  static M_TRACKCOND _L2_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::error */
  static kcg_bool error8;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::m_trackcond */
  static M_TRACKCOND _7_m_trackcond;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::IfBlock1::else::else::else */
  static kcg_bool _49_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::error */
  static kcg_bool error18;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::m_trackcond */
  static M_TRACKCOND _17_m_trackcond;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::IfBlock1::else::else::else::else::then::_L4 */
  static kcg_bool _L456_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::IfBlock1::else::else::else::else::then::_L2 */
  static M_TRACKCOND _L257_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::error */
  static kcg_bool error16;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::m_trackcond */
  static M_TRACKCOND _15_m_trackcond;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::IfBlock1::else::else::else::else::else */
  static kcg_bool _47_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::error */
  static kcg_bool error26;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::m_trackcond */
  static M_TRACKCOND _25_m_trackcond;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::IfBlock1::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L460_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::IfBlock1::else::else::else::else::else::else::then::_L2 */
  static M_TRACKCOND _L261_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::error */
  static kcg_bool error24;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::m_trackcond */
  static M_TRACKCOND _23_m_trackcond;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::IfBlock1::else::else::else::else::else::else::else */
  static kcg_bool _45_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::error */
  static kcg_bool error34;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::m_trackcond */
  static M_TRACKCOND _33_m_trackcond;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::IfBlock1::else::else::else::else::else::else::else::else::then::_L5 */
  static kcg_bool _L564_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::IfBlock1::else::else::else::else::else::else::else::else::then::_L3 */
  static M_TRACKCOND _L365_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::error */
  static kcg_bool error32;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::m_trackcond */
  static M_TRACKCOND _31_m_trackcond;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::IfBlock1::else::else::else::else::else::else::else::else::else */
  static kcg_bool _43_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::error */
  static kcg_bool error42;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::m_trackcond */
  static M_TRACKCOND _41_m_trackcond;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L1 */
  static kcg_bool _L1_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L2 */
  static M_TRACKCOND _L268_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::error */
  static kcg_bool error40;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::m_trackcond */
  static M_TRACKCOND _39_m_trackcond;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::_L1 */
  static M_TRACKCOND _L169_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::_L2 */
  static kcg_bool _L270_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::IfBlock1::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::m_trackcond */
  static M_TRACKCOND _35_m_trackcond;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::error */
  static kcg_bool error36;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::IfBlock1::else::else::else::else::else::else::else::else::else::then::_L2 */
  static M_TRACKCOND _L267_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::IfBlock1::else::else::else::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L466_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::m_trackcond */
  static M_TRACKCOND _37_m_trackcond;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::error */
  static kcg_bool error38;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::IfBlock1::else::else::else::else::else::else::else::else */
  static kcg_bool _44_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::m_trackcond */
  static M_TRACKCOND _27_m_trackcond;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::error */
  static kcg_bool error28;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::IfBlock1::else::else::else::else::else::else::else::then::_L2 */
  static M_TRACKCOND _L263_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::IfBlock1::else::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L462_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::m_trackcond */
  static M_TRACKCOND _29_m_trackcond;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::error */
  static kcg_bool error30;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _46_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::m_trackcond */
  static M_TRACKCOND _19_m_trackcond;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::error */
  static kcg_bool error20;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::IfBlock1::else::else::else::else::else::then::_L2 */
  static M_TRACKCOND _L259_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::IfBlock1::else::else::else::else::else::then::_L4 */
  static kcg_bool _L458_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::m_trackcond */
  static M_TRACKCOND _21_m_trackcond;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::error */
  static kcg_bool error22;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::IfBlock1::else::else::else::else */
  static kcg_bool _48_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::m_trackcond */
  static M_TRACKCOND _11_m_trackcond;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::error */
  static kcg_bool error12;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::IfBlock1::else::else::else::then::_L2 */
  static M_TRACKCOND _L255_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::IfBlock1::else::else::else::then::_L4 */
  static kcg_bool _L454_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::m_trackcond */
  static M_TRACKCOND _13_m_trackcond;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::error */
  static kcg_bool error14;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::IfBlock1::else::else */
  static kcg_bool _50_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::m_trackcond */
  static M_TRACKCOND _3_m_trackcond;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::error */
  static kcg_bool error4;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::IfBlock1::else::then::_L3 */
  static M_TRACKCOND _L3_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::IfBlock1::else::then::_L5 */
  static kcg_bool _L552_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::m_trackcond */
  static M_TRACKCOND _5_m_trackcond;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::error */
  static kcg_bool error6;
  static kcg_bool noname;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::m_trackcond_in */
  static kcg_int m_trackcond_in;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::error */
  static kcg_bool error71;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::_L4 */
  static kcg_int _L4;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::_L5 */
  static kcg_bool _L5;
  /* TM_conversions::CAST_Int_to_M_TRACKCOND::m_trackcond */
  static M_TRACKCOND _72_m_trackcond;
  
  _L4 = m_trackcond_int;
  m_trackcond_in = _L4;
  IfBlock1_clock = m_trackcond_in ==
    INT_M_TRACKCOND_Air_tightness_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L4_IfBlock1 = ENUM_M_TRACKCOND_Air_tightness_TM_conversions;
    _1_m_trackcond = _L4_IfBlock1;
    _72_m_trackcond = _1_m_trackcond;
    _L5_IfBlock1 = kcg_false;
    error2 = _L5_IfBlock1;
    error71 = error2;
  }
  else {
    _51_else_clock_IfBlock1 = m_trackcond_in ==
      INT_M_TRACKCOND_Non_stopping_area_TM_conversions;
    /* ck_anon_activ */ if (_51_else_clock_IfBlock1) {
      _L3_IfBlock1 = ENUM_M_TRACKCOND_Non_stopping_area_TM_conversions;
      _5_m_trackcond = _L3_IfBlock1;
      m_trackcond = _5_m_trackcond;
    }
    else {
      _50_else_clock_IfBlock1 = m_trackcond_in ==
        INT_M_TRACKCOND_Powerless_section_Lower_pantograph_TM_conversions;
      /* ck_anon_activ */ if (_50_else_clock_IfBlock1) {
        _L2_IfBlock1 =
          ENUM_M_TRACKCOND_Powerless_section_Lower_pantograph_TM_conversions;
        _9_m_trackcond = _L2_IfBlock1;
        _3_m_trackcond = _9_m_trackcond;
      }
      else {
        _49_else_clock_IfBlock1 = m_trackcond_in ==
          INT_M_TRACKCOND_Powerless_section_switch_off_the_main_power_switch_TM_conversions;
        /* ck_anon_activ */ if (_49_else_clock_IfBlock1) {
          _L255_IfBlock1 =
            ENUM_M_TRACKCOND_Powerless_section_switch_off_the_main_power_switch_TM_conversions;
          _13_m_trackcond = _L255_IfBlock1;
          _7_m_trackcond = _13_m_trackcond;
        }
        else {
          _48_else_clock_IfBlock1 = m_trackcond_in ==
            INT_M_TRACKCOND_Radio_hole_stop_supervising_T_NVCONTACT_TM_conversions;
          /* ck_anon_activ */ if (_48_else_clock_IfBlock1) {
            _L257_IfBlock1 =
              ENUM_M_TRACKCOND_Radio_hole_stop_supervising_T_NVCONTACT_TM_conversions;
            _17_m_trackcond = _L257_IfBlock1;
            _11_m_trackcond = _17_m_trackcond;
          }
          else {
            _47_else_clock_IfBlock1 = m_trackcond_in ==
              INT_M_TRACKCOND_Sound_horn_TM_conversions;
            /* ck_anon_activ */ if (_47_else_clock_IfBlock1) {
              _L259_IfBlock1 = ENUM_M_TRACKCOND_Sound_horn_TM_conversions;
              _21_m_trackcond = _L259_IfBlock1;
              _15_m_trackcond = _21_m_trackcond;
            }
            else {
              _46_else_clock_IfBlock1 = m_trackcond_in ==
                INT_M_TRACKCOND_Switch_off_eddy_current_brake_for_emergency_brake_TM_conversions;
              /* ck_anon_activ */ if (_46_else_clock_IfBlock1) {
                _L261_IfBlock1 =
                  ENUM_M_TRACKCOND_Switch_off_eddy_current_brake_for_emergency_brake_TM_conversions;
                _25_m_trackcond = _L261_IfBlock1;
                _19_m_trackcond = _25_m_trackcond;
              }
              else {
                _45_else_clock_IfBlock1 = m_trackcond_in ==
                  INT_M_TRACKCOND_Switch_off_eddy_current_brake_for_service_brake_TM_conversions;
                /* ck_anon_activ */ if (_45_else_clock_IfBlock1) {
                  _L263_IfBlock1 =
                    ENUM_M_TRACKCOND_Switch_off_eddy_current_brake_for_service_brake_TM_conversions;
                  _29_m_trackcond = _L263_IfBlock1;
                  _23_m_trackcond = _29_m_trackcond;
                }
                else {
                  _44_else_clock_IfBlock1 = m_trackcond_in ==
                    INT_M_TRACKCOND_Switch_off_magnetic_shoe_brake_TM_conversions;
                  /* ck_anon_activ */ if (_44_else_clock_IfBlock1) {
                    _L365_IfBlock1 =
                      ENUM_M_TRACKCOND_Switch_off_magnetic_shoe_brake_TM_conversions;
                    _33_m_trackcond = _L365_IfBlock1;
                    _27_m_trackcond = _33_m_trackcond;
                  }
                  else {
                    _43_else_clock_IfBlock1 = m_trackcond_in ==
                      INT_M_TRACKCOND_Switch_off_regenerative_brake_TM_conversions;
                    /* ck_anon_activ */ if (_43_else_clock_IfBlock1) {
                      _L267_IfBlock1 =
                        ENUM_M_TRACKCOND_Switch_off_regenerative_brake_TM_conversions;
                      _37_m_trackcond = _L267_IfBlock1;
                      _31_m_trackcond = _37_m_trackcond;
                    }
                    else {
                      else_clock_IfBlock1 = m_trackcond_in ==
                        INT_M_TRACKCOND_Tunnel_stopping_area_TM_conversions;
                      /* ck_anon_activ */ if (else_clock_IfBlock1) {
                        _L268_IfBlock1 =
                          ENUM_M_TRACKCOND_Tunnel_stopping_area_TM_conversions;
                        _41_m_trackcond = _L268_IfBlock1;
                        _35_m_trackcond = _41_m_trackcond;
                      }
                      else {
                        _L169_IfBlock1 =
                          ENUM_M_TRACKCOND_Non_stopping_area_TM_conversions;
                        _39_m_trackcond = _L169_IfBlock1;
                        _35_m_trackcond = _39_m_trackcond;
                      }
                      _31_m_trackcond = _35_m_trackcond;
                    }
                    _27_m_trackcond = _31_m_trackcond;
                  }
                  _23_m_trackcond = _27_m_trackcond;
                }
                _19_m_trackcond = _23_m_trackcond;
              }
              _15_m_trackcond = _19_m_trackcond;
            }
            _11_m_trackcond = _15_m_trackcond;
          }
          _7_m_trackcond = _11_m_trackcond;
        }
        _3_m_trackcond = _7_m_trackcond;
      }
      m_trackcond = _3_m_trackcond;
    }
    _72_m_trackcond = m_trackcond;
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
  return _72_m_trackcond;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_M_TRACKCOND_TM_conversions.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

