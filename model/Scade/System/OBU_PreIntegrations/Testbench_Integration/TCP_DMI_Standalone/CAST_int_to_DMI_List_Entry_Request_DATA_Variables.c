/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_List_Entry_Request_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_List_Entry_Request */
DMI_List_Entry_Request_T_DMI_Types_Pkg CAST_int_to_DMI_List_Entry_Request_DATA_Variables(
  /* DATA::Variables::CAST_int_to_DMI_List_Entry_Request::dmi_list_entry_request_int */DMI_List_Entry_Request_INT_T_DATA dmi_list_entry_request_int)
{
  /* DATA::Variables::CAST_int_to_DMI_List_Entry_Request::IfBlock1::else */ kcg_bool _12_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_List_Entry_Request::IfBlock1::else::else::else */ kcg_bool _10_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_List_Entry_Request::IfBlock1::else::else::else::else::else */ kcg_bool _8_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_List_Entry_Request::IfBlock1::else::else::else::else::else::else::else */ kcg_bool _6_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_List_Entry_Request::IfBlock1::else::else::else::else::else::else::else::else::else */ kcg_bool _4_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_List_Entry_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else */ kcg_bool _2_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_List_Entry_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else */ kcg_bool _1_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_List_Entry_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else */ kcg_bool else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_List_Entry_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else */ kcg_bool _3_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_List_Entry_Request::IfBlock1::else::else::else::else::else::else::else::else */ kcg_bool _5_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_List_Entry_Request::IfBlock1::else::else::else::else::else::else */ kcg_bool _7_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_List_Entry_Request::IfBlock1::else::else::else::else */ kcg_bool _9_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_List_Entry_Request::IfBlock1::else::else */ kcg_bool _11_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_List_Entry_Request::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* DATA::Variables::CAST_int_to_DMI_List_Entry_Request::dmi_list_entry_request_ct */ DMI_List_Entry_Request_T_DMI_Types_Pkg dmi_list_entry_request_ct;
  
  IfBlock1_clock = dmi_list_entry_request_int ==
    INT_DMI_List_Entry_Request_T_Enter_revalidate_driver_identifier;
  if (IfBlock1_clock) {
    dmi_list_entry_request_ct =
      ENUM_DMI_List_Entry_Request_T_Enter_revalidate_driver_identifier;
  }
  else {
    _12_else_clock_IfBlock1 = dmi_list_entry_request_int ==
      INT_DMI_List_Entry_Request_T_Enter_revalidate_train_running_number;
    if (_12_else_clock_IfBlock1) {
      dmi_list_entry_request_ct =
        ENUM_DMI_List_Entry_Request_T_Enter_revalidate_train_running_number;
    }
    else {
      _11_else_clock_IfBlock1 = dmi_list_entry_request_int ==
        INT_DMI_List_Entry_Request_T_Enter_revalidate_ETCS_level;
      if (_11_else_clock_IfBlock1) {
        dmi_list_entry_request_ct =
          ENUM_DMI_List_Entry_Request_T_Enter_revalidate_ETCS_level;
      }
      else {
        _10_else_clock_IfBlock1 = dmi_list_entry_request_int ==
          INT_DMI_List_Entry_Request_T_Enter_RBC_contact_menu;
        if (_10_else_clock_IfBlock1) {
          dmi_list_entry_request_ct =
            ENUM_DMI_List_Entry_Request_T_Enter_RBC_contact_menu;
        }
        else {
          _9_else_clock_IfBlock1 = dmi_list_entry_request_int ==
            INT_DMI_List_Entry_Request_T_Validate_train_data;
          if (_9_else_clock_IfBlock1) {
            dmi_list_entry_request_ct =
              ENUM_DMI_List_Entry_Request_T_Validate_train_data;
          }
          else {
            _8_else_clock_IfBlock1 = dmi_list_entry_request_int ==
              INT_DMI_List_Entry_Request_T_Enter_NTC_data;
            if (_8_else_clock_IfBlock1) {
              dmi_list_entry_request_ct =
                ENUM_DMI_List_Entry_Request_T_Enter_NTC_data;
            }
            else {
              _7_else_clock_IfBlock1 = dmi_list_entry_request_int ==
                INT_DMI_List_Entry_Request_T_Spare;
              if (_7_else_clock_IfBlock1) {
                dmi_list_entry_request_ct = ENUM_DMI_List_Entry_Request_T_Spare;
              }
              else {
                _6_else_clock_IfBlock1 = dmi_list_entry_request_int ==
                  INT_DMI_List_Entry_Request_T_Enable_the_track_ahead_free_by_the_driver;
                if (_6_else_clock_IfBlock1) {
                  dmi_list_entry_request_ct =
                    ENUM_DMI_List_Entry_Request_T_Enable_the_track_ahead_free_by_the_driver;
                }
                else {
                  _5_else_clock_IfBlock1 = dmi_list_entry_request_int ==
                    INT_DMI_List_Entry_Request_T_Disable_the_Track_Ahead_free_page;
                  if (_5_else_clock_IfBlock1) {
                    dmi_list_entry_request_ct =
                      ENUM_DMI_List_Entry_Request_T_Disable_the_Track_Ahead_free_page;
                  }
                  else {
                    _4_else_clock_IfBlock1 = dmi_list_entry_request_int ==
                      INT_DMI_List_Entry_Request_T_Show_main_window;
                    if (_4_else_clock_IfBlock1) {
                      dmi_list_entry_request_ct =
                        ENUM_DMI_List_Entry_Request_T_Show_main_window;
                    }
                    else {
                      _3_else_clock_IfBlock1 = dmi_list_entry_request_int ==
                        INT_DMI_List_Entry_Request_T_Hide_main_window;
                      if (_3_else_clock_IfBlock1) {
                        dmi_list_entry_request_ct =
                          ENUM_DMI_List_Entry_Request_T_Hide_main_window;
                      }
                      else {
                        _2_else_clock_IfBlock1 = dmi_list_entry_request_int ==
                          INT_DMI_List_Entry_Request_T_Hide_adhesion_factor_entry_window;
                        if (_2_else_clock_IfBlock1) {
                          dmi_list_entry_request_ct =
                            ENUM_DMI_List_Entry_Request_T_Hide_adhesion_factor_entry_window;
                        }
                        else {
                          _1_else_clock_IfBlock1 = dmi_list_entry_request_int ==
                            INT_DMI_List_Entry_Request_T_Show_Set_VBC_validation_window;
                          if (_1_else_clock_IfBlock1) {
                            dmi_list_entry_request_ct =
                              ENUM_DMI_List_Entry_Request_T_Show_Set_VBC_validation_window;
                          }
                          else {
                            else_clock_IfBlock1 = dmi_list_entry_request_int ==
                              INT_DMI_List_Entry_Request_T_Show_Remove_VBC_validation_window;
                            if (else_clock_IfBlock1) {
                              dmi_list_entry_request_ct =
                                ENUM_DMI_List_Entry_Request_T_Show_Remove_VBC_validation_window;
                            }
                            else {
                              dmi_list_entry_request_ct =
                                ENUM_DMI_List_Entry_Request_T_Show_Remove_VBC_validation_window;
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
  return dmi_list_entry_request_ct;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_int_to_DMI_List_Entry_Request_DATA_Variables.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

