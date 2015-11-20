/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "probe_RadioOutput_RadioSupport_Pkg.h"

/* RadioSupport_Pkg::probe_RadioOutput */
void probe_RadioOutput_RadioSupport_Pkg(
  /* RadioSupport_Pkg::probe_RadioOutput::MessageBus */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* RadioSupport_Pkg::probe_RadioOutput::msg1 */NID_MESSAGE *msg1,
  /* RadioSupport_Pkg::probe_RadioOutput::msg2 */NID_MESSAGE *msg2,
  /* RadioSupport_Pkg::probe_RadioOutput::msg3 */NID_MESSAGE *msg3,
  /* RadioSupport_Pkg::probe_RadioOutput::msg4 */NID_MESSAGE *msg4,
  /* RadioSupport_Pkg::probe_RadioOutput::msg5 */NID_MESSAGE *msg5)
{
  *msg5 = (*MessageBus)[4].Message.nid_message;
  *msg4 = (*MessageBus)[3].Message.nid_message;
  *msg3 = (*MessageBus)[2].Message.nid_message;
  *msg2 = (*MessageBus)[1].Message.nid_message;
  *msg1 = (*MessageBus)[0].Message.nid_message;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** probe_RadioOutput_RadioSupport_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

