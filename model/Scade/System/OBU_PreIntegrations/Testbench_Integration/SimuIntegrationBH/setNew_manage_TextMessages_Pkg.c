/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "setNew_manage_TextMessages_Pkg.h"

/* manage_TextMessages_Pkg::setNew */
void setNew_manage_TextMessages_Pkg(
  /* manage_TextMessages_Pkg::setNew::indexMAPwi */ kcg_int indexMAPwi,
  /* manage_TextMessages_Pkg::setNew::fromStore */ DMI_TXT_MSG_status_T_DMI_Types_Pkg *fromStore,
  /* manage_TextMessages_Pkg::setNew::actualTextMsg */ DMI_TXT_MSG_status_T_DMI_Types_Pkg *actualTextMsg,
  /* manage_TextMessages_Pkg::setNew::continue */ kcg_bool *_7_continue,
  /* manage_TextMessages_Pkg::setNew::toStore */ DMI_TXT_MSG_status_T_DMI_Types_Pkg *_6_toStore)
{
  /* manage_TextMessages_Pkg::setNew::toStore */
  static DMI_TXT_MSG_status_T_DMI_Types_Pkg _3_toStore;
  /* manage_TextMessages_Pkg::setNew::continue */
  static kcg_bool _2_continue;
  /* manage_TextMessages_Pkg::setNew::IfBlock1::then::_L5 */
  static kcg_bool _L5_IfBlock1;
  /* manage_TextMessages_Pkg::setNew::IfBlock1::then::_L4 */
  static kcg_int _L4_IfBlock1;
  /* manage_TextMessages_Pkg::setNew::IfBlock1::then::_L2 */
  static DMI_TXT_MSG_status_T_DMI_Types_Pkg _L2_IfBlock1;
  /* manage_TextMessages_Pkg::setNew::IfBlock1::then::_L1 */
  static DMI_TXT_MSG_status_T_DMI_Types_Pkg _L1_IfBlock1;
  /* manage_TextMessages_Pkg::setNew::toStore */
  static DMI_TXT_MSG_status_T_DMI_Types_Pkg toStore;
  /* manage_TextMessages_Pkg::setNew::continue */
  static kcg_bool _1_continue;
  /* manage_TextMessages_Pkg::setNew::IfBlock1::else::_L2 */
  static kcg_bool _L24_IfBlock1;
  /* manage_TextMessages_Pkg::setNew::IfBlock1::else::_L1 */
  static DMI_TXT_MSG_status_T_DMI_Types_Pkg _L15_IfBlock1;
  /* manage_TextMessages_Pkg::setNew::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* manage_TextMessages_Pkg::setNew::takeIt */
  static kcg_bool takeIt;
  /* manage_TextMessages_Pkg::setNew::_L1 */
  static DMI_TXT_MSG_status_T_DMI_Types_Pkg _L1;
  /* manage_TextMessages_Pkg::setNew::_L2 */
  static kcg_bool _L2;
  /* manage_TextMessages_Pkg::setNew::_L3 */
  static kcg_bool _L3;
  
  kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(&_L1, fromStore);
  _L2 = _L1.valid;
  _L3 = !_L2;
  takeIt = _L3;
  IfBlock1_clock = takeIt;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L5_IfBlock1 = kcg_false;
    _2_continue = _L5_IfBlock1;
    *_7_continue = _2_continue;
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(&_L1_IfBlock1, actualTextMsg);
    _L4_IfBlock1 = indexMAPwi;
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(&_L2_IfBlock1, &_L1_IfBlock1);
    if (kcg_true) {
      _L2_IfBlock1.dmi_textMessageID = _L4_IfBlock1;
    }
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(&_3_toStore, &_L2_IfBlock1);
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(_6_toStore, &_3_toStore);
  }
  else {
    _L24_IfBlock1 = kcg_true;
    _1_continue = _L24_IfBlock1;
    *_7_continue = _1_continue;
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(&_L15_IfBlock1, fromStore);
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(&toStore, &_L15_IfBlock1);
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(_6_toStore, &toStore);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** setNew_manage_TextMessages_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

