/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways.h"

/* DATA::Packets::Bothways::Write_int_to_DMI_Driver_Identifier */
void Write_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways(
  /* DATA::Packets::Bothways::Write_int_to_DMI_Driver_Identifier::dmi_driver_identifier_int */ DMI_Driver_Identifier_int_array_T_DATA *dmi_driver_identifier_int,
  /* DATA::Packets::Bothways::Write_int_to_DMI_Driver_Identifier::dmi_driver_identifier_ct */ DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *dmi_driver_identifier_ct)
{
  /* DATA::Packets::Bothways::Write_int_to_DMI_Driver_Identifier */
  static DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg op_call;
  /* DATA::Packets::Bothways::Write_int_to_DMI_Driver_Identifier */
  static kcg_bool ck_every;
  /* DATA::Packets::Bothways::Write_int_to_DMI_Driver_Identifier::_L9 */
  static DMI_Driver_Identifier_int_array_T_DATA _L9;
  /* DATA::Packets::Bothways::Write_int_to_DMI_Driver_Identifier::_L26 */
  static kcg_int _L26;
  /* DATA::Packets::Bothways::Write_int_to_DMI_Driver_Identifier::_L25 */
  static kcg_bool _L25;
  /* DATA::Packets::Bothways::Write_int_to_DMI_Driver_Identifier::_L24 */
  static DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg _L24;
  /* DATA::Packets::Bothways::Write_int_to_DMI_Driver_Identifier::_L23 */
  static DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg _L23;
  /* DATA::Packets::Bothways::Write_int_to_DMI_Driver_Identifier::_L22 */
  static kcg_int _L22;
  
  _L26 = 1;
  kcg_copy_DMI_Driver_Identifier_int_array_T_DATA(
    &_L9,
    dmi_driver_identifier_int);
  _L22 = _L9[0];
  _L25 = _L26 == _L22;
  ck_every = _L25;
  /* ck_Write_int_to_DMI_Driver_Identifier */ if (ck_every) {
    /* 1 */
    C_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways(&_L9, &op_call);
  }
  kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
    &_L23,
    (DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *)
      &cDMI_Driver_Identifier_DATA_Packets_Bothways);
  /* ck_Write_int_to_DMI_Driver_Identifier */ if (ck_every) {
    kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(&_L24, &op_call);
  }
  else {
    kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(&_L24, &_L23);
  }
  kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
    dmi_driver_identifier_ct,
    &_L24);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

