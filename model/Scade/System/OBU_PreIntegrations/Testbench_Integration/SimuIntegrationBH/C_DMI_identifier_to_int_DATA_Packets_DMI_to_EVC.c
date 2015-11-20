/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::C_DMI_identifier_to_int */
void C_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::C_DMI_identifier_to_int::dmi_identifier_ct */ DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_identifier_ct,
  /* DATA::Packets::DMI_to_EVC::C_DMI_identifier_to_int::dmi_identifier_int */ DMI_Identifier_int_array_T_DATA *dmi_identifier_int)
{
  /* DATA::Packets::DMI_to_EVC::C_DMI_identifier_to_int */
  static array_int_260 tmp;
  /* DATA::Packets::DMI_to_EVC::C_DMI_identifier_to_int::_L9 */
  static kcg_bool _L9;
  /* DATA::Packets::DMI_to_EVC::C_DMI_identifier_to_int::_L8 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L8;
  /* DATA::Packets::DMI_to_EVC::C_DMI_identifier_to_int::_L7 */
  static DMI_DMI_Identifier_T_DMI_Types_Pkg _L7;
  /* DATA::Packets::DMI_to_EVC::C_DMI_identifier_to_int::_L6 */
  static DMI_Cabin_Identifier_T_DMI_Types_Pkg _L6;
  /* DATA::Packets::DMI_to_EVC::C_DMI_identifier_to_int::_L5 */
  static L_TEXT _L5;
  /* DATA::Packets::DMI_to_EVC::C_DMI_identifier_to_int::_L4 */
  static DMI_TEXT_DMI_Types_Pkg _L4;
  /* DATA::Packets::DMI_to_EVC::C_DMI_identifier_to_int::_L3 */
  static M_VERSION _L3;
  /* DATA::Packets::DMI_to_EVC::C_DMI_identifier_to_int::_L13 */
  static kcg_int _L13;
  /* DATA::Packets::DMI_to_EVC::C_DMI_identifier_to_int::_L22 */
  static kcg_int _L22;
  /* DATA::Packets::DMI_to_EVC::C_DMI_identifier_to_int::_L23 */
  static DMI_TEXT_INT_Array_T_DATA _L23;
  /* DATA::Packets::DMI_to_EVC::C_DMI_identifier_to_int::_L24 */
  static kcg_int _L24;
  /* DATA::Packets::DMI_to_EVC::C_DMI_identifier_to_int::_L28 */
  static P044_other_data_TM_TrainToTrack _L28;
  /* DATA::Packets::DMI_to_EVC::C_DMI_identifier_to_int::_L32 */
  static array_int_5 _L32;
  /* DATA::Packets::DMI_to_EVC::C_DMI_identifier_to_int::_L36 */
  static kcg_int _L36;
  /* DATA::Packets::DMI_to_EVC::C_DMI_identifier_to_int::_L39 */
  static array_int_261 _L39;
  /* DATA::Packets::DMI_to_EVC::C_DMI_identifier_to_int::_L40 */
  static DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg _L40;
  
  kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
    &_L40,
    dmi_identifier_ct);
  _L3 = _L40.m_version;
  kcg_copy_DMI_TEXT_DMI_Types_Pkg(&_L4, &_L40.DMI_name);
  _L5 = _L40.l_name;
  _L6 = _L40.Cabin_Identifier;
  _L7 = _L40.DMI_Identifier;
  _L8 = _L40.systemTime;
  _L9 = _L40.valid;
  _L13 = /* 1 */ CAST_M_VERSION_to_int_TM_conversions(_L3);
  _L22 = /* 1 */ CAST_DMI_DMI_identifier_to_int_DATA_Variables(_L7);
  /* 1 */ CAST_DMI_TEXT_to_int_DATA_Variables(&_L4, &_L23);
  _L24 = /* 1 */ CAST_DMI_Cabin_identifier_to_int_DATA_Variables(_L6);
  _L36 = /* 1 */ Bool_to_Int_Utilities(_L9);
  _L32[0] = _L36;
  _L32[1] = _L8;
  _L32[2] = _L22;
  _L32[3] = _L24;
  _L32[4] = _L5;
  _L28[0] = _L13;
  kcg_copy_array_int_5(&tmp[0], &_L32);
  kcg_copy_DMI_TEXT_INT_Array_T_DATA(&tmp[5], &_L23);
  kcg_copy_array_int_260(&_L39[0], &tmp);
  kcg_copy_P044_other_data_TM_TrainToTrack(&_L39[260], &_L28);
  kcg_copy_DMI_Identifier_int_array_T_DATA(dmi_identifier_int, &_L39);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

