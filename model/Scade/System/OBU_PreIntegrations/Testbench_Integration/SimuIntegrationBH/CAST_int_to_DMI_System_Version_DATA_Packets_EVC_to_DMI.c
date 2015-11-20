/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_System_Version_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_System_Version */
void CAST_int_to_DMI_System_Version_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_System_Version::dmi_system_version_int */ DMI_System_Version_int_array_T_DATA *dmi_system_version_int,
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_System_Version::dmi_system_version_ct */ DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_system_version_ct)
{
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_System_Version::_L2 */
  static DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg _L2;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_System_Version::_L5 */
  static kcg_int _L5;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_System_Version::_L4 */
  static kcg_int _L4;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_System_Version::_L3 */
  static kcg_int _L3;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_System_Version::_L6 */
  static kcg_bool _L6;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_System_Version::_L7 */
  static M_VERSION _L7;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_System_Version::_L9 */
  static DMI_System_Version_int_array_T_DATA _L9;
  
  kcg_copy_DMI_System_Version_int_array_T_DATA(&_L9, dmi_system_version_int);
  _L5 = _L9[0];
  _L6 = /* 1 */ Int_to_Bool_Utilities(_L5);
  _L4 = _L9[1];
  _L3 = _L9[2];
  _L7 = /* 1 */ CAST_Int_to_M_VERSION_TM_conversions(_L3);
  _L2.valid = _L6;
  _L2.system_clock = _L4;
  _L2.system_version = _L7;
  kcg_copy_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg(
    dmi_system_version_ct,
    &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DMI_System_Version_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

