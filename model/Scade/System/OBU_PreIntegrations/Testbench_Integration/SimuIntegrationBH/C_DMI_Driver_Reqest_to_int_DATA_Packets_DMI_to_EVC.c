/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_DMI_Driver_Reqest_to_int_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::C_DMI_Driver_Reqest_to_int */
void C_DMI_Driver_Reqest_to_int_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::C_DMI_Driver_Reqest_to_int::dmi_driver_request_ct */ DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_driver_request_ct,
  /* DATA::Packets::DMI_to_EVC::C_DMI_Driver_Reqest_to_int::dmi_driver_request_int */ DMI_Driver_Request_int_array_T_DATA *dmi_driver_request_int)
{
  static kcg_bool noname;
  /* DATA::Packets::DMI_to_EVC::C_DMI_Driver_Reqest_to_int::_L4 */
  static kcg_bool _L4;
  /* DATA::Packets::DMI_to_EVC::C_DMI_Driver_Reqest_to_int::_L3 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L3;
  /* DATA::Packets::DMI_to_EVC::C_DMI_Driver_Reqest_to_int::_L2 */
  static DMI_Request_T_DMI_Types_Pkg _L2;
  /* DATA::Packets::DMI_to_EVC::C_DMI_Driver_Reqest_to_int::_L13 */
  static DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg _L13;
  /* DATA::Packets::DMI_to_EVC::C_DMI_Driver_Reqest_to_int::_L15 */
  static kcg_int _L15;
  /* DATA::Packets::DMI_to_EVC::C_DMI_Driver_Reqest_to_int::_L16 */
  static array_int_3 _L16;
  /* DATA::Packets::DMI_to_EVC::C_DMI_Driver_Reqest_to_int::_L21 */
  static kcg_int _L21;
  
  _L21 = 1;
  kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
    &_L13,
    dmi_driver_request_ct);
  _L3 = _L13.systemTime;
  _L2 = _L13.m_request;
  _L15 = /* 1 */ CAST_DMI_Request_to_int_DATA_Variables(_L2);
  _L16[0] = _L21;
  _L16[1] = _L3;
  _L16[2] = _L15;
  kcg_copy_DMI_Driver_Request_int_array_T_DATA(dmi_driver_request_int, &_L16);
  _L4 = _L13.valid;
  noname = _L4;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_DMI_Driver_Reqest_to_int_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

