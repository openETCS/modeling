/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T09:15:47
*************************************************************$ */
#ifndef _Read_P027V1_sections_TM_baseline2_H_
#define _Read_P027V1_sections_TM_baseline2_H_

#include "kcg_types.h"
#include "RECV_ReadPackets_TM_lib_internal.h"
#include "T_Decode_Metadata_L2_TM_lib_internal.h"
#include "C_P027V1_compr_onboard_se_TM_conversions_baseline2.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TM_baseline2::Read_P027V1_sections::cont */ cont;
  P027V1_section_enum_T_TM_baseline2 /* TM_baseline2::Read_P027V1_sections::P027V1_OBU_section_out */ P027V1_OBU_section_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2 /* 1 */ _2_Context_1;
  outC_RECV_ReadPackets_TM_lib_internal /* 1 */ _1_Context_1;
  outC_T_Decode_Metadata_L2_TM_lib_internal /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P027V1_section_enum_T_TM_baseline2 /* TM_baseline2::Read_P027V1_sections::_L177 */ _L177;
  kcg_int /* TM_baseline2::Read_P027V1_sections::_L176 */ _L176;
  CompressedPackets_T_Common_Types_Pkg /* TM_baseline2::Read_P027V1_sections::_L175 */ _L175;
  kcg_int /* TM_baseline2::Read_P027V1_sections::_L174 */ _L174;
  array_int_500 /* TM_baseline2::Read_P027V1_sections::_L172 */ _L172;
  MetadataElement_T_Common_Types_Pkg /* TM_baseline2::Read_P027V1_sections::_L173 */ _L173;
  kcg_int /* TM_baseline2::Read_P027V1_sections::_L171 */ _L171;
  kcg_int /* TM_baseline2::Read_P027V1_sections::_L179 */ _L179;
  kcg_bool /* TM_baseline2::Read_P027V1_sections::_L180 */ _L180;
  kcg_bool /* TM_baseline2::Read_P027V1_sections::_L181 */ _L181;
} outC_Read_P027V1_sections_TM_baseline2;

/* ===========  node initialization and cycle functions  =========== */
/* TM_baseline2::Read_P027V1_sections */
extern void Read_P027V1_sections_TM_baseline2(
  /* TM_baseline2::Read_P027V1_sections::i */kcg_int i,
  /* TM_baseline2::Read_P027V1_sections::Message_IN */CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM_baseline2::Read_P027V1_sections::n_iter_outer */kcg_int n_iter_outer,
  /* TM_baseline2::Read_P027V1_sections::meta_sections */kcg_int meta_sections,
  outC_Read_P027V1_sections_TM_baseline2 *outC);

extern void Read_P027V1_sections_reset_TM_baseline2(
  outC_Read_P027V1_sections_TM_baseline2 *outC);

#endif /* _Read_P027V1_sections_TM_baseline2_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Read_P027V1_sections_TM_baseline2.h
** Generation date: 2015-08-30T09:15:47
*************************************************************$ */

