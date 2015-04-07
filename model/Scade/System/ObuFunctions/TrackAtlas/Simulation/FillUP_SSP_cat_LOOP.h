/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-03T23:27:48
*************************************************************$ */
#ifndef _FillUP_SSP_cat_LOOP_H_
#define _FillUP_SSP_cat_LOOP_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* FillUP_SSP_cat_LOOP::cont */ cont;
  SSP_cat_t /* FillUP_SSP_cat_LOOP::SSP_cat_out */ SSP_cat_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* FillUP_SSP_cat_LOOP::_L24 */ _L24;
  SSP_cat_t /* FillUP_SSP_cat_LOOP::_L25 */ _L25;
  SSP_section_t /* FillUP_SSP_cat_LOOP::_L26 */ _L26;
  SSP_s_section_t /* FillUP_SSP_cat_LOOP::_L34 */ _L34;
  SSP_t_section_t /* FillUP_SSP_cat_LOOP::_L33 */ _L33;
  kcg_int /* FillUP_SSP_cat_LOOP::_L38 */ _L38;
  kcg_bool /* FillUP_SSP_cat_LOOP::_L39 */ _L39;
  kcg_int /* FillUP_SSP_cat_LOOP::_L40 */ _L40;
  SSP_section_t /* FillUP_SSP_cat_LOOP::_L41 */ _L41;
  SSP_section_t /* FillUP_SSP_cat_LOOP::_L42 */ _L42;
  SSP_section_t /* FillUP_SSP_cat_LOOP::_L43 */ _L43;
  SSP_cat_t /* FillUP_SSP_cat_LOOP::_L44 */ _L44;
  SSP_cat_t /* FillUP_SSP_cat_LOOP::_L45 */ _L45;
  kcg_bool /* FillUP_SSP_cat_LOOP::_L46 */ _L46;
  kcg_int /* FillUP_SSP_cat_LOOP::_L47 */ _L47;
  kcg_int /* FillUP_SSP_cat_LOOP::_L48 */ _L48;
} outC_FillUP_SSP_cat_LOOP;

/* ===========  node initialization and cycle functions  =========== */
/* FillUP_SSP_cat_LOOP */
extern void FillUP_SSP_cat_LOOP(
  /* FillUP_SSP_cat_LOOP::i */kcg_int i,
  /* FillUP_SSP_cat_LOOP::SSP_cat_init */SSP_cat_t *SSP_cat_init,
  /* FillUP_SSP_cat_LOOP::SSP_sction_in */SSP_section_t *SSP_sction_in,
  outC_FillUP_SSP_cat_LOOP *outC);

extern void FillUP_SSP_cat_LOOP_reset(outC_FillUP_SSP_cat_LOOP *outC);

#endif /* _FillUP_SSP_cat_LOOP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** FillUP_SSP_cat_LOOP.h
** Generation date: 2015-04-03T23:27:48
*************************************************************$ */

