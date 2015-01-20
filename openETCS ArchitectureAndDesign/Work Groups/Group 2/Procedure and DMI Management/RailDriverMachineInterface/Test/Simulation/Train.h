/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config C:/Users/Valerio/Desktop/DMI Funzionante/2014-09-02 RailDriverMachineInterface/RailDriverMachineInterface/Test/Simulation/config.txt
** Generation date: 2015-01-20T14:34:49
*************************************************************$ */
#ifndef _Train_H_
#define _Train_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* Train::TrainPosition */ TrainPosition;
  kcg_real /* Train::TrainSpeed */ TrainSpeed;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_real /* Train::_L8 */ _L8;
  kcg_real /* Train::_L19 */ _L19;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* Train::IfBlock1 */ IfBlock1_clock;
  /* --------------------- (-debug) assertions  ---------------------- */
  kcg_bool /* pwlinear::LimiterUnSymmetrical::A1 */ A1_2;
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* pwlinear::LimiterUnSymmetrical::_L1 */ _L1_2;
  kcg_real /* pwlinear::LimiterUnSymmetrical::_L11 */ _L11_2;
  kcg_real /* pwlinear::LimiterUnSymmetrical::_L13 */ _L13_2;
  kcg_real /* pwlinear::LimiterUnSymmetrical::_L15 */ _L15_2;
  kcg_bool /* pwlinear::LimiterUnSymmetrical::_L2 */ _L2_2;
  kcg_real /* pwlinear::LimiterUnSymmetrical::_L3 */ _L3_2;
  kcg_real /* pwlinear::LimiterUnSymmetrical::_L9 */ _L9_2;
  kcg_real /* pwlinear::LimiterUnSymmetrical::LUS_Output */ LUS_Output_2;
  kcg_real /* pwlinear::LimiterUnSymmetrical::HighLimit */ HighLimit_2;
  kcg_real /* pwlinear::LimiterUnSymmetrical::LowLimit */ LowLimit_2;
  kcg_real /* pwlinear::LimiterUnSymmetrical::LUS_Input */ LUS_Input_2;
  kcg_real /* Train::IfBlock1::then::_L1 */ _L1_IfBlock1;
  kcg_bool /* Train::IfBlock1::else */ else_clock_IfBlock1;
  kcg_real /* Train::IfBlock1::else::else::_L1 */ _L12_IfBlock1;
  kcg_real /* Train::IfBlock1::else::then::_L1 */ _L11_IfBlock1;
  kcg_real /* Train::SpeedGap */ SpeedGap;
  kcg_real /* Train::Acceleration */ Acceleration;
  kcg_real /* Train::localTrainSpeed */ localTrainSpeed;
  kcg_real /* Train::_L1 */ _L1;
  kcg_bool /* Train::_L3 */ _L3;
  kcg_real /* Train::_L6 */ _L6;
  kcg_real /* Train::_L7 */ _L7;
  kcg_real /* Train::_L12 */ _L12;
  kcg_real /* Train::_L13 */ _L13;
  kcg_real /* Train::_L14 */ _L14;
  kcg_real /* Train::_L15 */ _L15;
  kcg_real /* Train::_L16 */ _L16;
  kcg_real /* Train::_L17 */ _L17;
  kcg_real /* Train::_L18 */ _L18;
  kcg_real /* Train::_L20 */ _L20;
  kcg_real /* Train::_L21 */ _L21;
  kcg_real /* Train::_L22 */ _L22;
  kcg_real /* Train::_L23 */ _L23;
  kcg_real /* Train::_L24 */ _L24;
  kcg_real /* Train::_L25 */ _L25;
  kcg_real /* Train::_L26 */ _L26;
  kcg_real /* Train::_L27 */ _L27;
  kcg_real /* Train::_L30 */ _L30;
} outC_Train;

/* ===========  node initialization and cycle functions  =========== */
/* Train */
extern void Train(
  /* Train::TargetSpeed */ kcg_real TargetSpeed,
  /* Train::Brake */ kcg_real Brake,
  /* Train::ResetPosition */ kcg_bool ResetPosition,
  outC_Train *outC);

extern void Train_reset(outC_Train *outC);
extern void Train_init(outC_Train *outC);

#endif /* _Train_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** Train.h
** Generation date: 2015-01-20T14:34:49
*************************************************************$ */

