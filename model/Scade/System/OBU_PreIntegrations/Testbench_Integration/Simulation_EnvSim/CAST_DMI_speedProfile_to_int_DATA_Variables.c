/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_speedProfile_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_DMI_speedProfile_to_int */
void CAST_DMI_speedProfile_to_int_DATA_Variables(
  /* DATA::Variables::CAST_DMI_speedProfile_to_int::dmi_speedProfile */DMI_speedProfile_T_DMI_Types_Pkg *dmi_speedProfile,
  /* DATA::Variables::CAST_DMI_speedProfile_to_int::dmi_speedProfile_int */DMI_speedProfile_int_array_T_DATA *dmi_speedProfile_int)
{
  static kcg_int tmp;
  /* DATA::Variables::CAST_DMI_speedProfile_to_int::_L8 */
  static array_int_32 _L8;
  /* DATA::Variables::CAST_DMI_speedProfile_to_int::_L7 */
  static array_int_32 _L7;
  /* DATA::Variables::CAST_DMI_speedProfile_to_int::_L6 */
  static array_int_32 _L6;
  /* DATA::Variables::CAST_DMI_speedProfile_to_int::_L5 */
  static array_int_32 _L5;
  
  for (tmp = 0; tmp < 32; tmp++) {
    /* 1 */
    CAST_DMI_speedProfileElement_to_int_DATA_Variables(
      &(*dmi_speedProfile).speedProfiles[tmp],
      &_L5[tmp],
      &_L6[tmp],
      &_L7[tmp],
      &_L8[tmp]);
  }
  tmp = /* 1 */ Bool_to_Int_Utilities((*dmi_speedProfile).profileChanged);
  (&(&(&(&(*dmi_speedProfile_int)[0])[0])[0])[0])[0] = tmp;
  kcg_copy_array_int_32(&(*dmi_speedProfile_int)[1], &_L5);
  kcg_copy_array_int_32(&(*dmi_speedProfile_int)[33], &_L6);
  kcg_copy_array_int_32(&(*dmi_speedProfile_int)[65], &_L7);
  kcg_copy_array_int_32(&(*dmi_speedProfile_int)[97], &_L8);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_DMI_speedProfile_to_int_DATA_Variables.c
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

