/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-05T12:18:17
*************************************************************$ */
#ifndef _FindValidSSP_section_H_
#define _FindValidSSP_section_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  SSP_section_t /* FindValidSSP_section::SSP_section_In */ SSP_section_In;
  kcg_int /* FindValidSSP_section::i */ i;
} inC_FindValidSSP_section;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* FindValidSSP_section::valid */ valid;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SSP_section_t /* FindValidSSP_section::_L1 */ _L1;
  kcg_bool /* FindValidSSP_section::_L6 */ _L6;
  kcg_bool /* FindValidSSP_section::_L8 */ _L8;
  kcg_bool /* FindValidSSP_section::_L9 */ _L9;
  kcg_int /* FindValidSSP_section::_L10 */ _L10;
  kcg_int /* FindValidSSP_section::_L11 */ _L11;
  SSP_t_section_t /* FindValidSSP_section::_L12 */ _L12;
  SSP_s_section_t /* FindValidSSP_section::_L13 */ _L13;
  SSP_section_t /* FindValidSSP_section::_L14 */ _L14;
  kcg_bool /* FindValidSSP_section::_L19 */ _L19;
  kcg_int /* FindValidSSP_section::_L20 */ _L20;
  kcg_bool /* FindValidSSP_section::_L21 */ _L21;
  kcg_int /* FindValidSSP_section::_L22 */ _L22;
  kcg_bool /* FindValidSSP_section::_L23 */ _L23;
  kcg_int /* FindValidSSP_section::_L24 */ _L24;
  kcg_int /* FindValidSSP_section::_L25 */ _L25;
  kcg_int /* FindValidSSP_section::_L26 */ _L26;
} outC_FindValidSSP_section;

/* ===========  node initialization and cycle functions  =========== */
/* FindValidSSP_section */
extern void FindValidSSP_section(
  inC_FindValidSSP_section *inC,
  outC_FindValidSSP_section *outC);

extern void FindValidSSP_section_reset(outC_FindValidSSP_section *outC);

#endif /* _FindValidSSP_section_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** FindValidSSP_section.h
** Generation date: 2015-04-05T12:18:17
*************************************************************$ */

