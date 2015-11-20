/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */
#ifndef _Build_MA_L23_TA_MA_H_
#define _Build_MA_L23_TA_MA_H_

#include "kcg_types.h"
#include "Read_P015_TM.h"
#include "MA_L23_Preprocessing_TA_MA.h"
#include "Get_EOA_TA_MA.h"
#include "Eval_LRBG_TA_Lib_internal.h"
#include "MA_L23_Postprocessing_TA_MA.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_MA::Build_MA_L23::updated */ updated;
  kcg_bool /* TA_MA::Build_MA_L23::available */ available;
  MovementAuthority_t_TrackAtlasTypes /* TA_MA::Build_MA_L23::MA_absolute */ MA_absolute;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_MA::Build_MA_L23::currentEOA */ currentEOA;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  MovementAuthority_t_TrackAtlasTypes /* TA_MA::Build_MA_L23::_L237 */ _L237;
  NID_BG /* TA_MA::Build_MA_L23::_L111 */ rem__L111;
  kcg_bool /* TA_MA::Build_MA_L23::available */ rem_available;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MA_L23_Postprocessing_TA_MA /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Build_MA_L23_TA_MA;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MA::Build_MA_L23 */
extern void Build_MA_L23_TA_MA(
  /* TA_MA::Build_MA_L23::reset */kcg_bool reset,
  /* TA_MA::Build_MA_L23::MessageIn */ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_MA::Build_MA_L23::NV_in */P003V1_OBU_T_TM_baseline2 *NV_in,
  /* TA_MA::Build_MA_L23::train_position */trainPosition_T_TrainPosition_Types_Pck *train_position,
  /* TA_MA::Build_MA_L23::reject_new_MA */kcg_bool reject_new_MA,
  /* TA_MA::Build_MA_L23::updatedEOA_from_EM */kcg_bool updatedEOA_from_EM,
  /* TA_MA::Build_MA_L23::newEOA_from_EM */L_internal_Type_Obu_BasicTypes_Pkg newEOA_from_EM,
  outC_Build_MA_L23_TA_MA *outC);

extern void Build_MA_L23_reset_TA_MA(outC_Build_MA_L23_TA_MA *outC);

#endif /* _Build_MA_L23_TA_MA_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_MA_L23_TA_MA.h
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */

