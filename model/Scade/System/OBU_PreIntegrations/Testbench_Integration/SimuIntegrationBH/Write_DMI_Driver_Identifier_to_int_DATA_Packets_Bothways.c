/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_DMI_Driver_Identifier_to_int_DATA_Packets_Bothways.h"

/* DATA::Packets::Bothways::Write_DMI_Driver_Identifier_to_int */
void Write_DMI_Driver_Identifier_to_int_DATA_Packets_Bothways(
  /* DATA::Packets::Bothways::Write_DMI_Driver_Identifier_to_int::dmi_driver_identifier_ct */ DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *dmi_driver_identifier_ct,
  /* DATA::Packets::Bothways::Write_DMI_Driver_Identifier_to_int::dmi_driver_identifier_int */ DMI_Driver_Identifier_int_array_T_DATA *dmi_driver_identifier_int)
{
  /* DATA::Packets::Bothways::Write_DMI_Driver_Identifier_to_int */
  static DMI_Driver_Identifier_int_array_T_DATA op_call;
  /* DATA::Packets::Bothways::Write_DMI_Driver_Identifier_to_int */
  static kcg_bool ck_every;
  /* DATA::Packets::Bothways::Write_DMI_Driver_Identifier_to_int::_L13 */
  static DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg _L13;
  /* DATA::Packets::Bothways::Write_DMI_Driver_Identifier_to_int::_L23 */
  static DMI_Driver_Identifier_int_array_T_DATA _L23;
  /* DATA::Packets::Bothways::Write_DMI_Driver_Identifier_to_int::_L22 */
  static kcg_bool _L22;
  /* DATA::Packets::Bothways::Write_DMI_Driver_Identifier_to_int::_L21 */
  static DMI_Driver_Identifier_int_array_T_DATA _L21;
  
  kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
    &_L13,
    dmi_driver_identifier_ct);
  _L22 = _L13.valid;
  ck_every = _L22;
  /* ck_Write_DMI_Driver_Identifier_to_int */ if (ck_every) {
    /* 1 */
    C_DMI_Driver_Identifier_to_int1_DATA_Packets_Bothways(&_L13, &op_call);
  }
  kcg_copy_DMI_Driver_Identifier_int_array_T_DATA(
    &_L21,
    (DMI_Driver_Identifier_int_array_T_DATA *)
      &cDMI_Driver_Identifier_int_DATA_Packets_Bothways);
  /* ck_Write_DMI_Driver_Identifier_to_int */ if (ck_every) {
    kcg_copy_DMI_Driver_Identifier_int_array_T_DATA(&_L23, &op_call);
  }
  else {
    kcg_copy_DMI_Driver_Identifier_int_array_T_DATA(&_L23, &_L21);
  }
  kcg_copy_DMI_Driver_Identifier_int_array_T_DATA(
    dmi_driver_identifier_int,
    &_L23);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_DMI_Driver_Identifier_to_int_DATA_Packets_Bothways.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

