/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "T_Decode_Metadata_L2_TM_lib_internal.h"

/* TM_lib_internal::T_Decode_Metadata_L2 */
kcg_int T_Decode_Metadata_L2_TM_lib_internal(
  /* TM_lib_internal::T_Decode_Metadata_L2::Metadata */kcg_int Metadata,
  /* TM_lib_internal::T_Decode_Metadata_L2::i */kcg_int i)
{
  /* TM_lib_internal::T_Decode_Metadata_L2::nid_packet */ kcg_int nid_packet;
  
  nid_packet = i + Metadata;
  return nid_packet;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** T_Decode_Metadata_L2_TM_lib_internal.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

