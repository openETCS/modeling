/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MergMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergMetaData */
void MergMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergMetaData::telegramArray */ TelegramArray_T_BG_Types_Pkg *telegramArray,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergMetaData::metadata */ Metadata_T_Common_Types_Pkg *metadata)
{
  Metadata_T_Common_Types_Pkg tmp;
  kcg_int i;
  
  kcg_copy_Metadata_T_Common_Types_Pkg(
    metadata,
    &(*telegramArray)[0].packets.PacketHeaders);
  for (i = 0; i < 3; i++) {
    kcg_copy_Metadata_T_Common_Types_Pkg(&tmp, metadata);
    /* 1 */
    Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction(
      &tmp,
      &(*telegramArray)[i + 1],
      metadata);
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** MergMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

