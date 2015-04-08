/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-06T18:53:56
*************************************************************$ */
#ifndef _DetermineRelevantSpeedperCat_H_
#define _DetermineRelevantSpeedperCat_H_

#include "kcg_types.h"
#include "DetermineRelevantSpeedper.h"
#include "FindLastSSPSection.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_s_section_t /* DetermineRelevantSpeedperCat::ValidSpeed */ ValidSpeed;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_DetermineRelevantSpeedper /* 1 */ Context_1[8];
  outC_FindLastSSPSection /* 2 */ Context_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* DetermineRelevantSpeedperCat::_L2 */ _L2;
  SSP_cat_t /* DetermineRelevantSpeedperCat::_L3 */ _L3;
  SSP_t_section_t /* DetermineRelevantSpeedperCat::_L4 */ _L4;
  kcg_bool /* DetermineRelevantSpeedperCat::_L8 */ _L8;
  SSP_valid_section_t /* DetermineRelevantSpeedperCat::_L11 */ _L11;
  array_int_8 /* DetermineRelevantSpeedperCat::_L12 */ _L12;
  array__521 /* DetermineRelevantSpeedperCat::_L29 */ _L29;
  SSP_relevant_target_t /* DetermineRelevantSpeedperCat::_L30 */ _L30;
  SSP_section_t /* DetermineRelevantSpeedperCat::_L52 */ _L52;
  SSP_s_section_t /* DetermineRelevantSpeedperCat::_L53 */ _L53;
  SSP_relevant_target_t /* DetermineRelevantSpeedperCat::_L63 */ _L63;
  kcg_int /* DetermineRelevantSpeedperCat::_L64 */ _L64;
} outC_DetermineRelevantSpeedperCat;

/* ===========  node initialization and cycle functions  =========== */
/* DetermineRelevantSpeedperCat */
extern void DetermineRelevantSpeedperCat(
  /* DetermineRelevantSpeedperCat::CurrentTarget */SSP_t_section_t CurrentTarget,
  /* DetermineRelevantSpeedperCat::SSP_cat */SSP_cat_t *SSP_cat,
  outC_DetermineRelevantSpeedperCat *outC);

extern void DetermineRelevantSpeedperCat_reset(
  outC_DetermineRelevantSpeedperCat *outC);

#endif /* _DetermineRelevantSpeedperCat_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** DetermineRelevantSpeedperCat.h
** Generation date: 2015-04-06T18:53:56
*************************************************************$ */

