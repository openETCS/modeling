/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::Write_DMI_identifier_to_int */
void Write_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::Write_DMI_identifier_to_int::dmi_identifier_ct */ DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_identifier_ct,
  /* DATA::Packets::DMI_to_EVC::Write_DMI_identifier_to_int::dmi_identifier_int */ DMI_Identifier_int_array_T_DATA *dmi_identifier_int)
{
  /* DATA::Packets::DMI_to_EVC::Write_DMI_identifier_to_int */
  static DMI_Identifier_int_array_T_DATA op_call;
  /* DATA::Packets::DMI_to_EVC::Write_DMI_identifier_to_int */
  static kcg_bool ck_every;
  /* DATA::Packets::DMI_to_EVC::Write_DMI_identifier_to_int::_L25 */
  static DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg _L25;
  /* DATA::Packets::DMI_to_EVC::Write_DMI_identifier_to_int::_L37 */
  static DMI_Identifier_int_array_T_DATA _L37;
  /* DATA::Packets::DMI_to_EVC::Write_DMI_identifier_to_int::_L38 */
  static kcg_bool _L38;
  /* DATA::Packets::DMI_to_EVC::Write_DMI_identifier_to_int::_L39 */
  static DMI_Identifier_int_array_T_DATA _L39;
  
  kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
    &_L25,
    dmi_identifier_ct);
  _L38 = _L25.valid;
  ck_every = _L38;
  /* ck_Write_DMI_identifier_to_int */ if (ck_every) {
    /* 1 */ C_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC(&_L25, &op_call);
  }
  kcg_copy_DMI_Identifier_int_array_T_DATA(
    &_L39,
    (DMI_Identifier_int_array_T_DATA *)
      &cDMI_Identifier_int_array_DATA_Packets_DMI_to_EVC);
  /* ck_Write_DMI_identifier_to_int */ if (ck_every) {
    kcg_copy_DMI_Identifier_int_array_T_DATA(&_L37, &op_call);
  }
  else {
    kcg_copy_DMI_Identifier_int_array_T_DATA(&_L37, &_L39);
  }
  kcg_copy_DMI_Identifier_int_array_T_DATA(dmi_identifier_int, &_L37);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

