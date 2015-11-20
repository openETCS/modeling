/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "deleteElement_manage_TextMessages_Pkg.h"

/* manage_TextMessages_Pkg::deleteElement */
void deleteElement_manage_TextMessages_Pkg(
  /* manage_TextMessages_Pkg::deleteElement::indexMAPwi */ kcg_int indexMAPwi,
  /* manage_TextMessages_Pkg::deleteElement::fromStore */ DMI_TXT_MSG_status_T_DMI_Types_Pkg *fromStore,
  /* manage_TextMessages_Pkg::deleteElement::inMessageID */ DMI_TextMessage_ID_T_DMI_Types_Pkg inMessageID,
  /* manage_TextMessages_Pkg::deleteElement::continue */ kcg_bool *_5_continue,
  /* manage_TextMessages_Pkg::deleteElement::toStore */ DMI_TXT_MSG_status_T_DMI_Types_Pkg *_4_toStore)
{
  /* manage_TextMessages_Pkg::deleteElement::toStore */
  static DMI_TXT_MSG_status_T_DMI_Types_Pkg _3_toStore;
  /* manage_TextMessages_Pkg::deleteElement::continue */
  static kcg_bool _2_continue;
  /* manage_TextMessages_Pkg::deleteElement::IfBlock1::then::_L9 */
  static DMI_TXT_MSG_status_T_DMI_Types_Pkg _L9_IfBlock1;
  /* manage_TextMessages_Pkg::deleteElement::IfBlock1::then::_L7 */
  static kcg_bool _L7_IfBlock1;
  /* manage_TextMessages_Pkg::deleteElement::toStore */
  static DMI_TXT_MSG_status_T_DMI_Types_Pkg toStore;
  /* manage_TextMessages_Pkg::deleteElement::continue */
  static kcg_bool _1_continue;
  /* manage_TextMessages_Pkg::deleteElement::IfBlock1::else::_L2 */
  static kcg_bool _L2_IfBlock1;
  /* manage_TextMessages_Pkg::deleteElement::IfBlock1::else::_L1 */
  static DMI_TXT_MSG_status_T_DMI_Types_Pkg _L1_IfBlock1;
  static kcg_int noname;
  /* manage_TextMessages_Pkg::deleteElement::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* manage_TextMessages_Pkg::deleteElement::deleteIt */
  static kcg_bool deleteIt;
  /* manage_TextMessages_Pkg::deleteElement::_L1 */
  static DMI_TXT_MSG_status_T_DMI_Types_Pkg _L1;
  /* manage_TextMessages_Pkg::deleteElement::_L2 */
  static kcg_bool _L2;
  /* manage_TextMessages_Pkg::deleteElement::_L3 */
  static DMI_TextMessage_ID_T_DMI_Types_Pkg _L3;
  /* manage_TextMessages_Pkg::deleteElement::_L4 */
  static kcg_bool _L4;
  /* manage_TextMessages_Pkg::deleteElement::_L5 */
  static DMI_TextMessage_ID_T_DMI_Types_Pkg _L5;
  /* manage_TextMessages_Pkg::deleteElement::_L6 */
  static kcg_bool _L6;
  /* manage_TextMessages_Pkg::deleteElement::_L7 */
  static kcg_int _L7;
  
  kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(&_L1, fromStore);
  _L2 = _L1.valid;
  _L3 = _L1.dmi_textMessageID;
  _L5 = inMessageID;
  _L6 = _L3 == _L5;
  _L4 = _L2 & _L6;
  deleteIt = _L4;
  IfBlock1_clock = deleteIt;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L7_IfBlock1 = kcg_false;
    _2_continue = _L7_IfBlock1;
    *_5_continue = _2_continue;
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(
      &_L9_IfBlock1,
      (DMI_TXT_MSG_status_T_DMI_Types_Pkg *)
        &cFreeTestStatusElement_DMI_Types_Pkg);
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(&_3_toStore, &_L9_IfBlock1);
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(_4_toStore, &_3_toStore);
  }
  else {
    _L2_IfBlock1 = kcg_true;
    _1_continue = _L2_IfBlock1;
    *_5_continue = _1_continue;
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(&_L1_IfBlock1, fromStore);
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(&toStore, &_L1_IfBlock1);
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(_4_toStore, &toStore);
  }
  _L7 = indexMAPwi;
  noname = _L7;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** deleteElement_manage_TextMessages_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

