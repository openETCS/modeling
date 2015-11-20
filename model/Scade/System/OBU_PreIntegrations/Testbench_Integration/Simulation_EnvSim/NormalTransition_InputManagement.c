/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NormalTransition_InputManagement.h"

/* InputManagement::NormalTransition */
void NormalTransition_InputManagement(
  /* InputManagement::NormalTransition::LRBG */NID_LRBG LRBG,
  /* InputManagement::NormalTransition::referenceLocation */L_internal_Type_Obu_BasicTypes_Pkg referenceLocation,
  /* InputManagement::NormalTransition::P41_OneIter */P41_LevelTransitionOrder_T_Packet_Types_Pkg *P41_OneIter,
  /* InputManagement::NormalTransition::One_Iter */T_LevelTransition_Level_And_Mode_Types_Pkg *One_Iter)
{
  (*One_Iter).is_set = (*P41_OneIter).valid;
  (*One_Iter).LRBG = LRBG;
  (*One_Iter).referenceLocation = referenceLocation;
  (*One_Iter).transition.level = /* 1 */
    LevelTR2Level_InputManagement((*P41_OneIter).m_leveltr);
  (*One_Iter).transition.position = /* 1 */
    scaledDistance_2_distance_InputManagement(
      (*P41_OneIter).q_scale,
      (*P41_OneIter).d_leveltr) + referenceLocation;
  (*One_Iter).transition.transitionType =
    M_TransitionType_Normal_Level_And_Mode_Types_Pkg;
  (*One_Iter).transition.immediateAck = (*P41_OneIter).valid &
    (cImmediateAck_Distance_InputManagement == (*P41_OneIter).d_leveltr);
  (*One_Iter).transition.AckLength = /* 2 */
    scaledDistance_2_distance_InputManagement(
      (*P41_OneIter).q_scale,
      (*P41_OneIter).l_ackleveltr);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** NormalTransition_InputManagement.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

