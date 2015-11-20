/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_Track_Description_to_int_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_DMI_Track_Description_to_int */
void CAST_DMI_Track_Description_to_int_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Track_Description_to_int::Input1 */ DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg *Input1,
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Track_Description_to_int::Output1 */ DMI_Track_Description_int_array_T *Output1)
{
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Track_Description_to_int */
  static array_int_260 tmp1;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Track_Description_to_int */
  static array_int_131 tmp;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Track_Description_to_int::_L1 */
  static DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg _L1;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Track_Description_to_int::_L6 */
  static kcg_bool _L6;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Track_Description_to_int::_L5 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L5;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Track_Description_to_int::_L4 */
  static DMI_speedProfile_T_DMI_Types_Pkg _L4;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Track_Description_to_int::_L3 */
  static DMI_gradientProfile_T_DMI_Types_Pkg _L3;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Track_Description_to_int::_L2 */
  static DMI_trackCondition_T_DMI_Types_Pkg _L2;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Track_Description_to_int::_L7 */
  static array_int_2 _L7;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Track_Description_to_int::_L8 */
  static DMI_trackCondition_int_array_T _L8;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Track_Description_to_int::_L9 */
  static DMI_gradientProfile_int_arrayT _L9;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Track_Description_to_int::_L10 */
  static DMI_speedProfile_int_array_T_DATA _L10;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Track_Description_to_int::_L11 */
  static kcg_int _L11;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Track_Description_to_int::_L12 */
  static DMI_Track_Description_int_array_T _L12;
  
  kcg_copy_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg(&_L1, Input1);
  _L6 = _L1.valid;
  _L11 = /* 1 */ Bool_to_Int_Utilities(_L6);
  _L5 = _L1.system_clock;
  _L7[0] = _L11;
  _L7[1] = _L5;
  kcg_copy_DMI_speedProfile_T_DMI_Types_Pkg(&_L4, &_L1.speedProfiles);
  /* 1 */ CAST_DMI_speedProfile_to_int_DATA_Variables(&_L4, &_L10);
  kcg_copy_DMI_gradientProfile_T_DMI_Types_Pkg(&_L3, &_L1.gradientProfiles);
  /* 1 */ CAST_DMI_gradientProfile_to_int_DATA_Variables(&_L3, &_L9);
  kcg_copy_DMI_trackCondition_T_DMI_Types_Pkg(&_L2, &_L1.trackConditions);
  /* 1 */ CAST_DMI_trackCondition_to_int_DATA_Variables(&_L2, &_L8);
  kcg_copy_array_int_2(&tmp[0], &_L7);
  kcg_copy_DMI_speedProfile_int_array_T_DATA(&tmp[2], &_L10);
  kcg_copy_array_int_131(&tmp1[0], &tmp);
  kcg_copy_DMI_gradientProfile_int_arrayT(&tmp1[131], &_L9);
  kcg_copy_array_int_260(&_L12[0], &tmp1);
  kcg_copy_DMI_trackCondition_int_array_T(&_L12[260], &_L8);
  kcg_copy_DMI_Track_Description_int_array_T(Output1, &_L12);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_Track_Description_to_int_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

