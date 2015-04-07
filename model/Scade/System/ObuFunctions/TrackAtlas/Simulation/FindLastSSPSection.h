/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-06T18:53:56
*************************************************************$ */
#ifndef _FindLastSSPSection_H_
#define _FindLastSSPSection_H_

#include "kcg_types.h"
#include "FindLastSSPSection_LOOP.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_valid_section_t /* FindLastSSPSection::Index_Last */ Index_Last;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_FindLastSSPSection_LOOP /* 1 */ Context_1[8];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SSP_cat_t /* FindLastSSPSection::_L1 */ _L1;
  kcg_int /* FindLastSSPSection::_L13 */ _L13;
  SSP_Mark_ValidSSPsection /* FindLastSSPSection::_L14 */ _L14;
  kcg_bool /* FindLastSSPSection::_L16 */ _L16;
  SSP_Mark_ValidSSPsection /* FindLastSSPSection::_L18 */ _L18;
  SSP_section_t /* FindLastSSPSection::_L19 */ _L19;
  SSP_t_section_t /* FindLastSSPSection::_L21 */ _L21;
  kcg_bool /* FindLastSSPSection::_L29 */ _L29;
  kcg_int /* FindLastSSPSection::_L28 */ _L28;
  SSP_valid_section_t /* FindLastSSPSection::_L30 */ _L30;
} outC_FindLastSSPSection;

/* ===========  node initialization and cycle functions  =========== */
/* FindLastSSPSection */
extern void FindLastSSPSection(
  /* FindLastSSPSection::SSP_Reverse_In */SSP_cat_t *SSP_Reverse_In,
  outC_FindLastSSPSection *outC);

extern void FindLastSSPSection_reset(outC_FindLastSSPSection *outC);

#endif /* _FindLastSSPSection_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** FindLastSSPSection.h
** Generation date: 2015-04-06T18:53:56
*************************************************************$ */

