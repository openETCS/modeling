/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DriverIdentfier_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DriverIdentfier */
void CAST_int_to_DriverIdentfier_DATA_Variables(
  /* DATA::Variables::CAST_int_to_DriverIdentfier::driverIdentfier_int_array */DriverIdentifier_INT_T_DATA *driverIdentfier_int_array,
  /* DATA::Variables::CAST_int_to_DriverIdentfier::driverIdentfier_string */driverIdentifier_T_DMI_Messages_Bothways_Pkg *driverIdentfier_string)
{
  kcg_int i;
  
  for (i = 0; i < 9; i++) {
    (*driverIdentfier_string)[i] = /* 1 */
      Int_to_Char_Utilities((*driverIdentfier_int_array)[i]);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_int_to_DriverIdentfier_DATA_Variables.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

