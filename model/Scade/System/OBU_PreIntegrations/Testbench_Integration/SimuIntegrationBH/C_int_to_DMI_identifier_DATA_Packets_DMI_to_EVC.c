/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::C_int_to_DMI_identifier */
void C_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_identifier::dmi_identifier_int_in */ DMI_Identifier_int_array_T_DATA *dmi_identifier_int_in,
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_identifier::dmi_identifier_ct_out */ DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_identifier_ct_out)
{
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_identifier::_L1 */
  static DMI_Identifier_int_array_T_DATA _L1;
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_identifier::_L2 */
  static DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg _L2;
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_identifier::_L10 */
  static DMI_DMI_Identifier_T_DMI_Types_Pkg _L10;
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_identifier::_L11 */
  static DMI_Cabin_Identifier_T_DMI_Types_Pkg _L11;
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_identifier::_L12 */
  static DMI_TEXT_DMI_Types_Pkg _L12;
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_identifier::_L13 */
  static M_VERSION _L13;
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_identifier::_L14 */
  static kcg_bool _L14;
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_identifier::_L270 */
  static DMI_TEXT_INT_Array_T_DATA _L270;
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_identifier::_L271 */
  static kcg_int _L271;
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_identifier::_L272 */
  static kcg_int _L272;
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_identifier::_L273 */
  static kcg_int _L273;
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_identifier::_L274 */
  static kcg_int _L274;
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_identifier::_L275 */
  static kcg_int _L275;
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_identifier::_L276 */
  static kcg_int _L276;
  
  kcg_copy_DMI_Identifier_int_array_T_DATA(&_L1, dmi_identifier_int_in);
  _L272 = _L1[0];
  _L14 = /* 1 */ Int_to_Bool_Utilities(_L272);
  _L273 = _L1[1];
  _L274 = _L1[2];
  _L10 = /* 1 */ CAST_int_to_DMI_DMI_identifier_DATA_Variables(_L274);
  _L275 = _L1[3];
  _L11 = /* 1 */ CAST_int_to_DMI_Cabin_identifier_DATA_Variables(_L275);
  _L276 = _L1[4];
  kcg_copy_DMI_TEXT_INT_Array_T_DATA(
    &_L270,
    (DMI_TEXT_INT_Array_T_DATA *) &_L1[5]);
  /* 1 */ CAST_int_to_DMI_TEXT_DATA_Variables(&_L270, &_L12);
  _L271 = _L1[260];
  _L13 = /* 1 */ CAST_Int_to_M_VERSION_TM_conversions(_L271);
  _L2.valid = _L14;
  _L2.systemTime = _L273;
  _L2.DMI_Identifier = _L10;
  _L2.Cabin_Identifier = _L11;
  _L2.l_name = _L276;
  kcg_copy_DMI_TEXT_DMI_Types_Pkg(&_L2.DMI_name, &_L12);
  _L2.m_version = _L13;
  kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
    dmi_identifier_ct_out,
    &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

