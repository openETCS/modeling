/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_DetermineRelevantSpeedperCat_LOOP_TA_MRSP.h"

/* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP */
void MRSP_DetermineRelevantSpeedperCat_LOOP_TA_MRSP(
  /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP::i */kcg_int i,
  /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP::TargetCycleBefore */SSP_relevant_target_t_TA_MRSP *TargetCycleBefore,
  /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP::Relevant_Section */SSP_valid_section_t_TA_MRSP *Relevant_Section,
  /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP::SSP_section */SSP_section_t_TA_MRSP *SSP_section,
  /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP::TargetLookedFor */SSP_t_section_t_TA_MRSP TargetLookedFor,
  /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP::cont */kcg_bool *cont,
  /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP::TargetCurrentCycle */SSP_relevant_target_t_TA_MRSP *TargetCurrentCycle)
{
  /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP::_L140 */ kcg_bool _L140;
  
  _L140 = TargetLookedFor >= (*Relevant_Section).target;
  kcg_copy_SSP_relevant_target_t_TA_MRSP(TargetCurrentCycle, TargetCycleBefore);
  if (_L140) {
    (*TargetCurrentCycle).index = (*Relevant_Section).index;
  }
  else {
    (*TargetCurrentCycle).index = i;
  }
  (*TargetCurrentCycle).target = (*SSP_section).target;
  *cont = !(((TargetLookedFor >= (*SSP_section).target) & (TargetLookedFor <
          (*TargetCycleBefore).target) & !_L140) | _L140);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_DetermineRelevantSpeedperCat_LOOP_TA_MRSP.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

