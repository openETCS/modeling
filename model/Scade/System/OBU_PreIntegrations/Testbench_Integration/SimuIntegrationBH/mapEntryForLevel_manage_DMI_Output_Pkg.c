/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mapEntryForLevel_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::mapEntryForLevel */
void mapEntryForLevel_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::mapEntryForLevel::dmi_entryRequest */ DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_entryRequest,
  /* manage_DMI_Output_Pkg::mapEntryForLevel::new_entryRequest */ DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *new_entryRequest)
{
  /* manage_DMI_Output_Pkg::mapEntryForLevel::_L1 */
  static DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg _L1;
  /* manage_DMI_Output_Pkg::mapEntryForLevel::_L2 */
  static kcg_bool _L2;
  /* manage_DMI_Output_Pkg::mapEntryForLevel::_L3 */
  static DMI_List_Entry_Request_T_DMI_Types_Pkg _L3;
  /* manage_DMI_Output_Pkg::mapEntryForLevel::_L4 */
  static DMI_List_Entry_Request_T_DMI_Types_Pkg _L4;
  /* manage_DMI_Output_Pkg::mapEntryForLevel::_L5 */
  static kcg_bool _L5;
  /* manage_DMI_Output_Pkg::mapEntryForLevel::_L6 */
  static kcg_bool _L6;
  /* manage_DMI_Output_Pkg::mapEntryForLevel::_L7 */
  static DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg _L7;
  /* manage_DMI_Output_Pkg::mapEntryForLevel::_L8 */
  static kcg_bool _L8;
  /* manage_DMI_Output_Pkg::mapEntryForLevel::_L9 */
  static DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg _L9;
  /* manage_DMI_Output_Pkg::mapEntryForLevel::_L10 */
  static DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg _L10;
  /* manage_DMI_Output_Pkg::mapEntryForLevel::_L11 */
  static DMI_List_Entry_Request_T_DMI_Types_Pkg _L11;
  
  kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &_L1,
    dmi_entryRequest);
  _L2 = _L1.valid;
  _L3 = _L1.entry_request;
  _L4 = Enter_revalidate_ETCS_level_DMI_Types_Pkg;
  _L5 = _L3 == _L4;
  _L6 = _L2 & _L5;
  _L8 = !_L6;
  kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &_L9,
    dmi_entryRequest);
  _L11 = Show_main_window_DMI_Types_Pkg;
  kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(&_L10, &_L9);
  if (kcg_true) {
    _L10.entry_request = _L11;
  }
  /* 1 */ if (_L8) {
    kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(&_L7, &_L9);
  }
  else {
    kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(&_L7, &_L10);
  }
  kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    new_entryRequest,
    &_L7);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** mapEntryForLevel_manage_DMI_Output_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

