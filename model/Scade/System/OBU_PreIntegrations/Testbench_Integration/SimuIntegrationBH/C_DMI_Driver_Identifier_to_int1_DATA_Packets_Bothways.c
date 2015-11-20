/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_DMI_Driver_Identifier_to_int1_DATA_Packets_Bothways.h"

/* DATA::Packets::Bothways::C_DMI_Driver_Identifier_to_int1 */
void C_DMI_Driver_Identifier_to_int1_DATA_Packets_Bothways(
  /* DATA::Packets::Bothways::C_DMI_Driver_Identifier_to_int1::dmi_driver_identifier_ct */ DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *dmi_driver_identifier_ct,
  /* DATA::Packets::Bothways::C_DMI_Driver_Identifier_to_int1::dmi_driver_identifier_int */ DMI_Driver_Identifier_int_array_T_DATA *dmi_driver_identifier_int)
{
  /* DATA::Packets::Bothways::C_DMI_Driver_Identifier_to_int1::_L2 */
  static array_int_2 _L2;
  /* DATA::Packets::Bothways::C_DMI_Driver_Identifier_to_int1::_L5 */
  static kcg_bool _L5;
  /* DATA::Packets::Bothways::C_DMI_Driver_Identifier_to_int1::_L4 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L4;
  /* DATA::Packets::Bothways::C_DMI_Driver_Identifier_to_int1::_L3 */
  static driverIdentifier_T_DMI_Messages_Bothways_Pkg _L3;
  /* DATA::Packets::Bothways::C_DMI_Driver_Identifier_to_int1::_L13 */
  static DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg _L13;
  /* DATA::Packets::Bothways::C_DMI_Driver_Identifier_to_int1::_L15 */
  static DriverIdentifier_INT_T_DATA _L15;
  /* DATA::Packets::Bothways::C_DMI_Driver_Identifier_to_int1::_L16 */
  static array_int_11 _L16;
  /* DATA::Packets::Bothways::C_DMI_Driver_Identifier_to_int1::_L20 */
  static kcg_int _L20;
  
  kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
    &_L13,
    dmi_driver_identifier_ct);
  _L5 = _L13.valid;
  _L20 = /* 1 */ Bool_to_Int_Utilities(_L5);
  _L4 = _L13.systemTime;
  _L2[0] = _L20;
  _L2[1] = _L4;
  kcg_copy_driverIdentifier_T_DMI_Messages_Bothways_Pkg(
    &_L3,
    &_L13.driverIdentifier);
  /* 1 */ CAST_DriverIdentfier_to_int_DATA_Variables(&_L3, &_L15);
  kcg_copy_array_int_2(&_L16[0], &_L2);
  kcg_copy_DriverIdentifier_INT_T_DATA(&_L16[2], &_L15);
  kcg_copy_DMI_Driver_Identifier_int_array_T_DATA(
    dmi_driver_identifier_int,
    &_L16);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_DMI_Driver_Identifier_to_int1_DATA_Packets_Bothways.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

