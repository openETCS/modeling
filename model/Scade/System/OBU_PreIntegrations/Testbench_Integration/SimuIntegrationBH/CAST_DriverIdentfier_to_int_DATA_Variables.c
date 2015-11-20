/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DriverIdentfier_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_DriverIdentfier_to_int */
void CAST_DriverIdentfier_to_int_DATA_Variables(
  /* DATA::Variables::CAST_DriverIdentfier_to_int::driverIdentfier_string */ driverIdentifier_T_DMI_Messages_Bothways_Pkg *driverIdentfier_string,
  /* DATA::Variables::CAST_DriverIdentfier_to_int::driverIdentfier_int_array */ DriverIdentifier_INT_T_DATA *driverIdentfier_int_array)
{
  static kcg_int i;
  /* DATA::Variables::CAST_DriverIdentfier_to_int::_L8 */
  static driverIdentifier_T_DMI_Messages_Bothways_Pkg _L8;
  /* DATA::Variables::CAST_DriverIdentfier_to_int::_L10 */
  static array_int_9 _L10;
  
  kcg_copy_driverIdentifier_T_DMI_Messages_Bothways_Pkg(
    &_L8,
    driverIdentfier_string);
  /* 1 */ for (i = 0; i < 9; i++) {
    _L10[i] = /* 1 */ Char_to_Int_Utilities(_L8[i]);
  }
  kcg_copy_DriverIdentifier_INT_T_DATA(driverIdentfier_int_array, &_L10);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DriverIdentfier_to_int_DATA_Variables.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

