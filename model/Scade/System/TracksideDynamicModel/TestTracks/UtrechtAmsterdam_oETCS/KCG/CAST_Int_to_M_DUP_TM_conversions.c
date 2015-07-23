/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:59:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_DUP_TM_conversions.h"

/* TM_conversions::CAST_Int_to_M_DUP */
M_DUP CAST_Int_to_M_DUP_TM_conversions(
  /* TM_conversions::CAST_Int_to_M_DUP::int_in */kcg_int int_in)
{
  /* TM_conversions::CAST_Int_to_M_DUP::IfBlock1::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_DUP::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_DUP::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_M_DUP::m_dup */
  static M_DUP m_dup;
  
  IfBlock1_clock = int_in == INT_M_DUP_duplicate_of_next_TM_conversions;
  if (IfBlock1_clock) {
    m_dup = ENUM_M_DUP_duplicate_of_next_TM_conversions;
  }
  else {
    _1_else_clock_IfBlock1 = int_in ==
      INT_M_DUP_duplicate_of_previous_TM_conversions;
    if (_1_else_clock_IfBlock1) {
      m_dup = ENUM_M_DUP_duplicate_of_previous_TM_conversions;
    }
    else {
      else_clock_IfBlock1 = int_in == INT_M_DUP_no_duplicates_TM_conversions;
      if (else_clock_IfBlock1) {
        m_dup = ENUM_M_DUP_no_duplicates_TM_conversions;
      }
      else {
        m_dup = ENUM_M_DUP_duplicate_of_next_TM_conversions;
      }
    }
  }
  return m_dup;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_M_DUP_TM_conversions.c
** Generation date: 2015-07-21T17:59:23
*************************************************************$ */

