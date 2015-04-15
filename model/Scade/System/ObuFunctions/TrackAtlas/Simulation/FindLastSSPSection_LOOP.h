/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-06T18:53:56
*************************************************************$ */
#ifndef _FindLastSSPSection_LOOP_H_
#define _FindLastSSPSection_LOOP_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* FindLastSSPSection_LOOP::cont */ cont;
  SSP_Mark_ValidSSPsection /* FindLastSSPSection_LOOP::i_out */ i_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SSP_section_t /* FindValidSSP_section::_L1 */ _L1_1;
  kcg_bool /* FindValidSSP_section::_L6 */ _L6_1;
  kcg_bool /* FindValidSSP_section::_L8 */ _L8_1;
  kcg_bool /* FindValidSSP_section::_L9 */ _L9_1;
  kcg_int /* FindValidSSP_section::_L10 */ _L10_1;
  kcg_int /* FindValidSSP_section::_L11 */ _L11_1;
  SSP_t_section_t /* FindValidSSP_section::_L12 */ _L12_1;
  SSP_s_section_t /* FindValidSSP_section::_L13 */ _L13_1;
  SSP_section_t /* FindValidSSP_section::_L14 */ _L14_1;
  kcg_bool /* FindValidSSP_section::_L19 */ _L19_1;
  kcg_int /* FindValidSSP_section::_L20 */ _L20_1;
  kcg_bool /* FindValidSSP_section::_L21 */ _L21_1;
  kcg_int /* FindValidSSP_section::_L22 */ _L22_1;
  kcg_bool /* FindValidSSP_section::_L23 */ _L23_1;
  kcg_int /* FindValidSSP_section::_L24 */ _L24_1;
  kcg_int /* FindValidSSP_section::_L25 */ _L25_1;
  kcg_int /* FindValidSSP_section::_L26 */ _L26_1;
  kcg_bool /* FindValidSSP_section::valid */ valid_1;
  SSP_section_t /* FindValidSSP_section::SSP_section_In */ SSP_section_In_1;
  kcg_int /* FindValidSSP_section::i */ i_1;
  SSP_section_t /* FindLastSSPSection_LOOP::_L1 */ _L1;
  kcg_bool /* FindLastSSPSection_LOOP::_L16 */ _L16;
  kcg_int /* FindLastSSPSection_LOOP::_L17 */ _L17;
  kcg_int /* FindLastSSPSection_LOOP::_L18 */ _L18;
  SSP_Mark_ValidSSPsection /* FindLastSSPSection_LOOP::_L19 */ _L19;
  kcg_bool /* FindLastSSPSection_LOOP::_L20 */ _L20;
  SSP_Mark_ValidSSPsection /* FindLastSSPSection_LOOP::_L22 */ _L22;
} outC_FindLastSSPSection_LOOP;

/* ===========  node initialization and cycle functions  =========== */
/* FindLastSSPSection_LOOP */
extern void FindLastSSPSection_LOOP(
  /* FindLastSSPSection_LOOP::i */kcg_int i,
  /* FindLastSSPSection_LOOP::Init */SSP_Mark_ValidSSPsection *Init,
  /* FindLastSSPSection_LOOP::SSP_Reverse_In */SSP_section_t *SSP_Reverse_In,
  outC_FindLastSSPSection_LOOP *outC);

extern void FindLastSSPSection_LOOP_reset(outC_FindLastSSPSection_LOOP *outC);

#endif /* _FindLastSSPSection_LOOP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** FindLastSSPSection_LOOP.h
** Generation date: 2015-04-06T18:53:56
*************************************************************$ */

