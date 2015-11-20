/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sendVersion_manage_DMI_Output_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void sendVersion_init_manage_DMI_Output_Pkg(
  outC_sendVersion_manage_DMI_Output_Pkg *outC)
{
  outC->init = kcg_true;
  outC->versionSent = kcg_true;
  outC->VersionPkg.valid = kcg_true;
  outC->VersionPkg.system_clock = 0;
  outC->VersionPkg.system_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void sendVersion_reset_manage_DMI_Output_Pkg(
  outC_sendVersion_manage_DMI_Output_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* manage_DMI_Output_Pkg::sendVersion */
void sendVersion_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::sendVersion::ownVersion */ M_VERSION ownVersion,
  /* manage_DMI_Output_Pkg::sendVersion::dmiStatus */ DMI_EVC_status_T_DMI_Types_Pkg *dmiStatus,
  /* manage_DMI_Output_Pkg::sendVersion::inSystemTime */ T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  outC_sendVersion_manage_DMI_Output_Pkg *outC)
{
  /* manage_DMI_Output_Pkg::sendVersion::versionSent */
  static kcg_bool last_versionSent;
  /* manage_DMI_Output_Pkg::sendVersion::sendPkg */
  static kcg_bool sendPkg;
  /* manage_DMI_Output_Pkg::sendVersion::_L1 */
  static M_VERSION _L1;
  /* manage_DMI_Output_Pkg::sendVersion::_L2 */
  static DMI_EVC_status_T_DMI_Types_Pkg _L2;
  /* manage_DMI_Output_Pkg::sendVersion::_L3 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L3;
  /* manage_DMI_Output_Pkg::sendVersion::_L4 */
  static DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg _L4;
  /* manage_DMI_Output_Pkg::sendVersion::_L5 */
  static kcg_bool _L5;
  /* manage_DMI_Output_Pkg::sendVersion::_L7 */
  static kcg_bool _L7;
  /* manage_DMI_Output_Pkg::sendVersion::_L8 */
  static kcg_bool _L8;
  /* manage_DMI_Output_Pkg::sendVersion::_L9 */
  static kcg_bool _L9;
  /* manage_DMI_Output_Pkg::sendVersion::_L10 */
  static DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg _L10;
  /* manage_DMI_Output_Pkg::sendVersion::_L11 */
  static DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg _L11;
  /* manage_DMI_Output_Pkg::sendVersion::_L13 */
  static kcg_bool _L13;
  /* manage_DMI_Output_Pkg::sendVersion::_L14 */
  static kcg_bool _L14;
  /* manage_DMI_Output_Pkg::sendVersion::_L15 */
  static kcg_bool _L15;
  /* manage_DMI_Output_Pkg::sendVersion::_L16 */
  static kcg_bool _L16;
  
  _L1 = ownVersion;
  kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(&_L2, dmiStatus);
  _L3 = inSystemTime;
  _L5 = _L2.DMI_Active;
  /* last_init_ck_versionSent */ if (outC->init) {
    last_versionSent = kcg_false;
  }
  else {
    last_versionSent = outC->versionSent;
  }
  _L7 = last_versionSent;
  _L8 = _L5 & _L7;
  sendPkg = _L8;
  _L16 = sendPkg;
  _L9 = kcg_true;
  _L4.valid = _L9;
  _L4.system_clock = _L3;
  _L4.system_version = _L1;
  kcg_copy_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg(
    &_L11,
    (DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg *)
      &cEmptyVersion_manage_DMI_Output_Pkg);
  /* 1 */ if (_L16) {
    kcg_copy_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg(&_L10, &_L4);
  }
  else {
    kcg_copy_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg(&_L10, &_L11);
  }
  kcg_copy_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->VersionPkg,
    &_L10);
  _L15 = sendPkg;
  _L14 = last_versionSent;
  _L13 = _L15 | _L14;
  outC->versionSent = _L13;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** sendVersion_manage_DMI_Output_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

