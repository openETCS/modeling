/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DMI_menu_req_To_ButtonEnabler_DMI_Control_Pkg_Sub_func_MenuRequest.h"

/* DMI_Control_Pkg::Sub_func::MenuRequest::DMI_menu_req_To_ButtonEnabler */
void DMI_menu_req_To_ButtonEnabler_DMI_Control_Pkg_Sub_func_MenuRequest(
  /* DMI_Control_Pkg::Sub_func::MenuRequest::DMI_menu_req_To_ButtonEnabler::MenuRequest */DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg *MenuRequest,
  /* DMI_Control_Pkg::Sub_func::MenuRequest::DMI_menu_req_To_ButtonEnabler::ButtonEnabler */array_int_30 *ButtonEnabler)
{
  array_bool_30 tmp;
  kcg_int i;
  
  tmp[0] = (*MenuRequest).available_menu.Menu_button_start_of_mission;
  tmp[1] = (*MenuRequest).available_menu.Menu_button_shunting;
  tmp[2] = (*MenuRequest).available_menu.Menu_button_shunting_exit;
  tmp[3] = (*MenuRequest).available_menu.Menu_button_non_leading;
  tmp[4] = (*MenuRequest).available_menu.Menu_button_exit_non_leading;
  tmp[5] = (*MenuRequest).available_menu.Menu_button_maintain_shunting;
  tmp[6] = (*MenuRequest).available_menu.Menu_button_driver_ID;
  tmp[7] = (*MenuRequest).available_menu.Menu_button_train_running_number;
  tmp[8] = (*MenuRequest).available_menu.Menu_button_ETCS_level;
  tmp[9] = (*MenuRequest).available_menu.Menu_button_train_data_modification;
  tmp[10] = (*MenuRequest).available_menu.Menu_button_train_data_view;
  tmp[11] = (*MenuRequest).available_menu.Menu_button_staff_responsible_data;
  tmp[12] = (*MenuRequest).available_menu.Menu_button_language_selection;
  tmp[13] = (*MenuRequest).available_menu.Menu_button_override_EOA;
  tmp[14] =
    (*MenuRequest).available_menu.Menu_button_override_route_suitability;
  tmp[15] = (*MenuRequest).available_menu.Menu_button_adhesion_factor;
  tmp[16] = (*MenuRequest).available_menu.Menu_button_system_version;
  tmp[17] = (*MenuRequest).available_menu.Menu_button_volume;
  tmp[18] = (*MenuRequest).available_menu.Menu_button_luminance;
  tmp[19] = (*MenuRequest).available_menu.Menu_button_train_integrity;
  tmp[20] = (*MenuRequest).available_menu.Menu_button_isolation;
  tmp[21] = (*MenuRequest).available_menu.Show_hourglass;
  tmp[22] = (*MenuRequest).available_menu.Menu_button_use_short_number;
  tmp[23] = (*MenuRequest).available_menu.Menu_button_enter_RBC_data;
  tmp[24] = (*MenuRequest).available_menu.Menu_button_radio_network_ID;
  tmp[25] = (*MenuRequest).available_menu.Menu_button_contact_last_RBC;
  tmp[26] = (*MenuRequest).available_menu.Button_switch_for_train_data;
  tmp[27] = (*MenuRequest).available_menu.Fix_train_data_entry;
  tmp[28] = (*MenuRequest).available_menu.Menu_button_Set_VBC;
  tmp[29] = (*MenuRequest).available_menu.Menu_button_Remove_VBC;
  for (i = 0; i < 30; i++) {
    (*ButtonEnabler)[i] = /* 1 */
      ButtonMask_to_buttonIndex_iterator_DMI_Control_Pkg_Sub_func_MenuRequest(
        tmp[i]);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** DMI_menu_req_To_ButtonEnabler_DMI_Control_Pkg_Sub_func_MenuRequest.c
** Generation date: 2015-11-20T19:43:34
*************************************************************$ */

