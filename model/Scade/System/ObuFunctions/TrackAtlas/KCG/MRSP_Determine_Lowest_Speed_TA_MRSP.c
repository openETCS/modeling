/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_Determine_Lowest_Speed_TA_MRSP.h"

/* TA_MRSP::MRSP_Determine_Lowest_Speed */
SSP_s_section_t_TA_MRSP MRSP_Determine_Lowest_Speed_TA_MRSP(
  /* TA_MRSP::MRSP_Determine_Lowest_Speed::i */kcg_int i,
  /* TA_MRSP::MRSP_Determine_Lowest_Speed::Acc */SSP_s_section_t_TA_MRSP Acc,
  /* TA_MRSP::MRSP_Determine_Lowest_Speed::ValidSpeed */SSP_s_section_t_TA_MRSP ValidSpeed)
{
  /* TA_MRSP::MRSP_Determine_Lowest_Speed::_L7 */ SSP_s_section_t_TA_MRSP _L7;
  /* TA_MRSP::MRSP_Determine_Lowest_Speed::MRSpeed */ SSP_s_section_t_TA_MRSP MRSpeed;
  
  if (0 != i) {
    _L7 = Acc;
  }
  else {
    _L7 = ValidSpeed;
  }
  if (_L7 <= ValidSpeed) {
    MRSpeed = _L7;
  }
  else {
    MRSpeed = ValidSpeed;
  }
  return MRSpeed;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_Determine_Lowest_Speed_TA_MRSP.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

