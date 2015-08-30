/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:05:41
*************************************************************$ */
#ifndef _SimTrainPos_H_
#define _SimTrainPos_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  trainPosition_T_TrainPosition_Types_Pck /* SimTrainPos::TrainPos */ TrainPos;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* SimTrainPos::IfBlock1::else */ _2_else_clock_IfBlock1;
  kcg_bool /* SimTrainPos::IfBlock1::else::else */ _1_else_clock_IfBlock1;
  kcg_bool /* SimTrainPos::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  trainPosition_T_TrainPosition_Types_Pck /* SimTrainPos::IfBlock1::then::_L1 */ _L1_IfBlock1;
  trainPosition_T_TrainPosition_Types_Pck /* SimTrainPos::IfBlock1::else::else::then::_L1 */ _L14_IfBlock1;
  kcg_bool /* SimTrainPos::IfBlock1::else::else::else */ else_clock_IfBlock1;
  trainPosition_T_TrainPosition_Types_Pck /* SimTrainPos::IfBlock1::else::else::else::else::_L1 */ _L16_IfBlock1;
  trainPosition_T_TrainPosition_Types_Pck /* SimTrainPos::IfBlock1::else::else::else::then::_L1 */ _L15_IfBlock1;
  trainPosition_T_TrainPosition_Types_Pck /* SimTrainPos::IfBlock1::else::then::_L1 */ _L13_IfBlock1;
  kcg_int /* SimTrainPos::t */ t;
  kcg_int /* SimTrainPos::_L1 */ _L1;
} outC_SimTrainPos;

/* ===========  node initialization and cycle functions  =========== */
/* SimTrainPos */
extern void SimTrainPos(
  /* SimTrainPos::Trigger_in */kcg_int Trigger_in,
  outC_SimTrainPos *outC);

extern void SimTrainPos_reset(outC_SimTrainPos *outC);

#endif /* _SimTrainPos_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SimTrainPos.h
** Generation date: 2015-08-30T07:05:41
*************************************************************$ */

