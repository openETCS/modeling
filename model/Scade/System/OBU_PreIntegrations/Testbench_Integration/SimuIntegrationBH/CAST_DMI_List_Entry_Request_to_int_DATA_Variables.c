/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_List_Entry_Request_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_DMI_List_Entry_Request_to_int */
DMI_List_Entry_Request_INT_T_DATA CAST_DMI_List_Entry_Request_to_int_DATA_Variables(
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::dmi_list_entry_request_ct */ DMI_List_Entry_Request_T_DMI_Types_Pkg dmi_list_entry_request_ct)
{
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::error */
  static kcg_bool error2;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::dmi_list_entry_request_int */
  static DMI_List_Entry_Request_INT_T_DATA _1_dmi_list_entry_request_int;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::then::_L2 */
  static kcg_bool _L2_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::then::_L1 */
  static kcg_int _L1_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::error */
  static kcg_bool error;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::dmi_list_entry_request_int */
  static DMI_List_Entry_Request_INT_T_DATA dmi_list_entry_request_int;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else */
  static kcg_bool _71_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::error */
  static kcg_bool error10;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::dmi_list_entry_request_int */
  static DMI_List_Entry_Request_INT_T_DATA _9_dmi_list_entry_request_int;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::then::_L3 */
  static kcg_bool _L373_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::then::_L2 */
  static kcg_int _L274_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::error */
  static kcg_bool error8;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::dmi_list_entry_request_int */
  static DMI_List_Entry_Request_INT_T_DATA _7_dmi_list_entry_request_int;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else */
  static kcg_bool _69_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::error */
  static kcg_bool error18;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::dmi_list_entry_request_int */
  static DMI_List_Entry_Request_INT_T_DATA _17_dmi_list_entry_request_int;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::then::_L2 */
  static kcg_bool _L277_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::then::_L1 */
  static kcg_int _L178_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::error */
  static kcg_bool error16;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::dmi_list_entry_request_int */
  static DMI_List_Entry_Request_INT_T_DATA _15_dmi_list_entry_request_int;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else */
  static kcg_bool _67_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::error */
  static kcg_bool error26;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::dmi_list_entry_request_int */
  static DMI_List_Entry_Request_INT_T_DATA _25_dmi_list_entry_request_int;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::else::then::_L2 */
  static kcg_bool _L281_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::else::then::_L1 */
  static kcg_int _L182_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::error */
  static kcg_bool error24;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::dmi_list_entry_request_int */
  static DMI_List_Entry_Request_INT_T_DATA _23_dmi_list_entry_request_int;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::else::else */
  static kcg_bool _65_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::error */
  static kcg_bool error34;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::dmi_list_entry_request_int */
  static DMI_List_Entry_Request_INT_T_DATA _33_dmi_list_entry_request_int;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::else::else::else::then::_L2 */
  static kcg_bool _L285_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::else::else::else::then::_L1 */
  static kcg_int _L186_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::error */
  static kcg_bool error32;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::dmi_list_entry_request_int */
  static DMI_List_Entry_Request_INT_T_DATA _31_dmi_list_entry_request_int;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::else::else::else::else */
  static kcg_bool _63_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::error */
  static kcg_bool error42;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::dmi_list_entry_request_int */
  static DMI_List_Entry_Request_INT_T_DATA _41_dmi_list_entry_request_int;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L2 */
  static kcg_bool _L289_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L1 */
  static kcg_int _L190_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::error */
  static kcg_bool error40;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::dmi_list_entry_request_int */
  static DMI_List_Entry_Request_INT_T_DATA _39_dmi_list_entry_request_int;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _61_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::error */
  static kcg_bool error50;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::dmi_list_entry_request_int */
  static DMI_List_Entry_Request_INT_T_DATA _49_dmi_list_entry_request_int;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::then::_L2 */
  static kcg_bool _L293_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::then::_L1 */
  static kcg_int _L194_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::error */
  static kcg_bool error48;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::dmi_list_entry_request_int */
  static DMI_List_Entry_Request_INT_T_DATA _47_dmi_list_entry_request_int;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _59_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::error */
  static kcg_bool error58;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::dmi_list_entry_request_int */
  static DMI_List_Entry_Request_INT_T_DATA _57_dmi_list_entry_request_int;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L2 */
  static kcg_bool _L297_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L1 */
  static kcg_int _L198_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::error */
  static kcg_bool error56;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::dmi_list_entry_request_int */
  static DMI_List_Entry_Request_INT_T_DATA _55_dmi_list_entry_request_int;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::_L2 */
  static kcg_bool _L299_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::_L1 */
  static kcg_int _L1100_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::dmi_list_entry_request_int */
  static DMI_List_Entry_Request_INT_T_DATA _51_dmi_list_entry_request_int;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::error */
  static kcg_bool error52;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L1 */
  static kcg_int _L196_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L2 */
  static kcg_bool _L295_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::dmi_list_entry_request_int */
  static DMI_List_Entry_Request_INT_T_DATA _53_dmi_list_entry_request_int;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::error */
  static kcg_bool error54;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _60_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::dmi_list_entry_request_int */
  static DMI_List_Entry_Request_INT_T_DATA _43_dmi_list_entry_request_int;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::error */
  static kcg_bool error44;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::then::_L1 */
  static kcg_int _L192_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::then::_L2 */
  static kcg_bool _L291_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::dmi_list_entry_request_int */
  static DMI_List_Entry_Request_INT_T_DATA _45_dmi_list_entry_request_int;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::error */
  static kcg_bool error46;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _62_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::dmi_list_entry_request_int */
  static DMI_List_Entry_Request_INT_T_DATA _35_dmi_list_entry_request_int;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::error */
  static kcg_bool error36;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::then::_L1 */
  static kcg_int _L188_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::then::_L2 */
  static kcg_bool _L287_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::dmi_list_entry_request_int */
  static DMI_List_Entry_Request_INT_T_DATA _37_dmi_list_entry_request_int;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::error */
  static kcg_bool error38;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::else::else::else */
  static kcg_bool _64_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::dmi_list_entry_request_int */
  static DMI_List_Entry_Request_INT_T_DATA _27_dmi_list_entry_request_int;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::error */
  static kcg_bool error28;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::else::else::then::_L1 */
  static kcg_int _L184_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::else::else::then::_L2 */
  static kcg_bool _L283_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::dmi_list_entry_request_int */
  static DMI_List_Entry_Request_INT_T_DATA _29_dmi_list_entry_request_int;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::error */
  static kcg_bool error30;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _66_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::dmi_list_entry_request_int */
  static DMI_List_Entry_Request_INT_T_DATA _19_dmi_list_entry_request_int;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::error */
  static kcg_bool error20;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::then::_L1 */
  static kcg_int _L180_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else::else::then::_L2 */
  static kcg_bool _L279_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::dmi_list_entry_request_int */
  static DMI_List_Entry_Request_INT_T_DATA _21_dmi_list_entry_request_int;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::error */
  static kcg_bool error22;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::else */
  static kcg_bool _68_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::dmi_list_entry_request_int */
  static DMI_List_Entry_Request_INT_T_DATA _11_dmi_list_entry_request_int;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::error */
  static kcg_bool error12;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::then::_L1 */
  static kcg_int _L176_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else::else::then::_L2 */
  static kcg_bool _L275_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::dmi_list_entry_request_int */
  static DMI_List_Entry_Request_INT_T_DATA _13_dmi_list_entry_request_int;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::error */
  static kcg_bool error14;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::else */
  static kcg_bool _70_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::dmi_list_entry_request_int */
  static DMI_List_Entry_Request_INT_T_DATA _3_dmi_list_entry_request_int;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::error */
  static kcg_bool error4;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::then::_L2 */
  static kcg_int _L272_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1::else::then::_L3 */
  static kcg_bool _L3_IfBlock1;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::dmi_list_entry_request_int */
  static DMI_List_Entry_Request_INT_T_DATA _5_dmi_list_entry_request_int;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::error */
  static kcg_bool error6;
  static kcg_bool noname;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::error */
  static kcg_bool error101;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::_L48 */
  static kcg_bool _L48;
  /* DATA::Variables::CAST_DMI_List_Entry_Request_to_int::dmi_list_entry_request_int */
  static DMI_List_Entry_Request_INT_T_DATA _102_dmi_list_entry_request_int;
  
  IfBlock1_clock = dmi_list_entry_request_ct ==
    ENUM_DMI_List_Entry_Request_T_Enter_revalidate_driver_identifier;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L1_IfBlock1 =
      INT_DMI_List_Entry_Request_T_Enter_revalidate_driver_identifier;
    _1_dmi_list_entry_request_int = _L1_IfBlock1;
    _102_dmi_list_entry_request_int = _1_dmi_list_entry_request_int;
    _L2_IfBlock1 = kcg_false;
    error2 = _L2_IfBlock1;
    error101 = error2;
  }
  else {
    _71_else_clock_IfBlock1 = dmi_list_entry_request_ct ==
      ENUM_DMI_List_Entry_Request_T_Enter_revalidate_train_running_number;
    /* ck_anon_activ */ if (_71_else_clock_IfBlock1) {
      _L272_IfBlock1 =
        INT_DMI_List_Entry_Request_T_Enter_revalidate_train_running_number;
      _5_dmi_list_entry_request_int = _L272_IfBlock1;
      dmi_list_entry_request_int = _5_dmi_list_entry_request_int;
    }
    else {
      _70_else_clock_IfBlock1 = dmi_list_entry_request_ct ==
        ENUM_DMI_List_Entry_Request_T_Enter_revalidate_ETCS_level;
      /* ck_anon_activ */ if (_70_else_clock_IfBlock1) {
        _L274_IfBlock1 =
          INT_DMI_List_Entry_Request_T_Enter_revalidate_ETCS_level;
        _9_dmi_list_entry_request_int = _L274_IfBlock1;
        _3_dmi_list_entry_request_int = _9_dmi_list_entry_request_int;
      }
      else {
        _69_else_clock_IfBlock1 = dmi_list_entry_request_ct ==
          ENUM_DMI_List_Entry_Request_T_Enter_RBC_contact_menu;
        /* ck_anon_activ */ if (_69_else_clock_IfBlock1) {
          _L176_IfBlock1 = INT_DMI_List_Entry_Request_T_Enter_RBC_contact_menu;
          _13_dmi_list_entry_request_int = _L176_IfBlock1;
          _7_dmi_list_entry_request_int = _13_dmi_list_entry_request_int;
        }
        else {
          _68_else_clock_IfBlock1 = dmi_list_entry_request_ct ==
            ENUM_DMI_List_Entry_Request_T_Validate_train_data;
          /* ck_anon_activ */ if (_68_else_clock_IfBlock1) {
            _L178_IfBlock1 = INT_DMI_List_Entry_Request_T_Validate_train_data;
            _17_dmi_list_entry_request_int = _L178_IfBlock1;
            _11_dmi_list_entry_request_int = _17_dmi_list_entry_request_int;
          }
          else {
            _67_else_clock_IfBlock1 = dmi_list_entry_request_ct ==
              ENUM_DMI_List_Entry_Request_T_Enter_NTC_data;
            /* ck_anon_activ */ if (_67_else_clock_IfBlock1) {
              _L180_IfBlock1 = INT_DMI_List_Entry_Request_T_Enter_NTC_data;
              _21_dmi_list_entry_request_int = _L180_IfBlock1;
              _15_dmi_list_entry_request_int = _21_dmi_list_entry_request_int;
            }
            else {
              _66_else_clock_IfBlock1 = dmi_list_entry_request_ct ==
                ENUM_DMI_List_Entry_Request_T_Spare;
              /* ck_anon_activ */ if (_66_else_clock_IfBlock1) {
                _L182_IfBlock1 = INT_DMI_List_Entry_Request_T_Spare;
                _25_dmi_list_entry_request_int = _L182_IfBlock1;
                _19_dmi_list_entry_request_int = _25_dmi_list_entry_request_int;
              }
              else {
                _65_else_clock_IfBlock1 = dmi_list_entry_request_ct ==
                  ENUM_DMI_List_Entry_Request_T_Enable_the_track_ahead_free_by_the_driver;
                /* ck_anon_activ */ if (_65_else_clock_IfBlock1) {
                  _L184_IfBlock1 =
                    INT_DMI_List_Entry_Request_T_Enable_the_track_ahead_free_by_the_driver;
                  _29_dmi_list_entry_request_int = _L184_IfBlock1;
                  _23_dmi_list_entry_request_int =
                    _29_dmi_list_entry_request_int;
                }
                else {
                  _64_else_clock_IfBlock1 = dmi_list_entry_request_ct ==
                    ENUM_DMI_List_Entry_Request_T_Disable_the_Track_Ahead_free_page;
                  /* ck_anon_activ */ if (_64_else_clock_IfBlock1) {
                    _L186_IfBlock1 =
                      INT_DMI_List_Entry_Request_T_Disable_the_Track_Ahead_free_page;
                    _33_dmi_list_entry_request_int = _L186_IfBlock1;
                    _27_dmi_list_entry_request_int =
                      _33_dmi_list_entry_request_int;
                  }
                  else {
                    _63_else_clock_IfBlock1 = dmi_list_entry_request_ct ==
                      ENUM_DMI_List_Entry_Request_T_Show_main_window;
                    /* ck_anon_activ */ if (_63_else_clock_IfBlock1) {
                      _L188_IfBlock1 =
                        INT_DMI_List_Entry_Request_T_Show_main_window;
                      _37_dmi_list_entry_request_int = _L188_IfBlock1;
                      _31_dmi_list_entry_request_int =
                        _37_dmi_list_entry_request_int;
                    }
                    else {
                      _62_else_clock_IfBlock1 = dmi_list_entry_request_ct ==
                        ENUM_DMI_List_Entry_Request_T_Hide_main_window;
                      /* ck_anon_activ */ if (_62_else_clock_IfBlock1) {
                        _L190_IfBlock1 =
                          INT_DMI_List_Entry_Request_T_Hide_main_window;
                        _41_dmi_list_entry_request_int = _L190_IfBlock1;
                        _35_dmi_list_entry_request_int =
                          _41_dmi_list_entry_request_int;
                      }
                      else {
                        _61_else_clock_IfBlock1 = dmi_list_entry_request_ct ==
                          ENUM_DMI_List_Entry_Request_T_Hide_adhesion_factor_entry_window;
                        /* ck_anon_activ */ if (_61_else_clock_IfBlock1) {
                          _L192_IfBlock1 =
                            INT_DMI_List_Entry_Request_T_Hide_adhesion_factor_entry_window;
                          _45_dmi_list_entry_request_int = _L192_IfBlock1;
                          _39_dmi_list_entry_request_int =
                            _45_dmi_list_entry_request_int;
                        }
                        else {
                          _60_else_clock_IfBlock1 = dmi_list_entry_request_ct ==
                            ENUM_DMI_List_Entry_Request_T_Hide_adhesion_factor_entry_window;
                          /* ck_anon_activ */ if (_60_else_clock_IfBlock1) {
                            _L194_IfBlock1 =
                              INT_DMI_List_Entry_Request_T_Hide_staff_responsible_entry_window;
                            _49_dmi_list_entry_request_int = _L194_IfBlock1;
                            _43_dmi_list_entry_request_int =
                              _49_dmi_list_entry_request_int;
                          }
                          else {
                            _59_else_clock_IfBlock1 =
                              dmi_list_entry_request_ct ==
                              ENUM_DMI_List_Entry_Request_T_Show_Set_VBC_validation_window;
                            /* ck_anon_activ */ if (_59_else_clock_IfBlock1) {
                              _L196_IfBlock1 =
                                INT_DMI_List_Entry_Request_T_Show_Set_VBC_validation_window;
                              _53_dmi_list_entry_request_int = _L196_IfBlock1;
                              _47_dmi_list_entry_request_int =
                                _53_dmi_list_entry_request_int;
                            }
                            else {
                              else_clock_IfBlock1 = dmi_list_entry_request_ct ==
                                ENUM_DMI_List_Entry_Request_T_Show_Remove_VBC_validation_window;
                              /* ck_anon_activ */ if (else_clock_IfBlock1) {
                                _L198_IfBlock1 =
                                  INT_DMI_List_Entry_Request_T_Show_Remove_VBC_validation_window;
                                _57_dmi_list_entry_request_int = _L198_IfBlock1;
                                _51_dmi_list_entry_request_int =
                                  _57_dmi_list_entry_request_int;
                              }
                              else {
                                _L1100_IfBlock1 =
                                  INT_DMI_List_Entry_Request_T_Show_Remove_VBC_validation_window;
                                _55_dmi_list_entry_request_int =
                                  _L1100_IfBlock1;
                                _51_dmi_list_entry_request_int =
                                  _55_dmi_list_entry_request_int;
                              }
                              _47_dmi_list_entry_request_int =
                                _51_dmi_list_entry_request_int;
                            }
                            _43_dmi_list_entry_request_int =
                              _47_dmi_list_entry_request_int;
                          }
                          _39_dmi_list_entry_request_int =
                            _43_dmi_list_entry_request_int;
                        }
                        _35_dmi_list_entry_request_int =
                          _39_dmi_list_entry_request_int;
                      }
                      _31_dmi_list_entry_request_int =
                        _35_dmi_list_entry_request_int;
                    }
                    _27_dmi_list_entry_request_int =
                      _31_dmi_list_entry_request_int;
                  }
                  _23_dmi_list_entry_request_int =
                    _27_dmi_list_entry_request_int;
                }
                _19_dmi_list_entry_request_int = _23_dmi_list_entry_request_int;
              }
              _15_dmi_list_entry_request_int = _19_dmi_list_entry_request_int;
            }
            _11_dmi_list_entry_request_int = _15_dmi_list_entry_request_int;
          }
          _7_dmi_list_entry_request_int = _11_dmi_list_entry_request_int;
        }
        _3_dmi_list_entry_request_int = _7_dmi_list_entry_request_int;
      }
      dmi_list_entry_request_int = _3_dmi_list_entry_request_int;
    }
    _102_dmi_list_entry_request_int = dmi_list_entry_request_int;
    /* ck_anon_activ */ if (_71_else_clock_IfBlock1) {
      _L3_IfBlock1 = kcg_false;
      error6 = _L3_IfBlock1;
      error = error6;
    }
    else {
      /* ck_anon_activ */ if (_70_else_clock_IfBlock1) {
        _L373_IfBlock1 = kcg_false;
        error10 = _L373_IfBlock1;
        error4 = error10;
      }
      else {
        /* ck_anon_activ */ if (_69_else_clock_IfBlock1) {
          _L275_IfBlock1 = kcg_false;
          error14 = _L275_IfBlock1;
          error8 = error14;
        }
        else {
          /* ck_anon_activ */ if (_68_else_clock_IfBlock1) {
            _L277_IfBlock1 = kcg_false;
            error18 = _L277_IfBlock1;
            error12 = error18;
          }
          else {
            /* ck_anon_activ */ if (_67_else_clock_IfBlock1) {
              _L279_IfBlock1 = kcg_false;
              error22 = _L279_IfBlock1;
              error16 = error22;
            }
            else {
              /* ck_anon_activ */ if (_66_else_clock_IfBlock1) {
                _L281_IfBlock1 = kcg_false;
                error26 = _L281_IfBlock1;
                error20 = error26;
              }
              else {
                /* ck_anon_activ */ if (_65_else_clock_IfBlock1) {
                  _L283_IfBlock1 = kcg_false;
                  error30 = _L283_IfBlock1;
                  error24 = error30;
                }
                else {
                  /* ck_anon_activ */ if (_64_else_clock_IfBlock1) {
                    _L285_IfBlock1 = kcg_false;
                    error34 = _L285_IfBlock1;
                    error28 = error34;
                  }
                  else {
                    /* ck_anon_activ */ if (_63_else_clock_IfBlock1) {
                      _L287_IfBlock1 = kcg_false;
                      error38 = _L287_IfBlock1;
                      error32 = error38;
                    }
                    else {
                      /* ck_anon_activ */ if (_62_else_clock_IfBlock1) {
                        _L289_IfBlock1 = kcg_false;
                        error42 = _L289_IfBlock1;
                        error36 = error42;
                      }
                      else {
                        /* ck_anon_activ */ if (_61_else_clock_IfBlock1) {
                          _L291_IfBlock1 = kcg_false;
                          error46 = _L291_IfBlock1;
                          error40 = error46;
                        }
                        else {
                          /* ck_anon_activ */ if (_60_else_clock_IfBlock1) {
                            _L293_IfBlock1 = kcg_false;
                            error50 = _L293_IfBlock1;
                            error44 = error50;
                          }
                          else {
                            /* ck_anon_activ */ if (_59_else_clock_IfBlock1) {
                              _L295_IfBlock1 = kcg_false;
                              error54 = _L295_IfBlock1;
                              error48 = error54;
                            }
                            else {
                              /* ck_anon_activ */ if (else_clock_IfBlock1) {
                                _L297_IfBlock1 = kcg_false;
                                error58 = _L297_IfBlock1;
                                error52 = error58;
                              }
                              else {
                                _L299_IfBlock1 = kcg_true;
                                error56 = _L299_IfBlock1;
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
    error101 = error;
  }
  _L48 = error101;
  noname = _L48;
  return _102_dmi_list_entry_request_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_List_Entry_Request_to_int_DATA_Variables.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

