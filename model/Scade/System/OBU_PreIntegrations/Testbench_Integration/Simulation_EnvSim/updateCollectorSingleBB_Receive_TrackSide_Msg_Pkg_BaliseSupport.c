/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB */
void updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB::inSingleBadBalise */kcg_bool inSingleBadBalise,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB::inCollector */BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB::outCollector */BGCollector_T_Receive_TrackSide_Msg_Pkg *outCollector)
{
  (*outCollector).BGMessageSent = (*inCollector).BGMessageSent;
  (*outCollector).C_ID = (*inCollector).C_ID;
  (*outCollector).BG_ID = (*inCollector).BG_ID;
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &(*outCollector).balisePosition,
    &(*inCollector).balisePosition);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &(*outCollector).positionFirstContact,
    &(*inCollector).positionFirstContact);
  (*outCollector).collectedTelegrams = (*inCollector).collectedTelegrams;
  (*outCollector).totalTelegrams = (*inCollector).totalTelegrams;
  if (inSingleBadBalise) {
    (*outCollector).badBaliseFlag = kcg_false;
  }
  else {
    (*outCollector).badBaliseFlag = (*inCollector).badBaliseFlag;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

