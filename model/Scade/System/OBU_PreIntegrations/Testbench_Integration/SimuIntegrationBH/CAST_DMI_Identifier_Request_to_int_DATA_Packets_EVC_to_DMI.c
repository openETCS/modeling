/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_Identifier_Request_to_int_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_DMI_Identifier_Request_to_int */
void CAST_DMI_Identifier_Request_to_int_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Identifier_Request_to_int::dmi_id_ct */ DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_id_ct,
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Identifier_Request_to_int::dmi_id_int */ DMI_Identifier_Request_int_array_T_DATA *dmi_id_int)
{
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Identifier_Request_to_int */
  static array_int_260 tmp;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Identifier_Request_to_int::_L1 */
  static DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg _L1;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Identifier_Request_to_int::_L8 */
  static kcg_bool _L8;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Identifier_Request_to_int::_L7 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L7;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Identifier_Request_to_int::_L6 */
  static M_VERSION _L6;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Identifier_Request_to_int::_L5 */
  static M_VERSION _L5;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Identifier_Request_to_int::_L4 */
  static L_TEXT _L4;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Identifier_Request_to_int::_L3 */
  static DMI_TEXT_DMI_Types_Pkg _L3;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Identifier_Request_to_int::_L2 */
  static L_TEXT _L2;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Identifier_Request_to_int::_L9 */
  static array_int_5 _L9;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Identifier_Request_to_int::_L10 */
  static kcg_int _L10;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Identifier_Request_to_int::_L11 */
  static kcg_int _L11;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Identifier_Request_to_int::_L12 */
  static kcg_int _L12;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Identifier_Request_to_int::_L13 */
  static kcg_int _L13;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Identifier_Request_to_int::_L14 */
  static kcg_int _L14;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Identifier_Request_to_int::_L15 */
  static DMI_TEXT_INT_Array_T_DATA _L15;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Identifier_Request_to_int::_L16 */
  static P044_other_data_TM_TrainToTrack _L16;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Identifier_Request_to_int::_L17 */
  static array_int_261 _L17;
  
  kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &_L1,
    dmi_id_ct);
  _L2 = _L1.l_extra;
  kcg_copy_DMI_TEXT_DMI_Types_Pkg(&_L3, &_L1.x_name);
  _L4 = _L1.l_name;
  _L5 = _L1.EVC_Version;
  _L6 = _L1.ERTMS_Version;
  _L7 = _L1.system_clock;
  _L8 = _L1.valid;
  _L10 = /* 1 */ Bool_to_Int_Utilities(_L8);
  _L11 = /* 1 */ CAST_M_VERSION_to_int_TM_conversions(_L6);
  _L12 = /* 2 */ CAST_M_VERSION_to_int_TM_conversions(_L5);
  _L13 = /* 1 */ CAST_L_TEXT_to_int_TM_conversions(_L4);
  _L9[0] = _L10;
  _L9[1] = _L7;
  _L9[2] = _L11;
  _L9[3] = _L12;
  _L9[4] = _L13;
  /* 1 */ CAST_DMI_TEXT_to_int_DATA_Variables(&_L3, &_L15);
  _L14 = /* 2 */ CAST_L_TEXT_to_int_TM_conversions(_L2);
  _L16[0] = _L14;
  kcg_copy_array_int_5(&tmp[0], &_L9);
  kcg_copy_DMI_TEXT_INT_Array_T_DATA(&tmp[5], &_L15);
  kcg_copy_array_int_260(&_L17[0], &tmp);
  kcg_copy_P044_other_data_TM_TrainToTrack(&_L17[260], &_L16);
  kcg_copy_DMI_Identifier_Request_int_array_T_DATA(dmi_id_int, &_L17);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_Identifier_Request_to_int_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

