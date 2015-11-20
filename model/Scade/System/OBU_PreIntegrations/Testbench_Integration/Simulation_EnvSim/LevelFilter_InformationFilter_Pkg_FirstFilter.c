/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LevelFilter_InformationFilter_Pkg_FirstFilter.h"

/* InformationFilter_Pkg::FirstFilter::LevelFilter */
void LevelFilter_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inPendingL1Transition */kcg_bool inPendingL1Transition,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inPendingL2L3Transition */kcg_bool inPendingL2L3Transition,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inPendingAckOfTrainData */kcg_bool inPendingAckOfTrainData,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inEmergencyStopAccepted */kcg_bool inEmergencyStopAccepted,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inLastAckTextMessageId */kcg_int inLastAckTextMessageId,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inPendingNTCTransition */kcg_bool inPendingNTCTransition,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inSPPAndGradientOnBoard */kcg_bool inSPPAndGradientOnBoard,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inMACoverNotFullLength */kcg_bool inMACoverNotFullLength,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inLevel */M_LEVEL inLevel,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inPacketOrigin */MsgSource_T_Common_Types_Pkg inPacketOrigin,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inPacketId */kcg_int inPacketId,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::outStoreInTransitionBuffer */kcg_bool *outStoreInTransitionBuffer,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::outPacketAccept */kcg_bool *outPacketAccept)
{
  static LevelDecisionTableActionKind_DataDictionary_Pkg tmp;
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::row */
  static kcg_int row;
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::column */
  static kcg_int column;
  
  column = /* 1 */ MapLevelToColumn_InformationFilter_Pkg(inLevel);
  row = /* 1 */ MapPacketIdToRow_InformationFilter_Pkg(inPacketId);
  if (inPacketOrigin == msrc_Euroradio_Common_Types_Pkg) {
    if ((0 <= row) & (row < 256) & ((0 <= column) & (column < 5))) {
      tmp = LevelDecisionTableFromRBC_DataDictionary_Pkg[row][column];
    }
    else {
      tmp = LD_Invalid_DataDictionary_Pkg;
    }
  }
  else if ((0 <= row) & (row < 256) & ((0 <= column) & (column < 5))) {
    tmp = LevelDecisionTableFromBalise_DataDictionary_Pkg[row][column];
  }
  else {
    tmp = LD_Invalid_DataDictionary_Pkg;
  }
  /* 1 */
  CheckLevelExceptions_InformationFilter_Pkg_FirstFilter(
    tmp,
    inPendingL1Transition,
    inPendingL2L3Transition,
    inPendingAckOfTrainData,
    inEmergencyStopAccepted,
    inLastAckTextMessageId,
    inPendingNTCTransition,
    inSPPAndGradientOnBoard,
    inMACoverNotFullLength,
    outPacketAccept,
    outStoreInTransitionBuffer);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** LevelFilter_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

