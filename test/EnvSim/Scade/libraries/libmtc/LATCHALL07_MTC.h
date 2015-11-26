
#ifndef _LATCHALL07_MTC_H_
#define _LATCHALL07_MTC_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Result_MTC /* MTC::LATCHALL07::Output1 */ Output1;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* -----------------------  latch memories  ------------------------ */
  int mem;
} outC_LATCHALL07_MTC;

/* ===========  node initialization and cycle functions  =========== */
/* MTC::LATCHALL07 */
extern void LATCHALL07_MTC(
  kcg_bool Input1,
  kcg_bool Input2,
  kcg_bool Input3,
  kcg_bool Input4,
  kcg_bool Input5,
  kcg_bool Input6,
  kcg_bool Input7,
  outC_LATCHALL07_MTC *outC);

extern void LATCHALL07_MTC_reset(outC_LATCHALL07_MTC *outC);
extern void LATCHALL07_MTC_init(outC_LATCHALL07_MTC *outC);

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* -----------------------  latch memories  ------------------------ */
  int mem;
} SV_LATCHALL07_MTC;

extern void kcg_save_SV_LATCHALL07_MTC(
  SV_LATCHALL07_MTC *SV,
  outC_LATCHALL07_MTC *outC);
extern void kcg_load_SV_LATCHALL07_MTC(
  outC_LATCHALL07_MTC *outC,
  SV_LATCHALL07_MTC *SV);

#endif /* _LATCHALL07_MTC_H_ */
