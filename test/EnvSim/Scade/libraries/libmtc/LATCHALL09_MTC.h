
#ifndef _LATCHALL09_MTC_H_
#define _LATCHALL09_MTC_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Result_MTC /* MTC::LATCHALL09::Output1 */ Output1;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* -----------------------  latch memories  ------------------------ */
  int mem;
} outC_LATCHALL09_MTC;

/* ===========  node initialization and cycle functions  =========== */
/* MTC::LATCHALL09 */
extern void LATCHALL09_MTC(
  kcg_bool Input1,
  kcg_bool Input2,
  kcg_bool Input3,
  kcg_bool Input4,
  kcg_bool Input5,
  kcg_bool Input6,
  kcg_bool Input7,
  kcg_bool Input8,
  kcg_bool Input9,
  outC_LATCHALL09_MTC *outC);

extern void LATCHALL09_MTC_reset(outC_LATCHALL09_MTC *outC);
extern void LATCHALL09_MTC_init(outC_LATCHALL09_MTC *outC);

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* -----------------------  latch memories  ------------------------ */
  int mem;
} SV_LATCHALL09_MTC;

extern void kcg_save_SV_LATCHALL09_MTC(
  SV_LATCHALL09_MTC *SV,
  outC_LATCHALL09_MTC *outC);
extern void kcg_load_SV_LATCHALL09_MTC(
  outC_LATCHALL09_MTC *outC,
  SV_LATCHALL09_MTC *SV);

#endif /* _LATCHALL09_MTC_H_ */
