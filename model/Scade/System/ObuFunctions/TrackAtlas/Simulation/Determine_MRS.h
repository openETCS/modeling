/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-06T18:53:56
*************************************************************$ */
#ifndef _Determine_MRS_H_
#define _Determine_MRS_H_

#include "kcg_types.h"
#include "DetermineRelevantSpeedperCat.h"
#include "Determine_Lowest_Speed.h"

/* ========================  input structure  ====================== */
typedef struct {
  SSP_t_section_t /* Determine_MRS::CurrentTarget */ CurrentTarget;
  SSP_matrix_t /* Determine_MRS::SSP_matrix */ SSP_matrix;
} inC_Determine_MRS;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_s_section_t /* Determine_MRS::MRS */ MRS;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Determine_Lowest_Speed /* 1 */ _1_Context_1[11];
  outC_DetermineRelevantSpeedperCat /* 1 */ Context_1[11];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SSP_t_section_t /* Determine_MRS::_L3 */ _L3;
  SSP_matrix_t /* Determine_MRS::_L4 */ _L4;
  array_int_11 /* Determine_MRS::_L5 */ _L5;
  SSP_s_section_t /* Determine_MRS::_L8 */ _L8;
  array_int_11 /* Determine_MRS::_L9 */ _L9;
  kcg_int /* Determine_MRS::_L10 */ _L10;
} outC_Determine_MRS;

/* ===========  node initialization and cycle functions  =========== */
/* Determine_MRS */
extern void Determine_MRS(inC_Determine_MRS *inC, outC_Determine_MRS *outC);

extern void Determine_MRS_reset(outC_Determine_MRS *outC);

#endif /* _Determine_MRS_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Determine_MRS.h
** Generation date: 2015-04-06T18:53:56
*************************************************************$ */

