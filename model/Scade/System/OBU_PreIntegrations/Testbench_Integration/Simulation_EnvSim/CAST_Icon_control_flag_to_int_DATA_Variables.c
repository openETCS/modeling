/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Icon_control_flag_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_Icon_control_flag_to_int */
Icon_control_flag_INT_T_DATA CAST_Icon_control_flag_to_int_DATA_Variables(
  /* DATA::Variables::CAST_Icon_control_flag_to_int::Input1 */Icon_control_flag_T_DMI_Types_Pkg Input1)
{
  /* DATA::Variables::CAST_Icon_control_flag_to_int::IfBlock1::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* DATA::Variables::CAST_Icon_control_flag_to_int::IfBlock1::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* DATA::Variables::CAST_Icon_control_flag_to_int::IfBlock1::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* DATA::Variables::CAST_Icon_control_flag_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* DATA::Variables::CAST_Icon_control_flag_to_int::Output1 */
  static Icon_control_flag_INT_T_DATA Output1;
  
  IfBlock1_clock = Input1 == ENUM_Icon_control_flag_T_show_icon_in_area;
  if (IfBlock1_clock) {
    Output1 = INT_Icon_control_flag_T_show_icon_in_area;
  }
  else {
    _2_else_clock_IfBlock1 = Input1 == ENUM_Icon_control_flag_T_clear_area;
    if (_2_else_clock_IfBlock1) {
      Output1 = INT_Icon_control_flag_T_clear_area;
    }
    else {
      _1_else_clock_IfBlock1 = Input1 ==
        ENUM_Icon_control_flag_T_show_icon_flashing_in_area;
      if (_1_else_clock_IfBlock1) {
        Output1 = INT_Icon_control_flag_T_show_icon_flashing_in_area;
      }
      else {
        else_clock_IfBlock1 = Input1 ==
          ENUM_Icon_control_flag_T_show_icon_with_yellow_flashing_frame_in_area;
        if (else_clock_IfBlock1) {
          Output1 =
            INT_Icon_control_flag_T_show_icon_with_yellow_flashing_frame_in_area;
        }
        else {
          Output1 = INT_Icon_control_flag_T_show_icon_in_area;
        }
      }
    }
  }
  return Output1;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Icon_control_flag_to_int_DATA_Variables.c
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

