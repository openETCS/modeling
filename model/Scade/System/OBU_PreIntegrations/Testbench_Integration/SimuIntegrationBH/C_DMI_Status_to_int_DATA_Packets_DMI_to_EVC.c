/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_DMI_Status_to_int_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::C_DMI_Status_to_int */
void C_DMI_Status_to_int_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::C_DMI_Status_to_int::dim_status_ct */ DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg *dim_status_ct,
  /* DATA::Packets::DMI_to_EVC::C_DMI_Status_to_int::dmi_status_int */ DMI_Status_int_array_T_DATA *dmi_status_int)
{
  /* DATA::Packets::DMI_to_EVC::C_DMI_Status_to_int::_L1 */
  static array_int_4 _L1;
  /* DATA::Packets::DMI_to_EVC::C_DMI_Status_to_int::_L6 */
  static kcg_bool _L6;
  /* DATA::Packets::DMI_to_EVC::C_DMI_Status_to_int::_L5 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L5;
  /* DATA::Packets::DMI_to_EVC::C_DMI_Status_to_int::_L4 */
  static DMI_StatusSet_T_DMI_Types_Pkg _L4;
  /* DATA::Packets::DMI_to_EVC::C_DMI_Status_to_int::_L3 */
  static kcg_int _L3;
  /* DATA::Packets::DMI_to_EVC::C_DMI_Status_to_int::_L17 */
  static DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg _L17;
  /* DATA::Packets::DMI_to_EVC::C_DMI_Status_to_int::_L19 */
  static kcg_int _L19;
  /* DATA::Packets::DMI_to_EVC::C_DMI_Status_to_int::_L23 */
  static kcg_int _L23;
  
  kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(&_L17, dim_status_ct);
  _L6 = _L17.valid;
  _L23 = /* 1 */ Bool_to_Int_Utilities(_L6);
  _L5 = _L17.systemTime;
  _L4 = _L17.statusSet;
  _L19 = /* 1 */ CAST_DMI_StatusSet_to_int_DATA_Variables(_L4);
  _L3 = _L17.nAlive;
  _L1[0] = _L23;
  _L1[1] = _L5;
  _L1[2] = _L19;
  _L1[3] = _L3;
  kcg_copy_DMI_Status_int_array_T_DATA(dmi_status_int, &_L1);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_DMI_Status_to_int_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

