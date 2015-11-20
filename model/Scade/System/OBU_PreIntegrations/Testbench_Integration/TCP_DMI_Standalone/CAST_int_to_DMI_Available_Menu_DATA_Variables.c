/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_Available_Menu_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_Available_Menu */
void CAST_int_to_DMI_Available_Menu_DATA_Variables(
  /* DATA::Variables::CAST_int_to_DMI_Available_Menu::dmi_available_menu_int */DMI_Available_Menu_INT_T_DATA dmi_available_menu_int,
  /* DATA::Variables::CAST_int_to_DMI_Available_Menu::dmi_available_menu_ct */DMI_Available_Menu_T_DMI_Types_Pkg *dmi_available_menu_ct)
{
  /* DATA::Variables::CAST_int_to_DMI_Available_Menu::_L34 */ array_bool_30 _L34;
  
  /* 1 */ Int2BoolVect_digital_30(dmi_available_menu_int, &_L34);
  (*dmi_available_menu_ct).Menu_button_start_of_mission = _L34[0];
  (*dmi_available_menu_ct).Menu_button_shunting = _L34[1];
  (*dmi_available_menu_ct).Menu_button_shunting_exit = _L34[2];
  (*dmi_available_menu_ct).Menu_button_non_leading = _L34[3];
  (*dmi_available_menu_ct).Menu_button_exit_non_leading = _L34[4];
  (*dmi_available_menu_ct).Menu_button_maintain_shunting = _L34[5];
  (*dmi_available_menu_ct).Menu_button_driver_ID = _L34[6];
  (*dmi_available_menu_ct).Menu_button_train_running_number = _L34[7];
  (*dmi_available_menu_ct).Menu_button_ETCS_level = _L34[8];
  (*dmi_available_menu_ct).Menu_button_train_data_modification = _L34[9];
  (*dmi_available_menu_ct).Menu_button_train_data_view = _L34[10];
  (*dmi_available_menu_ct).Menu_button_staff_responsible_data = _L34[11];
  (*dmi_available_menu_ct).Menu_button_language_selection = _L34[12];
  (*dmi_available_menu_ct).Menu_button_override_EOA = _L34[13];
  (*dmi_available_menu_ct).Menu_button_override_route_suitability = _L34[14];
  (*dmi_available_menu_ct).Menu_button_adhesion_factor = _L34[15];
  (*dmi_available_menu_ct).Menu_button_system_version = _L34[16];
  (*dmi_available_menu_ct).Menu_button_volume = _L34[17];
  (*dmi_available_menu_ct).Menu_button_luminance = _L34[18];
  (*dmi_available_menu_ct).Menu_button_train_integrity = _L34[19];
  (*dmi_available_menu_ct).Menu_button_isolation = _L34[20];
  (*dmi_available_menu_ct).Show_hourglass = _L34[21];
  (*dmi_available_menu_ct).Menu_button_use_short_number = _L34[22];
  (*dmi_available_menu_ct).Menu_button_enter_RBC_data = _L34[23];
  (*dmi_available_menu_ct).Menu_button_radio_network_ID = _L34[24];
  (*dmi_available_menu_ct).Menu_button_contact_last_RBC = _L34[25];
  (*dmi_available_menu_ct).Button_switch_for_train_data = _L34[26];
  (*dmi_available_menu_ct).Fix_train_data_entry = _L34[27];
  (*dmi_available_menu_ct).Menu_button_Set_VBC = _L34[28];
  (*dmi_available_menu_ct).Menu_button_Remove_VBC = _L34[29];
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_int_to_DMI_Available_Menu_DATA_Variables.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

