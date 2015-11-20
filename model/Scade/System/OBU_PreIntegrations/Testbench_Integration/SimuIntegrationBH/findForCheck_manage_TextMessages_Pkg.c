/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "findForCheck_manage_TextMessages_Pkg.h"

/* manage_TextMessages_Pkg::findForCheck */
kcg_bool findForCheck_manage_TextMessages_Pkg(
  /* manage_TextMessages_Pkg::findForCheck::inStatusList */ DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  /* manage_TextMessages_Pkg::findForCheck::inCompareElement */ DMI_TXT_MSG_status_T_DMI_Types_Pkg *inCompareElement)
{
  static kcg_int i1;
  /* manage_TextMessages_Pkg::findForCheck */
  static kcg_bool acc;
  static kcg_int i;
  /* manage_TextMessages_Pkg::findForCheck::_L6 */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg _L6;
  /* manage_TextMessages_Pkg::findForCheck::_L9 */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg _L9;
  /* manage_TextMessages_Pkg::findForCheck::_L11 */
  static DMI_TXT_MSG_status_T_DMI_Types_Pkg _L11;
  /* manage_TextMessages_Pkg::findForCheck::_L12 */
  static kcg_bool _L12;
  /* manage_TextMessages_Pkg::findForCheck::_L13 */
  static kcg_bool _L13;
  /* manage_TextMessages_Pkg::findForCheck::outFound */
  static kcg_bool outFound;
  
  kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(&_L6, inStatusList);
  kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(&_L11, inCompareElement);
  /* pow */ for (i1 = 0; i1 < 31; i1++) {
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(&_L9[i1], &_L11);
  }
  _L13 = kcg_false;
  _L12 = _L13;
  /* 2 */ for (i = 0; i < 31; i++) {
    acc = _L12;
    _L12 = /* 1 */ findElement_manage_TextMessages_Pkg(acc, &_L6[i], &_L9[i]);
  }
  outFound = _L12;
  return outFound;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** findForCheck_manage_TextMessages_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

