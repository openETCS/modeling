/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Calculate_MRSP_TA_MRSP.h"

/* TA_MRSP::Calculate_MRSP */
void Calculate_MRSP_TA_MRSP(
  /* TA_MRSP::Calculate_MRSP::SSP_matrix_in */SSP_matrix_t_TA_MRSP *SSP_matrix_in,
  /* TA_MRSP::Calculate_MRSP::MRSP */MRSP_Profile_t_TrackAtlasTypes *MRSP)
{
  kcg_bool tmp;
  kcg_int i;
  /* TA_MRSP::Calculate_MRSP::_L1 */ SSP_t_list_t_TA_MRSP _L1;
  /* TA_MRSP::Calculate_MRSP::_L4 */ SSP_matrix_t_TA_MRSP _L4;
  /* TA_MRSP::Calculate_MRSP::_L3 */ SSP_t_matrix_t_TA_MRSP _L3;
  /* TA_MRSP::Calculate_MRSP::_L6 */ kcg_int _L6;
  /* TA_MRSP::Calculate_MRSP::_L17 */ kcg_int _L17;
  
  /* 1 */ MRSP_Split_And_Reverse_SSP_matrix_TA_MRSP(SSP_matrix_in, &_L3, &_L4);
  /* 1 */ MRSP_BuildTargetList_TA_MRSP(&_L3, &_L1);
  _L6 = /* 1 */ MRSP_Determine_LengthOfTargetList_TA_MRSP(&_L1);
  for (i = 0; i < 200; i++) {
    /* 1 */ MRSP_Build_MRSP_LOOP_TA_MRSP(i, _L6, &_L1, &_L4, &tmp, &(*MRSP)[i]);
    _L17 = i + 1;
    if (!tmp) {
      break;
    }
  }
#ifdef KCG_MAPW_CPY
  
  for (i = _L17; i < 200; i++) {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(
      &(*MRSP)[i],
      (MRSP_section_t_TrackAtlasTypes *) &DEFAULT_MRSP_section_TA_MRSP);
  }
#endif /* KCG_MAPW_CPY */
  
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Calculate_MRSP_TA_MRSP.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

