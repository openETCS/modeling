/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_Identifier_Request_to_int_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_DMI_Identifier_Request_to_int */
void CAST_DMI_Identifier_Request_to_int_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Identifier_Request_to_int::dmi_id_ct */DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_id_ct,
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Identifier_Request_to_int::dmi_id_int */DMI_Identifier_Request_int_array_T_DATA *dmi_id_int)
{
  (&(&(*dmi_id_int)[0])[0])[1] = (*dmi_id_ct).system_clock;
  (&(&(*dmi_id_int)[0])[0])[0] = /* 1 */
    Bool_to_Int_Utilities((*dmi_id_ct).valid);
  (&(&(*dmi_id_int)[0])[0])[2] = /* 1 */
    CAST_M_VERSION_to_int_TM_conversions((*dmi_id_ct).ERTMS_Version);
  (&(&(*dmi_id_int)[0])[0])[3] = /* 2 */
    CAST_M_VERSION_to_int_TM_conversions((*dmi_id_ct).EVC_Version);
  (&(&(*dmi_id_int)[0])[0])[4] = /* 1 */
    CAST_L_TEXT_to_int_TM_conversions((*dmi_id_ct).l_name);
  /* 1 */
  CAST_DMI_TEXT_to_int_DATA_Variables(
    &(*dmi_id_ct).x_name,
    (DMI_TEXT_INT_Array_T_DATA *) &(&(*dmi_id_int)[0])[5]);
  (&(*dmi_id_int)[260])[0] = /* 2 */
    CAST_L_TEXT_to_int_TM_conversions((*dmi_id_ct).l_extra);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_DMI_Identifier_Request_to_int_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

