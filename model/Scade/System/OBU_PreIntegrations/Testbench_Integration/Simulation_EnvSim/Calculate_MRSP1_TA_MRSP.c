/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Calculate_MRSP1_TA_MRSP.h"

/* TA_MRSP::Calculate_MRSP1 */
void Calculate_MRSP1_TA_MRSP(
  /* TA_MRSP::Calculate_MRSP1::SSP_matrix_in */SSP_matrix_t_TA_MRSP *SSP_matrix_in,
  /* TA_MRSP::Calculate_MRSP1::MRSP */MRSP_Profile_t_TrackAtlasTypes *MRSP)
{
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(
    MRSP,
    (MRSP_Profile_t_TrackAtlasTypes *) &DEFAULT_MRSP_Profile_TA_MRSP);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Calculate_MRSP1_TA_MRSP.c
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

