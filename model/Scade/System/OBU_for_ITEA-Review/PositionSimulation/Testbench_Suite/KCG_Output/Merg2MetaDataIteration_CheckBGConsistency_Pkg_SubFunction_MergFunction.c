/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaDataIteration */
void Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaDataIteration::metaData */ Metadata_T_Common_Types_Pkg *metaData,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaDataIteration::telegram */ Telegram_T_BG_Types_Pkg *telegram,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaDataIteration::mergedMetaData */ Metadata_T_Common_Types_Pkg *mergedMetaData)
{
  Metadata_T_Common_Types_Pkg tmp;
  kcg_int i;
  
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

/* $************* KCG Version 6.4 beta5 (build i13) *************
** Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

