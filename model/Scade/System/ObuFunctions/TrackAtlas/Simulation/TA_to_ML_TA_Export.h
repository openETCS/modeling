/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */
#ifndef _TA_to_ML_TA_Export_H_
#define _TA_to_ML_TA_Export_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DataForModeAndLevel_t_TrackAtlasTypes /* TA_Export::TA_to_ML::to_ML */ to_ML;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DataForModeAndLevel_t_TrackAtlasTypes /* TA_Export::TA_to_ML::_L1 */ _L1;
} outC_TA_to_ML_TA_Export;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Export::TA_to_ML */
extern void TA_to_ML_TA_Export(outC_TA_to_ML_TA_Export *outC);

extern void TA_to_ML_reset_TA_Export(outC_TA_to_ML_TA_Export *outC);

#endif /* _TA_to_ML_TA_Export_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TA_to_ML_TA_Export.h
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

