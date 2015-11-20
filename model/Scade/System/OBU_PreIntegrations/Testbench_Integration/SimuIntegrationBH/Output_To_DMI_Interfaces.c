/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Output_To_DMI_Interfaces.h"

/* Interfaces::Output_To_DMI */
void Output_To_DMI_Interfaces(
  /* Interfaces::Output_To_DMI::Ack_LS_Req_To_Driver */ kcg_bool Ack_LS_Req_To_Driver,
  /* Interfaces::Output_To_DMI::Ack_OS_Req_To_Driver */ kcg_bool Ack_OS_Req_To_Driver,
  /* Interfaces::Output_To_DMI::Ack_RV_Req_To_Driver */ kcg_bool Ack_RV_Req_To_Driver,
  /* Interfaces::Output_To_DMI::Ack_SH_Req_To_Driver */ kcg_bool Ack_SH_Req_To_Driver,
  /* Interfaces::Output_To_DMI::Ack_SN_Req_To_Driver */ kcg_bool Ack_SN_Req_To_Driver,
  /* Interfaces::Output_To_DMI::Ack_SR_Req_To_Driver */ kcg_bool Ack_SR_Req_To_Driver,
  /* Interfaces::Output_To_DMI::Ack_TR_Req_To_Driver */ kcg_bool Ack_TR_Req_To_Driver,
  /* Interfaces::Output_To_DMI::Ack_UN_Req_To_Driver */ kcg_bool Ack_UN_Req_To_Driver,
  /* Interfaces::Output_To_DMI::SH_Refused_By_RBC_To_DMI */ kcg_bool SH_Refused_By_RBC_To_DMI,
  /* Interfaces::Output_To_DMI::Data_To_DMI */ T_Data_To_DMI_Level_And_Mode_Types_Pkg *Data_To_DMI)
{
  /* Interfaces::Output_To_DMI::_L18 */
  static T_Data_To_DMI_Level_And_Mode_Types_Pkg _L18;
  /* Interfaces::Output_To_DMI::_L19 */
  static kcg_bool _L19;
  /* Interfaces::Output_To_DMI::_L20 */
  static kcg_bool _L20;
  /* Interfaces::Output_To_DMI::_L21 */
  static kcg_bool _L21;
  /* Interfaces::Output_To_DMI::_L22 */
  static kcg_bool _L22;
  /* Interfaces::Output_To_DMI::_L23 */
  static kcg_bool _L23;
  /* Interfaces::Output_To_DMI::_L24 */
  static kcg_bool _L24;
  /* Interfaces::Output_To_DMI::_L25 */
  static kcg_bool _L25;
  /* Interfaces::Output_To_DMI::_L26 */
  static kcg_bool _L26;
  /* Interfaces::Output_To_DMI::_L27 */
  static kcg_bool _L27;
  
  _L19 = Ack_LS_Req_To_Driver;
  _L20 = Ack_OS_Req_To_Driver;
  _L21 = Ack_RV_Req_To_Driver;
  _L22 = Ack_SH_Req_To_Driver;
  _L23 = Ack_SN_Req_To_Driver;
  _L24 = Ack_SR_Req_To_Driver;
  _L25 = Ack_TR_Req_To_Driver;
  _L26 = Ack_UN_Req_To_Driver;
  _L27 = SH_Refused_By_RBC_To_DMI;
  _L18.Ack_LS = _L19;
  _L18.Ack_OS = _L20;
  _L18.Ack_RV = _L21;
  _L18.Ack_SH = _L22;
  _L18.Ack_SN = _L23;
  _L18.Ack_SR = _L24;
  _L18.Ack_TR = _L25;
  _L18.Ack_UN = _L26;
  _L18.SH_Refused_By_RBC = _L27;
  kcg_copy_T_Data_To_DMI_Level_And_Mode_Types_Pkg(Data_To_DMI, &_L18);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Output_To_DMI_Interfaces.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

