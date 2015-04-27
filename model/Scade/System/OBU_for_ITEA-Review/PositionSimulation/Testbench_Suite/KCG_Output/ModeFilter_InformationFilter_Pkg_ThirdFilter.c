/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ModeFilter_InformationFilter_Pkg_ThirdFilter.h"

/* InformationFilter_Pkg::ThirdFilter::ModeFilter */
kcg_bool ModeFilter_InformationFilter_Pkg_ThirdFilter(
  /* InformationFilter_Pkg::ThirdFilter::ModeFilter::inOperationModus */ M_MODE inOperationModus,
  /* InformationFilter_Pkg::ThirdFilter::ModeFilter::inPacketId */ kcg_int inPacketId)
{
  ModeDecisionTableActionKind_DataDictionary_Pkg tmp2;
  kcg_int tmp1;
  kcg_int tmp;
  /* InformationFilter_Pkg::ThirdFilter::ModeFilter::outPacketAccept */ kcg_bool outPacketAccept;
  
  tmp1 = /* 1 */ MapPacketIdToRow_InformationFilter_Pkg(inPacketId);
  tmp = /* 1 */ MapModeToColumn_InformationFilter_Pkg(inOperationModus);
  if ((0 <= tmp1) & (tmp1 < 256) & ((0 <= tmp) & (tmp < 17))) {
    tmp2 = ModeDecisionTable_DataDictionary_Pkg[tmp1][tmp];
  }
  else {
    tmp2 = NotRelevant_DataDictionary_Pkg;
  }
  outPacketAccept = /* 1 */ CheckModeExceptions_InformationFilter_Pkg(tmp2);
  return outPacketAccept;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** ModeFilter_InformationFilter_Pkg_ThirdFilter.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

