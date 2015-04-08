/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-03T23:27:48
*************************************************************$ */
#ifndef _Determine_valid_speed_per_H_
#define _Determine_valid_speed_per_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Determine_valid_speed_per_cat_LOOP::cont */ cont;
  SSP_section_t /* Determine_valid_speed_per_cat_LOOP::ValidSection */ ValidSection;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SSP_section_t /* Determine_valid_speed_per_cat_LOOP::_L39 */ _L39;
  SSP_t_section_t /* Determine_valid_speed_per_cat_LOOP::_L40 */ _L40;
  SSP_section_t /* Determine_valid_speed_per_cat_LOOP::_L41 */ _L41;
  SSP_t_section_t /* Determine_valid_speed_per_cat_LOOP::_L42 */ _L42;
  SSP_t_section_t /* Determine_valid_speed_per_cat_LOOP::_L47 */ _L47;
  kcg_bool /* Determine_valid_speed_per_cat_LOOP::_L48 */ _L48;
  kcg_bool /* Determine_valid_speed_per_cat_LOOP::_L49 */ _L49;
  kcg_bool /* Determine_valid_speed_per_cat_LOOP::_L50 */ _L50;
  kcg_bool /* Determine_valid_speed_per_cat_LOOP::_L55 */ _L55;
  SSP_section_t /* Determine_valid_speed_per_cat_LOOP::_L56 */ _L56;
  SSP_section_t /* Determine_valid_speed_per_cat_LOOP::_L57 */ _L57;
  SSP_section_t /* Determine_valid_speed_per_cat_LOOP::_L58 */ _L58;
} outC_Determine_valid_speed_per;

/* ===========  node initialization and cycle functions  =========== */
/* Determine_valid_speed_per_cat_LOOP */
extern void Determine_valid_speed_per(
  /* Determine_valid_speed_per_cat_LOOP::Section */SSP_section_t *Section,
  /* Determine_valid_speed_per_cat_LOOP::CurrentTarget */SSP_t_section_t CurrentTarget,
  /* Determine_valid_speed_per_cat_LOOP::SSP_section */SSP_section_t *SSP_section,
  outC_Determine_valid_speed_per *outC);

extern void Determine_valid_speed_per_reset(
  outC_Determine_valid_speed_per *outC);

#endif /* _Determine_valid_speed_per_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Determine_valid_speed_per.h
** Generation date: 2015-04-03T23:27:48
*************************************************************$ */

