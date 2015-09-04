/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CombineSections_TA_MA.h"

void CombineSections_reset_TA_MA(outC_CombineSections_TA_MA *outC)
{
}

/* TA_MA::CombineSections */
void CombineSections_TA_MA(
  /* TA_MA::CombineSections::endSection */MovementAuthoritySection_t_TrackAtlasTypes *endSection,
  /* TA_MA::CombineSections::sections */MovementAuthoritySectionlist_t_TrackAtlasTypes *sections,
  outC_CombineSections_TA_MA *outC)
{
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(&outC->_L2, sections);
  kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(&outC->_L1, endSection);
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(
    &outC->_L3,
    &outC->_L2);
  if ((0 <= 0) & (0 < 10)) {
    kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(
      &outC->_L3[0],
      &outC->_L1);
  }
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(
    &outC->allSections,
    &outC->_L3);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CombineSections_TA_MA.c
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

