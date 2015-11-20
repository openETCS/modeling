/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_t_DMI_speedProfile_DATA_Variables.h"

/* DATA::Variables::CAST_int_t_DMI_speedProfile */
void CAST_int_t_DMI_speedProfile_DATA_Variables(
  /* DATA::Variables::CAST_int_t_DMI_speedProfile::dmi_speedProfile_int */ DMI_speedProfile_int_array_T_DATA *dmi_speedProfile_int,
  /* DATA::Variables::CAST_int_t_DMI_speedProfile::dmi_speedProfile */ DMI_speedProfile_T_DMI_Types_Pkg *dmi_speedProfile)
{
  static kcg_int i;
  /* DATA::Variables::CAST_int_t_DMI_speedProfile::_L13 */
  static DMI_speedProfile_int_array_T_DATA _L13;
  /* DATA::Variables::CAST_int_t_DMI_speedProfile::_L27 */
  static kcg_bool _L27;
  /* DATA::Variables::CAST_int_t_DMI_speedProfile::_L26 */
  static DMI_speedProfile_T_DMI_Types_Pkg _L26;
  /* DATA::Variables::CAST_int_t_DMI_speedProfile::_L25 */
  static array_int_32 _L25;
  /* DATA::Variables::CAST_int_t_DMI_speedProfile::_L24 */
  static array_int_32 _L24;
  /* DATA::Variables::CAST_int_t_DMI_speedProfile::_L23 */
  static DMI_SpeedProfileArray_T_DMI_Types_Pkg _L23;
  /* DATA::Variables::CAST_int_t_DMI_speedProfile::_L22 */
  static kcg_int _L22;
  /* DATA::Variables::CAST_int_t_DMI_speedProfile::_L21 */
  static array_int_32 _L21;
  /* DATA::Variables::CAST_int_t_DMI_speedProfile::_L20 */
  static array_int_32 _L20;
  
  kcg_copy_DMI_speedProfile_int_array_T_DATA(&_L13, dmi_speedProfile_int);
  _L22 = _L13[0];
  _L27 = /* 2 */ Int_to_Bool_Utilities(_L22);
  kcg_copy_array_int_32(&_L20, (array_int_32 *) &_L13[1]);
  kcg_copy_array_int_32(&_L21, (array_int_32 *) &_L13[33]);
  kcg_copy_array_int_32(&_L24, (array_int_32 *) &_L13[65]);
  kcg_copy_array_int_32(&_L25, (array_int_32 *) &_L13[97]);
  /* 3 */ for (i = 0; i < 32; i++) {
    /* 2 */
    CAST_int_to_DMI_speedProfileElement_DATA_Variables(
      _L20[i],
      _L21[i],
      _L24[i],
      _L25[i],
      &_L23[i]);
  }
  _L26.profileChanged = _L27;
  kcg_copy_DMI_SpeedProfileArray_T_DMI_Types_Pkg(&_L26.speedProfiles, &_L23);
  kcg_copy_DMI_speedProfile_T_DMI_Types_Pkg(dmi_speedProfile, &_L26);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_t_DMI_speedProfile_DATA_Variables.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

