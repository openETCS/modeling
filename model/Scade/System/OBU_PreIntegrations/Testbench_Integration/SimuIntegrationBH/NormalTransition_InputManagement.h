/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _NormalTransition_InputManagement_H_
#define _NormalTransition_InputManagement_H_

#include "kcg_types.h"
#include "LevelTR2Level_InputManagement.h"
#include "scaledDistance_2_distance_InputManagement.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* InputManagement::NormalTransition */
extern void NormalTransition_InputManagement(
  /* InputManagement::NormalTransition::LRBG */ NID_LRBG LRBG,
  /* InputManagement::NormalTransition::referenceLocation */ L_internal_Type_Obu_BasicTypes_Pkg referenceLocation,
  /* InputManagement::NormalTransition::P41_OneIter */ P41_LevelTransitionOrder_T_Packet_Types_Pkg *P41_OneIter,
  /* InputManagement::NormalTransition::One_Iter */ T_LevelTransition_Level_And_Mode_Types_Pkg *One_Iter);

#endif /* _NormalTransition_InputManagement_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** NormalTransition_InputManagement.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

