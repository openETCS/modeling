/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _BufferOutput_TM_lib_internal_H_
#define _BufferOutput_TM_lib_internal_H_

#include "kcg_types.h"
#include "BufferOutput_write_only_TM_lib_internal.h"
#include "BufferOutput_read_write_TM_lib_internal.h"
#include "BufferOutput_read_only_TM_lib_internal.h"
#include "CheckSpace_TM_TrainTrack_Bus.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrack_Message_T_TM_radio_messages /* TM_lib_internal::BufferOutput::Out */ Out;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  M_TrainTrackRadioOutputBuffer_t_TM_lib_internal /* TM_lib_internal::BufferOutput::buffer */ buffer;
  kcg_int /* TM_lib_internal::BufferOutput::stacksize */ stacksize;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_BufferOutput_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::BufferOutput */
extern void BufferOutput_TM_lib_internal(
  /* TM_lib_internal::BufferOutput::In */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *In,
  /* TM_lib_internal::BufferOutput::Write */ kcg_bool Write,
  outC_BufferOutput_TM_lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void BufferOutput_reset_TM_lib_internal(
  outC_BufferOutput_TM_lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void BufferOutput_init_TM_lib_internal(
  outC_BufferOutput_TM_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _BufferOutput_TM_lib_internal_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** BufferOutput_TM_lib_internal.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

