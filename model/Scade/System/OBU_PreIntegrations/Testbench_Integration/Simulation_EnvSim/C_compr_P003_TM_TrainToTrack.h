/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:03
*************************************************************$ */
#ifndef _C_compr_P003_TM_TrainToTrack_H_
#define _C_compr_P003_TM_TrainToTrack_H_

#include "kcg_types.h"
#include "CAST_NID_PACKET_to_int_TM_conversions.h"
#include "CAST_L_PACKET_to_int_TM_conversions.h"
#include "CAST_N_ITER_to_int_TM_conversions.h"
#include "Decode_NID_PACKET_TM_TrainToTrack.h"
#include "Filter_Variable_TM_TrainToTrack.h"
#include "C_P003_flatten_sections_TM_TrainToTrack_lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P003_TM_TrainToTrack /* TM_TrainToTrack::C_compr_P003::P003_out */ P003_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  P003_nid_radio_list_int_t_TM_TrainToTrack /* TM_TrainToTrack::C_compr_P003::_L89 */ _L89;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_C_compr_P003_TM_TrainToTrack;

/* ===========  node initialization and cycle functions  =========== */
/* TM_TrainToTrack::C_compr_P003 */
extern void C_compr_P003_TM_TrainToTrack(
  /* TM_TrainToTrack::C_compr_P003::P003_int */P003_TrainTrack_int_TM_TrainToTrack *P003_int,
  outC_C_compr_P003_TM_TrainToTrack *outC);

extern void C_compr_P003_reset_TM_TrainToTrack(
  outC_C_compr_P003_TM_TrainToTrack *outC);

#endif /* _C_compr_P003_TM_TrainToTrack_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_compr_P003_TM_TrainToTrack.h
** Generation date: 2015-11-20T19:47:03
*************************************************************$ */

