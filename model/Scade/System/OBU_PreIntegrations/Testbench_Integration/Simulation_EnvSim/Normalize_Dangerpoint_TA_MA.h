/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */
#ifndef _Normalize_Dangerpoint_TA_MA_H_
#define _Normalize_Dangerpoint_TA_MA_H_

#include "kcg_types.h"
#include "EVAL_V_Release_TA_Lib_internal.h"
#include "EVAL_Q_DANGERPOINT_TA_Lib_internal.h"
#include "Eval_Q_SCALE_TA_MRSP.h"

/* =====================  no input structure  ====================== */


/* TA_MA::Normalize_Dangerpoint */
extern void Normalize_Dangerpoint_TA_MA(
  /* TA_MA::Normalize_Dangerpoint::d_endsection */L_internal_Type_Obu_BasicTypes_Pkg d_endsection,
  /* TA_MA::Normalize_Dangerpoint::Packet15_in */P015_OBU_T_TM *Packet15_in,
  /* TA_MA::Normalize_Dangerpoint::NV_in */P003V1_OBU_T_TM_baseline2 *NV_in,
  /* TA_MA::Normalize_Dangerpoint::q_dangerpoint */kcg_bool *q_dangerpoint,
  /* TA_MA::Normalize_Dangerpoint::dangerpoint */DP_or_OL_t_TrackAtlasTypes *dangerpoint);

#endif /* _Normalize_Dangerpoint_TA_MA_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Normalize_Dangerpoint_TA_MA.h
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */

