/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "saveStatus_manage_TextMessages_Pkg.h"

/* manage_TextMessages_Pkg::saveStatus */
void saveStatus_manage_TextMessages_Pkg(
  /* manage_TextMessages_Pkg::saveStatus::inStatusList */ DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  /* manage_TextMessages_Pkg::saveStatus::inStatusElement */ DMI_TXT_MSG_status_T_DMI_Types_Pkg *inStatusElement,
  /* manage_TextMessages_Pkg::saveStatus::outStatusList */ DMI_TXT_MSGList_status_T_DMI_Types_Pkg *outStatusList)
{
  static kcg_int i1;
  /* manage_TextMessages_Pkg::saveStatus */
  static kcg_bool cond_iterw;
  static kcg_int i;
  static kcg_int noname;
  /* manage_TextMessages_Pkg::saveStatus::_L1 */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg _L1;
  /* manage_TextMessages_Pkg::saveStatus::_L2 */
  static DMI_TXT_MSG_status_T_DMI_Types_Pkg _L2;
  /* manage_TextMessages_Pkg::saveStatus::_L4 */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg _L4;
  /* manage_TextMessages_Pkg::saveStatus::_L5 */
  static kcg_int _L5;
  /* manage_TextMessages_Pkg::saveStatus::_L6 */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg _L6;
  /* manage_TextMessages_Pkg::saveStatus::_L8 */
  static kcg_bool _L8;
  /* manage_TextMessages_Pkg::saveStatus::_L9 */
  static DMI_TXT_MSG_status_T_DMI_Types_Pkg _L9;
  
  kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(&_L1, inStatusList);
  kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(&_L2, inStatusElement);
  /* pow */ for (i1 = 0; i1 < 31; i1++) {
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(&_L6[i1], &_L2);
  }
  _L8 = kcg_true;
  kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(
    &_L9,
    (DMI_TXT_MSG_status_T_DMI_Types_Pkg *)
      &cFreeTestStatusElement_DMI_Types_Pkg);
  /* 1 */ if (_L8) {
    /* 1 */ for (i = 0; i < 31; i++) {
      /* 1 */
      setNew_manage_TextMessages_Pkg(i, &_L1[i], &_L6[i], &cond_iterw, &_L4[i]);
      _L5 = i + 1;
      /* 1 */ if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L5 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  /* 1 */ for (i = _L5; i < 31; i++) {
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(&_L4[i], &_L9);
  }
#endif /* KCG_MAPW_CPY */
  
  kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(outStatusList, &_L4);
  noname = _L5;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** saveStatus_manage_TextMessages_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

