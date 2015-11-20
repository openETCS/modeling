/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "clearStatus_manage_TextMessages_Pkg.h"

/* manage_TextMessages_Pkg::clearStatus */
void clearStatus_manage_TextMessages_Pkg(
  /* manage_TextMessages_Pkg::clearStatus::inStatusList */ DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  /* manage_TextMessages_Pkg::clearStatus::inMessageID */ DMI_TextMessage_ID_T_DMI_Types_Pkg inMessageID,
  /* manage_TextMessages_Pkg::clearStatus::outStatusList */ DMI_TXT_MSGList_status_T_DMI_Types_Pkg *outStatusList,
  /* manage_TextMessages_Pkg::clearStatus::outIndex */ kcg_int *outIndex)
{
  static kcg_int i1;
  /* manage_TextMessages_Pkg::clearStatus */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* manage_TextMessages_Pkg::clearStatus::_L3 */
  static kcg_int _L3;
  /* manage_TextMessages_Pkg::clearStatus::_L4 */
  static kcg_bool _L4;
  /* manage_TextMessages_Pkg::clearStatus::_L5 */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg _L5;
  /* manage_TextMessages_Pkg::clearStatus::_L6 */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg _L6;
  /* manage_TextMessages_Pkg::clearStatus::_L7 */
  static DMI_TextMessage_ID_T_DMI_Types_Pkg _L7;
  /* manage_TextMessages_Pkg::clearStatus::_L9 */
  static array_int_31 _L9;
  /* manage_TextMessages_Pkg::clearStatus::_L10 */
  static DMI_TXT_MSG_status_T_DMI_Types_Pkg _L10;
  
  kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(&_L6, inStatusList);
  _L7 = inMessageID;
  /* pow */ for (i1 = 0; i1 < 31; i1++) {
    _L9[i1] = _L7;
  }
  _L4 = kcg_true;
  kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(
    &_L10,
    (DMI_TXT_MSG_status_T_DMI_Types_Pkg *)
      &cFreeTestStatusElement_DMI_Types_Pkg);
  /* 1 */ if (_L4) {
    /* 1 */ for (i = 0; i < 31; i++) {
      /* 1 */
      deleteElement_manage_TextMessages_Pkg(
        i,
        &_L6[i],
        _L9[i],
        &cond_iterw,
        &_L5[i]);
      _L3 = i + 1;
      /* 1 */ if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L3 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  /* 1 */ for (i = _L3; i < 31; i++) {
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(&_L5[i], &_L10);
  }
#endif /* KCG_MAPW_CPY */
  
  kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(outStatusList, &_L5);
  *outIndex = _L3;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** clearStatus_manage_TextMessages_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

