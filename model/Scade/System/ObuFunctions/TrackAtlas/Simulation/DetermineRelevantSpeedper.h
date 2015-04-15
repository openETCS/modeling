/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-06T18:53:56
*************************************************************$ */
#ifndef _DetermineRelevantSpeedper_H_
#define _DetermineRelevantSpeedper_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* DetermineRelevantSpeedperCat_LOOP::cont */ cont;
  SSP_relevant_target_t /* DetermineRelevantSpeedperCat_LOOP::TargetCurrentCycle */ TargetCurrentCycle;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* DetermineRelevantSpeedperCat_LOOP::_L120 */ _L120;
  SSP_t_section_t /* DetermineRelevantSpeedperCat_LOOP::_L124 */ _L124;
  kcg_bool /* DetermineRelevantSpeedperCat_LOOP::_L140 */ _L140;
  SSP_valid_section_t /* DetermineRelevantSpeedperCat_LOOP::_L141 */ _L141;
  SSP_t_section_t /* DetermineRelevantSpeedperCat_LOOP::_L142 */ _L142;
  kcg_int /* DetermineRelevantSpeedperCat_LOOP::_L143 */ _L143;
  kcg_int /* DetermineRelevantSpeedperCat_LOOP::_L144 */ _L144;
  kcg_bool /* DetermineRelevantSpeedperCat_LOOP::_L145 */ _L145;
  SSP_t_section_t /* DetermineRelevantSpeedperCat_LOOP::_L146 */ _L146;
  kcg_bool /* DetermineRelevantSpeedperCat_LOOP::_L147 */ _L147;
  SSP_section_t /* DetermineRelevantSpeedperCat_LOOP::_L148 */ _L148;
  SSP_t_section_t /* DetermineRelevantSpeedperCat_LOOP::_L149 */ _L149;
  SSP_relevant_target_t /* DetermineRelevantSpeedperCat_LOOP::_L150 */ _L150;
  kcg_bool /* DetermineRelevantSpeedperCat_LOOP::_L151 */ _L151;
  kcg_int /* DetermineRelevantSpeedperCat_LOOP::_L152 */ _L152;
  kcg_int /* DetermineRelevantSpeedperCat_LOOP::_L153 */ _L153;
  kcg_bool /* DetermineRelevantSpeedperCat_LOOP::_L154 */ _L154;
  kcg_int /* DetermineRelevantSpeedperCat_LOOP::_L157 */ _L157;
  kcg_int /* DetermineRelevantSpeedperCat_LOOP::_L158 */ _L158;
  SSP_relevant_target_t /* DetermineRelevantSpeedperCat_LOOP::_L159 */ _L159;
  SSP_t_section_t /* DetermineRelevantSpeedperCat_LOOP::_L160 */ _L160;
  SSP_t_section_t /* DetermineRelevantSpeedperCat_LOOP::_L162 */ _L162;
  kcg_bool /* DetermineRelevantSpeedperCat_LOOP::_L161 */ _L161;
  kcg_bool /* DetermineRelevantSpeedperCat_LOOP::_L163 */ _L163;
  SSP_relevant_target_t /* DetermineRelevantSpeedperCat_LOOP::_L165 */ _L165;
  SSP_relevant_target_t /* DetermineRelevantSpeedperCat_LOOP::_L166 */ _L166;
  SSP_section_t /* DetermineRelevantSpeedperCat_LOOP::_L167 */ _L167;
  SSP_t_section_t /* DetermineRelevantSpeedperCat_LOOP::_L168 */ _L168;
  kcg_bool /* DetermineRelevantSpeedperCat_LOOP::_L169 */ _L169;
} outC_DetermineRelevantSpeedper;

/* ===========  node initialization and cycle functions  =========== */
/* DetermineRelevantSpeedperCat_LOOP */
extern void DetermineRelevantSpeedper(
  /* DetermineRelevantSpeedperCat_LOOP::i */kcg_int i,
  /* DetermineRelevantSpeedperCat_LOOP::TargetCycleBefore */SSP_relevant_target_t *TargetCycleBefore,
  /* DetermineRelevantSpeedperCat_LOOP::Relevant_Section */SSP_valid_section_t *Relevant_Section,
  /* DetermineRelevantSpeedperCat_LOOP::SSP_section */SSP_section_t *SSP_section,
  /* DetermineRelevantSpeedperCat_LOOP::TargetLookedFor */SSP_t_section_t TargetLookedFor,
  outC_DetermineRelevantSpeedper *outC);

extern void DetermineRelevantSpeedper_reset(
  outC_DetermineRelevantSpeedper *outC);

#endif /* _DetermineRelevantSpeedper_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** DetermineRelevantSpeedper.h
** Generation date: 2015-04-06T18:53:56
*************************************************************$ */

