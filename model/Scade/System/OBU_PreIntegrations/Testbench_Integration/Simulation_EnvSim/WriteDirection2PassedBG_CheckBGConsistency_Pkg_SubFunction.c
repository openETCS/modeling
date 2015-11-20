/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG */
void WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG::isNominal */kcg_bool isNominal,
  /* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG::passedBG_in */ReceivedMessage_T_Common_Types_Pkg *passedBG_in,
  /* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG::passedBG_out */ReceivedMessage_T_Common_Types_Pkg *passedBG_out)
{
  if (isNominal) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(passedBG_out, passedBG_in);
    (*passedBG_out).BG_Common_Header.trainOrientationToBG =
      cQDirLrbgNominal_CheckBGConsistency_Pkg;
    (*passedBG_out).BG_Common_Header.trainRunningDirectionToBG =
      cQqDirTrainNominal_CheckBGConsistency_Pkg;
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(passedBG_out, passedBG_in);
    (*passedBG_out).BG_Common_Header.trainOrientationToBG =
      cQDirLrbgRevers_CheckBGConsistency_Pkg;
    (*passedBG_out).BG_Common_Header.trainRunningDirectionToBG =
      cQqDirTrainRevers_CheckBGConsistency_Pkg;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

