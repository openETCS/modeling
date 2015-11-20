/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_NC_TRAIN_to_int_TM_conversions.h"

/* TM_conversions::CAST_NC_TRAIN_to_int */
kcg_int CAST_NC_TRAIN_to_int_TM_conversions(
  /* TM_conversions::CAST_NC_TRAIN_to_int::nc_train */NC_TRAIN nc_train)
{
  /* TM_conversions::CAST_NC_TRAIN_to_int::IfBlock1::else */ kcg_bool _2_else_clock_IfBlock1;
  /* TM_conversions::CAST_NC_TRAIN_to_int::IfBlock1::else::else::else */ kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_NC_TRAIN_to_int::IfBlock1::else::else */ kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_NC_TRAIN_to_int::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_NC_TRAIN_to_int::nc_train_int */ kcg_int nc_train_int;
  
  IfBlock1_clock = nc_train == ENUM_NC_TRAIN_no_train_categroy_TM_conversions;
  if (IfBlock1_clock) {
    nc_train_int = INT_NC_TRAIN_no_train_categroy_TM_conversions;
  }
  else {
    _2_else_clock_IfBlock1 = nc_train == ENUM_NC_TRAIN_freight_P_TM_conversions;
    if (_2_else_clock_IfBlock1) {
      nc_train_int = INT_NC_TRAIN_freight_P_TM_conversions;
    }
    else {
      _1_else_clock_IfBlock1 = nc_train ==
        ENUM_NC_TRAIN_freight_G_TM_conversions;
      if (_1_else_clock_IfBlock1) {
        nc_train_int = INT_NC_TRAIN_freight_G_TM_conversions;
      }
      else {
        else_clock_IfBlock1 = nc_train ==
          ENUM_NC_TRAIN_passenger_TM_conversions;
        if (else_clock_IfBlock1) {
          nc_train_int = INT_NC_TRAIN_passenger_TM_conversions;
        }
        else {
          nc_train_int = INT_NC_TRAIN_no_train_categroy_TM_conversions;
        }
      }
    }
  }
  return nc_train_int;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_NC_TRAIN_to_int_TM_conversions.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

