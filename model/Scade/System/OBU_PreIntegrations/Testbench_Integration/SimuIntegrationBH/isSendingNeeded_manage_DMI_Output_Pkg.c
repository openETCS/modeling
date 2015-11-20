/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "isSendingNeeded_manage_DMI_Output_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void isSendingNeeded_init_manage_DMI_Output_Pkg(
  outC_isSendingNeeded_manage_DMI_Output_Pkg *outC)
{
  outC->init = kcg_true;
  outC->lastDMI_Update = 0;
  outC->sendingNeeded = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void isSendingNeeded_reset_manage_DMI_Output_Pkg(
  outC_isSendingNeeded_manage_DMI_Output_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* manage_DMI_Output_Pkg::isSendingNeeded */
void isSendingNeeded_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::isSendingNeeded::inSystemTime */ T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_DMI_Output_Pkg::isSendingNeeded::incurrentDMIStatus */ DMI_EVC_status_T_DMI_Types_Pkg *incurrentDMIStatus,
  outC_isSendingNeeded_manage_DMI_Output_Pkg *outC)
{
  /* manage_DMI_Output_Pkg::isSendingNeeded::lastDMI_Update */
  static T_internal_Type_Obu_BasicTypes_Pkg last_lastDMI_Update;
  /* manage_DMI_Output_Pkg::isSendingNeeded::_L1 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L1;
  /* manage_DMI_Output_Pkg::isSendingNeeded::_L2 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L2;
  /* manage_DMI_Output_Pkg::isSendingNeeded::_L4 */
  static kcg_bool _L4;
  /* manage_DMI_Output_Pkg::isSendingNeeded::_L5 */
  static kcg_int _L5;
  /* manage_DMI_Output_Pkg::isSendingNeeded::_L6 */
  static kcg_bool _L6;
  /* manage_DMI_Output_Pkg::isSendingNeeded::_L7 */
  static kcg_int _L7;
  /* manage_DMI_Output_Pkg::isSendingNeeded::_L8 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L8;
  /* manage_DMI_Output_Pkg::isSendingNeeded::_L9 */
  static kcg_bool _L9;
  /* manage_DMI_Output_Pkg::isSendingNeeded::_L10 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L10;
  /* manage_DMI_Output_Pkg::isSendingNeeded::_L11 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L11;
  /* manage_DMI_Output_Pkg::isSendingNeeded::_L12 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L12;
  /* manage_DMI_Output_Pkg::isSendingNeeded::_L13 */
  static kcg_bool _L13;
  /* manage_DMI_Output_Pkg::isSendingNeeded::_L14 */
  static DMI_EVC_status_T_DMI_Types_Pkg _L14;
  /* manage_DMI_Output_Pkg::isSendingNeeded::_L15 */
  static kcg_bool _L15;
  
  _L2 = inSystemTime;
  _L8 = ctimeInterval_manage_DMI_Output_Pkg;
  /* last_init_ck_lastDMI_Update */ if (outC->init) {
    last_lastDMI_Update = 0;
  }
  else {
    last_lastDMI_Update = outC->lastDMI_Update;
  }
  _L1 = last_lastDMI_Update;
  _L7 = _L8 + _L1;
  _L9 = _L2 >= _L7;
  _L5 = 0;
  _L4 = _L1 == _L5;
  _L6 = _L9 | _L4;
  kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(&_L14, incurrentDMIStatus);
  _L15 = _L14.DMI_Active;
  _L13 = _L6 & _L15;
  outC->sendingNeeded = _L13;
  _L12 = inSystemTime;
  _L11 = last_lastDMI_Update;
  /* 1 */ if (_L13) {
    _L10 = _L12;
  }
  else {
    _L10 = _L11;
  }
  outC->lastDMI_Update = _L10;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** isSendingNeeded_manage_DMI_Output_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

