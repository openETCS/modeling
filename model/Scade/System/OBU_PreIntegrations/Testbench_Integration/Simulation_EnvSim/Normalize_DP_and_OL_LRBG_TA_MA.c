/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Normalize_DP_and_OL_LRBG_TA_MA.h"

/* TA_MA::Normalize_DP_and_OL_LRBG */
void Normalize_DP_and_OL_LRBG_TA_MA(
  /* TA_MA::Normalize_DP_and_OL_LRBG::pos_LRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_MA::Normalize_DP_and_OL_LRBG::MA_in */MovementAuthority_t_TrackAtlasTypes *MA_in,
  /* TA_MA::Normalize_DP_and_OL_LRBG::dangerpoint */DP_or_OL_t_TrackAtlasTypes *dangerpoint,
  /* TA_MA::Normalize_DP_and_OL_LRBG::overlap */DP_or_OL_t_TrackAtlasTypes *overlap)
{
  (*dangerpoint).d_DP_or_OL = (*MA_in).dangerpoint.d_DP_or_OL - pos_LRBG;
  (*dangerpoint).v_release = (*MA_in).dangerpoint.v_release;
  (*dangerpoint).calc_v_release_onboard =
    (*MA_in).dangerpoint.calc_v_release_onboard;
  (*overlap).d_DP_or_OL = (*MA_in).overlap.d_DP_or_OL - pos_LRBG;
  (*overlap).v_release = (*MA_in).overlap.v_release;
  (*overlap).calc_v_release_onboard = (*MA_in).overlap.calc_v_release_onboard;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Normalize_DP_and_OL_LRBG_TA_MA.c
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

