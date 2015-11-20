/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_Menu_Request_to_int_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_DMI_Menu_Request_to_int */
void CAST_DMI_Menu_Request_to_int_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Menu_Request_to_int::dmi_menu_request_ct */ DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_menu_request_ct,
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Menu_Request_to_int::dmi_menu_request_int */ DMI_Menu_Request_int_array_T_DATA *dmi_menu_request_int)
{
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Menu_Request_to_int::_L1 */
  static DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg _L1;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Menu_Request_to_int::_L4 */
  static kcg_bool _L4;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Menu_Request_to_int::_L3 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L3;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Menu_Request_to_int::_L2 */
  static DMI_Available_Menu_T_DMI_Types_Pkg _L2;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Menu_Request_to_int::_L5 */
  static array_int_3 _L5;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Menu_Request_to_int::_L6 */
  static kcg_int _L6;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Menu_Request_to_int::_L8 */
  static DMI_Available_Menu_INT_T_DATA _L8;
  
  kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &_L1,
    dmi_menu_request_ct);
  _L4 = _L1.valid;
  _L6 = /* 1 */ Bool_to_Int_Utilities(_L4);
  _L3 = _L1.system_clock;
  kcg_copy_DMI_Available_Menu_T_DMI_Types_Pkg(&_L2, &_L1.available_menu);
  _L8 = /* 1 */ CAST_DMI_Available_Menu_to_int_DATA_Variables(&_L2);
  _L5[0] = _L6;
  _L5[1] = _L3;
  _L5[2] = _L8;
  kcg_copy_DMI_Menu_Request_int_array_T_DATA(dmi_menu_request_int, &_L5);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_Menu_Request_to_int_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

