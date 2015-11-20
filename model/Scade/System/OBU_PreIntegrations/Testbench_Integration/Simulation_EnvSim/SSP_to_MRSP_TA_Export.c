/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_to_MRSP_TA_Export.h"

/* TA_Export::SSP_to_MRSP */
void SSP_to_MRSP_TA_Export(
  /* TA_Export::SSP_to_MRSP::i */kcg_int i,
  /* TA_Export::SSP_to_MRSP::MRSP_init */MRSP_Profile_t_TrackAtlasTypes *MRSP_init,
  /* TA_Export::SSP_to_MRSP::SSP */StaticSpeedProfile_t_TrackAtlasTypes *SSP,
  /* TA_Export::SSP_to_MRSP::cont */kcg_bool *cont,
  /* TA_Export::SSP_to_MRSP::MRSP */MRSP_Profile_t_TrackAtlasTypes *MRSP)
{
  /* TA_Export::SSP_to_MRSP::_L7 */
  static StaticSpeedSection_t_TrackAtlasTypes _L7;
  
  if ((0 <= i) & (i < 50)) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(&_L7, &(*SSP)[i]);
  }
  else {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &_L7,
      (StaticSpeedSection_t_TrackAtlasTypes *)
        &DEFAULT_StaticSpeedSection_TrackAtlasTypes);
  }
  *cont = _L7.valid;
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(MRSP, MRSP_init);
  if ((0 <= i) & (i < 110)) {
    (*MRSP)[i].valid = *cont;
    (*MRSP)[i].Loc_Abs = _L7.d_static_abs;
    (*MRSP)[i].Loc_LRBG = _L7.d_static_LRBG;
    (*MRSP)[i].MRS = _L7.v_static;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SSP_to_MRSP_TA_Export.c
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

