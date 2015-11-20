/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_int_to_DMI_Driver_Reqest_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Driver_Reqest */
void C_int_to_DMI_Driver_Reqest_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Driver_Reqest::dmi_driver_request_int */ DMI_Driver_Request_int_array_T_DATA *dmi_driver_request_int,
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Driver_Reqest::dmi_driver_request_ct */ DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_driver_request_ct)
{
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Driver_Reqest::_L1 */
  static DMI_Driver_Request_int_array_T_DATA _L1;
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Driver_Reqest::_L4 */
  static kcg_int _L4;
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Driver_Reqest::_L3 */
  static kcg_int _L3;
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Driver_Reqest::_L2 */
  static kcg_int _L2;
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Driver_Reqest::_L5 */
  static DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg _L5;
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Driver_Reqest::_L8 */
  static DMI_Request_T_DMI_Types_Pkg _L8;
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Driver_Reqest::_L9 */
  static kcg_bool _L9;
  
  kcg_copy_DMI_Driver_Request_int_array_T_DATA(&_L1, dmi_driver_request_int);
  _L4 = _L1[0];
  _L9 = /* 1 */ Int_to_Bool_Utilities(_L4);
  _L3 = _L1[1];
  _L2 = _L1[2];
  _L8 = /* 1 */ CAST_int_to_DMI_Request_DATA_Variables(_L2);
  _L5.valid = _L9;
  _L5.systemTime = _L3;
  _L5.m_request = _L8;
  kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
    dmi_driver_request_ct,
    &_L5);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_int_to_DMI_Driver_Reqest_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

