/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_DetermineRelevantSpeedperCat_TA_MRSP.h"

/* TA_MRSP::MRSP_DetermineRelevantSpeedperCat */
SSP_s_section_t_TA_MRSP MRSP_DetermineRelevantSpeedperCat_TA_MRSP(
  /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat::CurrentTarget */SSP_t_section_t_TA_MRSP CurrentTarget,
  /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat::SSP_cat */SSP_cat_t_TA_MRSP *SSP_cat)
{
  SSP_relevant_target_t_TA_MRSP tmp2;
  kcg_bool tmp1;
  kcg_int i;
  SSP_section_t_TA_MRSP tmp;
  /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat::_L11 */ SSP_valid_section_t_TA_MRSP _L11;
  /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat::_L30 */ SSP_relevant_target_t_TA_MRSP _L30;
  /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat::ValidSpeed */ SSP_s_section_t_TA_MRSP ValidSpeed;
  
  /* 1 */ MRSP_FindLastSSPSection_TA_MRSP(SSP_cat, &_L11);
  kcg_copy_SSP_relevant_target_t_TA_MRSP(
    &_L30,
    (SSP_relevant_target_t_TA_MRSP *) &DEFAULT_relevant_target_TA_MRSP);
  for (i = 0; i < 33; i++) {
    kcg_copy_SSP_relevant_target_t_TA_MRSP(&tmp2, &_L30);
    /* 1 */
    MRSP_DetermineRelevantSpeedperCat_LOOP_TA_MRSP(
      i,
      &tmp2,
      &_L11,
      &(*SSP_cat)[i],
      CurrentTarget,
      &tmp1,
      &_L30);
    if (!tmp1) {
      break;
    }
  }
  if ((0 <= _L30.index) & (_L30.index < 33)) {
    kcg_copy_SSP_section_t_TA_MRSP(&tmp, &(*SSP_cat)[_L30.index]);
  }
  else {
    kcg_copy_SSP_section_t_TA_MRSP(
      &tmp,
      (SSP_section_t_TA_MRSP *) &DEFAULT_SSP_section_TA_MRSP);
  }
  ValidSpeed = tmp.speed;
  return ValidSpeed;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_DetermineRelevantSpeedperCat_TA_MRSP.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

