/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:57
*************************************************************$ */
#ifndef _combineForLevelChange_xdebugSupport_Pkg_H_
#define _combineForLevelChange_xdebugSupport_Pkg_H_

#include "kcg_types.h"
#include "dataForLevelTransition_xdebugSupport_Pkg.h"
#include "Read_P027V1_Legacy_for_ML_TM_specific.h"
#include "Read_P137_Legacy_TM_specific.h"
#include "Read_P139_Legacy_TM_specific.h"
#include "Read_P015_Legacy_TM_specific.h"
#include "Read_P138_Legacy_TM_specific.h"
#include "Read_P021_Legacy_TM_specific.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg /* xdebugSupport_Pkg::combineForLevelChange::forLevelManagement */ forLevelManagement;
  filterRelatedEvents_T_Common_Types_Pkg /* xdebugSupport_Pkg::combineForLevelChange::outFilterEvents */ outFilterEvents;
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg /* xdebugSupport_Pkg::combineForLevelChange::Data_to_From_Track_Packets_at_ML */ Data_to_From_Track_Packets_at_ML;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  dataCollectionForLevelTransition_T_xdebugSupport_Pkg /* xdebugSupport_Pkg::combineForLevelChange::infoForLevelTransition */ infoForLevelTransition;
  kcg_bool /* xdebugSupport_Pkg::combineForLevelChange::LRBGpositionNeeded */ rem_LRBGpositionNeeded;
  M_LEVEL /* xdebugSupport_Pkg::combineForLevelChange::level */ rem_level;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_combineForLevelChange_xdebugSupport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* xdebugSupport_Pkg::combineForLevelChange */
extern void combineForLevelChange_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::combineForLevelChange::actualMessage */ReceivedMessage_T_Common_Types_Pkg *actualMessage,
  /* xdebugSupport_Pkg::combineForLevelChange::ModeLevel */T_Mode_Level_Level_And_Mode_Types_Pkg *ModeLevel,
  /* xdebugSupport_Pkg::combineForLevelChange::transitionPositionPassed */kcg_bool transitionPositionPassed,
  /* xdebugSupport_Pkg::combineForLevelChange::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* xdebugSupport_Pkg::combineForLevelChange::inFilterEvents */filterRelatedEvents_T_Common_Types_Pkg *inFilterEvents,
  /* xdebugSupport_Pkg::combineForLevelChange::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_combineForLevelChange_xdebugSupport_Pkg *outC);

extern void combineForLevelChange_reset_xdebugSupport_Pkg(
  outC_combineForLevelChange_xdebugSupport_Pkg *outC);

#endif /* _combineForLevelChange_xdebugSupport_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** combineForLevelChange_xdebugSupport_Pkg.h
** Generation date: 2015-11-20T19:46:57
*************************************************************$ */

