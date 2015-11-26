
#ifndef _LATCHALL01_MTC_H_
#define _LATCHALL01_MTC_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Result_MTC /* MTC::LATCHALL01::Output1 */ Output1;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* -----------------------  latch memories  ------------------------ */
  int mem;
} outC_LATCHALL01_MTC;

/* ===========  node initialization and cycle functions  =========== */
/* MTC::LATCHALL01 */
extern void LATCHALL01_MTC(
  kcg_bool Input1,
  outC_LATCHALL01_MTC *outC);

extern void LATCHALL01_MTC_reset(outC_LATCHALL01_MTC *outC);
extern void LATCHALL01_MTC_init(outC_LATCHALL01_MTC *outC);

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* -----------------------  latch memories  ------------------------ */
  int mem;
} SV_LATCHALL01_MTC;

extern void kcg_save_SV_LATCHALL01_MTC(
  SV_LATCHALL01_MTC *SV,
  outC_LATCHALL01_MTC *outC);
extern void kcg_load_SV_LATCHALL01_MTC(
  outC_LATCHALL01_MTC *outC,
  SV_LATCHALL01_MTC *SV);

#endif /* _LATCHALL01_MTC_H_ */
