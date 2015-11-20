/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_StatusSet_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_DMI_StatusSet_to_int */
kcg_int CAST_DMI_StatusSet_to_int_DATA_Variables(
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::dmi_statusSet_ct */DMI_StatusSet_T_DMI_Types_Pkg dmi_statusSet_ct)
{
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else */ kcg_bool _14_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else */ kcg_bool _12_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::else */ kcg_bool _10_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::else::else::else */ kcg_bool _8_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::else::else::else::else::else */ kcg_bool _6_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else */ kcg_bool _4_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else */ kcg_bool _2_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */ kcg_bool else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else */ kcg_bool _1_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else */ kcg_bool _3_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else */ kcg_bool _5_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::else::else::else::else */ kcg_bool _7_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::else::else */ kcg_bool _9_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else */ kcg_bool _11_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else */ kcg_bool _13_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::dmi_statusSet_int */ kcg_int dmi_statusSet_int;
  
  IfBlock1_clock = dmi_statusSet_ct == ENUM_DMI_StatusSet_T_Running_state;
  if (IfBlock1_clock) {
    dmi_statusSet_int = INT_DMI_StatusSet_T_Running_state;
  }
  else {
    _14_else_clock_IfBlock1 = dmi_statusSet_ct ==
      ENUM_DMI_StatusSet_T_Starting_state;
    if (_14_else_clock_IfBlock1) {
      dmi_statusSet_int = INT_DMI_StatusSet_T_Starting_state;
    }
    else {
      _13_else_clock_IfBlock1 = dmi_statusSet_ct ==
        ENUM_DMI_StatusSet_T_Failure_state;
      if (_13_else_clock_IfBlock1) {
        dmi_statusSet_int = INT_DMI_StatusSet_T_Failure_state;
      }
      else {
        _12_else_clock_IfBlock1 = dmi_statusSet_ct ==
          ENUM_DMI_StatusSet_T_Running_not_active_state;
        if (_12_else_clock_IfBlock1) {
          dmi_statusSet_int = INT_DMI_StatusSet_T_Running_not_active_state;
        }
        else {
          _11_else_clock_IfBlock1 = dmi_statusSet_ct ==
            ENUM_DMI_StatusSet_T_Train_Speed_Overflow;
          if (_11_else_clock_IfBlock1) {
            dmi_statusSet_int = INT_DMI_StatusSet_T_Train_Speed_Overflow;
          }
          else {
            _10_else_clock_IfBlock1 = dmi_statusSet_ct ==
              ENUM_DMI_StatusSet_T_Invalid_track_condition;
            if (_10_else_clock_IfBlock1) {
              dmi_statusSet_int = INT_DMI_StatusSet_T_Invalid_track_condition;
            }
            else {
              _9_else_clock_IfBlock1 = dmi_statusSet_ct ==
                ENUM_DMI_StatusSet_T_Invalid_predefined_text_message;
              if (_9_else_clock_IfBlock1) {
                dmi_statusSet_int =
                  INT_DMI_StatusSet_T_Invalid_predefined_text_message;
              }
              else {
                _8_else_clock_IfBlock1 = dmi_statusSet_ct ==
                  ENUM_DMI_StatusSet_T_Invalid_text_message;
                if (_8_else_clock_IfBlock1) {
                  dmi_statusSet_int = INT_DMI_StatusSet_T_Invalid_text_message;
                }
                else {
                  _7_else_clock_IfBlock1 = dmi_statusSet_ct ==
                    ENUM_DMI_StatusSet_T_HW_warning_temp_reached;
                  if (_7_else_clock_IfBlock1) {
                    dmi_statusSet_int =
                      INT_DMI_StatusSet_T_HW_warning_temp_reached;
                  }
                  else {
                    _6_else_clock_IfBlock1 = dmi_statusSet_ct ==
                      ENUM_DMI_StatusSet_T_TFT_OFF_temp_reached;
                    if (_6_else_clock_IfBlock1) {
                      dmi_statusSet_int =
                        INT_DMI_StatusSet_T_TFT_OFF_temp_reached;
                    }
                    else {
                      _5_else_clock_IfBlock1 = dmi_statusSet_ct ==
                        ENUM_DMI_StatusSet_T_Device_OFF_temp_reached;
                      if (_5_else_clock_IfBlock1) {
                        dmi_statusSet_int =
                          INT_DMI_StatusSet_T_Device_OFF_temp_reached;
                      }
                      else {
                        _4_else_clock_IfBlock1 = dmi_statusSet_ct ==
                          ENUM_DMI_StatusSet_T_Over_temperature;
                        if (_4_else_clock_IfBlock1) {
                          dmi_statusSet_int =
                            INT_DMI_StatusSet_T_Over_temperature;
                        }
                        else {
                          _3_else_clock_IfBlock1 = dmi_statusSet_ct ==
                            ENUM_DMI_StatusSet_T_Backlight_on_off;
                          if (_3_else_clock_IfBlock1) {
                            dmi_statusSet_int =
                              INT_DMI_StatusSet_T_Backlight_on_off;
                          }
                          else {
                            _2_else_clock_IfBlock1 = dmi_statusSet_ct ==
                              ENUM_DMI_StatusSet_T_FAN_blocked;
                            if (_2_else_clock_IfBlock1) {
                              dmi_statusSet_int =
                                INT_DMI_StatusSet_T_FAN_blocked;
                            }
                            else {
                              _1_else_clock_IfBlock1 = dmi_statusSet_ct ==
                                ENUM_DMI_StatusSet_T_Power_supply_key_switch_off;
                              if (_1_else_clock_IfBlock1) {
                                dmi_statusSet_int =
                                  INT_DMI_StatusSet_T_Power_supply_key_switch_off;
                              }
                              else {
                                else_clock_IfBlock1 = dmi_statusSet_ct ==
                                  ENUM_DMI_StatusSet_T_Watchdog_not_running;
                                if (else_clock_IfBlock1) {
                                  dmi_statusSet_int =
                                    INT_DMI_StatusSet_T_Watchdog_not_running;
                                }
                                else {
                                  dmi_statusSet_int =
                                    INT_DMI_StatusSet_T_Running_state;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return dmi_statusSet_int;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_DMI_StatusSet_to_int_DATA_Variables.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

