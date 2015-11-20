/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_gradientProfile_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_DMI_gradientProfile_to_int */
void CAST_DMI_gradientProfile_to_int_DATA_Variables(
  /* DATA::Variables::CAST_DMI_gradientProfile_to_int::dmi_gradientProfile */DMI_gradientProfile_T_DMI_Types_Pkg *dmi_gradientProfile,
  /* DATA::Variables::CAST_DMI_gradientProfile_to_int::DMI_gradientProfile_int */DMI_gradientProfile_int_arrayT *DMI_gradientProfile_int)
{
  static kcg_int tmp;
  /* DATA::Variables::CAST_DMI_gradientProfile_to_int::_L9 */
  static array_int_32 _L9;
  /* DATA::Variables::CAST_DMI_gradientProfile_to_int::_L8 */
  static array_int_32 _L8;
  /* DATA::Variables::CAST_DMI_gradientProfile_to_int::_L7 */
  static array_int_32 _L7;
  /* DATA::Variables::CAST_DMI_gradientProfile_to_int::_L6 */
  static array_int_32 _L6;
  
  for (tmp = 0; tmp < 32; tmp++) {
    /* 1 */
    CAST_DMI_gradientProfileElement_to_int_DATA_Variables(
      &(*dmi_gradientProfile).gradientProfiles[tmp],
      &_L6[tmp],
      &_L7[tmp],
      &_L8[tmp],
      &_L9[tmp]);
  }
  tmp = /* 1 */ Bool_to_Int_Utilities((*dmi_gradientProfile).profileChanged);
  (&(&(&(&(*DMI_gradientProfile_int)[0])[0])[0])[0])[0] = tmp;
  kcg_copy_array_int_32(&(*DMI_gradientProfile_int)[1], &_L6);
  kcg_copy_array_int_32(&(*DMI_gradientProfile_int)[33], &_L7);
  kcg_copy_array_int_32(&(*DMI_gradientProfile_int)[65], &_L8);
  kcg_copy_array_int_32(&(*DMI_gradientProfile_int)[97], &_L9);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_DMI_gradientProfile_to_int_DATA_Variables.c
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

