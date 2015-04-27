/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TOOLS_Int_to_M_DUP.h"

/* TOOLS_Int_to_M_DUP */
M_DUP TOOLS_Int_to_M_DUP(/* TOOLS_Int_to_M_DUP::int_in */ kcg_int int_in)
{
  /* TOOLS_Int_to_M_DUP::IfBlock1::else */ kcg_bool _1_else_clock_IfBlock1;
  /* TOOLS_Int_to_M_DUP::IfBlock1::else::else */ kcg_bool else_clock_IfBlock1;
  /* TOOLS_Int_to_M_DUP::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* TOOLS_Int_to_M_DUP::m_dup */ M_DUP m_dup;
  
  IfBlock1_clock = int_in == INT_M_DUP_duplicate_of_next;
  if (IfBlock1_clock) {
    m_dup = ENUM_M_DUP_duplicate_of_next;
  }
  else {
    _1_else_clock_IfBlock1 = int_in == INT_M_DUP_duplicate_of_previous;
    if (_1_else_clock_IfBlock1) {
      m_dup = ENUM_M_DUP_duplicate_of_previous;
    }
    else {
      else_clock_IfBlock1 = int_in == INT_M_DUP_no_duplicates;
      if (else_clock_IfBlock1) {
        m_dup = ENUM_M_DUP_no_duplicates;
      }
      else {
        m_dup = ENUM_M_DUP_duplicate_of_next;
      }
    }
  }
  return m_dup;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** TOOLS_Int_to_M_DUP.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

