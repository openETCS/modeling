/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_int_to_DMI_Status_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Status */
void C_int_to_DMI_Status_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Status::dmi_status_int */ DMI_Status_int_array_T_DATA *dmi_status_int,
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Status::dim_status_ct */ DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg *dim_status_ct)
{
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Status::_L1 */
  static DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg _L1;
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Status::_L2 */
  static DMI_Status_int_array_T_DATA _L2;
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Status::_L12 */
  static DMI_StatusSet_T_DMI_Types_Pkg _L12;
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Status::_L13 */
  static kcg_bool _L13;
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Status::_L18 */
  static kcg_int _L18;
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Status::_L17 */
  static kcg_int _L17;
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Status::_L16 */
  static kcg_int _L16;
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Status::_L15 */
  static kcg_int _L15;
  
  kcg_copy_DMI_Status_int_array_T_DATA(&_L2, dmi_status_int);
  _L18 = _L2[0];
  _L13 = /* 1 */ Int_to_Bool_Utilities(_L18);
  _L17 = _L2[1];
  _L16 = _L2[2];
  _L12 = /* 1 */ CAST_int_to_DMI_StatusSet_DATA_Variables(_L16);
  _L15 = _L2[3];
  _L1.valid = _L13;
  _L1.systemTime = _L17;
  _L1.statusSet = _L12;
  _L1.nAlive = _L15;
  kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(dim_status_ct, &_L1);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_int_to_DMI_Status_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

