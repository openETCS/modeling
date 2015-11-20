/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Calculate_MRSP1_TA_MRSP.h"

/* TA_MRSP::Calculate_MRSP1 */
void Calculate_MRSP1_TA_MRSP(
  /* TA_MRSP::Calculate_MRSP1::SSP_matrix_in */ SSP_matrix_t_TA_MRSP *SSP_matrix_in,
  /* TA_MRSP::Calculate_MRSP1::MRSP */ MRSP_Profile_t_TrackAtlasTypes *MRSP)
{
  static SSP_matrix_t_TA_MRSP noname;
  /* TA_MRSP::Calculate_MRSP1::_L15 */
  static SSP_matrix_t_TA_MRSP _L15;
  /* TA_MRSP::Calculate_MRSP1::_L18 */
  static MRSP_Profile_t_TrackAtlasTypes _L18;
  
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(
    &_L18,
    (MRSP_Profile_t_TrackAtlasTypes *) &DEFAULT_MRSP_Profile_TA_MRSP);
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(MRSP, &_L18);
  kcg_copy_SSP_matrix_t_TA_MRSP(&_L15, SSP_matrix_in);
  kcg_copy_SSP_matrix_t_TA_MRSP(&noname, &_L15);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Calculate_MRSP1_TA_MRSP.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

