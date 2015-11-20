/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::C_DMI_identifier_to_int */
void C_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::C_DMI_identifier_to_int::dmi_identifier_ct */DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_identifier_ct,
  /* DATA::Packets::DMI_to_EVC::C_DMI_identifier_to_int::dmi_identifier_int */DMI_Identifier_int_array_T_DATA *dmi_identifier_int)
{
  (&(&(*dmi_identifier_int)[0])[0])[1] = (*dmi_identifier_ct).systemTime;
  (&(&(*dmi_identifier_int)[0])[0])[4] = (*dmi_identifier_ct).l_name;
  (&(&(*dmi_identifier_int)[0])[0])[0] = /* 1 */
    Bool_to_Int_Utilities((*dmi_identifier_ct).valid);
  (&(&(*dmi_identifier_int)[0])[0])[2] = /* 1 */
    CAST_DMI_DMI_identifier_to_int_DATA_Variables(
      (*dmi_identifier_ct).DMI_Identifier);
  (&(&(*dmi_identifier_int)[0])[0])[3] = /* 1 */
    CAST_DMI_Cabin_identifier_to_int_DATA_Variables(
      (*dmi_identifier_ct).Cabin_Identifier);
  /* 1 */
  CAST_DMI_TEXT_to_int_DATA_Variables(
    &(*dmi_identifier_ct).DMI_name,
    (DMI_TEXT_INT_Array_T_DATA *) &(&(*dmi_identifier_int)[0])[5]);
  (&(*dmi_identifier_int)[260])[0] = /* 1 */
    CAST_M_VERSION_to_int_TM_conversions((*dmi_identifier_ct).m_version);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

