/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_Dynamic_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Dynamic */
void CAST_int_to_DMI_Dynamic_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Dynamic::dmi_dynamic_int */ DMI_Dynamic_int_array_T_DATA *dmi_dynamic_int,
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Dynamic::dmi_dynamic_ct */ DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_dynamic_ct)
{
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Dynamic::_L24 */
  static kcg_int _L24;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Dynamic::_L23 */
  static kcg_int _L23;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Dynamic::_L22 */
  static kcg_int _L22;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Dynamic::_L21 */
  static kcg_int _L21;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Dynamic::_L20 */
  static kcg_int _L20;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Dynamic::_L19 */
  static kcg_int _L19;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Dynamic::_L18 */
  static kcg_int _L18;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Dynamic::_L17 */
  static kcg_int _L17;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Dynamic::_L16 */
  static kcg_int _L16;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Dynamic::_L15 */
  static kcg_int _L15;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Dynamic::_L14 */
  static kcg_int _L14;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Dynamic::_L13 */
  static kcg_int _L13;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Dynamic::_L12 */
  static kcg_int _L12;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Dynamic::_L11 */
  static kcg_int _L11;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Dynamic::_L10 */
  static kcg_int _L10;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Dynamic::_L9 */
  static kcg_int _L9;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Dynamic::_L8 */
  static kcg_int _L8;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Dynamic::_L7 */
  static kcg_int _L7;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Dynamic::_L6 */
  static kcg_int _L6;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Dynamic::_L5 */
  static kcg_int _L5;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Dynamic::_L4 */
  static kcg_int _L4;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Dynamic::_L3 */
  static kcg_int _L3;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Dynamic::_L2 */
  static kcg_int _L2;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Dynamic::_L25 */
  static kcg_bool _L25;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Dynamic::_L26 */
  static M_MODE _L26;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Dynamic::_L28 */
  static NID_C _L28;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Dynamic::_L29 */
  static M_SupervisionDisplay_T_DMI_Types_Pkg _L29;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Dynamic::_L30 */
  static kcg_bool _L30;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Dynamic::_L31 */
  static M_SUPERVISION_STATUS_DMI_Types_Pkg _L31;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Dynamic::_L33 */
  static DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg _L33;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Dynamic::_L38 */
  static DMI_Dynamic_int_array_T_DATA _L38;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Dynamic::_L39 */
  static kcg_int _L39;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Dynamic::_L41 */
  static connectionStatusRadioUnit_T_API_RadioCommunication_Pkg _L41;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Dynamic::_L43 */
  static DMI_level_T_DMI_Types_Pkg _L43;
  
  kcg_copy_DMI_Dynamic_int_array_T_DATA(&_L38, dmi_dynamic_int);
  _L39 = _L38[23];
  _L2 = _L38[22];
  _L3 = _L38[21];
  _L4 = _L38[20];
  _L5 = _L38[19];
  _L6 = _L38[18];
  _L7 = _L38[17];
  _L8 = _L38[16];
  _L9 = _L38[15];
  _L10 = _L38[14];
  _L11 = _L38[13];
  _L12 = _L38[12];
  _L13 = _L38[11];
  _L14 = _L38[10];
  _L15 = _L38[9];
  _L16 = _L38[8];
  _L17 = _L38[7];
  _L18 = _L38[6];
  _L19 = _L38[5];
  _L20 = _L38[4];
  _L21 = _L38[3];
  _L22 = _L38[2];
  _L23 = _L38[1];
  _L24 = _L38[0];
  _L25 = /* 2 */ Int_to_Bool_Utilities(_L24);
  _L26 = /* 1 */ CAST_Int_to_M_MODE_TM_conversions(_L14);
  _L28 = /* 1 */ CAST_Int_to_NID_C_TM_conversions(_L11);
  _L29 = /* 1 */ CAST_int_to_M_SupervisionDisplay_DATA_Variables(_L9);
  _L30 = /* 1 */ Int_to_Bool_Utilities(_L10);
  _L31 = /* 1 */ CAST_int_to_M_SUPERVISION_STATUS_DATA_Variables(_L8);
  _L41 = /* 1 */ CAST_int_to_connectionStatusRadioUnit_DATA_Variables(_L2);
  /* 1 */ CAST_int_to_DMI_level_DATA_Variables(_L13, _L12, &_L43);
  _L33.valid = _L25;
  _L33.system_clock = _L23;
  _L33.v_train = _L22;
  _L33.location_front_train = _L21;
  _L33.location_brake_target = _L20;
  _L33.v_target = _L19;
  _L33.v_permitted = _L18;
  _L33.v_release = _L17;
  _L33.location_brake_curve_starting_point = _L16;
  _L33.v_intervention = _L15;
  _L33.mode = _L26;
  kcg_copy_DMI_level_T_DMI_Types_Pkg(&_L33.level, &_L43);
  _L33.nid_c = _L28;
  _L33.nid_c_valid = _L30;
  _L33.m_warning = _L29;
  _L33.sup_status = _L31;
  _L33.location_LOA = _L7;
  _L33.v_LOA = _L6;
  _L33.location_KP_Balise_Track = _L5;
  _L33.distance_KP_Balise = _L4;
  _L33.distance_to_TSA = _L3;
  _L33.radioConnectionStatus = _L41;
  _L33.distanceIndicationPoint = _L39;
  kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(dmi_dynamic_ct, &_L33);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DMI_Dynamic_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

