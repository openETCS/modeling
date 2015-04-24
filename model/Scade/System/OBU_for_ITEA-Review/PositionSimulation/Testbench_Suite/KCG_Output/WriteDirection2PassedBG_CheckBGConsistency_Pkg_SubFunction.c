/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG */
void WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG::isNominal */ kcg_bool isNominal,
  /* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG::passedBG_in */ ReceivedMessage_T_Common_Types_Pkg *passedBG_in,
  /* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG::passedBG_out */ ReceivedMessage_T_Common_Types_Pkg *passedBG_out)
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

/* $************* KCG Version 6.4 beta5 (build i13) *************
** WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

