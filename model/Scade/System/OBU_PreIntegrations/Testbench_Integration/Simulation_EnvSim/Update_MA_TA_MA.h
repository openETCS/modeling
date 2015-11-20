/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */
#ifndef _Update_MA_TA_MA_H_
#define _Update_MA_TA_MA_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MovementAuthority_t_TrackAtlasTypes /* TA_MA::Update_MA::MA_in_force */ MA_in_force;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_Update_MA_TA_MA;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MA::Update_MA */
extern void Update_MA_TA_MA(
  /* TA_MA::Update_MA::ProfileIn */MovementAuthority_t_TrackAtlasTypes *ProfileIn,
  outC_Update_MA_TA_MA *outC);

extern void Update_MA_reset_TA_MA(outC_Update_MA_TA_MA *outC);

#endif /* _Update_MA_TA_MA_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Update_MA_TA_MA.h
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */

