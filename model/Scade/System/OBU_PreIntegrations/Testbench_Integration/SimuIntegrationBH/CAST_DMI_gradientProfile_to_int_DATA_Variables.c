/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_gradientProfile_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_DMI_gradientProfile_to_int */
void CAST_DMI_gradientProfile_to_int_DATA_Variables(
  /* DATA::Variables::CAST_DMI_gradientProfile_to_int::dmi_gradientProfile */ DMI_gradientProfile_T_DMI_Types_Pkg *dmi_gradientProfile,
  /* DATA::Variables::CAST_DMI_gradientProfile_to_int::DMI_gradientProfile_int */ DMI_gradientProfile_int_arrayT *DMI_gradientProfile_int)
{
  static kcg_int i;
  /* DATA::Variables::CAST_DMI_gradientProfile_to_int */
  static array_int_97 tmp2;
  /* DATA::Variables::CAST_DMI_gradientProfile_to_int */
  static array_int_65 tmp1;
  /* DATA::Variables::CAST_DMI_gradientProfile_to_int */
  static array_int_33 tmp;
  /* DATA::Variables::CAST_DMI_gradientProfile_to_int::_L1 */
  static DMI_gradientProfile_T_DMI_Types_Pkg _L1;
  /* DATA::Variables::CAST_DMI_gradientProfile_to_int::_L3 */
  static kcg_bool _L3;
  /* DATA::Variables::CAST_DMI_gradientProfile_to_int::_L2 */
  static DMI_gradientProfileArray_T_DMI_Types_Pkg _L2;
  /* DATA::Variables::CAST_DMI_gradientProfile_to_int::_L4 */
  static kcg_int _L4;
  /* DATA::Variables::CAST_DMI_gradientProfile_to_int::_L5 */
  static P044_other_data_TM_TrainToTrack _L5;
  /* DATA::Variables::CAST_DMI_gradientProfile_to_int::_L9 */
  static array_int_32 _L9;
  /* DATA::Variables::CAST_DMI_gradientProfile_to_int::_L8 */
  static array_int_32 _L8;
  /* DATA::Variables::CAST_DMI_gradientProfile_to_int::_L7 */
  static array_int_32 _L7;
  /* DATA::Variables::CAST_DMI_gradientProfile_to_int::_L6 */
  static array_int_32 _L6;
  /* DATA::Variables::CAST_DMI_gradientProfile_to_int::_L10 */
  static array_int_129 _L10;
  
  kcg_copy_DMI_gradientProfile_T_DMI_Types_Pkg(&_L1, dmi_gradientProfile);
  kcg_copy_DMI_gradientProfileArray_T_DMI_Types_Pkg(
    &_L2,
    &_L1.gradientProfiles);
  _L3 = _L1.profileChanged;
  _L4 = /* 1 */ Bool_to_Int_Utilities(_L3);
  _L5[0] = _L4;
  /* 1 */ for (i = 0; i < 32; i++) {
    /* 1 */
    CAST_DMI_gradientProfileElement_to_int_DATA_Variables(
      &_L2[i],
      &_L6[i],
      &_L7[i],
      &_L8[i],
      &_L9[i]);
  }
  kcg_copy_P044_other_data_TM_TrainToTrack(&tmp[0], &_L5);
  kcg_copy_array_int_32(&tmp[1], &_L6);
  kcg_copy_array_int_33(&tmp1[0], &tmp);
  kcg_copy_array_int_32(&tmp1[33], &_L7);
  kcg_copy_array_int_65(&tmp2[0], &tmp1);
  kcg_copy_array_int_32(&tmp2[65], &_L8);
  kcg_copy_array_int_97(&_L10[0], &tmp2);
  kcg_copy_array_int_32(&_L10[97], &_L9);
  kcg_copy_DMI_gradientProfile_int_arrayT(DMI_gradientProfile_int, &_L10);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_gradientProfile_to_int_DATA_Variables.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

