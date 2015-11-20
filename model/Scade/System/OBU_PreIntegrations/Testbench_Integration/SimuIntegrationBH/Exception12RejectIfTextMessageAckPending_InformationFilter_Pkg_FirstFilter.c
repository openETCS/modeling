/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exception12RejectIfTextMessageAckPending_InformationFilter_Pkg_FirstFilter.h"

/* InformationFilter_Pkg::FirstFilter::Exception12RejectIfTextMessageAckPending */
void Exception12RejectIfTextMessageAckPending_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::Exception12RejectIfTextMessageAckPending::inCurrentTextMessageId */ kcg_int inCurrentTextMessageId,
  /* InformationFilter_Pkg::FirstFilter::Exception12RejectIfTextMessageAckPending::inLastAckTextMessageId */ kcg_int inLastAckTextMessageId,
  /* InformationFilter_Pkg::FirstFilter::Exception12RejectIfTextMessageAckPending::outAcceptMessage */ kcg_bool *outAcceptMessage,
  /* InformationFilter_Pkg::FirstFilter::Exception12RejectIfTextMessageAckPending::outStoreInTransitionBuffer */ kcg_bool *outStoreInTransitionBuffer)
{
  /* InformationFilter_Pkg::FirstFilter::Exception12RejectIfTextMessageAckPending::_L2 */
  static kcg_bool _L2;
  /* InformationFilter_Pkg::FirstFilter::Exception12RejectIfTextMessageAckPending::_L3 */
  static kcg_int _L3;
  /* InformationFilter_Pkg::FirstFilter::Exception12RejectIfTextMessageAckPending::_L4 */
  static kcg_bool _L4;
  /* InformationFilter_Pkg::FirstFilter::Exception12RejectIfTextMessageAckPending::_L5 */
  static kcg_int _L5;
  
  _L5 = inLastAckTextMessageId;
  _L3 = inCurrentTextMessageId;
  _L4 = _L5 == _L3;
  *outAcceptMessage = _L4;
  _L2 = kcg_false;
  *outStoreInTransitionBuffer = _L2;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Exception12RejectIfTextMessageAckPending_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

