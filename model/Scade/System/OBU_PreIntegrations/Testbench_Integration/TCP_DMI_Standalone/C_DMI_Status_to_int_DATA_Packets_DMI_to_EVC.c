/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_DMI_Status_to_int_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::C_DMI_Status_to_int */
void C_DMI_Status_to_int_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::C_DMI_Status_to_int::dim_status_ct */DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg *dim_status_ct,
  /* DATA::Packets::DMI_to_EVC::C_DMI_Status_to_int::dmi_status_int */DMI_Status_int_array_T_DATA *dmi_status_int)
{
  (*dmi_status_int)[1] = (*dim_status_ct).systemTime;
  (*dmi_status_int)[3] = (*dim_status_ct).nAlive;
  (*dmi_status_int)[0] = /* 1 */ Bool_to_Int_Utilities((*dim_status_ct).valid);
  (*dmi_status_int)[2] = /* 1 */
    CAST_DMI_StatusSet_to_int_DATA_Variables((*dim_status_ct).statusSet);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_DMI_Status_to_int_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

