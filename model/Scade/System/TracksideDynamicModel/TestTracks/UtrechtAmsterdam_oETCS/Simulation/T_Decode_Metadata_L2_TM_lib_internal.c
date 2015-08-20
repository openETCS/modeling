/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-20T15:03:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "T_Decode_Metadata_L2_TM_lib_internal.h"

void T_Decode_Metadata_L2_reset_TM_lib_internal(
  outC_T_Decode_Metadata_L2_TM_lib_internal *outC)
{
}

/* TM_lib_internal::T_Decode_Metadata_L2 */
void T_Decode_Metadata_L2_TM_lib_internal(
  /* TM_lib_internal::T_Decode_Metadata_L2::Metadata */kcg_int Metadata,
  /* TM_lib_internal::T_Decode_Metadata_L2::i */kcg_int i,
  outC_T_Decode_Metadata_L2_TM_lib_internal *outC)
{
  outC->_L1 = i;
  outC->_L2 = Metadata;
  outC->_L3 = outC->_L1 + outC->_L2;
  outC->nid_packet = outC->_L3;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** T_Decode_Metadata_L2_TM_lib_internal.c
** Generation date: 2015-08-20T15:03:10
*************************************************************$ */

