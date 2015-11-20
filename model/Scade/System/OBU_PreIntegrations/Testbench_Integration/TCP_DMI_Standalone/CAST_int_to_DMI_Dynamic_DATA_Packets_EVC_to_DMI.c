/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_Dynamic_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Dynamic */
void CAST_int_to_DMI_Dynamic_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Dynamic::dmi_dynamic_int */DMI_Dynamic_int_array_T_DATA *dmi_dynamic_int,
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Dynamic::dmi_dynamic_ct */DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_dynamic_ct)
{
  (*dmi_dynamic_ct).system_clock = (*dmi_dynamic_int)[1];
  (*dmi_dynamic_ct).v_train = (*dmi_dynamic_int)[2];
  (*dmi_dynamic_ct).location_front_train = (*dmi_dynamic_int)[3];
  (*dmi_dynamic_ct).location_brake_target = (*dmi_dynamic_int)[4];
  (*dmi_dynamic_ct).v_target = (*dmi_dynamic_int)[5];
  (*dmi_dynamic_ct).v_permitted = (*dmi_dynamic_int)[6];
  (*dmi_dynamic_ct).v_release = (*dmi_dynamic_int)[7];
  (*dmi_dynamic_ct).location_brake_curve_starting_point = (*dmi_dynamic_int)[8];
  (*dmi_dynamic_ct).v_intervention = (*dmi_dynamic_int)[9];
  (*dmi_dynamic_ct).location_LOA = (*dmi_dynamic_int)[17];
  (*dmi_dynamic_ct).v_LOA = (*dmi_dynamic_int)[18];
  (*dmi_dynamic_ct).location_KP_Balise_Track = (*dmi_dynamic_int)[19];
  (*dmi_dynamic_ct).distance_KP_Balise = (*dmi_dynamic_int)[20];
  (*dmi_dynamic_ct).distance_to_TSA = (*dmi_dynamic_int)[21];
  (*dmi_dynamic_ct).distanceIndicationPoint = (*dmi_dynamic_int)[23];
  (*dmi_dynamic_ct).valid = /* 2 */
    Int_to_Bool_Utilities((*dmi_dynamic_int)[0]);
  (*dmi_dynamic_ct).mode = /* 1 */
    CAST_Int_to_M_MODE_TM_conversions((*dmi_dynamic_int)[10]);
  /* 1 */
  CAST_int_to_DMI_level_DATA_Variables(
    (*dmi_dynamic_int)[11],
    (*dmi_dynamic_int)[12],
    &(*dmi_dynamic_ct).level);
  (*dmi_dynamic_ct).nid_c = /* 1 */
    CAST_Int_to_NID_C_TM_conversions((*dmi_dynamic_int)[13]);
  (*dmi_dynamic_ct).nid_c_valid = /* 1 */
    Int_to_Bool_Utilities((*dmi_dynamic_int)[14]);
  (*dmi_dynamic_ct).m_warning = /* 1 */
    CAST_int_to_M_SupervisionDisplay_DATA_Variables((*dmi_dynamic_int)[15]);
  (*dmi_dynamic_ct).sup_status = /* 1 */
    CAST_int_to_M_SUPERVISION_STATUS_DATA_Variables((*dmi_dynamic_int)[16]);
  (*dmi_dynamic_ct).radioConnectionStatus = /* 1 */
    CAST_int_to_connectionStatusRadioUnit_DATA_Variables(
      (*dmi_dynamic_int)[22]);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_int_to_DMI_Dynamic_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

