/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways.h"

/* DATA::Packets::Bothways::C_int_to_DMI_Driver_Identifier */
void C_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways(
  /* DATA::Packets::Bothways::C_int_to_DMI_Driver_Identifier::dmi_driver_identifier_int */ DMI_Driver_Identifier_int_array_T_DATA *dmi_driver_identifier_int,
  /* DATA::Packets::Bothways::C_int_to_DMI_Driver_Identifier::dmi_driver_identifier_ct */ DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *dmi_driver_identifier_ct)
{
  /* DATA::Packets::Bothways::C_int_to_DMI_Driver_Identifier::_L2 */
  static DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg _L2;
  /* DATA::Packets::Bothways::C_int_to_DMI_Driver_Identifier::_L9 */
  static DMI_Driver_Identifier_int_array_T_DATA _L9;
  /* DATA::Packets::Bothways::C_int_to_DMI_Driver_Identifier::_L10 */
  static kcg_bool _L10;
  /* DATA::Packets::Bothways::C_int_to_DMI_Driver_Identifier::_L6 */
  static driverIdentifier_T_DMI_Messages_Bothways_Pkg _L6;
  /* DATA::Packets::Bothways::C_int_to_DMI_Driver_Identifier::_L19 */
  static kcg_int _L19;
  /* DATA::Packets::Bothways::C_int_to_DMI_Driver_Identifier::_L20 */
  static kcg_int _L20;
  /* DATA::Packets::Bothways::C_int_to_DMI_Driver_Identifier::_L21 */
  static array_int_9 _L21;
  
  kcg_copy_DMI_Driver_Identifier_int_array_T_DATA(
    &_L9,
    dmi_driver_identifier_int);
  _L19 = _L9[0];
  _L10 = /* 1 */ Int_to_Bool_Utilities(_L19);
  _L20 = _L9[1];
  kcg_copy_array_int_9(&_L21, (array_int_9 *) &_L9[2]);
  /* 1 */ CAST_int_to_DriverIdentfier_DATA_Variables(&_L21, &_L6);
  _L2.valid = _L10;
  _L2.systemTime = _L20;
  kcg_copy_driverIdentifier_T_DMI_Messages_Bothways_Pkg(
    &_L2.driverIdentifier,
    &_L6);
  kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
    dmi_driver_identifier_ct,
    &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

