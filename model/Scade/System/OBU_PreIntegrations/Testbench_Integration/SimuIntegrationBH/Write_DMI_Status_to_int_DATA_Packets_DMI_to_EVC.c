/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_DMI_Status_to_int_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::Write_DMI_Status_to_int */
void Write_DMI_Status_to_int_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Status_to_int::dim_status_ct */ DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg *dim_status_ct,
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Status_to_int::dmi_status_int */ DMI_Status_int_array_T_DATA *dmi_status_int)
{
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Status_to_int */
  static DMI_Status_int_array_T_DATA op_call;
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Status_to_int */
  static kcg_bool ck_every;
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Status_to_int::_L17 */
  static DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg _L17;
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Status_to_int::_L24 */
  static DMI_Status_int_array_T_DATA _L24;
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Status_to_int::_L25 */
  static kcg_bool _L25;
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Status_to_int::_L26 */
  static DMI_Status_int_array_T_DATA _L26;
  
  kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(&_L17, dim_status_ct);
  _L25 = _L17.valid;
  ck_every = _L25;
  /* ck_Write_DMI_Status_to_int */ if (ck_every) {
    /* 1 */ C_DMI_Status_to_int_DATA_Packets_DMI_to_EVC(&_L17, &op_call);
  }
  kcg_copy_DMI_Status_int_array_T_DATA(
    &_L26,
    (DMI_Status_int_array_T_DATA *)
      &cDMI_Status_int_array_DATA_Packets_DMI_to_EVC);
  /* ck_Write_DMI_Status_to_int */ if (ck_every) {
    kcg_copy_DMI_Status_int_array_T_DATA(&_L24, &op_call);
  }
  else {
    kcg_copy_DMI_Status_int_array_T_DATA(&_L24, &_L26);
  }
  kcg_copy_DMI_Status_int_array_T_DATA(dmi_status_int, &_L24);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_DMI_Status_to_int_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

