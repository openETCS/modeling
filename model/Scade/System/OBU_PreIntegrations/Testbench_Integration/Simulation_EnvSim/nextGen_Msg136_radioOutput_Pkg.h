/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:57
*************************************************************$ */
#ifndef _nextGen_Msg136_radioOutput_Pkg_H_
#define _nextGen_Msg136_radioOutput_Pkg_H_

#include "kcg_types.h"
#include "nextGen_MsgHdr136_radioOutput_Pkg.h"
#include "nextGen_P00_radioOutput_Pkg.h"
#include "nextGen_P01_radioOutput_Pkg.h"
#include "nextGen_P04_radioOutput_Pkg.h"
#include "nextGen_P05_radioOutput_Pkg.h"
#include "Send_M136_TM_radio_messages.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* radioOutput_Pkg::nextGen_Msg136::MessageBus_out */ MessageBus_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Send_M136_TM_radio_messages /* 2 */ Context_2;
  /* ----------------- no clocks of observable data ------------------ */
} outC_nextGen_Msg136_radioOutput_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* radioOutput_Pkg::nextGen_Msg136 */
extern void nextGen_Msg136_radioOutput_Pkg(
  /* radioOutput_Pkg::nextGen_Msg136::MessageBus */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* radioOutput_Pkg::nextGen_Msg136::inFromPositionReport */Radio_TrainTrack_Message_T_Radio_Types_Pkg *inFromPositionReport,
  /* radioOutput_Pkg::nextGen_Msg136::inVersion */M_VERSION inVersion,
  /* radioOutput_Pkg::nextGen_Msg136::inT_TRAIN */T_TRAIN inT_TRAIN,
  outC_nextGen_Msg136_radioOutput_Pkg *outC);

extern void nextGen_Msg136_reset_radioOutput_Pkg(
  outC_nextGen_Msg136_radioOutput_Pkg *outC);

#endif /* _nextGen_Msg136_radioOutput_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** nextGen_Msg136_radioOutput_Pkg.h
** Generation date: 2015-11-20T19:46:57
*************************************************************$ */

