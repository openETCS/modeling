/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DriverIdentfier_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_DriverIdentfier_to_int */
void CAST_DriverIdentfier_to_int_DATA_Variables(
  /* DATA::Variables::CAST_DriverIdentfier_to_int::driverIdentfier_string */driverIdentifier_T_DMI_Messages_Bothways_Pkg *driverIdentfier_string,
  /* DATA::Variables::CAST_DriverIdentfier_to_int::driverIdentfier_int_array */DriverIdentifier_INT_T_DATA *driverIdentfier_int_array)
{
  kcg_int i;
  
  for (i = 0; i < 9; i++) {
    (*driverIdentfier_int_array)[i] = /* 1 */
      Char_to_Int_Utilities((*driverIdentfier_string)[i]);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_DriverIdentfier_to_int_DATA_Variables.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

