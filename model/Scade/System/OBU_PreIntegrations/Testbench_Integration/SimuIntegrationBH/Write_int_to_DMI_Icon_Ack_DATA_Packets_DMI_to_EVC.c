/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_Icon_Ack_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Icon_Ack */
void Write_int_to_DMI_Icon_Ack_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Icon_Ack::dmi_icon_ack_int */ DMI_Icon_Ack_int_array_T_DATA *dmi_icon_ack_int,
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Icon_Ack::dmi_icon_ack_ct */ DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_icon_ack_ct)
{
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Icon_Ack */
  static DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg op_call;
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Icon_Ack */
  static kcg_bool ck_every;
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Icon_Ack::_L12 */
  static DMI_Icon_Ack_int_array_T_DATA _L12;
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Icon_Ack::_L14 */
  static DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _L14;
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Icon_Ack::_L18 */
  static kcg_int _L18;
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Icon_Ack::_L17 */
  static kcg_int _L17;
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Icon_Ack::_L16 */
  static kcg_bool _L16;
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Icon_Ack::_L19 */
  static DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _L19;
  
  _L18 = 1;
  kcg_copy_DMI_Icon_Ack_int_array_T_DATA(&_L12, dmi_icon_ack_int);
  _L17 = _L12[0];
  _L16 = _L18 == _L17;
  ck_every = _L16;
  /* ck_Write_int_to_DMI_Icon_Ack */ if (ck_every) {
    /* 1 */ C_int_to_DMI_Icon_Ack_DATA_Packets_DMI_to_EVC(&_L12, &op_call);
  }
  kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &_L19,
    (DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *)
      &cDMI_Icon_Ack_DATA_Packets_DMI_to_EVC);
  /* ck_Write_int_to_DMI_Icon_Ack */ if (ck_every) {
    kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(&_L14, &op_call);
  }
  else {
    kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(&_L14, &_L19);
  }
  kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(dmi_icon_ack_ct, &_L14);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_int_to_DMI_Icon_Ack_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

