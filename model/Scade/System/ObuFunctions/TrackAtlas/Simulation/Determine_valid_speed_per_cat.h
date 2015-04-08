/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-03T23:27:48
*************************************************************$ */
#ifndef _Determine_valid_speed_per_cat_H_
#define _Determine_valid_speed_per_cat_H_

#include "kcg_types.h"
#include "Determine_valid_speed_per.h"
#include "Reverse_SSP_cat.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_s_section_t /* Determine_valid_speed_per_cat::ValidSpeed */ ValidSpeed;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Determine_valid_speed_per /* 1 */ _1_Context_1[3];
  outC_Reverse_SSP_cat /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SSP_cat_t /* Determine_valid_speed_per_cat::_L1 */ _L1;
  SSP_t_section_t /* Determine_valid_speed_per_cat::_L13 */ _L13;
  kcg_int /* Determine_valid_speed_per_cat::_L14 */ _L14;
  kcg_bool /* Determine_valid_speed_per_cat::_L15 */ _L15;
  array_int_3 /* Determine_valid_speed_per_cat::_L17 */ _L17;
  SSP_section_t /* Determine_valid_speed_per_cat::_L18 */ _L18;
  SSP_section_t /* Determine_valid_speed_per_cat::_L21 */ _L21;
  SSP_s_section_t /* Determine_valid_speed_per_cat::_L26 */ _L26;
  SSP_cat_t /* Determine_valid_speed_per_cat::_L27 */ _L27;
} outC_Determine_valid_speed_per_cat;

/* ===========  node initialization and cycle functions  =========== */
/* Determine_valid_speed_per_cat */
extern void Determine_valid_speed_per_cat(
  /* Determine_valid_speed_per_cat::SSP_cat */SSP_cat_t *SSP_cat,
  /* Determine_valid_speed_per_cat::CurrentTarget */SSP_t_section_t CurrentTarget,
  outC_Determine_valid_speed_per_cat *outC);

extern void Determine_valid_speed_per_cat_reset(
  outC_Determine_valid_speed_per_cat *outC);

#endif /* _Determine_valid_speed_per_cat_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Determine_valid_speed_per_cat.h
** Generation date: 2015-04-03T23:27:48
*************************************************************$ */

