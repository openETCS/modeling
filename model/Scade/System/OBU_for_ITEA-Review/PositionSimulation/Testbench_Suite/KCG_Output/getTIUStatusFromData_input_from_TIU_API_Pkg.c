/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getTIUStatusFromData_input_from_TIU_API_Pkg.h"

/* input_from_TIU_API_Pkg::getTIUStatusFromData */
void getTIUStatusFromData_input_from_TIU_API_Pkg(
  /* input_from_TIU_API_Pkg::getTIUStatusFromData::inTIUActualData */ Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *inTIUActualData,
  /* input_from_TIU_API_Pkg::getTIUStatusFromData::outStatus */ TIU_trainStatus_T_TIU_Types_Pkg *outStatus)
{
  /* input_from_TIU_API_Pkg::getTIUStatusFromData::isA */ kcg_bool isA;
  /* input_from_TIU_API_Pkg::getTIUStatusFromData::isB */ kcg_bool isB;
  
  (*outStatus).valid = (*inTIUActualData).train_status.valid;
  isB = (*inTIUActualData).train_status.m_cab_st ==
    desk_B_is_open_TIU_Types_Pkg;
  isA = (*inTIUActualData).train_status.m_cab_st ==
    desk_A_is_open_TIU_Types_Pkg;
  (*outStatus).deskOpen = ((*inTIUActualData).train_status.m_cab_st ==
      both_desks_are_open_TIU_Types_Pkg) | isA | isB;
  if (isA) {
    (*outStatus).ownCab = CabA_TIU_Types_Pkg;
  }
  else if (isB) {
    (*outStatus).ownCab = CabB_TIU_Types_Pkg;
  }
  else {
    (*outStatus).ownCab = CabUndefined_TIU_Types_Pkg;
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** getTIUStatusFromData_input_from_TIU_API_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

