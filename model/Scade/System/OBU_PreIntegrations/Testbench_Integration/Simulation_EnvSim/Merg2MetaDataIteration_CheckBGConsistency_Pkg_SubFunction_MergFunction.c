/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaDataIteration */
void Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaDataIteration::metaData */Metadata_T_Common_Types_Pkg *metaData,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaDataIteration::telegram */Telegram_T_BG_Types_Pkg *telegram,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaDataIteration::mergedMetaData */Metadata_T_Common_Types_Pkg *mergedMetaData)
{
  static Metadata_T_Common_Types_Pkg tmp;
  static kcg_int i;
  
  kcg_copy_Metadata_T_Common_Types_Pkg(mergedMetaData, metaData);
  for (i = 0; i < 30; i++) {
    kcg_copy_Metadata_T_Common_Types_Pkg(&tmp, mergedMetaData);
    /* 1 */
    Merg2MetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction(
      i,
      &tmp,
      &(*telegram).packets.PacketHeaders,
      mergedMetaData);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction.c
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

