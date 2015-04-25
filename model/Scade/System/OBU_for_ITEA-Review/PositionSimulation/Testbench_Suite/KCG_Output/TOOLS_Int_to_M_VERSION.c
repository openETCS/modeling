/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TOOLS_Int_to_M_VERSION.h"

/* TOOLS_Int_to_M_VERSION */
M_VERSION TOOLS_Int_to_M_VERSION(
  /* TOOLS_Int_to_M_VERSION::int_in */ kcg_int int_in)
{
  /* TOOLS_Int_to_M_VERSION::m_version */ M_VERSION m_version;
  
  if (int_in <= INT_M_VERSION_previous_M) {
    m_version = ENUM_M_VERSION_previous_M_VERSION;
  }
  else if (int_in == INT_M_VERSION_1_0) {
    m_version = ENUM_M_VERSION_1_0_M_VERSION;
  }
  else if (int_in == INT_M_VERSION_2_0) {
    m_version = ENUM_M_VERSION_2_0_M_VERSION;
  }
  else {
    m_version = ENUM_M_VERSION_1_1_M_VERSION;
  }
  return m_version;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** TOOLS_Int_to_M_VERSION.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

