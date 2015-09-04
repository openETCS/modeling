/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */
#ifndef _CombineSections_TA_MA_H_
#define _CombineSections_TA_MA_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MovementAuthoritySectionlist_t_TrackAtlasTypes /* TA_MA::CombineSections::allSections */ allSections;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  MovementAuthoritySection_t_TrackAtlasTypes /* TA_MA::CombineSections::_L1 */ _L1;
  MovementAuthoritySectionlist_t_TrackAtlasTypes /* TA_MA::CombineSections::_L2 */ _L2;
  MovementAuthoritySectionlist_t_TrackAtlasTypes /* TA_MA::CombineSections::_L3 */ _L3;
} outC_CombineSections_TA_MA;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MA::CombineSections */
extern void CombineSections_TA_MA(
  /* TA_MA::CombineSections::endSection */MovementAuthoritySection_t_TrackAtlasTypes *endSection,
  /* TA_MA::CombineSections::sections */MovementAuthoritySectionlist_t_TrackAtlasTypes *sections,
  outC_CombineSections_TA_MA *outC);

extern void CombineSections_reset_TA_MA(outC_CombineSections_TA_MA *outC);

#endif /* _CombineSections_TA_MA_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CombineSections_TA_MA.h
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

