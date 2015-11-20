/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:57
*************************************************************$ */
#ifndef _BufferMsg_TM_lib_internal_H_
#define _BufferMsg_TM_lib_internal_H_

#include "kcg_types.h"
#include "BufferMsg_write_only_TM_lib_internal.h"
#include "BufferMsg_read_write_TM_lib_internal.h"
#include "BufferMsg_read_only_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrack_Message_T_TM_radio_messages /* TM_lib_internal::BufferMsg::Out */ Out;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  M_TrainTrackMessage_buffer_t_TM_lib_internal /* TM_lib_internal::BufferMsg::buffer */ buffer;
  kcg_int /* TM_lib_internal::BufferMsg::stacksize */ stacksize;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_BufferMsg_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::BufferMsg */
extern void BufferMsg_TM_lib_internal(
  /* TM_lib_internal::BufferMsg::In */M_TrainTrack_Message_T_TM_radio_messages *In,
  /* TM_lib_internal::BufferMsg::Write */kcg_bool Write,
  outC_BufferMsg_TM_lib_internal *outC);

extern void BufferMsg_reset_TM_lib_internal(
  outC_BufferMsg_TM_lib_internal *outC);

#endif /* _BufferMsg_TM_lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** BufferMsg_TM_lib_internal.h
** Generation date: 2015-11-20T19:46:57
*************************************************************$ */

