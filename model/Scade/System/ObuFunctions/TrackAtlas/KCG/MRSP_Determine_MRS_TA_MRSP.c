/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_Determine_MRS_TA_MRSP.h"

/* TA_MRSP::MRSP_Determine_MRS */
SSP_s_section_t_TA_MRSP MRSP_Determine_MRS_TA_MRSP(
  /* TA_MRSP::MRSP_Determine_MRS::CurrentTarget */SSP_t_section_t_TA_MRSP CurrentTarget,
  /* TA_MRSP::MRSP_Determine_MRS::SSP_matrix */SSP_matrix_t_TA_MRSP *SSP_matrix)
{
  array_int_11 tmp1;
  kcg_int tmp;
  kcg_int i;
  /* TA_MRSP::MRSP_Determine_MRS::MRS */ SSP_s_section_t_TA_MRSP MRS;
  
  for (i = 0; i < 11; i++) {
    tmp1[i] = /* 1 */
      MRSP_DetermineRelevantSpeedperCat_TA_MRSP(
        CurrentTarget,
        &(*SSP_matrix)[i]);
  }
  MRS = 0;
  for (i = 0; i < 11; i++) {
    tmp = MRS;
    MRS = /* 1 */ MRSP_Determine_Lowest_Speed_TA_MRSP(i, tmp, tmp1[i]);
  }
  return MRS;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_Determine_MRS_TA_MRSP.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

