
#ifndef _LATCHALL06_MTC_H_
#define _LATCHALL06_MTC_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Result_MTC /* MTC::LATCHALL06::Output1 */ Output1;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* -----------------------  latch memories  ------------------------ */
  int mem;
} outC_LATCHALL06_MTC;

/* ===========  node initialization and cycle functions  =========== */
/* MTC::LATCHALL06 */
extern void LATCHALL06_MTC(
  kcg_bool Input1,
  kcg_bool Input2,
  kcg_bool Input3,
  kcg_bool Input4,
  kcg_bool Input5,
  kcg_bool Input6,
  outC_LATCHALL06_MTC *outC);

extern void LATCHALL06_MTC_reset(outC_LATCHALL06_MTC *outC);
extern void LATCHALL06_MTC_init(outC_LATCHALL06_MTC *outC);

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* -----------------------  latch memories  ------------------------ */
  int mem;
} SV_LATCHALL06_MTC;

extern void kcg_save_SV_LATCHALL06_MTC(
  SV_LATCHALL06_MTC *SV,
  outC_LATCHALL06_MTC *outC);
extern void kcg_load_SV_LATCHALL06_MTC(
  outC_LATCHALL06_MTC *outC,
  SV_LATCHALL06_MTC *SV);

#endif /* _LATCHALL06_MTC_H_ */
