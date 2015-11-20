/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */
#ifndef _MA_L23_Postprocessing_TA_MA_H_
#define _MA_L23_Postprocessing_TA_MA_H_

#include "kcg_types.h"
#include "MA_Normalize_MA_LRBG_TA_MA.h"
#include "Update_MA_TA_MA.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MovementAuthority_t_TrackAtlasTypes /* TA_MA::MA_L23_Postprocessing::MA_at_LRBG */ MA_at_LRBG;
  MovementAuthority_t_TrackAtlasTypes /* TA_MA::MA_L23_Postprocessing::MA_absolute */ MA_absolute;
  kcg_bool /* TA_MA::MA_L23_Postprocessing::MA_available */ MA_available;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Update_MA_TA_MA /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_MA_L23_Postprocessing_TA_MA;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MA::MA_L23_Postprocessing */
extern void MA_L23_Postprocessing_TA_MA(
  /* TA_MA::MA_L23_Postprocessing::Profile_in */MovementAuthority_t_TrackAtlasTypes *Profile_in,
  /* TA_MA::MA_L23_Postprocessing::pos_LRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  outC_MA_L23_Postprocessing_TA_MA *outC);

extern void MA_L23_Postprocessing_reset_TA_MA(
  outC_MA_L23_Postprocessing_TA_MA *outC);

#endif /* _MA_L23_Postprocessing_TA_MA_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MA_L23_Postprocessing_TA_MA.h
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */

