/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_Driver_Reqest_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Driver_Reqest */
void Write_int_to_DMI_Driver_Reqest_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Driver_Reqest::dmi_driver_request_int */ DMI_Driver_Request_int_array_T_DATA *dmi_driver_request_int,
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Driver_Reqest::dmi_driver_request_ct */ DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_driver_request_ct)
{
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Driver_Reqest */
  static DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg op_call;
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Driver_Reqest */
  static kcg_bool ck_every;
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Driver_Reqest::_L1 */
  static DMI_Driver_Request_int_array_T_DATA _L1;
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Driver_Reqest::_L10 */
  static kcg_int _L10;
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Driver_Reqest::_L11 */
  static kcg_bool _L11;
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Driver_Reqest::_L12 */
  static kcg_int _L12;
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Driver_Reqest::_L13 */
  static DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg _L13;
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Driver_Reqest::_L14 */
  static DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg _L14;
  
  _L12 = 1;
  kcg_copy_DMI_Driver_Request_int_array_T_DATA(&_L1, dmi_driver_request_int);
  _L10 = _L1[0];
  _L11 = _L12 == _L10;
  ck_every = _L11;
  /* ck_Write_int_to_DMI_Driver_Reqest */ if (ck_every) {
    /* 1 */ C_int_to_DMI_Driver_Reqest_DATA_Packets_DMI_to_EVC(&_L1, &op_call);
  }
  kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
    &_L14,
    (DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *)
      &cDMI_Driver_Request_DATA_Packets_DMI_to_EVC);
  /* ck_Write_int_to_DMI_Driver_Reqest */ if (ck_every) {
    kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(&_L13, &op_call);
  }
  else {
    kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(&_L13, &_L14);
  }
  kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
    dmi_driver_request_ct,
    &_L13);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_int_to_DMI_Driver_Reqest_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

