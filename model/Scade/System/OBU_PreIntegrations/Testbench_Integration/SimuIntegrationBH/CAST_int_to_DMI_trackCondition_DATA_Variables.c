/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_trackCondition_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_trackCondition */
void CAST_int_to_DMI_trackCondition_DATA_Variables(
  /* DATA::Variables::CAST_int_to_DMI_trackCondition::dmi_trackCondition_int */ DMI_trackCondition_int_array_T *dmi_trackCondition_int,
  /* DATA::Variables::CAST_int_to_DMI_trackCondition::dmi_trackCondition_ct */ DMI_trackCondition_T_DMI_Types_Pkg *dmi_trackCondition_ct)
{
  static kcg_int i;
  /* DATA::Variables::CAST_int_to_DMI_trackCondition::_L11 */
  static DMI_trackCondition_int_array_T _L11;
  /* DATA::Variables::CAST_int_to_DMI_trackCondition::_L12 */
  static DMI_trackCondition_T_DMI_Types_Pkg _L12;
  /* DATA::Variables::CAST_int_to_DMI_trackCondition::_L13 */
  static kcg_int _L13;
  /* DATA::Variables::CAST_int_to_DMI_trackCondition::_L14 */
  static DMI_trackConditionArray_T_DMI_Types_Pkg _L14;
  /* DATA::Variables::CAST_int_to_DMI_trackCondition::_L15 */
  static array_int_32 _L15;
  /* DATA::Variables::CAST_int_to_DMI_trackCondition::_L16 */
  static array_int_32 _L16;
  
  kcg_copy_DMI_trackCondition_int_array_T(&_L11, dmi_trackCondition_int);
  _L13 = _L11[0];
  kcg_copy_array_int_32(&_L15, (array_int_32 *) &_L11[1]);
  kcg_copy_array_int_32(&_L16, (array_int_32 *) &_L11[33]);
  /* 2 */ for (i = 0; i < 32; i++) {
    /* 1 */
    Cast_Int_to_DMI_trackConditionElement_DATA_Variables(
      _L15[i],
      _L16[i],
      &_L14[i]);
  }
  _L12.nIter = _L13;
  kcg_copy_DMI_trackConditionArray_T_DMI_Types_Pkg(&_L12.trackCondition, &_L14);
  kcg_copy_DMI_trackCondition_T_DMI_Types_Pkg(dmi_trackCondition_ct, &_L12);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DMI_trackCondition_DATA_Variables.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

