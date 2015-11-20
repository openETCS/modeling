/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_DMI_Icon_Ack_to_int1_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::Write_DMI_Icon_Ack_to_int1 */
void Write_DMI_Icon_Ack_to_int1_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Icon_Ack_to_int1::dmi_icon_ack_ct */ DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_icon_ack_ct,
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Icon_Ack_to_int1::dmi_icon_ack_int */ DMI_Icon_Ack_int_array_T_DATA *dmi_icon_ack_int)
{
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Icon_Ack_to_int1 */
  static DMI_Icon_Ack_int_array_T_DATA op_call;
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Icon_Ack_to_int1 */
  static kcg_bool ck_every;
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Icon_Ack_to_int1::_L17 */
  static DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _L17;
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Icon_Ack_to_int1::_L25 */
  static DMI_Icon_Ack_int_array_T_DATA _L25;
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Icon_Ack_to_int1::_L26 */
  static kcg_bool _L26;
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Icon_Ack_to_int1::_L27 */
  static DMI_Icon_Ack_int_array_T_DATA _L27;
  
  kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(&_L17, dmi_icon_ack_ct);
  _L26 = _L17.valid;
  ck_every = _L26;
  /* ck_Write_DMI_Icon_Ack_to_int1 */ if (ck_every) {
    /* 1 */ C_DMI_Icon_Ack_to_int_DATA_Packets_DMI_to_EVC(&_L17, &op_call);
  }
  kcg_copy_DMI_Icon_Ack_int_array_T_DATA(
    &_L27,
    (DMI_Icon_Ack_int_array_T_DATA *)
      &cDMI_Icon_Ack_int_array_DATA_Packets_DMI_to_EVC);
  /* ck_Write_DMI_Icon_Ack_to_int1 */ if (ck_every) {
    kcg_copy_DMI_Icon_Ack_int_array_T_DATA(&_L25, &op_call);
  }
  else {
    kcg_copy_DMI_Icon_Ack_int_array_T_DATA(&_L25, &_L27);
  }
  kcg_copy_DMI_Icon_Ack_int_array_T_DATA(dmi_icon_ack_int, &_L25);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_DMI_Icon_Ack_to_int1_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

