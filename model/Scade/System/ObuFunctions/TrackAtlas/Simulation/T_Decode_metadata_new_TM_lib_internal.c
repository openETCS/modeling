/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-07T01:45:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "T_Decode_metadata_new_TM_lib_internal.h"

void T_Decode_metadata_new_reset_TM_lib_internal(
  outC_T_Decode_metadata_new_TM_lib_internal *outC)
{
}

/* TM_lib_internal::T_Decode_metadata_new */
void T_Decode_metadata_new_TM_lib_internal(
  /* TM_lib_internal::T_Decode_metadata_new::Metadata_in */kcg_int Metadata_in,
  outC_T_Decode_metadata_new_TM_lib_internal *outC)
{
  outC->_L11 = DIM_offset_metadata_id_TM_lib_internal;
  outC->_L1 = Metadata_in;
  outC->_L6 = DIM_offset_metadata_q_dir_TM_lib_internal;
  outC->_L5 = outC->_L1 % outC->_L6;
  outC->_L7 = DIM_offset_metadata_m_version_TM_lib_internal;
  outC->_L9 = outC->_L5 % outC->_L7;
  outC->_L10 = outC->_L9 / outC->_L11;
  outC->_L8 = outC->_L5 / outC->_L7;
  outC->_L3 = DIM_offset_metadata_nid_packet_TM_lib_internal;
  outC->_L4 = outC->_L1 / outC->_L3;
  outC->m_version = outC->_L8;
  outC->id = outC->_L10;
  outC->nid_packet = outC->_L4;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** T_Decode_metadata_new_TM_lib_internal.c
** Generation date: 2015-07-07T01:45:05
*************************************************************$ */

