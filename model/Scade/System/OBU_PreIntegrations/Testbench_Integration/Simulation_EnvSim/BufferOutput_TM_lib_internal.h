/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:00
*************************************************************$ */
#ifndef _BufferOutput_TM_lib_internal_H_
#define _BufferOutput_TM_lib_internal_H_

#include "kcg_types.h"
#include "BufferOutput_write_only_TM_lib_internal.h"
#include "BufferOutput_read_write_TM_lib_internal.h"
#include "BufferOutput_read_only_TM_lib_internal.h"
#include "CheckSpace_TM_TrainTrack_Bus.h"

/* =====================  no input structure  ====================== */

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
  /* TM_lib_internal::BufferOutput::In */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *In,
  /* TM_lib_internal::BufferOutput::Write */kcg_bool Write,
  outC_BufferOutput_TM_lib_internal *outC);

extern void BufferOutput_reset_TM_lib_internal(
  outC_BufferOutput_TM_lib_internal *outC);

#endif /* _BufferOutput_TM_lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** BufferOutput_TM_lib_internal.h
** Generation date: 2015-11-20T19:47:00
*************************************************************$ */

