/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MA_L23_Postprocessing_TA_MA.h"

void MA_L23_Postprocessing_reset_TA_MA(outC_MA_L23_Postprocessing_TA_MA *outC)
{
  /* 1 */ Update_MA_reset_TA_MA(&outC->Context_1);
}

/* TA_MA::MA_L23_Postprocessing */
void MA_L23_Postprocessing_TA_MA(
  /* TA_MA::MA_L23_Postprocessing::Profile_in */MovementAuthority_t_TrackAtlasTypes *Profile_in,
  /* TA_MA::MA_L23_Postprocessing::pos_LRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  outC_MA_L23_Postprocessing_TA_MA *outC)
{
  /* 1 */ Update_MA_TA_MA(Profile_in, &outC->Context_1);
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &outC->MA_absolute,
    &outC->Context_1.MA_in_force);
  outC->MA_available = outC->MA_absolute.valid;
  /* 1 */
  MA_Normalize_MA_LRBG_TA_MA(&outC->MA_absolute, pos_LRBG, &outC->MA_at_LRBG);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MA_L23_Postprocessing_TA_MA.c
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

