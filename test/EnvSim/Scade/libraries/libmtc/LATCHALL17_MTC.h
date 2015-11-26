
#ifndef _LATCHALL17_MTC_H_
#define _LATCHALL17_MTC_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Result_MTC /* MTC::LATCHALL17::Output1 */ Output1;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* -----------------------  latch memories  ------------------------ */
  int mem;
} outC_LATCHALL17_MTC;

/* ===========  node initialization and cycle functions  =========== */
/* MTC::LATCHALL17 */
extern void LATCHALL17_MTC(
  kcg_bool Input1,
  kcg_bool Input2,
  kcg_bool Input3,
  kcg_bool Input4,
  kcg_bool Input5,
  kcg_bool Input6,
  kcg_bool Input7,
  kcg_bool Input8,
  kcg_bool Input9,
  kcg_bool Input10,
  kcg_bool Input11,
  kcg_bool Input12,
  kcg_bool Input13,
  kcg_bool Input14,
  kcg_bool Input15,
  kcg_bool Input16,
  kcg_bool Input17,
  outC_LATCHALL17_MTC *outC);

extern void LATCHALL17_MTC_reset(outC_LATCHALL17_MTC *outC);
extern void LATCHALL17_MTC_init(outC_LATCHALL17_MTC *outC);

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* -----------------------  latch memories  ------------------------ */
  int mem;
} SV_LATCHALL17_MTC;

extern void kcg_save_SV_LATCHALL17_MTC(
  SV_LATCHALL17_MTC *SV,
  outC_LATCHALL17_MTC *outC);
extern void kcg_load_SV_LATCHALL17_MTC(
  outC_LATCHALL17_MTC *outC,
  SV_LATCHALL17_MTC *SV);

#endif /* _LATCHALL17_MTC_H_ */
