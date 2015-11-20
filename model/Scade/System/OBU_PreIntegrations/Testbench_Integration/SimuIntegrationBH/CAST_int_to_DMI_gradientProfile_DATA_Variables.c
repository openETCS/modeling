/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_gradientProfile_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_gradientProfile */
void CAST_int_to_DMI_gradientProfile_DATA_Variables(
  /* DATA::Variables::CAST_int_to_DMI_gradientProfile::dmi_gradientProfile_int */ DMI_gradientProfile_int_arrayT *dmi_gradientProfile_int,
  /* DATA::Variables::CAST_int_to_DMI_gradientProfile::dmi_gradientProfile */ DMI_gradientProfile_T_DMI_Types_Pkg *dmi_gradientProfile)
{
  static kcg_int i;
  /* DATA::Variables::CAST_int_to_DMI_gradientProfile::_L12 */
  static DMI_gradientProfile_T_DMI_Types_Pkg _L12;
  /* DATA::Variables::CAST_int_to_DMI_gradientProfile::_L13 */
  static DMI_gradientProfileArray_T_DMI_Types_Pkg _L13;
  /* DATA::Variables::CAST_int_to_DMI_gradientProfile::_L14 */
  static kcg_int _L14;
  /* DATA::Variables::CAST_int_to_DMI_gradientProfile::_L15 */
  static DMI_gradientProfile_int_arrayT _L15;
  /* DATA::Variables::CAST_int_to_DMI_gradientProfile::_L16 */
  static array_int_32 _L16;
  /* DATA::Variables::CAST_int_to_DMI_gradientProfile::_L17 */
  static array_int_32 _L17;
  /* DATA::Variables::CAST_int_to_DMI_gradientProfile::_L18 */
  static array_int_32 _L18;
  /* DATA::Variables::CAST_int_to_DMI_gradientProfile::_L19 */
  static kcg_bool _L19;
  /* DATA::Variables::CAST_int_to_DMI_gradientProfile::_L20 */
  static array_int_32 _L20;
  
  kcg_copy_DMI_gradientProfile_int_arrayT(&_L15, dmi_gradientProfile_int);
  _L14 = _L15[0];
  _L19 = /* 1 */ Int_to_Bool_Utilities(_L14);
  kcg_copy_array_int_32(&_L16, (array_int_32 *) &_L15[1]);
  kcg_copy_array_int_32(&_L17, (array_int_32 *) &_L15[33]);
  kcg_copy_array_int_32(&_L18, (array_int_32 *) &_L15[65]);
  kcg_copy_array_int_32(&_L20, (array_int_32 *) &_L15[97]);
  /* 2 */ for (i = 0; i < 32; i++) {
    /* 1 */
    CAST_int_to_DMI_gradientProfileElement_DATA_Variables(
      _L16[i],
      _L17[i],
      _L18[i],
      _L20[i],
      &_L13[i]);
  }
  _L12.profileChanged = _L19;
  kcg_copy_DMI_gradientProfileArray_T_DMI_Types_Pkg(
    &_L12.gradientProfiles,
    &_L13);
  kcg_copy_DMI_gradientProfile_T_DMI_Types_Pkg(dmi_gradientProfile, &_L12);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DMI_gradientProfile_DATA_Variables.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

