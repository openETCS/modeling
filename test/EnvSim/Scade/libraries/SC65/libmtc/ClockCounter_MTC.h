#ifndef _ClockCounter_MTC_H_
#define _ClockCounter_MTC_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* MTC::ClockCounter::Count */ Count;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ---------------------  clock reset memory  ---------------------- */
  kcg_bool _reset_ClockCounter_MTC;
} outC_ClockCounter_MTC;

/* ===========  node initialization and cycle functions  =========== */
/* MTC::ClockCounter */
extern void ClockCounter_MTC(kcg_bool Reset, outC_ClockCounter_MTC *outC);

extern void ClockCounter_MTC_reset(outC_ClockCounter_MTC *outC);
extern void ClockCounter_MTC_init(outC_ClockCounter_MTC *outC);

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ---------------------  clock reset memory  ---------------------- */
  kcg_bool _reset_ClockCounter_MTC;
} SV_ClockCounter_MTC;

extern void kcg_save_SV_ClockCounter_MTC(
  SV_ClockCounter_MTC *SV,
  outC_ClockCounter_MTC *outC);
extern void kcg_load_SV_ClockCounter_MTC(
  outC_ClockCounter_MTC *outC,
  SV_ClockCounter_MTC *SV);

#endif /* _ClockCounter_MTC_H_ */

