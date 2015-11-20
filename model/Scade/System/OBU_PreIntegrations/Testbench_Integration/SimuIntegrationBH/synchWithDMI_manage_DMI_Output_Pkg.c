/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "synchWithDMI_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::synchWithDMI */
void synchWithDMI_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::synchWithDMI::dmi_identifierRequest */ DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_identifierRequest,
  /* manage_DMI_Output_Pkg::synchWithDMI::TIU_TrainStatus */ TIU_trainStatus_T_TIU_Types_Pkg *TIU_TrainStatus,
  /* manage_DMI_Output_Pkg::synchWithDMI::outputStatus */ dmiOutputs_T_manage_DMI_Output_Pkg *outputStatus,
  /* manage_DMI_Output_Pkg::synchWithDMI::systemTime */ T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* manage_DMI_Output_Pkg::synchWithDMI::send_dmi_identifierRequest */ DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *send_dmi_identifierRequest,
  /* manage_DMI_Output_Pkg::synchWithDMI::updatedOutputStatus */ dmiOutputs_T_manage_DMI_Output_Pkg *updatedOutputStatus)
{
  /* manage_DMI_Output_Pkg::synchWithDMI::doSend */
  static kcg_bool doSend;
  /* manage_DMI_Output_Pkg::synchWithDMI::_L2 */
  static DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg _L2;
  /* manage_DMI_Output_Pkg::synchWithDMI::_L3 */
  static TIU_trainStatus_T_TIU_Types_Pkg _L3;
  /* manage_DMI_Output_Pkg::synchWithDMI::_L4 */
  static kcg_bool _L4;
  /* manage_DMI_Output_Pkg::synchWithDMI::_L5 */
  static DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg _L5;
  /* manage_DMI_Output_Pkg::synchWithDMI::_L6 */
  static dmiOutputs_T_manage_DMI_Output_Pkg _L6;
  /* manage_DMI_Output_Pkg::synchWithDMI::_L7 */
  static kcg_bool _L7;
  /* manage_DMI_Output_Pkg::synchWithDMI::_L8 */
  static kcg_bool _L8;
  /* manage_DMI_Output_Pkg::synchWithDMI::_L9 */
  static kcg_bool _L9;
  /* manage_DMI_Output_Pkg::synchWithDMI::_L10 */
  static kcg_bool _L10;
  /* manage_DMI_Output_Pkg::synchWithDMI::_L11 */
  static DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg _L11;
  /* manage_DMI_Output_Pkg::synchWithDMI::_L12 */
  static kcg_bool _L12;
  /* manage_DMI_Output_Pkg::synchWithDMI::_L15 */
  static DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg _L15;
  /* manage_DMI_Output_Pkg::synchWithDMI::_L16 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L16;
  /* manage_DMI_Output_Pkg::synchWithDMI::_L18 */
  static dmiOutputs_T_manage_DMI_Output_Pkg _L18;
  /* manage_DMI_Output_Pkg::synchWithDMI::_L19 */
  static kcg_bool _L19;
  /* manage_DMI_Output_Pkg::synchWithDMI::_L20 */
  static kcg_bool _L20;
  /* manage_DMI_Output_Pkg::synchWithDMI::_L21 */
  static DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg _L21;
  /* manage_DMI_Output_Pkg::synchWithDMI::_L22 */
  static DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg _L22;
  
  kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &_L2,
    dmi_identifierRequest);
  kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(&_L3, TIU_TrainStatus);
  _L4 = _L2.valid;
  _L12 = !_L4;
  _L7 = _L3.valid;
  _L8 = _L3.deskOpen;
  kcg_copy_dmiOutputs_T_manage_DMI_Output_Pkg(&_L6, outputStatus);
  _L10 = _L6.NO_initrequestSent;
  _L9 = _L12 & _L7 & _L8 & _L10;
  doSend = _L9;
  _L20 = doSend;
  kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &_L22,
    (DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *)
      &cSendInitRequest_manage_DMI_Output_Pkg);
  kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &_L21,
    (DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *)
      &cEmptyInitRequest_manage_DMI_Output_Pkg);
  /* 2 */ if (_L20) {
    kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(&_L11, &_L22);
  }
  else {
    kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(&_L11, &_L21);
  }
  /* 1 */ if (_L4) {
    kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(&_L5, &_L2);
  }
  else {
    kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(&_L5, &_L11);
  }
  _L16 = systemTime;
  kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(&_L15, &_L5);
  if (kcg_true) {
    _L15.system_clock = _L16;
  }
  kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    send_dmi_identifierRequest,
    &_L15);
  _L19 = doSend;
  kcg_copy_dmiOutputs_T_manage_DMI_Output_Pkg(&_L18, &_L6);
  if (kcg_true) {
    _L18.NO_initrequestSent = _L19;
  }
  kcg_copy_dmiOutputs_T_manage_DMI_Output_Pkg(updatedOutputStatus, &_L18);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** synchWithDMI_manage_DMI_Output_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

