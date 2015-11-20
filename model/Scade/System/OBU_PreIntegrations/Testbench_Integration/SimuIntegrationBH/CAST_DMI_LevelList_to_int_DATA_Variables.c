/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_LevelList_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_DMI_LevelList_to_int */
void CAST_DMI_LevelList_to_int_DATA_Variables(
  /* DATA::Variables::CAST_DMI_LevelList_to_int::dmi_LevelList */ DMI_LevelList_T_DMI_Types_Pkg *dmi_LevelList,
  /* DATA::Variables::CAST_DMI_LevelList_to_int::dmi_LevelList_int */ DMI_LevelList_int_array_T_DATA *dmi_LevelList_int)
{
  static kcg_int i;
  /* DATA::Variables::CAST_DMI_LevelList_to_int */
  static array_int_33 tmp;
  /* DATA::Variables::CAST_DMI_LevelList_to_int::_L3 */
  static kcg_int _L3;
  /* DATA::Variables::CAST_DMI_LevelList_to_int::_L2 */
  static DMI_level_array_T_DMI_Types_Pkg _L2;
  /* DATA::Variables::CAST_DMI_LevelList_to_int::_L4 */
  static array_int_65 _L4;
  /* DATA::Variables::CAST_DMI_LevelList_to_int::_L5 */
  static DMI_LevelList_T_DMI_Types_Pkg _L5;
  /* DATA::Variables::CAST_DMI_LevelList_to_int::_L6 */
  static array_int_32 _L6;
  /* DATA::Variables::CAST_DMI_LevelList_to_int::_L7 */
  static P044_other_data_TM_TrainToTrack _L7;
  /* DATA::Variables::CAST_DMI_LevelList_to_int::_L8 */
  static array_int_32 _L8;
  
  kcg_copy_DMI_LevelList_T_DMI_Types_Pkg(&_L5, dmi_LevelList);
  _L3 = _L5.number;
  _L7[0] = _L3;
  kcg_copy_DMI_level_array_T_DMI_Types_Pkg(&_L2, &_L5.levelList);
  /* 1 */ for (i = 0; i < 32; i++) {
    /* 1 */ CAST_DMI_level_to_int_DATA_Variables(&_L2[i], &_L6[i], &_L8[i]);
  }
  kcg_copy_P044_other_data_TM_TrainToTrack(&tmp[0], &_L7);
  kcg_copy_array_int_32(&tmp[1], &_L6);
  kcg_copy_array_int_33(&_L4[0], &tmp);
  kcg_copy_array_int_32(&_L4[33], &_L8);
  kcg_copy_DMI_LevelList_int_array_T_DATA(dmi_LevelList_int, &_L4);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_LevelList_to_int_DATA_Variables.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

