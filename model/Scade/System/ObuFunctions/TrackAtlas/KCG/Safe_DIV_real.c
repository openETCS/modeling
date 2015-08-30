/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Safe_DIV_real.h"

/* Safe_DIV_real */
kcg_real Safe_DIV_real(
  /* Safe_DIV_real::Dividend */kcg_real Dividend,
  /* Safe_DIV_real::Divisor */kcg_real Divisor)
{
  /* Safe_DIV_real::Div0 */ kcg_bool Div0;
  /* Safe_DIV_real::Result */ kcg_real Result;
  
  Div0 = Divisor == 0.0;
  if (Div0) {
    Result = - 1.0;
  }
  else {
    Result = Dividend / Divisor;
  }
  return Result;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Safe_DIV_real.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

