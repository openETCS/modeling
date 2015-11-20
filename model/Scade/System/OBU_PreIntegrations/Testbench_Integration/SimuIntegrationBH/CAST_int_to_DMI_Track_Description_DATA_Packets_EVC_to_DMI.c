/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_Track_Description_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Track_Description */
void CAST_int_to_DMI_Track_Description_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Track_Description::dmi_track_description_int */ DMI_Track_Description_int_array_T *dmi_track_description_int,
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Track_Description::dmi_track_description_ct */ DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_track_description_ct)
{
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Track_Description::_L12 */
  static DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg _L12;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Track_Description::_L14 */
  static DMI_Track_Description_int_array_T _L14;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Track_Description::_L15 */
  static kcg_int _L15;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Track_Description::_L16 */
  static kcg_int _L16;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Track_Description::_L17 */
  static array_int_129 _L17;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Track_Description::_L18 */
  static array_int_129 _L18;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Track_Description::_L19 */
  static array_int_65 _L19;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Track_Description::_L20 */
  static DMI_gradientProfile_T_DMI_Types_Pkg _L20;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Track_Description::_L21 */
  static DMI_trackCondition_T_DMI_Types_Pkg _L21;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Track_Description::_L22 */
  static kcg_bool _L22;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Track_Description::_L23 */
  static DMI_speedProfile_T_DMI_Types_Pkg _L23;
  
  kcg_copy_DMI_Track_Description_int_array_T(&_L14, dmi_track_description_int);
  _L15 = _L14[0];
  _L22 = /* 1 */ Int_to_Bool_Utilities(_L15);
  _L16 = _L14[1];
  kcg_copy_array_int_129(&_L17, (array_int_129 *) &_L14[2]);
  /* 1 */ CAST_int_t_DMI_speedProfile_DATA_Variables(&_L17, &_L23);
  kcg_copy_array_int_129(&_L18, (array_int_129 *) &_L14[131]);
  /* 1 */ CAST_int_to_DMI_gradientProfile_DATA_Variables(&_L18, &_L20);
  kcg_copy_array_int_65(&_L19, (array_int_65 *) &_L14[260]);
  /* 1 */ CAST_int_to_DMI_trackCondition_DATA_Variables(&_L19, &_L21);
  _L12.valid = _L22;
  _L12.system_clock = _L16;
  kcg_copy_DMI_speedProfile_T_DMI_Types_Pkg(&_L12.speedProfiles, &_L23);
  kcg_copy_DMI_gradientProfile_T_DMI_Types_Pkg(&_L12.gradientProfiles, &_L20);
  kcg_copy_DMI_trackCondition_T_DMI_Types_Pkg(&_L12.trackConditions, &_L21);
  kcg_copy_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg(
    dmi_track_description_ct,
    &_L12);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DMI_Track_Description_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

