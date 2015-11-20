/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_Available_Menu_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_Available_Menu */
void CAST_int_to_DMI_Available_Menu_DATA_Variables(
  /* DATA::Variables::CAST_int_to_DMI_Available_Menu::dmi_available_menu_int */ DMI_Available_Menu_INT_T_DATA dmi_available_menu_int,
  /* DATA::Variables::CAST_int_to_DMI_Available_Menu::dmi_available_menu_ct */ DMI_Available_Menu_T_DMI_Types_Pkg *dmi_available_menu_ct)
{
  /* DATA::Variables::CAST_int_to_DMI_Available_Menu::_L33 */
  static DMI_Available_Menu_T_DMI_Types_Pkg _L33;
  /* DATA::Variables::CAST_int_to_DMI_Available_Menu::_L34 */
  static DMI_Available_Menu_int_T_DATA _L34;
  /* DATA::Variables::CAST_int_to_DMI_Available_Menu::_L36 */
  static DMI_Available_Menu_INT_T_DATA _L36;
  /* DATA::Variables::CAST_int_to_DMI_Available_Menu::_L2 */
  static kcg_bool _L2;
  /* DATA::Variables::CAST_int_to_DMI_Available_Menu::_L3 */
  static kcg_bool _L3;
  /* DATA::Variables::CAST_int_to_DMI_Available_Menu::_L4 */
  static kcg_bool _L4;
  /* DATA::Variables::CAST_int_to_DMI_Available_Menu::_L5 */
  static kcg_bool _L5;
  /* DATA::Variables::CAST_int_to_DMI_Available_Menu::_L6 */
  static kcg_bool _L6;
  /* DATA::Variables::CAST_int_to_DMI_Available_Menu::_L7 */
  static kcg_bool _L7;
  /* DATA::Variables::CAST_int_to_DMI_Available_Menu::_L8 */
  static kcg_bool _L8;
  /* DATA::Variables::CAST_int_to_DMI_Available_Menu::_L9 */
  static kcg_bool _L9;
  /* DATA::Variables::CAST_int_to_DMI_Available_Menu::_L10 */
  static kcg_bool _L10;
  /* DATA::Variables::CAST_int_to_DMI_Available_Menu::_L11 */
  static kcg_bool _L11;
  /* DATA::Variables::CAST_int_to_DMI_Available_Menu::_L12 */
  static kcg_bool _L12;
  /* DATA::Variables::CAST_int_to_DMI_Available_Menu::_L13 */
  static kcg_bool _L13;
  /* DATA::Variables::CAST_int_to_DMI_Available_Menu::_L14 */
  static kcg_bool _L14;
  /* DATA::Variables::CAST_int_to_DMI_Available_Menu::_L15 */
  static kcg_bool _L15;
  /* DATA::Variables::CAST_int_to_DMI_Available_Menu::_L16 */
  static kcg_bool _L16;
  /* DATA::Variables::CAST_int_to_DMI_Available_Menu::_L17 */
  static kcg_bool _L17;
  /* DATA::Variables::CAST_int_to_DMI_Available_Menu::_L18 */
  static kcg_bool _L18;
  /* DATA::Variables::CAST_int_to_DMI_Available_Menu::_L19 */
  static kcg_bool _L19;
  /* DATA::Variables::CAST_int_to_DMI_Available_Menu::_L20 */
  static kcg_bool _L20;
  /* DATA::Variables::CAST_int_to_DMI_Available_Menu::_L21 */
  static kcg_bool _L21;
  /* DATA::Variables::CAST_int_to_DMI_Available_Menu::_L22 */
  static kcg_bool _L22;
  /* DATA::Variables::CAST_int_to_DMI_Available_Menu::_L23 */
  static kcg_bool _L23;
  /* DATA::Variables::CAST_int_to_DMI_Available_Menu::_L24 */
  static kcg_bool _L24;
  /* DATA::Variables::CAST_int_to_DMI_Available_Menu::_L25 */
  static kcg_bool _L25;
  /* DATA::Variables::CAST_int_to_DMI_Available_Menu::_L26 */
  static kcg_bool _L26;
  /* DATA::Variables::CAST_int_to_DMI_Available_Menu::_L27 */
  static kcg_bool _L27;
  /* DATA::Variables::CAST_int_to_DMI_Available_Menu::_L28 */
  static kcg_bool _L28;
  /* DATA::Variables::CAST_int_to_DMI_Available_Menu::_L29 */
  static kcg_bool _L29;
  /* DATA::Variables::CAST_int_to_DMI_Available_Menu::_L30 */
  static kcg_bool _L30;
  /* DATA::Variables::CAST_int_to_DMI_Available_Menu::_L31 */
  static kcg_bool _L31;
  
  _L36 = dmi_available_menu_int;
  /* 1 */ Int2BoolVect_digital_30(_L36, &_L34);
  _L31 = _L34[0];
  _L30 = _L34[1];
  _L29 = _L34[2];
  _L28 = _L34[3];
  _L27 = _L34[4];
  _L26 = _L34[5];
  _L25 = _L34[6];
  _L24 = _L34[7];
  _L23 = _L34[8];
  _L22 = _L34[9];
  _L21 = _L34[10];
  _L20 = _L34[11];
  _L19 = _L34[12];
  _L18 = _L34[13];
  _L17 = _L34[14];
  _L16 = _L34[15];
  _L15 = _L34[16];
  _L14 = _L34[17];
  _L13 = _L34[18];
  _L12 = _L34[19];
  _L11 = _L34[20];
  _L10 = _L34[21];
  _L9 = _L34[22];
  _L8 = _L34[23];
  _L7 = _L34[24];
  _L6 = _L34[25];
  _L5 = _L34[26];
  _L4 = _L34[27];
  _L3 = _L34[28];
  _L2 = _L34[29];
  _L33.Menu_button_start_of_mission = _L31;
  _L33.Menu_button_shunting = _L30;
  _L33.Menu_button_shunting_exit = _L29;
  _L33.Menu_button_non_leading = _L28;
  _L33.Menu_button_exit_non_leading = _L27;
  _L33.Menu_button_maintain_shunting = _L26;
  _L33.Menu_button_driver_ID = _L25;
  _L33.Menu_button_train_running_number = _L24;
  _L33.Menu_button_ETCS_level = _L23;
  _L33.Menu_button_train_data_modification = _L22;
  _L33.Menu_button_train_data_view = _L21;
  _L33.Menu_button_staff_responsible_data = _L20;
  _L33.Menu_button_language_selection = _L19;
  _L33.Menu_button_override_EOA = _L18;
  _L33.Menu_button_override_route_suitability = _L17;
  _L33.Menu_button_adhesion_factor = _L16;
  _L33.Menu_button_system_version = _L15;
  _L33.Menu_button_volume = _L14;
  _L33.Menu_button_luminance = _L13;
  _L33.Menu_button_train_integrity = _L12;
  _L33.Menu_button_isolation = _L11;
  _L33.Show_hourglass = _L10;
  _L33.Menu_button_use_short_number = _L9;
  _L33.Menu_button_enter_RBC_data = _L8;
  _L33.Menu_button_radio_network_ID = _L7;
  _L33.Menu_button_contact_last_RBC = _L6;
  _L33.Button_switch_for_train_data = _L5;
  _L33.Fix_train_data_entry = _L4;
  _L33.Menu_button_Set_VBC = _L3;
  _L33.Menu_button_Remove_VBC = _L2;
  kcg_copy_DMI_Available_Menu_T_DMI_Types_Pkg(dmi_available_menu_ct, &_L33);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DMI_Available_Menu_DATA_Variables.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

