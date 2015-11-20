/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_M_MODE_to_int_TM_conversions.h"

/* TM_conversions::CAST_M_MODE_to_int */
kcg_int CAST_M_MODE_to_int_TM_conversions(
  /* TM_conversions::CAST_M_MODE_to_int::m_mode */ M_MODE m_mode)
{
  /* TM_conversions::CAST_M_MODE_to_int::error */
  static kcg_bool error2;
  /* TM_conversions::CAST_M_MODE_to_int::m_mode_int */
  static kcg_int _1_m_mode_int;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::then::_L5 */
  static kcg_bool _L5_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::then::_L4 */
  static kcg_int _L4_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::error */
  static kcg_bool error;
  /* TM_conversions::CAST_M_MODE_to_int::m_mode_int */
  static kcg_int m_mode_int;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else */
  static kcg_bool _76_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::error */
  static kcg_bool error10;
  /* TM_conversions::CAST_M_MODE_to_int::m_mode_int */
  static kcg_int _9_m_mode_int;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::then::_L4 */
  static kcg_bool _L478_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::then::_L2 */
  static kcg_int _L2_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::error */
  static kcg_bool error8;
  /* TM_conversions::CAST_M_MODE_to_int::m_mode_int */
  static kcg_int _7_m_mode_int;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else */
  static kcg_bool _74_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::error */
  static kcg_bool error18;
  /* TM_conversions::CAST_M_MODE_to_int::m_mode_int */
  static kcg_int _17_m_mode_int;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::then::_L4 */
  static kcg_bool _L481_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::then::_L2 */
  static kcg_int _L282_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::error */
  static kcg_bool error16;
  /* TM_conversions::CAST_M_MODE_to_int::m_mode_int */
  static kcg_int _15_m_mode_int;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else */
  static kcg_bool _72_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::error */
  static kcg_bool error26;
  /* TM_conversions::CAST_M_MODE_to_int::m_mode_int */
  static kcg_int _25_m_mode_int;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L485_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::then::_L2 */
  static kcg_int _L286_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::error */
  static kcg_bool error24;
  /* TM_conversions::CAST_M_MODE_to_int::m_mode_int */
  static kcg_int _23_m_mode_int;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::else */
  static kcg_bool _70_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::error */
  static kcg_bool error34;
  /* TM_conversions::CAST_M_MODE_to_int::m_mode_int */
  static kcg_int _33_m_mode_int;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::else::else::then::_L5 */
  static kcg_bool _L589_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::else::else::then::_L3 */
  static kcg_int _L390_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::error */
  static kcg_bool error32;
  /* TM_conversions::CAST_M_MODE_to_int::m_mode_int */
  static kcg_int _31_m_mode_int;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::else::else::else */
  static kcg_bool _68_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::error */
  static kcg_bool error42;
  /* TM_conversions::CAST_M_MODE_to_int::m_mode_int */
  static kcg_int _41_m_mode_int;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L1 */
  static kcg_bool _L1_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L2 */
  static kcg_int _L293_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::error */
  static kcg_bool error40;
  /* TM_conversions::CAST_M_MODE_to_int::m_mode_int */
  static kcg_int _39_m_mode_int;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _66_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::error */
  static kcg_bool error50;
  /* TM_conversions::CAST_M_MODE_to_int::m_mode_int */
  static kcg_int _49_m_mode_int;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::then::_L1 */
  static kcg_bool _L196_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::then::_L2 */
  static kcg_int _L297_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::error */
  static kcg_bool error48;
  /* TM_conversions::CAST_M_MODE_to_int::m_mode_int */
  static kcg_int _47_m_mode_int;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _64_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::error */
  static kcg_bool error58;
  /* TM_conversions::CAST_M_MODE_to_int::m_mode_int */
  static kcg_int _57_m_mode_int;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L2 */
  static kcg_bool _L2100_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L3 */
  static kcg_int _L3101_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::error */
  static kcg_bool error56;
  /* TM_conversions::CAST_M_MODE_to_int::m_mode_int */
  static kcg_int _55_m_mode_int;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::_L6 */
  static kcg_bool _L6_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::_L7 */
  static kcg_int _L7_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::m_mode_int */
  static kcg_int _59_m_mode_int;
  /* TM_conversions::CAST_M_MODE_to_int::error */
  static kcg_bool error60;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L1 */
  static kcg_int _L1103_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L2 */
  static kcg_bool _L2102_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::m_mode_int */
  static kcg_int _61_m_mode_int;
  /* TM_conversions::CAST_M_MODE_to_int::error */
  static kcg_bool error62;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _63_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::m_mode_int */
  static kcg_int _51_m_mode_int;
  /* TM_conversions::CAST_M_MODE_to_int::error */
  static kcg_bool error52;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L3 */
  static kcg_int _L399_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L2 */
  static kcg_bool _L298_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::m_mode_int */
  static kcg_int _53_m_mode_int;
  /* TM_conversions::CAST_M_MODE_to_int::error */
  static kcg_bool error54;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _65_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::m_mode_int */
  static kcg_int _43_m_mode_int;
  /* TM_conversions::CAST_M_MODE_to_int::error */
  static kcg_bool error44;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L495_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::then::_L3 */
  static kcg_int _L394_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::m_mode_int */
  static kcg_int _45_m_mode_int;
  /* TM_conversions::CAST_M_MODE_to_int::error */
  static kcg_bool error46;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _67_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::m_mode_int */
  static kcg_int _35_m_mode_int;
  /* TM_conversions::CAST_M_MODE_to_int::error */
  static kcg_bool error36;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::then::_L2 */
  static kcg_int _L292_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L491_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::m_mode_int */
  static kcg_int _37_m_mode_int;
  /* TM_conversions::CAST_M_MODE_to_int::error */
  static kcg_bool error38;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::else::else */
  static kcg_bool _69_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::m_mode_int */
  static kcg_int _27_m_mode_int;
  /* TM_conversions::CAST_M_MODE_to_int::error */
  static kcg_bool error28;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::else::then::_L2 */
  static kcg_int _L288_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L487_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::m_mode_int */
  static kcg_int _29_m_mode_int;
  /* TM_conversions::CAST_M_MODE_to_int::error */
  static kcg_bool error30;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _71_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::m_mode_int */
  static kcg_int _19_m_mode_int;
  /* TM_conversions::CAST_M_MODE_to_int::error */
  static kcg_bool error20;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::then::_L2 */
  static kcg_int _L284_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::then::_L4 */
  static kcg_bool _L483_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::m_mode_int */
  static kcg_int _21_m_mode_int;
  /* TM_conversions::CAST_M_MODE_to_int::error */
  static kcg_bool error22;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else */
  static kcg_bool _73_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::m_mode_int */
  static kcg_int _11_m_mode_int;
  /* TM_conversions::CAST_M_MODE_to_int::error */
  static kcg_bool error12;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::then::_L2 */
  static kcg_int _L280_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::then::_L4 */
  static kcg_bool _L479_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::m_mode_int */
  static kcg_int _13_m_mode_int;
  /* TM_conversions::CAST_M_MODE_to_int::error */
  static kcg_bool error14;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else */
  static kcg_bool _75_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::m_mode_int */
  static kcg_int _3_m_mode_int;
  /* TM_conversions::CAST_M_MODE_to_int::error */
  static kcg_bool error4;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::then::_L3 */
  static kcg_int _L3_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::then::_L5 */
  static kcg_bool _L577_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::m_mode_int */
  static kcg_int _5_m_mode_int;
  /* TM_conversions::CAST_M_MODE_to_int::error */
  static kcg_bool error6;
  static kcg_bool noname;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_M_MODE_to_int::m_mode_in */
  static M_MODE m_mode_in;
  /* TM_conversions::CAST_M_MODE_to_int::error */
  static kcg_bool error104;
  /* TM_conversions::CAST_M_MODE_to_int::_L4 */
  static M_MODE _L4;
  /* TM_conversions::CAST_M_MODE_to_int::_L5 */
  static kcg_bool _L5;
  /* TM_conversions::CAST_M_MODE_to_int::m_mode_int */
  static kcg_int _105_m_mode_int;
  
  _L4 = m_mode;
  m_mode_in = _L4;
  IfBlock1_clock = m_mode_in == ENUM_M_MODE_Full_Supervision_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L4_IfBlock1 = INT_M_MODE_Full_Supervision_TM_conversions;
    _1_m_mode_int = _L4_IfBlock1;
    _105_m_mode_int = _1_m_mode_int;
    _L5_IfBlock1 = kcg_false;
    error2 = _L5_IfBlock1;
    error104 = error2;
  }
  else {
    _76_else_clock_IfBlock1 = m_mode_in == ENUM_M_MODE_Isolation_TM_conversions;
    /* ck_anon_activ */ if (_76_else_clock_IfBlock1) {
      _L3_IfBlock1 = INT_M_MODE_Isolation_TM_conversions;
      _5_m_mode_int = _L3_IfBlock1;
      m_mode_int = _5_m_mode_int;
    }
    else {
      _75_else_clock_IfBlock1 = m_mode_in ==
        ENUM_M_MODE_Limited_Supervision_TM_conversions;
      /* ck_anon_activ */ if (_75_else_clock_IfBlock1) {
        _L2_IfBlock1 = INT_M_MODE_Limited_Supervision_TM_conversions;
        _9_m_mode_int = _L2_IfBlock1;
        _3_m_mode_int = _9_m_mode_int;
      }
      else {
        _74_else_clock_IfBlock1 = m_mode_in ==
          ENUM_M_MODE_National_System_TM_conversions;
        /* ck_anon_activ */ if (_74_else_clock_IfBlock1) {
          _L280_IfBlock1 = INT_M_MODE_National_System_TM_conversions;
          _13_m_mode_int = _L280_IfBlock1;
          _7_m_mode_int = _13_m_mode_int;
        }
        else {
          _73_else_clock_IfBlock1 = m_mode_in ==
            ENUM_M_MODE_Non_Leading_TM_conversions;
          /* ck_anon_activ */ if (_73_else_clock_IfBlock1) {
            _L282_IfBlock1 = INT_M_MODE_Non_Leading_TM_conversions;
            _17_m_mode_int = _L282_IfBlock1;
            _11_m_mode_int = _17_m_mode_int;
          }
          else {
            _72_else_clock_IfBlock1 = m_mode_in ==
              ENUM_M_MODE_On_Sight_TM_conversions;
            /* ck_anon_activ */ if (_72_else_clock_IfBlock1) {
              _L284_IfBlock1 = INT_M_MODE_On_Sight_TM_conversions;
              _21_m_mode_int = _L284_IfBlock1;
              _15_m_mode_int = _21_m_mode_int;
            }
            else {
              _71_else_clock_IfBlock1 = m_mode_in ==
                ENUM_M_MODE_Passive_Shunting_TM_conversions;
              /* ck_anon_activ */ if (_71_else_clock_IfBlock1) {
                _L286_IfBlock1 = INT_M_MODE_Passive_Shunting_TM_conversions;
                _25_m_mode_int = _L286_IfBlock1;
                _19_m_mode_int = _25_m_mode_int;
              }
              else {
                _70_else_clock_IfBlock1 = m_mode_in ==
                  ENUM_M_MODE_Post_Trip_TM_conversions;
                /* ck_anon_activ */ if (_70_else_clock_IfBlock1) {
                  _L288_IfBlock1 = INT_M_MODE_Post_Trip_TM_conversions;
                  _29_m_mode_int = _L288_IfBlock1;
                  _23_m_mode_int = _29_m_mode_int;
                }
                else {
                  _69_else_clock_IfBlock1 = m_mode_in ==
                    ENUM_M_MODE_Reversing_TM_conversions;
                  /* ck_anon_activ */ if (_69_else_clock_IfBlock1) {
                    _L390_IfBlock1 = INT_M_MODE_Reversing_TM_conversions;
                    _33_m_mode_int = _L390_IfBlock1;
                    _27_m_mode_int = _33_m_mode_int;
                  }
                  else {
                    _68_else_clock_IfBlock1 = m_mode_in ==
                      ENUM_M_MODE_Shunting_TM_conversions;
                    /* ck_anon_activ */ if (_68_else_clock_IfBlock1) {
                      _L292_IfBlock1 = INT_M_MODE_Shunting_TM_conversions;
                      _37_m_mode_int = _L292_IfBlock1;
                      _31_m_mode_int = _37_m_mode_int;
                    }
                    else {
                      _67_else_clock_IfBlock1 = m_mode_in ==
                        ENUM_M_MODE_Sleeping_TM_conversions;
                      /* ck_anon_activ */ if (_67_else_clock_IfBlock1) {
                        _L293_IfBlock1 = INT_M_MODE_Sleeping_TM_conversions;
                        _41_m_mode_int = _L293_IfBlock1;
                        _35_m_mode_int = _41_m_mode_int;
                      }
                      else {
                        _66_else_clock_IfBlock1 = m_mode_in ==
                          ENUM_M_MODE_Staff_Responsible_TM_conversions;
                        /* ck_anon_activ */ if (_66_else_clock_IfBlock1) {
                          _L394_IfBlock1 =
                            INT_M_MODE_Staff_Responsible_TM_conversions;
                          _45_m_mode_int = _L394_IfBlock1;
                          _39_m_mode_int = _45_m_mode_int;
                        }
                        else {
                          _65_else_clock_IfBlock1 = m_mode_in ==
                            ENUM_M_MODE_Stand_By_TM_conversions;
                          /* ck_anon_activ */ if (_65_else_clock_IfBlock1) {
                            _L297_IfBlock1 = INT_M_MODE_Stand_By_TM_conversions;
                            _49_m_mode_int = _L297_IfBlock1;
                            _43_m_mode_int = _49_m_mode_int;
                          }
                          else {
                            _64_else_clock_IfBlock1 = m_mode_in ==
                              ENUM_M_MODE_System_Failure_TM_conversions;
                            /* ck_anon_activ */ if (_64_else_clock_IfBlock1) {
                              _L399_IfBlock1 =
                                INT_M_MODE_System_Failure_TM_conversions;
                              _53_m_mode_int = _L399_IfBlock1;
                              _47_m_mode_int = _53_m_mode_int;
                            }
                            else {
                              _63_else_clock_IfBlock1 = m_mode_in ==
                                ENUM_M_MODE_Trip_TM_conversions;
                              /* ck_anon_activ */ if (_63_else_clock_IfBlock1) {
                                _L3101_IfBlock1 =
                                  INT_M_MODE_Trip_TM_conversions;
                                _57_m_mode_int = _L3101_IfBlock1;
                                _51_m_mode_int = _57_m_mode_int;
                              }
                              else {
                                else_clock_IfBlock1 = m_mode_in ==
                                  ENUM_M_MODE_Unfitted_TM_conversions;
                                /* ck_anon_activ */ if (else_clock_IfBlock1) {
                                  _L1103_IfBlock1 =
                                    INT_M_MODE_Unfitted_TM_conversions;
                                  _61_m_mode_int = _L1103_IfBlock1;
                                  _55_m_mode_int = _61_m_mode_int;
                                }
                                else {
                                  _L7_IfBlock1 =
                                    INT_M_MODE_System_Failure_TM_conversions;
                                  _59_m_mode_int = _L7_IfBlock1;
                                  _55_m_mode_int = _59_m_mode_int;
                                }
                                _51_m_mode_int = _55_m_mode_int;
                              }
                              _47_m_mode_int = _51_m_mode_int;
                            }
                            _43_m_mode_int = _47_m_mode_int;
                          }
                          _39_m_mode_int = _43_m_mode_int;
                        }
                        _35_m_mode_int = _39_m_mode_int;
                      }
                      _31_m_mode_int = _35_m_mode_int;
                    }
                    _27_m_mode_int = _31_m_mode_int;
                  }
                  _23_m_mode_int = _27_m_mode_int;
                }
                _19_m_mode_int = _23_m_mode_int;
              }
              _15_m_mode_int = _19_m_mode_int;
            }
            _11_m_mode_int = _15_m_mode_int;
          }
          _7_m_mode_int = _11_m_mode_int;
        }
        _3_m_mode_int = _7_m_mode_int;
      }
      m_mode_int = _3_m_mode_int;
    }
    _105_m_mode_int = m_mode_int;
    /* ck_anon_activ */ if (_76_else_clock_IfBlock1) {
      _L577_IfBlock1 = kcg_false;
      error6 = _L577_IfBlock1;
      error = error6;
    }
    else {
      /* ck_anon_activ */ if (_75_else_clock_IfBlock1) {
        _L478_IfBlock1 = kcg_false;
        error10 = _L478_IfBlock1;
        error4 = error10;
      }
      else {
        /* ck_anon_activ */ if (_74_else_clock_IfBlock1) {
          _L479_IfBlock1 = kcg_false;
          error14 = _L479_IfBlock1;
          error8 = error14;
        }
        else {
          /* ck_anon_activ */ if (_73_else_clock_IfBlock1) {
            _L481_IfBlock1 = kcg_false;
            error18 = _L481_IfBlock1;
            error12 = error18;
          }
          else {
            /* ck_anon_activ */ if (_72_else_clock_IfBlock1) {
              _L483_IfBlock1 = kcg_false;
              error22 = _L483_IfBlock1;
              error16 = error22;
            }
            else {
              /* ck_anon_activ */ if (_71_else_clock_IfBlock1) {
                _L485_IfBlock1 = kcg_false;
                error26 = _L485_IfBlock1;
                error20 = error26;
              }
              else {
                /* ck_anon_activ */ if (_70_else_clock_IfBlock1) {
                  _L487_IfBlock1 = kcg_false;
                  error30 = _L487_IfBlock1;
                  error24 = error30;
                }
                else {
                  /* ck_anon_activ */ if (_69_else_clock_IfBlock1) {
                    _L589_IfBlock1 = kcg_false;
                    error34 = _L589_IfBlock1;
                    error28 = error34;
                  }
                  else {
                    /* ck_anon_activ */ if (_68_else_clock_IfBlock1) {
                      _L491_IfBlock1 = kcg_false;
                      error38 = _L491_IfBlock1;
                      error32 = error38;
                    }
                    else {
                      /* ck_anon_activ */ if (_67_else_clock_IfBlock1) {
                        _L1_IfBlock1 = kcg_false;
                        error42 = _L1_IfBlock1;
                        error36 = error42;
                      }
                      else {
                        /* ck_anon_activ */ if (_66_else_clock_IfBlock1) {
                          _L495_IfBlock1 = kcg_false;
                          error46 = _L495_IfBlock1;
                          error40 = error46;
                        }
                        else {
                          /* ck_anon_activ */ if (_65_else_clock_IfBlock1) {
                            _L196_IfBlock1 = kcg_false;
                            error50 = _L196_IfBlock1;
                            error44 = error50;
                          }
                          else {
                            /* ck_anon_activ */ if (_64_else_clock_IfBlock1) {
                              _L298_IfBlock1 = kcg_false;
                              error54 = _L298_IfBlock1;
                              error48 = error54;
                            }
                            else {
                              /* ck_anon_activ */ if (_63_else_clock_IfBlock1) {
                                _L2100_IfBlock1 = kcg_false;
                                error58 = _L2100_IfBlock1;
                                error52 = error58;
                              }
                              else {
                                /* ck_anon_activ */ if (else_clock_IfBlock1) {
                                  _L2102_IfBlock1 = kcg_false;
                                  error62 = _L2102_IfBlock1;
                                  error56 = error62;
                                }
                                else {
                                  _L6_IfBlock1 = kcg_true;
                                  error60 = _L6_IfBlock1;
                                  error56 = error60;
                                }
                                error52 = error56;
                              }
                              error48 = error52;
                            }
                            error44 = error48;
                          }
                          error40 = error44;
                        }
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
    error104 = error;
  }
  _L5 = error104;
  noname = _L5;
  return _105_m_mode_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_M_MODE_to_int_TM_conversions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

