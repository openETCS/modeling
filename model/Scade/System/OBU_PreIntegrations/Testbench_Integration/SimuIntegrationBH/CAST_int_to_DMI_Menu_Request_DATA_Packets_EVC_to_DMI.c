/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_Menu_Request_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Menu_Request */
void CAST_int_to_DMI_Menu_Request_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Menu_Request::dmi_menu_request_int */ DMI_Menu_Request_int_array_T_DATA *dmi_menu_request_int,
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Menu_Request::dmi_menu_request_ct */ DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_menu_request_ct)
{
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Menu_Request::_L4 */
  static kcg_int _L4;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Menu_Request::_L3 */
  static kcg_int _L3;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Menu_Request::_L2 */
  static kcg_int _L2;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Menu_Request::_L5 */
  static DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg _L5;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Menu_Request::_L6 */
  static kcg_bool _L6;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Menu_Request::_L8 */
  static DMI_Available_Menu_T_DMI_Types_Pkg _L8;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Menu_Request::_L10 */
  static DMI_Menu_Request_int_array_T_DATA _L10;
  
  kcg_copy_DMI_Menu_Request_int_array_T_DATA(&_L10, dmi_menu_request_int);
  _L4 = _L10[0];
  _L6 = /* 1 */ Int_to_Bool_Utilities(_L4);
  _L3 = _L10[1];
  _L2 = _L10[2];
  /* 1 */ CAST_int_to_DMI_Available_Menu_DATA_Variables(_L2, &_L8);
  _L5.valid = _L6;
  _L5.system_clock = _L3;
  kcg_copy_DMI_Available_Menu_T_DMI_Types_Pkg(&_L5.available_menu, &_L8);
  kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    dmi_menu_request_ct,
    &_L5);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DMI_Menu_Request_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

