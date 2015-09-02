/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */
#ifndef _Read_P027V1_sections_TM_baseline2_H_
#define _Read_P027V1_sections_TM_baseline2_H_

#include "kcg_types.h"
#include "RECV_ReadPackets_TM_lib_internal.h"
#include "T_Decode_Metadata_L2_TM_lib_internal.h"
#include "C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2.h"

/* =====================  no input structure  ====================== */


/* TM_baseline2::Read_P027V1_sections */
extern void Read_P027V1_sections_TM_baseline2(
  /* TM_baseline2::Read_P027V1_sections::i */kcg_int i,
  /* TM_baseline2::Read_P027V1_sections::Message_IN */CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM_baseline2::Read_P027V1_sections::n_iter_outer */kcg_int n_iter_outer,
  /* TM_baseline2::Read_P027V1_sections::meta_sections */kcg_int meta_sections,
  /* TM_baseline2::Read_P027V1_sections::cont */kcg_bool *cont,
  /* TM_baseline2::Read_P027V1_sections::P027V1_OBU_section_out */P027V1_section_enum_T_TM_baseline2 *P027V1_OBU_section_out);

#endif /* _Read_P027V1_sections_TM_baseline2_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Read_P027V1_sections_TM_baseline2.h
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

