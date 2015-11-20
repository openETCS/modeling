/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "doEntryRequest_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::doEntryRequest */
void doEntryRequest_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::doEntryRequest::dmi_entryRequest */ DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_entryRequest,
  /* manage_DMI_Output_Pkg::doEntryRequest::inSystemTime */ T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_DMI_Output_Pkg::doEntryRequest::new_menuRequest */ DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg *_6_new_menuRequest,
  /* manage_DMI_Output_Pkg::doEntryRequest::new_entryRequest */ DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *new_entryRequest,
  /* manage_DMI_Output_Pkg::doEntryRequest::sendTrainDataToDMI */ kcg_bool *_5_sendTrainDataToDMI,
  /* manage_DMI_Output_Pkg::doEntryRequest::outLevelsNeeded */ kcg_bool *_4_outLevelsNeeded)
{
  /* manage_DMI_Output_Pkg::doEntryRequest::outLevelsNeeded */
  static kcg_bool _3_outLevelsNeeded;
  /* manage_DMI_Output_Pkg::doEntryRequest::sendTrainDataToDMI */
  static kcg_bool _2_sendTrainDataToDMI;
  /* manage_DMI_Output_Pkg::doEntryRequest::new_menuRequest */
  static DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg _1_new_menuRequest;
  /* manage_DMI_Output_Pkg::doEntryRequest::IfBlock1::then::_L22 */
  static DMI_List_Entry_Request_T_DMI_Types_Pkg _L22_IfBlock1;
  /* manage_DMI_Output_Pkg::doEntryRequest::IfBlock1::then::_L21 */
  static kcg_bool _L21_IfBlock1;
  /* manage_DMI_Output_Pkg::doEntryRequest::IfBlock1::then::_L20 */
  static DMI_List_Entry_Request_T_DMI_Types_Pkg _L20_IfBlock1;
  /* manage_DMI_Output_Pkg::doEntryRequest::IfBlock1::then::_L19 */
  static DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg _L19_IfBlock1;
  /* manage_DMI_Output_Pkg::doEntryRequest::IfBlock1::then::_L17 */
  static kcg_bool _L17_IfBlock1;
  /* manage_DMI_Output_Pkg::doEntryRequest::IfBlock1::then::_L15 */
  static kcg_bool _L15_IfBlock1;
  /* manage_DMI_Output_Pkg::doEntryRequest::IfBlock1::then::_L14 */
  static kcg_bool _L14_IfBlock1;
  /* manage_DMI_Output_Pkg::doEntryRequest::IfBlock1::then::_L9 */
  static DMI_List_Entry_Request_T_DMI_Types_Pkg _L9_IfBlock1;
  /* manage_DMI_Output_Pkg::doEntryRequest::IfBlock1::then::_L7 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L7_IfBlock1;
  /* manage_DMI_Output_Pkg::doEntryRequest::IfBlock1::then::_L6 */
  static DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg _L6_IfBlock1;
  /* manage_DMI_Output_Pkg::doEntryRequest::IfBlock1::then::_L5 */
  static DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg _L5_IfBlock1;
  /* manage_DMI_Output_Pkg::doEntryRequest::IfBlock1::then::_L4 */
  static DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg _L4_IfBlock1;
  /* manage_DMI_Output_Pkg::doEntryRequest::IfBlock1::then::_L3 */
  static DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg _L3_IfBlock1;
  /* manage_DMI_Output_Pkg::doEntryRequest::IfBlock1::then::_L2 */
  static DMI_List_Entry_Request_T_DMI_Types_Pkg _L2_IfBlock1;
  /* manage_DMI_Output_Pkg::doEntryRequest::IfBlock1::then::_L1 */
  static DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg _L1_IfBlock1;
  /* manage_DMI_Output_Pkg::doEntryRequest::outLevelsNeeded */
  static kcg_bool outLevelsNeeded;
  /* manage_DMI_Output_Pkg::doEntryRequest::sendTrainDataToDMI */
  static kcg_bool sendTrainDataToDMI;
  /* manage_DMI_Output_Pkg::doEntryRequest::new_menuRequest */
  static DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg new_menuRequest;
  /* manage_DMI_Output_Pkg::doEntryRequest::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* manage_DMI_Output_Pkg::doEntryRequest::valid */
  static kcg_bool valid;
  /* manage_DMI_Output_Pkg::doEntryRequest::entry */
  static DMI_List_Entry_Request_T_DMI_Types_Pkg entry;
  /* manage_DMI_Output_Pkg::doEntryRequest::_L1 */
  static DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg _L1;
  /* manage_DMI_Output_Pkg::doEntryRequest::_L2 */
  static kcg_bool _L2;
  /* manage_DMI_Output_Pkg::doEntryRequest::_L3 */
  static DMI_List_Entry_Request_T_DMI_Types_Pkg _L3;
  /* manage_DMI_Output_Pkg::doEntryRequest::_L4 */
  static DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg _L4;
  
  kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &_L1,
    dmi_entryRequest);
  _L2 = _L1.valid;
  _L3 = _L1.entry_request;
  valid = _L2;
  entry = _L3;
  IfBlock1_clock = valid;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L2_IfBlock1 = entry;
    kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &_L4_IfBlock1,
      (DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cMenuTrainData_manage_DMI_Output_Pkg);
    kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &_L19_IfBlock1,
      (DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cMenuLevel_manage_DMI_Output_Pkg);
    kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &_L5_IfBlock1,
      (DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cMenuStart_manage_DMI_Output_Pkg);
    kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &_L3_IfBlock1,
      (DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cNoMenu_manage_DMI_Output_Pkg);
    switch (_L2_IfBlock1) {
      case Validate_train_data_DMI_Types_Pkg :
        kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
          &_L1_IfBlock1,
          &_L4_IfBlock1);
        break;
      case Enter_revalidate_ETCS_level_DMI_Types_Pkg :
        kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
          &_L1_IfBlock1,
          &_L19_IfBlock1);
        break;
      case Show_main_window_DMI_Types_Pkg :
        kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
          &_L1_IfBlock1,
          &_L5_IfBlock1);
        break;
      
      default :
        kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
          &_L1_IfBlock1,
          &_L3_IfBlock1);
    }
    _L7_IfBlock1 = inSystemTime;
    kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &_L6_IfBlock1,
      &_L1_IfBlock1);
    if (kcg_true) {
      _L6_IfBlock1.system_clock = _L7_IfBlock1;
    }
    kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &_1_new_menuRequest,
      &_L6_IfBlock1);
    kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      _6_new_menuRequest,
      &_1_new_menuRequest);
    _L9_IfBlock1 = entry;
    _L15_IfBlock1 = kcg_true;
    _L17_IfBlock1 = kcg_false;
    switch (_L9_IfBlock1) {
      case Validate_train_data_DMI_Types_Pkg :
        _L14_IfBlock1 = _L15_IfBlock1;
        break;
      case Enter_revalidate_ETCS_level_DMI_Types_Pkg :
        _L14_IfBlock1 = _L15_IfBlock1;
        break;
      case Enter_revalidate_driver_identifier_DMI_Types_Pkg :
        _L14_IfBlock1 = _L15_IfBlock1;
        break;
      
      default :
        _L14_IfBlock1 = _L17_IfBlock1;
    }
    _2_sendTrainDataToDMI = _L14_IfBlock1;
    *_5_sendTrainDataToDMI = _2_sendTrainDataToDMI;
    _L20_IfBlock1 = entry;
    _L22_IfBlock1 = Enter_revalidate_ETCS_level_DMI_Types_Pkg;
    _L21_IfBlock1 = _L20_IfBlock1 == _L22_IfBlock1;
    _3_outLevelsNeeded = _L21_IfBlock1;
    *_4_outLevelsNeeded = _3_outLevelsNeeded;
  }
  else {
    kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &new_menuRequest,
      (DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cNoMenu_manage_DMI_Output_Pkg);
    kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      _6_new_menuRequest,
      &new_menuRequest);
    sendTrainDataToDMI = kcg_false;
    *_5_sendTrainDataToDMI = sendTrainDataToDMI;
    outLevelsNeeded = kcg_false;
    *_4_outLevelsNeeded = outLevelsNeeded;
  }
  /* 1 */ mapEntryForLevel_manage_DMI_Output_Pkg(&_L1, &_L4);
  kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    new_entryRequest,
    &_L4);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** doEntryRequest_manage_DMI_Output_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

