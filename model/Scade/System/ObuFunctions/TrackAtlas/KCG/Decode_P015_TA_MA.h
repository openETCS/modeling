/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */
#ifndef _Decode_P015_TA_MA_H_
#define _Decode_P015_TA_MA_H_

#include "kcg_types.h"
#include "EVAL_T_LOA_TA_Lib_internal.h"
#include "EVAL_Q_DANGERPOINT_TA_Lib_internal.h"
#include "EVAL_V_Release_TA_Lib_internal.h"
#include "EVAL_Q_OVERLAP_TA_Lib_internal.h"
#include "Eval_Q_SCALE_TA_MRSP.h"

/* =====================  no input structure  ====================== */


/* TA_MA::Decode_P015 */
extern void Decode_P015_TA_MA(
  /* TA_MA::Decode_P015::MA_onboard_in */P015_OBU_T_TM *MA_onboard_in,
  /* TA_MA::Decode_P015::NV_in */P003V1_OBU_T_TM_baseline2 *NV_in,
  /* TA_MA::Decode_P015::MA_decoded_out */MovementAuthority_t_TrackAtlasTypes *MA_decoded_out);

#endif /* _Decode_P015_TA_MA_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Decode_P015_TA_MA.h
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

