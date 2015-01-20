/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config C:/Users/Valerio/Desktop/DMI Funzionante/2014-09-02 RailDriverMachineInterface/RailDriverMachineInterface/Test/Simulation/config.txt
** Generation date: 2015-01-20T14:34:49
*************************************************************$ */
#ifndef _SpeedToDigit_H_
#define _SpeedToDigit_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* SpeedToDigit::SpeedDigitOne */ SpeedDigitOne;
  kcg_real /* SpeedToDigit::SpeedDigitTwo */ SpeedDigitTwo;
  kcg_real /* SpeedToDigit::SpeedDigitThree */ SpeedDigitThree;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_real /* SpeedToDigit::_L1 */ _L1;
  kcg_int /* SpeedToDigit::_L2 */ _L2;
  kcg_int /* SpeedToDigit::_L3 */ _L3;
  kcg_real /* SpeedToDigit::_L4 */ _L4;
  kcg_int /* SpeedToDigit::_L5 */ _L5;
  kcg_real /* SpeedToDigit::_L6 */ _L6;
  kcg_real /* SpeedToDigit::_L7 */ _L7;
  kcg_int /* SpeedToDigit::_L9 */ _L9;
  kcg_int /* SpeedToDigit::_L8 */ _L8;
  kcg_int /* SpeedToDigit::_L12 */ _L12;
  kcg_int /* SpeedToDigit::_L13 */ _L13;
  kcg_int /* SpeedToDigit::_L14 */ _L14;
  kcg_int /* SpeedToDigit::_L15 */ _L15;
  kcg_int /* SpeedToDigit::_L16 */ _L16;
  kcg_int /* SpeedToDigit::_L17 */ _L17;
} outC_SpeedToDigit;

/* ===========  node initialization and cycle functions  =========== */
/* SpeedToDigit */
extern void SpeedToDigit(
  /* SpeedToDigit::TrainSpeed */ kcg_real TrainSpeed,
  outC_SpeedToDigit *outC);

extern void SpeedToDigit_reset(outC_SpeedToDigit *outC);
extern void SpeedToDigit_init(outC_SpeedToDigit *outC);

#endif /* _SpeedToDigit_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** SpeedToDigit.h
** Generation date: 2015-01-20T14:34:49
*************************************************************$ */

