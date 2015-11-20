/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exception12RejectIfTextMessageAckPending_InformationFilter_Pkg_FirstFilter.h"

/* InformationFilter_Pkg::FirstFilter::Exception12RejectIfTextMessageAckPending */
void Exception12RejectIfTextMessageAckPending_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::Exception12RejectIfTextMessageAckPending::inCurrentTextMessageId */kcg_int inCurrentTextMessageId,
  /* InformationFilter_Pkg::FirstFilter::Exception12RejectIfTextMessageAckPending::inLastAckTextMessageId */kcg_int inLastAckTextMessageId,
  /* InformationFilter_Pkg::FirstFilter::Exception12RejectIfTextMessageAckPending::outAcceptMessage */kcg_bool *outAcceptMessage,
  /* InformationFilter_Pkg::FirstFilter::Exception12RejectIfTextMessageAckPending::outStoreInTransitionBuffer */kcg_bool *outStoreInTransitionBuffer)
{
  *outStoreInTransitionBuffer = kcg_false;
  *outAcceptMessage = inLastAckTextMessageId == inCurrentTextMessageId;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Exception12RejectIfTextMessageAckPending_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

