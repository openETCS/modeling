
#ifndef _LATCHALL03_MTC_H_
#define _LATCHALL03_MTC_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Result_MTC /* MTC::LATCHALL03::Output1 */ Output1;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* -----------------------  latch memories  ------------------------ */
  int mem;
} outC_LATCHALL03_MTC;

/* ===========  node initialization and cycle functions  =========== */
/* MTC::LATCHALL03 */
extern void LATCHALL03_MTC(
  kcg_bool Input1,
  kcg_bool Input2,
  kcg_bool Input3,
  outC_LATCHALL03_MTC *outC);

extern void LATCHALL03_MTC_reset(outC_LATCHALL03_MTC *outC);
extern void LATCHALL03_MTC_init(outC_LATCHALL03_MTC *outC);

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* -----------------------  latch memories  ------------------------ */
  int mem;
} SV_LATCHALL03_MTC;

extern void kcg_save_SV_LATCHALL03_MTC(
  SV_LATCHALL03_MTC *SV,
  outC_LATCHALL03_MTC *outC);
extern void kcg_load_SV_LATCHALL03_MTC(
  outC_LATCHALL03_MTC *outC,
  SV_LATCHALL03_MTC *SV);

#endif /* _LATCHALL03_MTC_H_ */
