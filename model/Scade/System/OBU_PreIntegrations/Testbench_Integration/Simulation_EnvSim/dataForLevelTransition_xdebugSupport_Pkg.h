/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:57
*************************************************************$ */
#ifndef _dataForLevelTransition_xdebugSupport_Pkg_H_
#define _dataForLevelTransition_xdebugSupport_Pkg_H_

#include "kcg_types.h"
#include "Read_P015_TM.h"
#include "Read_P021_TM.h"
#include "locationOfReferenceLRBG_xdebugSupport_Pkg.h"
#include "packetValid_xdebugSupport_Pkg.h"
#include "checkNTCPriority_xdebugSupport_Pkg.h"
#include "getLRBGFromMsg_xdebugSupport_Pkg.h"
#include "getP41Level_xdebugSupport_Pkg.h"
#include "Read_P046_Legacy_TM_specific.h"
#include "Read_P041_Legacy_TM_specific.h"
#include "Read_P027V1_Legacy_for_ML_TM_specific.h"

/* =====================  no input structure  ====================== */


/* xdebugSupport_Pkg::dataForLevelTransition */
extern void dataForLevelTransition_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::dataForLevelTransition::actualMessage */ReceivedMessage_T_Common_Types_Pkg *actualMessage,
  /* xdebugSupport_Pkg::dataForLevelTransition::storedData */dataCollectionForLevelTransition_T_xdebugSupport_Pkg *storedData,
  /* xdebugSupport_Pkg::dataForLevelTransition::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* xdebugSupport_Pkg::dataForLevelTransition::positionNeeded */kcg_bool positionNeeded,
  /* xdebugSupport_Pkg::dataForLevelTransition::actualLevel */M_LEVEL actualLevel,
  /* xdebugSupport_Pkg::dataForLevelTransition::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* xdebugSupport_Pkg::dataForLevelTransition::outstoredData */dataCollectionForLevelTransition_T_xdebugSupport_Pkg *outstoredData,
  /* xdebugSupport_Pkg::dataForLevelTransition::outPositionNeeded */kcg_bool *outPositionNeeded);

#endif /* _dataForLevelTransition_xdebugSupport_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** dataForLevelTransition_xdebugSupport_Pkg.h
** Generation date: 2015-11-20T19:46:57
*************************************************************$ */

