/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-06T18:53:56
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DetermineRelevantSpeedper.h"

void DetermineRelevantSpeedper_reset(outC_DetermineRelevantSpeedper *outC)
{
}

/* DetermineRelevantSpeedperCat_LOOP */
void DetermineRelevantSpeedper(
  /* DetermineRelevantSpeedperCat_LOOP::i */kcg_int i,
  /* DetermineRelevantSpeedperCat_LOOP::TargetCycleBefore */SSP_relevant_target_t *TargetCycleBefore,
  /* DetermineRelevantSpeedperCat_LOOP::Relevant_Section */SSP_valid_section_t *Relevant_Section,
  /* DetermineRelevantSpeedperCat_LOOP::SSP_section */SSP_section_t *SSP_section,
  /* DetermineRelevantSpeedperCat_LOOP::TargetLookedFor */SSP_t_section_t TargetLookedFor,
  outC_DetermineRelevantSpeedper *outC)
{
  kcg_int noname;
  
  outC->_L124 = TargetLookedFor;
  kcg_copy_SSP_valid_section_t(&outC->_L141, Relevant_Section);
  outC->_L142 = outC->_L141.target;
  outC->_L140 = outC->_L124 >= outC->_L142;
  outC->_L169 = !outC->_L140;
  kcg_copy_SSP_section_t(&outC->_L167, SSP_section);
  outC->_L168 = outC->_L167.target;
  kcg_copy_SSP_relevant_target_t(&outC->_L150, TargetCycleBefore);
  outC->_L144 = outC->_L141.index;
  outC->_L120 = i;
  if (outC->_L140) {
    outC->_L143 = outC->_L144;
  }
  else {
    outC->_L143 = outC->_L120;
  }
  kcg_copy_SSP_relevant_target_t(&outC->_L165, &outC->_L150);
  if (kcg_true) {
    outC->_L165.index = outC->_L143;
  }
  kcg_copy_SSP_relevant_target_t(&outC->_L166, &outC->_L165);
  if (kcg_true) {
    outC->_L166.target = outC->_L168;
  }
  outC->_L153 = DIM_maxSSP_individual_sections;
  outC->_L152 = outC->_L153 - outC->_L120;
  outC->_L158 = 1;
  outC->_L157 = outC->_L152 - outC->_L158;
  noname = outC->_L157;
  outC->_L146 = TargetLookedFor;
  kcg_copy_SSP_section_t(&outC->_L148, SSP_section);
  outC->_L149 = outC->_L148.target;
  outC->_L147 = outC->_L146 >= outC->_L149;
  outC->_L160 = TargetLookedFor;
  kcg_copy_SSP_relevant_target_t(&outC->_L159, TargetCycleBefore);
  outC->_L162 = outC->_L159.target;
  outC->_L161 = outC->_L160 < outC->_L162;
  outC->_L163 = outC->_L147 & outC->_L161;
  outC->_L154 = outC->_L163 & outC->_L169;
  outC->_L151 = outC->_L154 | outC->_L140;
  outC->_L145 = !outC->_L151;
  kcg_copy_SSP_relevant_target_t(&outC->TargetCurrentCycle, &outC->_L166);
  outC->cont = outC->_L145;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** DetermineRelevantSpeedper.c
** Generation date: 2015-04-06T18:53:56
*************************************************************$ */

