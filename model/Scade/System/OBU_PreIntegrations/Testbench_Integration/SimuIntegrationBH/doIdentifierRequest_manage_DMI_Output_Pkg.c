/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "doIdentifierRequest_manage_DMI_Output_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void doIdentifierRequest_init_manage_DMI_Output_Pkg(
  outC_doIdentifierRequest_manage_DMI_Output_Pkg *outC)
{
  static kcg_int i;
  
  outC->init = kcg_true;
  outC->identifierRequest.valid = kcg_true;
  outC->identifierRequest.system_clock = 0;
  outC->identifierRequest.ERTMS_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->identifierRequest.EVC_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->identifierRequest.l_name = 0;
  for (i = 0; i < 255; i++) {
    outC->identifierRequest.x_name[i] = ' ';
  }
  outC->identifierRequest.l_extra = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void doIdentifierRequest_reset_manage_DMI_Output_Pkg(
  outC_doIdentifierRequest_manage_DMI_Output_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* manage_DMI_Output_Pkg::doIdentifierRequest */
void doIdentifierRequest_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::doIdentifierRequest::TIU_TrainStatus */ TIU_trainStatus_T_TIU_Types_Pkg *TIU_TrainStatus,
  /* manage_DMI_Output_Pkg::doIdentifierRequest::inSystemTime */ T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_DMI_Output_Pkg::doIdentifierRequest::ownVersion */ M_VERSION ownVersion,
  outC_doIdentifierRequest_manage_DMI_Output_Pkg *outC)
{
  /* manage_DMI_Output_Pkg::doIdentifierRequest::identifierRequest */
  static DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg _1_identifierRequest;
  /* manage_DMI_Output_Pkg::doIdentifierRequest::IfBlock1::then::_L9 */
  static DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg _L9_IfBlock1;
  /* manage_DMI_Output_Pkg::doIdentifierRequest::IfBlock1::then::_L8 */
  static M_VERSION _L8_IfBlock1;
  /* manage_DMI_Output_Pkg::doIdentifierRequest::IfBlock1::then::_L7 */
  static DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg _L7_IfBlock1;
  /* manage_DMI_Output_Pkg::doIdentifierRequest::IfBlock1::then::_L6 */
  static M_VERSION _L6_IfBlock1;
  /* manage_DMI_Output_Pkg::doIdentifierRequest::IfBlock1::then::_L5 */
  static DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg _L5_IfBlock1;
  /* manage_DMI_Output_Pkg::doIdentifierRequest::IfBlock1::then::_L4 */
  static DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg _L4_IfBlock1;
  /* manage_DMI_Output_Pkg::doIdentifierRequest::IfBlock1::then::_L3 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L3_IfBlock1;
  /* manage_DMI_Output_Pkg::doIdentifierRequest::IfBlock1::then::_L2 */
  static DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg _L2_IfBlock1;
  /* manage_DMI_Output_Pkg::doIdentifierRequest::IfBlock1::then::_L1 */
  static DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg _L1_IfBlock1;
  /* manage_DMI_Output_Pkg::doIdentifierRequest::identifierRequest */
  static DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg identifierRequest;
  /* manage_DMI_Output_Pkg::doIdentifierRequest::IfBlock1::else::_L1 */
  static DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg _L12_IfBlock1;
  /* manage_DMI_Output_Pkg::doIdentifierRequest::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* manage_DMI_Output_Pkg::doIdentifierRequest::isStarted */
  static kcg_bool isStarted;
  /* manage_DMI_Output_Pkg::doIdentifierRequest::_L2 */
  static kcg_bool _L2;
  /* manage_DMI_Output_Pkg::doIdentifierRequest::_L3 */
  static TIU_trainStatus_T_TIU_Types_Pkg _L3;
  
  kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(&_L3, TIU_TrainStatus);
  _L2 = _L3.deskOpen;
  isStarted = _L2;
  IfBlock1_clock = isStarted;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &_L1_IfBlock1,
      (DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cEVCIdentifierRequest_manage_DMI_Output_Pkg);
    _L3_IfBlock1 = inSystemTime;
    kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &_L2_IfBlock1,
      &_L1_IfBlock1);
    if (kcg_true) {
      _L2_IfBlock1.system_clock = _L3_IfBlock1;
    }
    _L6_IfBlock1 = ownVersion;
    kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &_L4_IfBlock1,
      &_L2_IfBlock1);
    if (kcg_true) {
      _L4_IfBlock1.ERTMS_Version = _L6_IfBlock1;
    }
    _L8_IfBlock1 = ownVersion;
    kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &_L5_IfBlock1,
      &_L4_IfBlock1);
    if (kcg_true) {
      _L5_IfBlock1.EVC_Version = _L8_IfBlock1;
    }
    kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &_L7_IfBlock1,
      (DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cEmptyIdentifierRequest_manage_DMI_Output_Pkg);
    /* 1 */ if (outC->init) {
      kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
        &_L9_IfBlock1,
        &_L5_IfBlock1);
    }
    else {
      kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
        &_L9_IfBlock1,
        &_L7_IfBlock1);
    }
    kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &_1_identifierRequest,
      &_L9_IfBlock1);
    kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->identifierRequest,
      &_1_identifierRequest);
    outC->init = kcg_false;
  }
  else {
    kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &_L12_IfBlock1,
      (DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cEmptyIdentifierRequest_manage_DMI_Output_Pkg);
    kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &identifierRequest,
      &_L12_IfBlock1);
    kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->identifierRequest,
      &identifierRequest);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** doIdentifierRequest_manage_DMI_Output_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

