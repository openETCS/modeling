/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_trackCondition_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_DMI_trackCondition_to_int */
void CAST_DMI_trackCondition_to_int_DATA_Variables(
  /* DATA::Variables::CAST_DMI_trackCondition_to_int::dmi_trackCondition_ct */DMI_trackCondition_T_DMI_Types_Pkg *dmi_trackCondition_ct,
  /* DATA::Variables::CAST_DMI_trackCondition_to_int::dmi_trackCondition_int */DMI_trackCondition_int_array_T *dmi_trackCondition_int)
{
  static kcg_int i;
  /* DATA::Variables::CAST_DMI_trackCondition_to_int::_L9 */
  static array_int_32 _L9;
  /* DATA::Variables::CAST_DMI_trackCondition_to_int::_L8 */
  static array_int_32 _L8;
  
  (&(&(*dmi_trackCondition_int)[0])[0])[0] = (*dmi_trackCondition_ct).nIter;
  for (i = 0; i < 32; i++) {
    /* 1 */
    CAST_DMI_trackConditionElement_to_int_DATA_Variables(
      &(*dmi_trackCondition_ct).trackCondition[i],
      &_L8[i],
      &_L9[i]);
  }
  kcg_copy_array_int_32(&(*dmi_trackCondition_int)[1], &_L8);
  kcg_copy_array_int_32(&(*dmi_trackCondition_int)[33], &_L9);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_DMI_trackCondition_to_int_DATA_Variables.c
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

