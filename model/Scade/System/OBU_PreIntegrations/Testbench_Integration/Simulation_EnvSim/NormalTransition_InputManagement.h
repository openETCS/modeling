/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */
#ifndef _NormalTransition_InputManagement_H_
#define _NormalTransition_InputManagement_H_

#include "kcg_types.h"
#include "LevelTR2Level_InputManagement.h"
#include "scaledDistance_2_distance_InputManagement.h"

/* =====================  no input structure  ====================== */


/* InputManagement::NormalTransition */
extern void NormalTransition_InputManagement(
  /* InputManagement::NormalTransition::LRBG */NID_LRBG LRBG,
  /* InputManagement::NormalTransition::referenceLocation */L_internal_Type_Obu_BasicTypes_Pkg referenceLocation,
  /* InputManagement::NormalTransition::P41_OneIter */P41_LevelTransitionOrder_T_Packet_Types_Pkg *P41_OneIter,
  /* InputManagement::NormalTransition::One_Iter */T_LevelTransition_Level_And_Mode_Types_Pkg *One_Iter);

#endif /* _NormalTransition_InputManagement_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** NormalTransition_InputManagement.h
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */

