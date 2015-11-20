/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_Dynamic_to_int_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_DMI_Dynamic_to_int */
void CAST_DMI_Dynamic_to_int_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Dynamic_to_int::dmi_dynamic_ct */DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_dynamic_ct,
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Dynamic_to_int::dmi_dynamic_int */DMI_Dynamic_int_array_T_DATA *dmi_dynamic_int)
{
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Dynamic_to_int::_L36 */
  static kcg_int _L36;
  
  (*dmi_dynamic_int)[1] = (*dmi_dynamic_ct).system_clock;
  (*dmi_dynamic_int)[2] = (*dmi_dynamic_ct).v_train;
  (*dmi_dynamic_int)[3] = (*dmi_dynamic_ct).location_front_train;
  (*dmi_dynamic_int)[4] = (*dmi_dynamic_ct).location_brake_target;
  (*dmi_dynamic_int)[5] = (*dmi_dynamic_ct).v_target;
  (*dmi_dynamic_int)[6] = (*dmi_dynamic_ct).v_permitted;
  (*dmi_dynamic_int)[7] = (*dmi_dynamic_ct).v_release;
  (*dmi_dynamic_int)[8] = (*dmi_dynamic_ct).location_brake_curve_starting_point;
  (*dmi_dynamic_int)[9] = (*dmi_dynamic_ct).v_intervention;
  (*dmi_dynamic_int)[17] = (*dmi_dynamic_ct).location_LOA;
  (*dmi_dynamic_int)[18] = (*dmi_dynamic_ct).v_LOA;
  (*dmi_dynamic_int)[19] = (*dmi_dynamic_ct).location_KP_Balise_Track;
  (*dmi_dynamic_int)[20] = (*dmi_dynamic_ct).distance_KP_Balise;
  (*dmi_dynamic_int)[21] = (*dmi_dynamic_ct).distance_to_TSA;
  (*dmi_dynamic_int)[23] = (*dmi_dynamic_ct).distanceIndicationPoint;
  /* 1 */
  CAST_DMI_level_to_int_DATA_Variables(
    &(*dmi_dynamic_ct).level,
    &(*dmi_dynamic_int)[11],
    &_L36);
  (*dmi_dynamic_int)[12] = _L36;
  (*dmi_dynamic_int)[0] = /* 1 */
    Bool_to_Int_Utilities((*dmi_dynamic_ct).valid);
  (*dmi_dynamic_int)[10] = /* 1 */
    CAST_M_MODE_to_int_TM_conversions((*dmi_dynamic_ct).mode);
  (*dmi_dynamic_int)[13] = /* 1 */
    CAST_NID_C_to_int_TM_conversions((*dmi_dynamic_ct).nid_c);
  (*dmi_dynamic_int)[14] = /* 2 */
    Bool_to_Int_Utilities((*dmi_dynamic_ct).nid_c_valid);
  (*dmi_dynamic_int)[15] = /* 1 */
    CAST_M_SupervisionDisplay_to_int_DATA_Variables(
      (*dmi_dynamic_ct).m_warning);
  (*dmi_dynamic_int)[16] = /* 1 */
    CAST_M_SUPERVISION_STATUS_to_int_DATA_Variables(
      (*dmi_dynamic_ct).sup_status);
  (*dmi_dynamic_int)[22] = /* 1 */
    CAST_connectionStatusRadioUnit_to_int_DATA_Variables(
      (*dmi_dynamic_ct).radioConnectionStatus);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_DMI_Dynamic_to_int_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

