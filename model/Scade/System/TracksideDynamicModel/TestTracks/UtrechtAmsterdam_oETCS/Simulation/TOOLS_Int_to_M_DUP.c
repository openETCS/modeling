/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-25T17:50:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TOOLS_Int_to_M_DUP.h"

void TOOLS_Int_to_M_DUP_reset(outC_TOOLS_Int_to_M_DUP *outC)
{
}

/* TOOLS_Int_to_M_DUP */
void TOOLS_Int_to_M_DUP(
  /* TOOLS_Int_to_M_DUP::int_in */kcg_int int_in,
  outC_TOOLS_Int_to_M_DUP *outC)
{
  /* TOOLS_Int_to_M_DUP::m_dup */ M_DUP m_dup1;
  kcg_bool _8_noname;
  /* TOOLS_Int_to_M_DUP::m_dup */ M_DUP m_dup;
  /* TOOLS_Int_to_M_DUP::m_dup */ M_DUP m_dup5;
  kcg_bool _6_noname;
  /* TOOLS_Int_to_M_DUP::m_dup */ M_DUP m_dup4;
  kcg_bool noname;
  /* TOOLS_Int_to_M_DUP::m_dup */ M_DUP m_dup2;
  kcg_bool _7_noname;
  /* TOOLS_Int_to_M_DUP::m_dup */ M_DUP m_dup3;
  
  outC->_L2 = int_in;
  outC->m_dup_in = outC->_L2;
  outC->IfBlock1_clock = outC->m_dup_in == INT_M_DUP_duplicate_of_next;
  if (outC->IfBlock1_clock) {
    outC->_L6_IfBlock1 = ENUM_M_DUP_duplicate_of_next;
    outC->_L5_IfBlock1 = kcg_false;
    _8_noname = outC->_L5_IfBlock1;
    m_dup1 = outC->_L6_IfBlock1;
    outC->m_dup = m_dup1;
  }
  else {
    outC->_1_else_clock_IfBlock1 = outC->m_dup_in ==
      INT_M_DUP_duplicate_of_previous;
    if (outC->_1_else_clock_IfBlock1) {
      outC->_L52_IfBlock1 = ENUM_M_DUP_duplicate_of_previous;
      outC->_L4_IfBlock1 = kcg_false;
      _7_noname = outC->_L4_IfBlock1;
      m_dup3 = outC->_L52_IfBlock1;
      m_dup = m_dup3;
    }
    else {
      outC->else_clock_IfBlock1 = outC->m_dup_in == INT_M_DUP_no_duplicates;
      if (outC->else_clock_IfBlock1) {
        outC->_L43_IfBlock1 = ENUM_M_DUP_no_duplicates;
        outC->_L3_IfBlock1 = kcg_false;
        _6_noname = outC->_L3_IfBlock1;
        m_dup5 = outC->_L43_IfBlock1;
        m_dup2 = m_dup5;
      }
      else {
        outC->_L34_IfBlock1 = ENUM_M_DUP_duplicate_of_next;
        outC->_L2_IfBlock1 = kcg_true;
        noname = outC->_L2_IfBlock1;
        m_dup4 = outC->_L34_IfBlock1;
        m_dup2 = m_dup4;
      }
      m_dup = m_dup2;
    }
    outC->m_dup = m_dup;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TOOLS_Int_to_M_DUP.c
** Generation date: 2015-04-25T17:50:04
*************************************************************$ */

