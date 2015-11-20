/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_System_Version_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_System_Version */
void CAST_int_to_DMI_System_Version_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_System_Version::dmi_system_version_int */DMI_System_Version_int_array_T_DATA *dmi_system_version_int,
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_System_Version::dmi_system_version_ct */DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_system_version_ct)
{
  (*dmi_system_version_ct).system_clock = (*dmi_system_version_int)[1];
  (*dmi_system_version_ct).valid = /* 1 */
    Int_to_Bool_Utilities((*dmi_system_version_int)[0]);
  (*dmi_system_version_ct).system_version = /* 1 */
    CAST_Int_to_M_VERSION_TM_conversions((*dmi_system_version_int)[2]);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_int_to_DMI_System_Version_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

