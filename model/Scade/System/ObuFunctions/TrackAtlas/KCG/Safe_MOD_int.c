/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Safe_MOD_int.h"

/* Safe_MOD_int */
kcg_int Safe_MOD_int(
  /* Safe_MOD_int::Dividend */kcg_int Dividend,
  /* Safe_MOD_int::Divisor */kcg_int Divisor)
{
  /* Safe_MOD_int::Div0 */ kcg_bool Div0;
  /* Safe_MOD_int::Result */ kcg_int Result;
  
  Div0 = Divisor == 0;
  if (Div0) {
    Result = - 1;
  }
  else {
    Result = Dividend % Divisor;
  }
  return Result;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Safe_MOD_int.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

