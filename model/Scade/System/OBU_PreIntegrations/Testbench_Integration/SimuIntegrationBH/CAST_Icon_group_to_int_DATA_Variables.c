/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Icon_group_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_Icon_group_to_int */
Icon_group_INT_T_DATA CAST_Icon_group_to_int_DATA_Variables(
  /* DATA::Variables::CAST_Icon_group_to_int::Input1 */ Icon_group_T_DMI_Types_Pkg Input1)
{
  /* DATA::Variables::CAST_Icon_group_to_int::error */
  static kcg_bool error2;
  /* DATA::Variables::CAST_Icon_group_to_int::Output1 */
  static Icon_group_INT_T_DATA _1_Output1;
  /* DATA::Variables::CAST_Icon_group_to_int::IfBlock1::then::_L3 */
  static kcg_bool _L3_IfBlock1;
  /* DATA::Variables::CAST_Icon_group_to_int::IfBlock1::then::_L2 */
  static kcg_int _L2_IfBlock1;
  /* DATA::Variables::CAST_Icon_group_to_int::error */
  static kcg_bool error;
  /* DATA::Variables::CAST_Icon_group_to_int::Output1 */
  static Icon_group_INT_T_DATA Output1;
  /* DATA::Variables::CAST_Icon_group_to_int::IfBlock1::else */
  static kcg_bool _31_else_clock_IfBlock1;
  /* DATA::Variables::CAST_Icon_group_to_int::error */
  static kcg_bool error10;
  /* DATA::Variables::CAST_Icon_group_to_int::Output1 */
  static Icon_group_INT_T_DATA _9_Output1;
  /* DATA::Variables::CAST_Icon_group_to_int::IfBlock1::else::else::then::_L3 */
  static kcg_bool _L334_IfBlock1;
  /* DATA::Variables::CAST_Icon_group_to_int::IfBlock1::else::else::then::_L2 */
  static kcg_int _L235_IfBlock1;
  /* DATA::Variables::CAST_Icon_group_to_int::error */
  static kcg_bool error8;
  /* DATA::Variables::CAST_Icon_group_to_int::Output1 */
  static Icon_group_INT_T_DATA _7_Output1;
  /* DATA::Variables::CAST_Icon_group_to_int::IfBlock1::else::else::else */
  static kcg_bool _29_else_clock_IfBlock1;
  /* DATA::Variables::CAST_Icon_group_to_int::error */
  static kcg_bool error18;
  /* DATA::Variables::CAST_Icon_group_to_int::Output1 */
  static Icon_group_INT_T_DATA _17_Output1;
  /* DATA::Variables::CAST_Icon_group_to_int::IfBlock1::else::else::else::else::then::_L3 */
  static kcg_bool _L338_IfBlock1;
  /* DATA::Variables::CAST_Icon_group_to_int::IfBlock1::else::else::else::else::then::_L2 */
  static kcg_int _L239_IfBlock1;
  /* DATA::Variables::CAST_Icon_group_to_int::error */
  static kcg_bool error16;
  /* DATA::Variables::CAST_Icon_group_to_int::Output1 */
  static Icon_group_INT_T_DATA _15_Output1;
  /* DATA::Variables::CAST_Icon_group_to_int::IfBlock1::else::else::else::else::else */
  static kcg_bool _27_else_clock_IfBlock1;
  /* DATA::Variables::CAST_Icon_group_to_int::error */
  static kcg_bool error26;
  /* DATA::Variables::CAST_Icon_group_to_int::Output1 */
  static Icon_group_INT_T_DATA _25_Output1;
  /* DATA::Variables::CAST_Icon_group_to_int::IfBlock1::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L4_IfBlock1;
  /* DATA::Variables::CAST_Icon_group_to_int::IfBlock1::else::else::else::else::else::else::then::_L2 */
  static kcg_int _L242_IfBlock1;
  /* DATA::Variables::CAST_Icon_group_to_int::error */
  static kcg_bool error24;
  /* DATA::Variables::CAST_Icon_group_to_int::Output1 */
  static Icon_group_INT_T_DATA _23_Output1;
  /* DATA::Variables::CAST_Icon_group_to_int::IfBlock1::else::else::else::else::else::else::else::_L4 */
  static kcg_bool _L443_IfBlock1;
  /* DATA::Variables::CAST_Icon_group_to_int::IfBlock1::else::else::else::else::else::else::else::_L3 */
  static kcg_int _L344_IfBlock1;
  /* DATA::Variables::CAST_Icon_group_to_int::IfBlock1::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* DATA::Variables::CAST_Icon_group_to_int::Output1 */
  static Icon_group_INT_T_DATA _19_Output1;
  /* DATA::Variables::CAST_Icon_group_to_int::error */
  static kcg_bool error20;
  /* DATA::Variables::CAST_Icon_group_to_int::IfBlock1::else::else::else::else::else::then::_L2 */
  static kcg_int _L241_IfBlock1;
  /* DATA::Variables::CAST_Icon_group_to_int::IfBlock1::else::else::else::else::else::then::_L3 */
  static kcg_bool _L340_IfBlock1;
  /* DATA::Variables::CAST_Icon_group_to_int::Output1 */
  static Icon_group_INT_T_DATA _21_Output1;
  /* DATA::Variables::CAST_Icon_group_to_int::error */
  static kcg_bool error22;
  /* DATA::Variables::CAST_Icon_group_to_int::IfBlock1::else::else::else::else */
  static kcg_bool _28_else_clock_IfBlock1;
  /* DATA::Variables::CAST_Icon_group_to_int::Output1 */
  static Icon_group_INT_T_DATA _11_Output1;
  /* DATA::Variables::CAST_Icon_group_to_int::error */
  static kcg_bool error12;
  /* DATA::Variables::CAST_Icon_group_to_int::IfBlock1::else::else::else::then::_L2 */
  static kcg_int _L237_IfBlock1;
  /* DATA::Variables::CAST_Icon_group_to_int::IfBlock1::else::else::else::then::_L3 */
  static kcg_bool _L336_IfBlock1;
  /* DATA::Variables::CAST_Icon_group_to_int::Output1 */
  static Icon_group_INT_T_DATA _13_Output1;
  /* DATA::Variables::CAST_Icon_group_to_int::error */
  static kcg_bool error14;
  /* DATA::Variables::CAST_Icon_group_to_int::IfBlock1::else::else */
  static kcg_bool _30_else_clock_IfBlock1;
  /* DATA::Variables::CAST_Icon_group_to_int::Output1 */
  static Icon_group_INT_T_DATA _3_Output1;
  /* DATA::Variables::CAST_Icon_group_to_int::error */
  static kcg_bool error4;
  /* DATA::Variables::CAST_Icon_group_to_int::IfBlock1::else::then::_L2 */
  static kcg_int _L233_IfBlock1;
  /* DATA::Variables::CAST_Icon_group_to_int::IfBlock1::else::then::_L3 */
  static kcg_bool _L332_IfBlock1;
  /* DATA::Variables::CAST_Icon_group_to_int::Output1 */
  static Icon_group_INT_T_DATA _5_Output1;
  /* DATA::Variables::CAST_Icon_group_to_int::error */
  static kcg_bool error6;
  static kcg_bool noname;
  /* DATA::Variables::CAST_Icon_group_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* DATA::Variables::CAST_Icon_group_to_int::error */
  static kcg_bool error45;
  /* DATA::Variables::CAST_Icon_group_to_int::_L25 */
  static kcg_bool _L25;
  /* DATA::Variables::CAST_Icon_group_to_int::Output1 */
  static Icon_group_INT_T_DATA _46_Output1;
  
  IfBlock1_clock = Input1 == ENUM_Icon_group_T_level_symbol;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L2_IfBlock1 = INT_Icon_group_T_level_symbol;
    _1_Output1 = _L2_IfBlock1;
    _46_Output1 = _1_Output1;
    _L3_IfBlock1 = kcg_false;
    error2 = _L3_IfBlock1;
    error45 = error2;
  }
  else {
    _31_else_clock_IfBlock1 = Input1 == ENUM_Icon_group_T_mode_symbols;
    /* ck_anon_activ */ if (_31_else_clock_IfBlock1) {
      _L233_IfBlock1 = INT_Icon_group_T_mode_symbols;
      _5_Output1 = _L233_IfBlock1;
      Output1 = _5_Output1;
    }
    else {
      _30_else_clock_IfBlock1 = Input1 == ENUM_Icon_group_T_navigation_symbols;
      /* ck_anon_activ */ if (_30_else_clock_IfBlock1) {
        _L235_IfBlock1 = INT_Icon_group_T_navigation_symbols;
        _9_Output1 = _L235_IfBlock1;
        _3_Output1 = _9_Output1;
      }
      else {
        _29_else_clock_IfBlock1 = Input1 ==
          ENUM_Icon_group_T_order_an_announcements_symbols;
        /* ck_anon_activ */ if (_29_else_clock_IfBlock1) {
          _L237_IfBlock1 = INT_Icon_group_T_order_an_announcements_symbols;
          _13_Output1 = _L237_IfBlock1;
          _7_Output1 = _13_Output1;
        }
        else {
          _28_else_clock_IfBlock1 = Input1 ==
            ENUM_Icon_group_T_planning_information_symbols;
          /* ck_anon_activ */ if (_28_else_clock_IfBlock1) {
            _L239_IfBlock1 = INT_Icon_group_T_planning_information_symbols;
            _17_Output1 = _L239_IfBlock1;
            _11_Output1 = _17_Output1;
          }
          else {
            _27_else_clock_IfBlock1 = Input1 ==
              ENUM_Icon_group_T_settings_symbols;
            /* ck_anon_activ */ if (_27_else_clock_IfBlock1) {
              _L241_IfBlock1 = INT_Icon_group_T_settings_symbols;
              _21_Output1 = _L241_IfBlock1;
              _15_Output1 = _21_Output1;
            }
            else {
              else_clock_IfBlock1 = Input1 == ENUM_Icon_group_T_status_symbols;
              /* ck_anon_activ */ if (else_clock_IfBlock1) {
                _L242_IfBlock1 = INT_Icon_group_T_status_symbols;
                _25_Output1 = _L242_IfBlock1;
                _19_Output1 = _25_Output1;
              }
              else {
                _L344_IfBlock1 = INT_Icon_group_T_status_symbols;
                _23_Output1 = _L344_IfBlock1;
                _19_Output1 = _23_Output1;
              }
              _15_Output1 = _19_Output1;
            }
            _11_Output1 = _15_Output1;
          }
          _7_Output1 = _11_Output1;
        }
        _3_Output1 = _7_Output1;
      }
      Output1 = _3_Output1;
    }
    _46_Output1 = Output1;
    /* ck_anon_activ */ if (_31_else_clock_IfBlock1) {
      _L332_IfBlock1 = kcg_false;
      error6 = _L332_IfBlock1;
      error = error6;
    }
    else {
      /* ck_anon_activ */ if (_30_else_clock_IfBlock1) {
        _L334_IfBlock1 = kcg_false;
        error10 = _L334_IfBlock1;
        error4 = error10;
      }
      else {
        /* ck_anon_activ */ if (_29_else_clock_IfBlock1) {
          _L336_IfBlock1 = kcg_false;
          error14 = _L336_IfBlock1;
          error8 = error14;
        }
        else {
          /* ck_anon_activ */ if (_28_else_clock_IfBlock1) {
            _L338_IfBlock1 = kcg_false;
            error18 = _L338_IfBlock1;
            error12 = error18;
          }
          else {
            /* ck_anon_activ */ if (_27_else_clock_IfBlock1) {
              _L340_IfBlock1 = kcg_false;
              error22 = _L340_IfBlock1;
              error16 = error22;
            }
            else {
              /* ck_anon_activ */ if (else_clock_IfBlock1) {
                _L4_IfBlock1 = kcg_false;
                error26 = _L4_IfBlock1;
                error20 = error26;
              }
              else {
                _L443_IfBlock1 = kcg_true;
                error24 = _L443_IfBlock1;
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
    error45 = error;
  }
  _L25 = error45;
  noname = _L25;
  return _46_Output1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Icon_group_to_int_DATA_Variables.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

