/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_20_MRSP_DetermineRelevantSpe_TA_MRSP.h"

void _20_MRSP_DetermineRelevantSpe_reset_TA_MRSP(
  outC__20_MRSP_DetermineRelevantSpe_TA_MRSP *outC)
{
  kcg_int i;
  
  for (i = 0; i < 33; i++) {
    /* 1 */ MRSP_DetermineRelevantSpe_reset_TA_MRSP(&outC->_1_Context_1[i]);
  }
  /* 1 */ MRSP_FindLastSSPSection_reset_TA_MRSP(&outC->Context_1);
}

/* TA_MRSP::MRSP_DetermineRelevantSpeedperCat */
void _20_MRSP_DetermineRelevantSpe_TA_MRSP(
  /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat::CurrentTarget */SSP_t_section_t_TA_MRSP CurrentTarget,
  /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat::SSP_cat */SSP_cat_t_TA_MRSP *SSP_cat,
  outC__20_MRSP_DetermineRelevantSpe_TA_MRSP *outC)
{
  kcg_int i2;
  kcg_int i1;
  SSP_relevant_target_t_TA_MRSP tmp;
  kcg_int i;
  kcg_int noname;
  
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L3, SSP_cat);
  /* 1 */ MRSP_FindLastSSPSection_TA_MRSP(&outC->_L3, &outC->Context_1);
  kcg_copy_SSP_valid_section_t_TA_MRSP(
    &outC->_L11,
    &outC->Context_1.Index_Last);
  for (i2 = 0; i2 < 33; i2++) {
    kcg_copy_SSP_valid_section_t_TA_MRSP(&outC->_L67[i2], &outC->_L11);
  }
  outC->_L4 = CurrentTarget;
  for (i1 = 0; i1 < 33; i1++) {
    outC->_L66[i1] = outC->_L4;
  }
  kcg_copy_SSP_relevant_target_t_TA_MRSP(
    &outC->_L65,
    (SSP_relevant_target_t_TA_MRSP *) &DEFAULT_relevant_target_TA_MRSP);
  outC->_L8 = kcg_true;
  kcg_copy_SSP_relevant_target_t_TA_MRSP(&outC->_L30, &outC->_L65);
  if (outC->_L8) {
    for (i = 0; i < 33; i++) {
      kcg_copy_SSP_relevant_target_t_TA_MRSP(&tmp, &outC->_L30);
      /* 1 */
      MRSP_DetermineRelevantSpe_TA_MRSP(
        i,
        &tmp,
        &outC->_L67[i],
        &outC->_L3[i],
        outC->_L66[i],
        &outC->_1_Context_1[i]);
      kcg_copy_SSP_relevant_target_t_TA_MRSP(
        &outC->_L30,
        &outC->_1_Context_1[i].TargetCurrentCycle);
      outC->_L2 = i + 1;
      if (!outC->_1_Context_1[i].cont) {
        break;
      }
    }
  }
  else {
    outC->_L2 = 0;
  }
  outC->_L64 = outC->_L30.index;
  noname = outC->_L2;
  if ((0 <= outC->_L64) & (outC->_L64 < 33)) {
    kcg_copy_SSP_section_t_TA_MRSP(&outC->_L52, &outC->_L3[outC->_L64]);
  }
  else {
    kcg_copy_SSP_section_t_TA_MRSP(
      &outC->_L52,
      (SSP_section_t_TA_MRSP *) &DEFAULT_SSP_section_TA_MRSP);
  }
  outC->_L53 = outC->_L52.speed;
  outC->ValidSpeed = outC->_L53;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** _20_MRSP_DetermineRelevantSpe_TA_MRSP.c
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

