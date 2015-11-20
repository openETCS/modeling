/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_Identifier_Request_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Identifier_Request */
void CAST_int_to_DMI_Identifier_Request_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Identifier_Request::dmi_id_int */ DMI_Identifier_Request_int_array_T_DATA *dmi_id_int,
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Identifier_Request::dmi_id_ct */ DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_id_ct)
{
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Identifier_Request::_L19 */
  static DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg _L19;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Identifier_Request::_L20 */
  static DMI_Identifier_Request_int_array_T_DATA _L20;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Identifier_Request::_L21 */
  static array_int_5 _L21;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Identifier_Request::_L22 */
  static kcg_bool _L22;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Identifier_Request::_L28 */
  static kcg_int _L28;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Identifier_Request::_L27 */
  static kcg_int _L27;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Identifier_Request::_L26 */
  static kcg_int _L26;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Identifier_Request::_L25 */
  static kcg_int _L25;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Identifier_Request::_L24 */
  static kcg_int _L24;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Identifier_Request::_L29 */
  static M_VERSION _L29;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Identifier_Request::_L30 */
  static M_VERSION _L30;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Identifier_Request::_L31 */
  static L_TEXT _L31;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Identifier_Request::_L32 */
  static DMI_TEXT_INT_Array_T_DATA _L32;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Identifier_Request::_L33 */
  static DMI_TEXT_DMI_Types_Pkg _L33;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Identifier_Request::_L34 */
  static kcg_int _L34;
  
  kcg_copy_DMI_Identifier_Request_int_array_T_DATA(&_L20, dmi_id_int);
  kcg_copy_array_int_5(&_L21, (array_int_5 *) &_L20[0]);
  _L28 = _L21[0];
  _L22 = /* 1 */ Int_to_Bool_Utilities(_L28);
  _L27 = _L21[1];
  _L26 = _L21[2];
  _L29 = /* 1 */ CAST_Int_to_M_VERSION_TM_conversions(_L26);
  _L25 = _L21[3];
  _L30 = /* 2 */ CAST_Int_to_M_VERSION_TM_conversions(_L25);
  _L24 = _L21[4];
  _L31 = /* 1 */ CAST_Int_to_L_TEXT_TM_conversions(_L24);
  kcg_copy_DMI_TEXT_INT_Array_T_DATA(
    &_L32,
    (DMI_TEXT_INT_Array_T_DATA *) &_L20[5]);
  /* 1 */ CAST_int_to_DMI_TEXT_DATA_Variables(&_L32, &_L33);
  _L34 = _L20[260];
  _L19.valid = _L22;
  _L19.system_clock = _L27;
  _L19.ERTMS_Version = _L29;
  _L19.EVC_Version = _L30;
  _L19.l_name = _L31;
  kcg_copy_DMI_TEXT_DMI_Types_Pkg(&_L19.x_name, &_L33);
  _L19.l_extra = _L34;
  kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    dmi_id_ct,
    &_L19);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DMI_Identifier_Request_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

