/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
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
  static kcg_int i1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaDataIteration */
  static Metadata_T_Common_Types_Pkg acc;
  static kcg_int i;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaDataIteration::_L11 */
  static Metadata_T_Common_Types_Pkg _L11;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaDataIteration::_L12 */
  static Metadata_T_Common_Types_Pkg _L12;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaDataIteration::_L17 */
  static array_168778 _L17;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaDataIteration::_L18 */
  static Telegram_T_BG_Types_Pkg _L18;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaDataIteration::_L19 */
  static Metadata_T_Common_Types_Pkg _L19;
  
  kcg_copy_Metadata_T_Common_Types_Pkg(&_L12, metaData);
  kcg_copy_Telegram_T_BG_Types_Pkg(&_L18, telegram);
  kcg_copy_Metadata_T_Common_Types_Pkg(&_L19, &_L18.packets.PacketHeaders);
  /* pow */ for (i1 = 0; i1 < 30; i1++) {
    kcg_copy_Metadata_T_Common_Types_Pkg(&_L17[i1], &_L19);
  }
  kcg_copy_Metadata_T_Common_Types_Pkg(&_L11, &_L12);
  for (i = 0; i < 30; i++) {
    kcg_copy_Metadata_T_Common_Types_Pkg(&acc, &_L11);
    /* 1 */
    Merg2MetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction(
      i,
      &acc,
      &_L17[i],
      &_L11);
  }
  kcg_copy_Metadata_T_Common_Types_Pkg(mergedMetaData, &_L11);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

