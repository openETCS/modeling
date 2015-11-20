/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Icon_control_flag_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_Icon_control_flag_to_int */
Icon_control_flag_INT_T_DATA CAST_Icon_control_flag_to_int_DATA_Variables(
  /* DATA::Variables::CAST_Icon_control_flag_to_int::Input1 */ Icon_control_flag_T_DMI_Types_Pkg Input1)
{
  /* DATA::Variables::CAST_Icon_control_flag_to_int::error */
  static kcg_bool error2;
  /* DATA::Variables::CAST_Icon_control_flag_to_int::Output1 */
  static Icon_control_flag_INT_T_DATA _1_Output1;
  /* DATA::Variables::CAST_Icon_control_flag_to_int::IfBlock1::then::_L2 */
  static kcg_bool _L2_IfBlock1;
  /* DATA::Variables::CAST_Icon_control_flag_to_int::IfBlock1::then::_L1 */
  static kcg_int _L1_IfBlock1;
  /* DATA::Variables::CAST_Icon_control_flag_to_int::error */
  static kcg_bool error;
  /* DATA::Variables::CAST_Icon_control_flag_to_int::Output1 */
  static Icon_control_flag_INT_T_DATA Output1;
  /* DATA::Variables::CAST_Icon_control_flag_to_int::IfBlock1::else */
  static kcg_bool _16_else_clock_IfBlock1;
  /* DATA::Variables::CAST_Icon_control_flag_to_int::error */
  static kcg_bool error10;
  /* DATA::Variables::CAST_Icon_control_flag_to_int::Output1 */
  static Icon_control_flag_INT_T_DATA _9_Output1;
  /* DATA::Variables::CAST_Icon_control_flag_to_int::IfBlock1::else::else::then::_L2 */
  static kcg_bool _L219_IfBlock1;
  /* DATA::Variables::CAST_Icon_control_flag_to_int::IfBlock1::else::else::then::_L1 */
  static kcg_int _L120_IfBlock1;
  /* DATA::Variables::CAST_Icon_control_flag_to_int::error */
  static kcg_bool error8;
  /* DATA::Variables::CAST_Icon_control_flag_to_int::Output1 */
  static Icon_control_flag_INT_T_DATA _7_Output1;
  /* DATA::Variables::CAST_Icon_control_flag_to_int::IfBlock1::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* DATA::Variables::CAST_Icon_control_flag_to_int::IfBlock1::else::else::else::else::_L1 */
  static kcg_bool _L124_IfBlock1;
  /* DATA::Variables::CAST_Icon_control_flag_to_int::IfBlock1::else::else::else::else::_L2 */
  static kcg_int _L223_IfBlock1;
  /* DATA::Variables::CAST_Icon_control_flag_to_int::Output1 */
  static Icon_control_flag_INT_T_DATA _11_Output1;
  /* DATA::Variables::CAST_Icon_control_flag_to_int::error */
  static kcg_bool error12;
  /* DATA::Variables::CAST_Icon_control_flag_to_int::IfBlock1::else::else::else::then::_L1 */
  static kcg_int _L122_IfBlock1;
  /* DATA::Variables::CAST_Icon_control_flag_to_int::IfBlock1::else::else::else::then::_L2 */
  static kcg_bool _L221_IfBlock1;
  /* DATA::Variables::CAST_Icon_control_flag_to_int::Output1 */
  static Icon_control_flag_INT_T_DATA _13_Output1;
  /* DATA::Variables::CAST_Icon_control_flag_to_int::error */
  static kcg_bool error14;
  /* DATA::Variables::CAST_Icon_control_flag_to_int::IfBlock1::else::else */
  static kcg_bool _15_else_clock_IfBlock1;
  /* DATA::Variables::CAST_Icon_control_flag_to_int::Output1 */
  static Icon_control_flag_INT_T_DATA _3_Output1;
  /* DATA::Variables::CAST_Icon_control_flag_to_int::error */
  static kcg_bool error4;
  /* DATA::Variables::CAST_Icon_control_flag_to_int::IfBlock1::else::then::_L1 */
  static kcg_int _L118_IfBlock1;
  /* DATA::Variables::CAST_Icon_control_flag_to_int::IfBlock1::else::then::_L2 */
  static kcg_bool _L217_IfBlock1;
  /* DATA::Variables::CAST_Icon_control_flag_to_int::Output1 */
  static Icon_control_flag_INT_T_DATA _5_Output1;
  /* DATA::Variables::CAST_Icon_control_flag_to_int::error */
  static kcg_bool error6;
  static kcg_bool noname;
  /* DATA::Variables::CAST_Icon_control_flag_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* DATA::Variables::CAST_Icon_control_flag_to_int::error */
  static kcg_bool error25;
  /* DATA::Variables::CAST_Icon_control_flag_to_int::_L10 */
  static kcg_bool _L10;
  /* DATA::Variables::CAST_Icon_control_flag_to_int::Output1 */
  static Icon_control_flag_INT_T_DATA _26_Output1;
  
  IfBlock1_clock = Input1 == ENUM_Icon_control_flag_T_show_icon_in_area;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L1_IfBlock1 = INT_Icon_control_flag_T_show_icon_in_area;
    _1_Output1 = _L1_IfBlock1;
    _26_Output1 = _1_Output1;
    _L2_IfBlock1 = kcg_false;
    error2 = _L2_IfBlock1;
    error25 = error2;
  }
  else {
    _16_else_clock_IfBlock1 = Input1 == ENUM_Icon_control_flag_T_clear_area;
    /* ck_anon_activ */ if (_16_else_clock_IfBlock1) {
      _L118_IfBlock1 = INT_Icon_control_flag_T_clear_area;
      _5_Output1 = _L118_IfBlock1;
      Output1 = _5_Output1;
    }
    else {
      _15_else_clock_IfBlock1 = Input1 ==
        ENUM_Icon_control_flag_T_show_icon_flashing_in_area;
      /* ck_anon_activ */ if (_15_else_clock_IfBlock1) {
        _L120_IfBlock1 = INT_Icon_control_flag_T_show_icon_flashing_in_area;
        _9_Output1 = _L120_IfBlock1;
        _3_Output1 = _9_Output1;
      }
      else {
        else_clock_IfBlock1 = Input1 ==
          ENUM_Icon_control_flag_T_show_icon_with_yellow_flashing_frame_in_area;
        /* ck_anon_activ */ if (else_clock_IfBlock1) {
          _L122_IfBlock1 =
            INT_Icon_control_flag_T_show_icon_with_yellow_flashing_frame_in_area;
          _13_Output1 = _L122_IfBlock1;
          _7_Output1 = _13_Output1;
        }
        else {
          _L223_IfBlock1 = INT_Icon_control_flag_T_show_icon_in_area;
          _11_Output1 = _L223_IfBlock1;
          _7_Output1 = _11_Output1;
        }
        _3_Output1 = _7_Output1;
      }
      Output1 = _3_Output1;
    }
    _26_Output1 = Output1;
    /* ck_anon_activ */ if (_16_else_clock_IfBlock1) {
      _L217_IfBlock1 = kcg_false;
      error6 = _L217_IfBlock1;
      error = error6;
    }
    else {
      /* ck_anon_activ */ if (_15_else_clock_IfBlock1) {
        _L219_IfBlock1 = kcg_false;
        error10 = _L219_IfBlock1;
        error4 = error10;
      }
      else {
        /* ck_anon_activ */ if (else_clock_IfBlock1) {
          _L221_IfBlock1 = kcg_false;
          error14 = _L221_IfBlock1;
          error8 = error14;
        }
        else {
          _L124_IfBlock1 = kcg_true;
          error12 = _L124_IfBlock1;
          error8 = error12;
        }
        error4 = error8;
      }
      error = error4;
    }
    error25 = error;
  }
  _L10 = error25;
  noname = _L10;
  return _26_Output1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Icon_control_flag_to_int_DATA_Variables.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

