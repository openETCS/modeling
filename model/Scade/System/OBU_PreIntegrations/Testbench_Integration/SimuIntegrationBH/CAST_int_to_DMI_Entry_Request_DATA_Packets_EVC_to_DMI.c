/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_Entry_Request_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Entry_Request */
void CAST_int_to_DMI_Entry_Request_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Entry_Request::dmi_entry_request_int */ DMI_Entry_Request_int_array_T_DATA *dmi_entry_request_int,
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Entry_Request::dmi_entry_request_ct */ DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_entry_request_ct)
{
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Entry_Request::_L14 */
  static kcg_bool _L14;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Entry_Request::_L11 */
  static kcg_int _L11;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Entry_Request::_L12 */
  static kcg_int _L12;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Entry_Request::_L13 */
  static kcg_int _L13;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Entry_Request::_L9 */
  static DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg _L9;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Entry_Request::_L15 */
  static DMI_Entry_Request_int_array_T_DATA _L15;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Entry_Request::_L16 */
  static DMI_List_Entry_Request_T_DMI_Types_Pkg _L16;
  
  kcg_copy_DMI_Entry_Request_int_array_T_DATA(&_L15, dmi_entry_request_int);
  _L11 = _L15[0];
  _L14 = /* 1 */ Int_to_Bool_Utilities(_L11);
  _L12 = _L15[1];
  _L13 = _L15[2];
  _L16 = /* 1 */ CAST_int_to_DMI_List_Entry_Request_DATA_Variables(_L13);
  _L9.valid = _L14;
  _L9.system_clock = _L12;
  _L9.entry_request = _L16;
  kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    dmi_entry_request_ct,
    &_L9);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DMI_Entry_Request_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

