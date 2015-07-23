/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/AmstredamUtrechNoExp\kcg_s2c_config.txt
** Generation date: 2015-07-22T11:03:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Q_DIR_to_int_TM_conversions.h"

/* TM_conversions::CAST_Q_DIR_to_int */
kcg_int CAST_Q_DIR_to_int_TM_conversions(
  /* TM_conversions::CAST_Q_DIR_to_int::q_dir */Q_DIR q_dir)
{
  /* TM_conversions::CAST_Q_DIR_to_int::IfBlock1::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_DIR_to_int::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_DIR_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Q_DIR_to_int::q_dir_int */
  static kcg_int q_dir_int;
  
  IfBlock1_clock = q_dir == ENUM_Q_DIR_nominal_TM_conversions;
  if (IfBlock1_clock) {
    q_dir_int = INT_Q_DIR_nomiinal_TM_conversions;
  }
  else {
    _1_else_clock_IfBlock1 = q_dir == ENUM_Q_DIR_reverse_TM_conversions;
    if (_1_else_clock_IfBlock1) {
      q_dir_int = INT_Q_DIR_reverse_TM_conversions;
    }
    else {
      else_clock_IfBlock1 = q_dir == ENUM_Q_DIR_both_TM_conversions;
      if (else_clock_IfBlock1) {
        q_dir_int = INT_Q_DIR_both_TM_conversions;
      }
      else {
        q_dir_int = INT_Q_DIR_both_TM_conversions;
      }
    }
  }
  return q_dir_int;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Q_DIR_to_int_TM_conversions.c
** Generation date: 2015-07-22T11:03:51
*************************************************************$ */

