/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "findElement_manage_TextMessages_Pkg.h"

/* manage_TextMessages_Pkg::findElement */
kcg_bool findElement_manage_TextMessages_Pkg(
  /* manage_TextMessages_Pkg::findElement::accu */ kcg_bool accu,
  /* manage_TextMessages_Pkg::findElement::fromStore */ DMI_TXT_MSG_status_T_DMI_Types_Pkg *fromStore,
  /* manage_TextMessages_Pkg::findElement::newRequest */ DMI_TXT_MSG_status_T_DMI_Types_Pkg *newRequest)
{
  /* manage_TextMessages_Pkg::findElement::_L1 */
  static DMI_TXT_MSG_status_T_DMI_Types_Pkg _L1;
  /* manage_TextMessages_Pkg::findElement::_L2 */
  static kcg_bool _L2;
  /* manage_TextMessages_Pkg::findElement::_L3 */
  static M_LEVEL _L3;
  /* manage_TextMessages_Pkg::findElement::_L6 */
  static kcg_bool _L6;
  /* manage_TextMessages_Pkg::findElement::_L8 */
  static DMI_TXT_MSG_status_T_DMI_Types_Pkg _L8;
  /* manage_TextMessages_Pkg::findElement::_L9 */
  static M_LEVEL _L9;
  /* manage_TextMessages_Pkg::findElement::_L10 */
  static DMI_context_TXT_MSG_T_DMI_Types_Pkg _L10;
  /* manage_TextMessages_Pkg::findElement::_L11 */
  static kcg_bool _L11;
  /* manage_TextMessages_Pkg::findElement::_L12 */
  static DMI_context_TXT_MSG_T_DMI_Types_Pkg _L12;
  /* manage_TextMessages_Pkg::findElement::_L13 */
  static kcg_bool _L13;
  /* manage_TextMessages_Pkg::findElement::_L20 */
  static kcg_bool _L20;
  /* manage_TextMessages_Pkg::findElement::_L19 */
  static kcg_bool _L19;
  /* manage_TextMessages_Pkg::findElement::_L18 */
  static kcg_bool _L18;
  /* manage_TextMessages_Pkg::findElement::_L17 */
  static kcg_bool _L17;
  /* manage_TextMessages_Pkg::findElement::_L16 */
  static M_MODE _L16;
  /* manage_TextMessages_Pkg::findElement::_L15 */
  static M_MODE _L15;
  /* manage_TextMessages_Pkg::findElement::_L14 */
  static DMI_context_TXT_MSG_T_DMI_Types_Pkg _L14;
  /* manage_TextMessages_Pkg::findElement::_L21 */
  static DMI_context_TXT_MSG_T_DMI_Types_Pkg _L21;
  /* manage_TextMessages_Pkg::findElement::_L22 */
  static kcg_bool _L22;
  /* manage_TextMessages_Pkg::findElement::_L24 */
  static kcg_bool _L24;
  /* manage_TextMessages_Pkg::findElement::result */
  static kcg_bool result;
  
  kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(&_L1, fromStore);
  _L2 = _L1.valid;
  _L3 = _L1.whichLevel;
  kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(&_L8, newRequest);
  _L9 = _L8.whichLevel;
  _L6 = _L3 == _L9;
  _L10 = _L1.context;
  _L12 = con_levelMgmt_DMI_Types_Pkg;
  _L11 = _L10 == _L12;
  _L13 = _L2 & _L11 & _L6;
  _L14 = _L1.context;
  _L15 = _L1.whichMode;
  _L16 = _L8.whichMode;
  _L17 = _L1.valid;
  _L21 = con_modeChange_DMI_Types_Pkg;
  _L19 = _L14 == _L21;
  _L20 = _L15 == _L16;
  _L18 = _L17 & _L19 & _L20;
  _L24 = accu;
  _L22 = _L13 | _L18 | _L24;
  result = _L22;
  return result;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** findElement_manage_TextMessages_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

