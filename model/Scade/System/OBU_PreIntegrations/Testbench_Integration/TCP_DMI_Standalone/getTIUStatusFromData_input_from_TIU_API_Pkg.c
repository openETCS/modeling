/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getTIUStatusFromData_input_from_TIU_API_Pkg.h"

/* input_from_TIU_API_Pkg::getTIUStatusFromData */
void getTIUStatusFromData_input_from_TIU_API_Pkg(
  /* input_from_TIU_API_Pkg::getTIUStatusFromData::inTIUActualData */Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *inTIUActualData,
  /* input_from_TIU_API_Pkg::getTIUStatusFromData::outStatus */TIU_trainStatus_T_TIU_Types_Pkg *outStatus)
{
  /* input_from_TIU_API_Pkg::getTIUStatusFromData::isA */ kcg_bool isA;
  /* input_from_TIU_API_Pkg::getTIUStatusFromData::isB */ kcg_bool isB;
  
  isA = (*inTIUActualData).train_status.m_cab_st ==
    desk_A_is_open_TIU_Types_Pkg;
  isB = (*inTIUActualData).train_status.m_cab_st ==
    desk_B_is_open_TIU_Types_Pkg;
  if (isA) {
    (*outStatus).ownCab = CabA_TIU_Types_Pkg;
  }
  else if (isB) {
    (*outStatus).ownCab = CabB_TIU_Types_Pkg;
  }
  else {
    (*outStatus).ownCab = CabUndefined_TIU_Types_Pkg;
  }
  (*outStatus).activeCab = (*outStatus).ownCab;
  (*outStatus).valid = (*inTIUActualData).train_status.valid;
  (*outStatus).deskOpen = ((*inTIUActualData).train_status.m_cab_st ==
      both_desks_are_open_TIU_Types_Pkg) | isA | isB;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** getTIUStatusFromData_input_from_TIU_API_Pkg.c
** Generation date: 2015-11-20T19:43:34
*************************************************************$ */

