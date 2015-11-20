/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_Status_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Status */
void Write_int_to_DMI_Status_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Status::dmi_status_int */ DMI_Status_int_array_T_DATA *dmi_status_int,
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Status::dim_status_ct */ DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg *dim_status_ct)
{
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Status */
  static DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg op_call;
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Status */
  static kcg_bool ck_every;
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Status::_L2 */
  static DMI_Status_int_array_T_DATA _L2;
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Status::_L21 */
  static kcg_int _L21;
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Status::_L20 */
  static kcg_int _L20;
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Status::_L19 */
  static kcg_bool _L19;
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Status::_L22 */
  static DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg _L22;
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Status::_L23 */
  static DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg _L23;
  
  _L20 = 1;
  kcg_copy_DMI_Status_int_array_T_DATA(&_L2, dmi_status_int);
  _L21 = _L2[0];
  _L19 = _L20 == _L21;
  ck_every = _L19;
  /* ck_Write_int_to_DMI_Status */ if (ck_every) {
    /* 1 */ C_int_to_DMI_Status_DATA_Packets_DMI_to_EVC(&_L2, &op_call);
  }
  kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(
    &_L23,
    (DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg *)
      &cDMI_Status_DATA_Packets_DMI_to_EVC);
  /* ck_Write_int_to_DMI_Status */ if (ck_every) {
    kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(&_L22, &op_call);
  }
  else {
    kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(&_L22, &_L23);
  }
  kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(dim_status_ct, &_L22);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_int_to_DMI_Status_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

