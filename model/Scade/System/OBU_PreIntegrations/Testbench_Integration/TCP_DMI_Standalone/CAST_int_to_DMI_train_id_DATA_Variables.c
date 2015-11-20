/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_train_id_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_train_id */
void CAST_int_to_DMI_train_id_DATA_Variables(
  /* DATA::Variables::CAST_int_to_DMI_train_id::dmi_train_id_int */DMI_train_id_INT_T_DATA dmi_train_id_int,
  /* DATA::Variables::CAST_int_to_DMI_train_id::dmi_train_id_ct */DMI_train_id_T_DMI_Types_Pkg *dmi_train_id_ct)
{
  /* DATA::Variables::CAST_int_to_DMI_train_id::_L55 */ kcg_int _L55;
  /* DATA::Variables::CAST_int_to_DMI_train_id::_L56 */ kcg_int _L56;
  
  (*dmi_train_id_ct).number = dmi_train_id_int % 10;
  _L55 = dmi_train_id_int / 10;
  (*dmi_train_id_ct).dig1 = _L55 % 10;
  _L56 = _L55 / 10;
  (*dmi_train_id_ct).dig2 = _L56 % 10;
  _L55 = _L56 / 10;
  (*dmi_train_id_ct).dig3 = _L55 % 10;
  _L56 = _L55 / 10;
  (*dmi_train_id_ct).dig4 = _L56 % 10;
  (*dmi_train_id_ct).dig5 = _L56 / 10 % 10;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_int_to_DMI_train_id_DATA_Variables.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

