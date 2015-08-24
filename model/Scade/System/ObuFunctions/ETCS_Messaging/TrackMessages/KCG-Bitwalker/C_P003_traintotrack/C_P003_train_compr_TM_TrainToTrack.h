/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/KCG-Bitwalker/C_P003_traintotrack\kcg_s2c_config.txt
** Generation date: 2015-08-21T16:43:59
*************************************************************$ */
#ifndef _C_P003_train_compr_TM_TrainToTrack_H_
#define _C_P003_train_compr_TM_TrainToTrack_H_

#include "kcg_types.h"
#include "EncodeMeta_TM_TrainToTrack.h"
#include "CAST_NID_PACKET_to_int_TM_conversions.h"
#include "CAST_L_PACKET_to_int_TM_conversions.h"
#include "CAST_N_ITER_to_int_TM_conversions.h"
#include "C_P003_flatten_sections_TM_TrainToTrack_lib_internal.h"

/* ========================  input structure  ====================== */
typedef struct {
  P003_TM_TrainToTrack /* TM_TrainToTrack::C_P003_train_compr::P001_in */ P001_in;
} inC_C_P003_train_compr_TM_TrainToTrack;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TrainToTrack_meta_TM_TrainToTrack /* TM_TrainToTrack::C_P003_train_compr::meta */ meta;
  TrainToTrackPacket_int_T_TM_TrainToTrack /* TM_TrainToTrack::C_P003_train_compr::P000_int */ P000_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_C_P003_train_compr_TM_TrainToTrack;

/* ===========  node initialization and cycle functions  =========== */
/* TM_TrainToTrack::C_P003_train_compr */
extern void C_P003_train_compr_TM_TrainToTrack(
  inC_C_P003_train_compr_TM_TrainToTrack *inC,
  outC_C_P003_train_compr_TM_TrainToTrack *outC);

extern void C_P003_train_compr_reset_TM_TrainToTrack(
  outC_C_P003_train_compr_TM_TrainToTrack *outC);

#endif /* _C_P003_train_compr_TM_TrainToTrack_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P003_train_compr_TM_TrainToTrack.h
** Generation date: 2015-08-21T16:43:59
*************************************************************$ */

