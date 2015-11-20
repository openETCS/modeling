/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DriverIdentfier_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DriverIdentfier */
void CAST_int_to_DriverIdentfier_DATA_Variables(
  /* DATA::Variables::CAST_int_to_DriverIdentfier::driverIdentfier_int_array */ DriverIdentifier_INT_T_DATA *driverIdentfier_int_array,
  /* DATA::Variables::CAST_int_to_DriverIdentfier::driverIdentfier_string */ driverIdentifier_T_DMI_Messages_Bothways_Pkg *driverIdentfier_string)
{
  static kcg_int i;
  /* DATA::Variables::CAST_int_to_DriverIdentfier::_L1 */
  static driverIdentifier_T_DMI_Messages_Bothways_Pkg _L1;
  /* DATA::Variables::CAST_int_to_DriverIdentfier::_L10 */
  static DriverIdentifier_INT_T_DATA _L10;
  
  kcg_copy_DriverIdentifier_INT_T_DATA(&_L10, driverIdentfier_int_array);
  /* 1 */ for (i = 0; i < 9; i++) {
    _L1[i] = /* 1 */ Int_to_Char_Utilities(_L10[i]);
  }
  kcg_copy_driverIdentifier_T_DMI_Messages_Bothways_Pkg(
    driverIdentfier_string,
    &_L1);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DriverIdentfier_DATA_Variables.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

