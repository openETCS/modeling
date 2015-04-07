/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-06T21:03:30
*************************************************************$ */
#ifndef _SplitAndReverseSSP_LOOP2_H_
#define _SplitAndReverseSSP_LOOP2_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_t_section_t /* SplitAndReverseSSP_LOOP2::SSP_t_section_out */ SSP_t_section_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SSP_section_t /* SplitAndReverseSSP_LOOP2::_L1 */ _L1;
  SSP_t_section_t /* SplitAndReverseSSP_LOOP2::_L6 */ _L6;
} outC_SplitAndReverseSSP_LOOP2;

/* ===========  node initialization and cycle functions  =========== */
/* SplitAndReverseSSP_LOOP2 */
extern void SplitAndReverseSSP_LOOP2(
  /* SplitAndReverseSSP_LOOP2::SSP_section_in */SSP_section_t *SSP_section_in,
  outC_SplitAndReverseSSP_LOOP2 *outC);

extern void SplitAndReverseSSP_LOOP2_reset(outC_SplitAndReverseSSP_LOOP2 *outC);

#endif /* _SplitAndReverseSSP_LOOP2_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SplitAndReverseSSP_LOOP2.h
** Generation date: 2015-04-06T21:03:30
*************************************************************$ */

