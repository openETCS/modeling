/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_LevelList_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_LevelList */
void CAST_int_to_DMI_LevelList_DATA_Variables(
  /* DATA::Variables::CAST_int_to_DMI_LevelList::dmi_LevelList_int */ DMI_LevelList_int_array_T_DATA *dmi_LevelList_int,
  /* DATA::Variables::CAST_int_to_DMI_LevelList::dmi_LevelList_ct */ DMI_LevelList_T_DMI_Types_Pkg *dmi_LevelList_ct)
{
  static kcg_int i;
  /* DATA::Variables::CAST_int_to_DMI_LevelList::_L4 */
  static DMI_LevelList_T_DMI_Types_Pkg _L4;
  /* DATA::Variables::CAST_int_to_DMI_LevelList::_L10 */
  static DMI_LevelList_int_array_T_DATA _L10;
  /* DATA::Variables::CAST_int_to_DMI_LevelList::_L11 */
  static kcg_int _L11;
  /* DATA::Variables::CAST_int_to_DMI_LevelList::_L12 */
  static DMI_level_array_T_DMI_Types_Pkg _L12;
  /* DATA::Variables::CAST_int_to_DMI_LevelList::_L13 */
  static array_int_32 _L13;
  /* DATA::Variables::CAST_int_to_DMI_LevelList::_L14 */
  static array_int_32 _L14;
  
  kcg_copy_DMI_LevelList_int_array_T_DATA(&_L10, dmi_LevelList_int);
  _L11 = _L10[0];
  kcg_copy_array_int_32(&_L13, (array_int_32 *) &_L10[1]);
  kcg_copy_array_int_32(&_L14, (array_int_32 *) &_L10[33]);
  /* 2 */ for (i = 0; i < 32; i++) {
    /* 1 */ CAST_int_to_DMI_level_DATA_Variables(_L13[i], _L14[i], &_L12[i]);
  }
  _L4.number = _L11;
  kcg_copy_DMI_level_array_T_DMI_Types_Pkg(&_L4.levelList, &_L12);
  kcg_copy_DMI_LevelList_T_DMI_Types_Pkg(dmi_LevelList_ct, &_L4);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DMI_LevelList_DATA_Variables.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

