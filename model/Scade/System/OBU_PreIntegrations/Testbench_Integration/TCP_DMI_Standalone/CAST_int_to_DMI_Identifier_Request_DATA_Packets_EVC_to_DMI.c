/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_Identifier_Request_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Identifier_Request */
void CAST_int_to_DMI_Identifier_Request_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Identifier_Request::dmi_id_int */DMI_Identifier_Request_int_array_T_DATA *dmi_id_int,
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Identifier_Request::dmi_id_ct */DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_id_ct)
{
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Identifier_Request::_L21 */ array_int_5 _L21;
  
  (*dmi_id_ct).l_extra = (*dmi_id_int)[260];
  kcg_copy_array_int_5(&_L21, (array_int_5 *) &(*dmi_id_int)[0]);
  (*dmi_id_ct).system_clock = _L21[1];
  (*dmi_id_ct).valid = /* 1 */ Int_to_Bool_Utilities(_L21[0]);
  (*dmi_id_ct).ERTMS_Version = /* 1 */
    CAST_Int_to_M_VERSION_TM_conversions(_L21[2]);
  (*dmi_id_ct).EVC_Version = /* 2 */
    CAST_Int_to_M_VERSION_TM_conversions(_L21[3]);
  (*dmi_id_ct).l_name = /* 1 */ CAST_Int_to_L_TEXT_TM_conversions(_L21[4]);
  /* 1 */
  CAST_int_to_DMI_TEXT_DATA_Variables(
    (DMI_TEXT_INT_Array_T_DATA *) &(*dmi_id_int)[5],
    &(*dmi_id_ct).x_name);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_int_to_DMI_Identifier_Request_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

