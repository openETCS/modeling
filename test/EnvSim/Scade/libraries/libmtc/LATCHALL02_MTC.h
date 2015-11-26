
#ifndef _LATCHALL02_MTC_H_
#define _LATCHALL02_MTC_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Result_MTC /* MTC::LATCHALL02::Output1 */ Output1;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* -----------------------  latch memories  ------------------------ */
  int mem;
} outC_LATCHALL02_MTC;

/* ===========  node initialization and cycle functions  =========== */
/* MTC::LATCHALL02 */
extern void LATCHALL02_MTC(
  kcg_bool Input1,
  kcg_bool Input2,
  outC_LATCHALL02_MTC *outC);

extern void LATCHALL02_MTC_reset(outC_LATCHALL02_MTC *outC);
extern void LATCHALL02_MTC_init(outC_LATCHALL02_MTC *outC);

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* -----------------------  latch memories  ------------------------ */
  int mem;
} SV_LATCHALL02_MTC;

extern void kcg_save_SV_LATCHALL02_MTC(
  SV_LATCHALL02_MTC *SV,
  outC_LATCHALL02_MTC *outC);
extern void kcg_load_SV_LATCHALL02_MTC(
  outC_LATCHALL02_MTC *outC,
  SV_LATCHALL02_MTC *SV);

#endif /* _LATCHALL02_MTC_H_ */
