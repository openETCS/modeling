/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::C_int_to_DMI_identifier */
void C_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_identifier::dmi_identifier_int_in */DMI_Identifier_int_array_T_DATA *dmi_identifier_int_in,
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_identifier::dmi_identifier_ct_out */DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_identifier_ct_out)
{
  (*dmi_identifier_ct_out).systemTime = (*dmi_identifier_int_in)[1];
  (*dmi_identifier_ct_out).l_name = (*dmi_identifier_int_in)[4];
  (*dmi_identifier_ct_out).valid = /* 1 */
    Int_to_Bool_Utilities((*dmi_identifier_int_in)[0]);
  (*dmi_identifier_ct_out).DMI_Identifier = /* 1 */
    CAST_int_to_DMI_DMI_identifier_DATA_Variables((*dmi_identifier_int_in)[2]);
  (*dmi_identifier_ct_out).Cabin_Identifier = /* 1 */
    CAST_int_to_DMI_Cabin_identifier_DATA_Variables(
      (*dmi_identifier_int_in)[3]);
  /* 1 */
  CAST_int_to_DMI_TEXT_DATA_Variables(
    (DMI_TEXT_INT_Array_T_DATA *) &(*dmi_identifier_int_in)[5],
    &(*dmi_identifier_ct_out).DMI_name);
  (*dmi_identifier_ct_out).m_version = /* 1 */
    CAST_Int_to_M_VERSION_TM_conversions((*dmi_identifier_int_in)[260]);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-11-20T19:47:11
*************************************************************$ */

