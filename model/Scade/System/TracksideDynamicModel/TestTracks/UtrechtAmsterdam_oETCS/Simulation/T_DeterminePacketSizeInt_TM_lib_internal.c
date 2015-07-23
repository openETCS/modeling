/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "T_DeterminePacketSizeInt_TM_lib_internal.h"

void T_DeterminePacketSizeInt_reset_TM_lib_internal(
  outC_T_DeterminePacketSizeInt_TM_lib_internal *outC)
{
}

/* TM_lib_internal::T_DeterminePacketSizeInt */
void T_DeterminePacketSizeInt_TM_lib_internal(
  /* TM_lib_internal::T_DeterminePacketSizeInt::n_iter */kcg_int n_iter,
  /* TM_lib_internal::T_DeterminePacketSizeInt::size_body */kcg_int size_body,
  /* TM_lib_internal::T_DeterminePacketSizeInt::size_section */kcg_int size_section,
  outC_T_DeterminePacketSizeInt_TM_lib_internal *outC)
{
  outC->_L2 = size_body;
  outC->_L1 = n_iter;
  outC->_L3 = size_section;
  outC->_L6 = outC->_L1 * outC->_L3;
  outC->_L7 = outC->_L2 + outC->_L6;
  outC->p_size = outC->_L7;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** T_DeterminePacketSizeInt_TM_lib_internal.c
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

