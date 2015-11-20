/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_Dynamic_to_int_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_DMI_Dynamic_to_int */
void CAST_DMI_Dynamic_to_int_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Dynamic_to_int::dmi_dynamic_ct */ DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_dynamic_ct,
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Dynamic_to_int::dmi_dynamic_int */ DMI_Dynamic_int_array_T_DATA *dmi_dynamic_int)
{
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Dynamic_to_int::_L1 */
  static DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg _L1;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Dynamic_to_int::_L24 */
  static kcg_bool _L24;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Dynamic_to_int::_L23 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L23;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Dynamic_to_int::_L22 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L22;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Dynamic_to_int::_L21 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L21;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Dynamic_to_int::_L20 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L20;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Dynamic_to_int::_L19 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L19;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Dynamic_to_int::_L18 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L18;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Dynamic_to_int::_L17 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L17;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Dynamic_to_int::_L16 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L16;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Dynamic_to_int::_L15 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L15;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Dynamic_to_int::_L14 */
  static M_MODE _L14;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Dynamic_to_int::_L13 */
  static DMI_level_T_DMI_Types_Pkg _L13;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Dynamic_to_int::_L12 */
  static NID_C _L12;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Dynamic_to_int::_L11 */
  static kcg_bool _L11;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Dynamic_to_int::_L10 */
  static M_SupervisionDisplay_T_DMI_Types_Pkg _L10;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Dynamic_to_int::_L9 */
  static M_SUPERVISION_STATUS_DMI_Types_Pkg _L9;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Dynamic_to_int::_L8 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L8;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Dynamic_to_int::_L7 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L7;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Dynamic_to_int::_L6 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L6;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Dynamic_to_int::_L5 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L5;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Dynamic_to_int::_L4 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L4;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Dynamic_to_int::_L3 */
  static connectionStatusRadioUnit_T_API_RadioCommunication_Pkg _L3;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Dynamic_to_int::_L2 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L2;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Dynamic_to_int::_L25 */
  static kcg_int _L25;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Dynamic_to_int::_L26 */
  static kcg_int _L26;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Dynamic_to_int::_L27 */
  static kcg_int _L27;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Dynamic_to_int::_L28 */
  static kcg_int _L28;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Dynamic_to_int::_L29 */
  static M_SupervisionDisplay_INT_T_DATA _L29;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Dynamic_to_int::_L30 */
  static kcg_int _L30;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Dynamic_to_int::_L31 */
  static M_SUPERVISION_STATUS_INT_T_DATA _L31;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Dynamic_to_int::_L32 */
  static connectionStatusRadioUnit_INT_T_DATA _L32;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Dynamic_to_int::_L33 */
  static array_int_24 _L33;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Dynamic_to_int::_L36 */
  static kcg_int _L36;
  
  kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(&_L1, dmi_dynamic_ct);
  _L2 = _L1.distanceIndicationPoint;
  _L3 = _L1.radioConnectionStatus;
  _L4 = _L1.distance_to_TSA;
  _L5 = _L1.distance_KP_Balise;
  _L6 = _L1.location_KP_Balise_Track;
  _L7 = _L1.v_LOA;
  _L8 = _L1.location_LOA;
  _L9 = _L1.sup_status;
  _L10 = _L1.m_warning;
  _L11 = _L1.nid_c_valid;
  _L12 = _L1.nid_c;
  kcg_copy_DMI_level_T_DMI_Types_Pkg(&_L13, &_L1.level);
  _L14 = _L1.mode;
  _L15 = _L1.v_intervention;
  _L16 = _L1.location_brake_curve_starting_point;
  _L17 = _L1.v_release;
  _L18 = _L1.v_permitted;
  _L19 = _L1.v_target;
  _L20 = _L1.location_brake_target;
  _L21 = _L1.location_front_train;
  _L22 = _L1.v_train;
  _L23 = _L1.system_clock;
  _L24 = _L1.valid;
  _L25 = /* 1 */ Bool_to_Int_Utilities(_L24);
  _L26 = /* 1 */ CAST_M_MODE_to_int_TM_conversions(_L14);
  /* 1 */ CAST_DMI_level_to_int_DATA_Variables(&_L13, &_L27, &_L36);
  _L28 = /* 1 */ CAST_NID_C_to_int_TM_conversions(_L12);
  _L29 = /* 1 */ CAST_M_SupervisionDisplay_to_int_DATA_Variables(_L10);
  _L30 = /* 2 */ Bool_to_Int_Utilities(_L11);
  _L31 = /* 1 */ CAST_M_SUPERVISION_STATUS_to_int_DATA_Variables(_L9);
  _L32 = /* 1 */ CAST_connectionStatusRadioUnit_to_int_DATA_Variables(_L3);
  _L33[0] = _L25;
  _L33[1] = _L23;
  _L33[2] = _L22;
  _L33[3] = _L21;
  _L33[4] = _L20;
  _L33[5] = _L19;
  _L33[6] = _L18;
  _L33[7] = _L17;
  _L33[8] = _L16;
  _L33[9] = _L15;
  _L33[10] = _L26;
  _L33[11] = _L27;
  _L33[12] = _L36;
  _L33[13] = _L28;
  _L33[14] = _L30;
  _L33[15] = _L29;
  _L33[16] = _L31;
  _L33[17] = _L8;
  _L33[18] = _L7;
  _L33[19] = _L6;
  _L33[20] = _L5;
  _L33[21] = _L4;
  _L33[22] = _L32;
  _L33[23] = _L2;
  kcg_copy_DMI_Dynamic_int_array_T_DATA(dmi_dynamic_int, &_L33);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_Dynamic_to_int_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

