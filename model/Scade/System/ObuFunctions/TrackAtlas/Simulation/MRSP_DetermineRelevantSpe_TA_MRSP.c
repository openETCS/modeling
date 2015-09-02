/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_DetermineRelevantSpe_TA_MRSP.h"

void MRSP_DetermineRelevantSpe_reset_TA_MRSP(
  outC_MRSP_DetermineRelevantSpe_TA_MRSP *outC)
{
}

/* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP */
void MRSP_DetermineRelevantSpe_TA_MRSP(
  /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP::i */kcg_int i,
  /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP::TargetCycleBefore */SSP_relevant_target_t_TA_MRSP *TargetCycleBefore,
  /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP::Relevant_Section */SSP_valid_section_t_TA_MRSP *Relevant_Section,
  /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP::SSP_section */SSP_section_t_TA_MRSP *SSP_section,
  /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP::TargetLookedFor */SSP_t_section_t_TA_MRSP TargetLookedFor,
  outC_MRSP_DetermineRelevantSpe_TA_MRSP *outC)
{
  outC->_L124 = TargetLookedFor;
  kcg_copy_SSP_valid_section_t_TA_MRSP(&outC->_L141, Relevant_Section);
  outC->_L142 = outC->_L141.target;
  outC->_L140 = outC->_L124 >= outC->_L142;
  outC->_L169 = !outC->_L140;
  kcg_copy_SSP_section_t_TA_MRSP(&outC->_L167, SSP_section);
  outC->_L168 = outC->_L167.target;
  kcg_copy_SSP_relevant_target_t_TA_MRSP(&outC->_L150, TargetCycleBefore);
  outC->_L144 = outC->_L141.index;
  outC->_L120 = i;
  if (outC->_L140) {
    outC->_L143 = outC->_L144;
  }
  else {
    outC->_L143 = outC->_L120;
  }
  kcg_copy_SSP_relevant_target_t_TA_MRSP(&outC->_L165, &outC->_L150);
  if (kcg_true) {
    outC->_L165.index = outC->_L143;
  }
  kcg_copy_SSP_relevant_target_t_TA_MRSP(&outC->_L166, &outC->_L165);
  if (kcg_true) {
    outC->_L166.target = outC->_L168;
  }
  outC->_L146 = TargetLookedFor;
  kcg_copy_SSP_section_t_TA_MRSP(&outC->_L148, SSP_section);
  outC->_L149 = outC->_L148.target;
  outC->_L147 = outC->_L146 >= outC->_L149;
  outC->_L160 = TargetLookedFor;
  kcg_copy_SSP_relevant_target_t_TA_MRSP(&outC->_L159, TargetCycleBefore);
  outC->_L162 = outC->_L159.target;
  outC->_L161 = outC->_L160 < outC->_L162;
  outC->_L163 = outC->_L147 & outC->_L161;
  outC->_L154 = outC->_L163 & outC->_L169;
  outC->_L151 = outC->_L154 | outC->_L140;
  outC->_L145 = !outC->_L151;
  kcg_copy_SSP_relevant_target_t_TA_MRSP(
    &outC->TargetCurrentCycle,
    &outC->_L166);
  outC->cont = outC->_L145;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_DetermineRelevantSpe_TA_MRSP.c
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

