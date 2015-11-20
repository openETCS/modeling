/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_trackCondition_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_DMI_trackCondition_to_int */
void CAST_DMI_trackCondition_to_int_DATA_Variables(
  /* DATA::Variables::CAST_DMI_trackCondition_to_int::dmi_trackCondition_ct */ DMI_trackCondition_T_DMI_Types_Pkg *dmi_trackCondition_ct,
  /* DATA::Variables::CAST_DMI_trackCondition_to_int::dmi_trackCondition_int */ DMI_trackCondition_int_array_T *dmi_trackCondition_int)
{
  static kcg_int i;
  /* DATA::Variables::CAST_DMI_trackCondition_to_int */
  static array_int_33 tmp;
  /* DATA::Variables::CAST_DMI_trackCondition_to_int::_L1 */
  static DMI_trackCondition_T_DMI_Types_Pkg _L1;
  /* DATA::Variables::CAST_DMI_trackCondition_to_int::_L2 */
  static DMI_trackConditionArray_T_DMI_Types_Pkg _L2;
  /* DATA::Variables::CAST_DMI_trackCondition_to_int::_L3 */
  static kcg_int _L3;
  /* DATA::Variables::CAST_DMI_trackCondition_to_int::_L6 */
  static P044_other_data_TM_TrainToTrack _L6;
  /* DATA::Variables::CAST_DMI_trackCondition_to_int::_L7 */
  static array_int_65 _L7;
  /* DATA::Variables::CAST_DMI_trackCondition_to_int::_L9 */
  static array_int_32 _L9;
  /* DATA::Variables::CAST_DMI_trackCondition_to_int::_L8 */
  static array_int_32 _L8;
  
  kcg_copy_DMI_trackCondition_T_DMI_Types_Pkg(&_L1, dmi_trackCondition_ct);
  _L3 = _L1.nIter;
  _L6[0] = _L3;
  kcg_copy_DMI_trackConditionArray_T_DMI_Types_Pkg(&_L2, &_L1.trackCondition);
  /* 1 */ for (i = 0; i < 32; i++) {
    /* 1 */
    CAST_DMI_trackConditionElement_to_int_DATA_Variables(
      &_L2[i],
      &_L8[i],
      &_L9[i]);
  }
  kcg_copy_P044_other_data_TM_TrainToTrack(&tmp[0], &_L6);
  kcg_copy_array_int_32(&tmp[1], &_L8);
  kcg_copy_array_int_33(&_L7[0], &tmp);
  kcg_copy_array_int_32(&_L7[33], &_L9);
  kcg_copy_DMI_trackCondition_int_array_T(dmi_trackCondition_int, &_L7);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_trackCondition_to_int_DATA_Variables.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

