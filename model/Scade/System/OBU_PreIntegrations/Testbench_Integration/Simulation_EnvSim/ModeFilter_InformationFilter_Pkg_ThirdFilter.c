/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ModeFilter_InformationFilter_Pkg_ThirdFilter.h"

/* InformationFilter_Pkg::ThirdFilter::ModeFilter */
kcg_bool ModeFilter_InformationFilter_Pkg_ThirdFilter(
  /* InformationFilter_Pkg::ThirdFilter::ModeFilter::inOperationModus */M_MODE inOperationModus,
  /* InformationFilter_Pkg::ThirdFilter::ModeFilter::inPacketId */kcg_int inPacketId)
{
  static ModeDecisionTableActionKind_DataDictionary_Pkg tmp2;
  static kcg_int tmp1;
  static kcg_int tmp;
  /* InformationFilter_Pkg::ThirdFilter::ModeFilter::outPacketAccept */
  static kcg_bool outPacketAccept;
  
  tmp1 = /* 1 */ MapPacketIdToRow_InformationFilter_Pkg(inPacketId);
  tmp = /* 1 */ MapModeToColumn_InformationFilter_Pkg(inOperationModus);
  if ((0 <= tmp1) & (tmp1 < 256) & ((0 <= tmp) & (tmp < 17))) {
    tmp2 = ModeDecisionTable_DataDictionary_Pkg[tmp1][tmp];
  }
  else {
    tmp2 = MD_NotRelevant_DataDictionary_Pkg;
  }
  outPacketAccept = /* 1 */ CheckModeExceptions_InformationFilter_Pkg(tmp2);
  return outPacketAccept;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ModeFilter_InformationFilter_Pkg_ThirdFilter.c
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

