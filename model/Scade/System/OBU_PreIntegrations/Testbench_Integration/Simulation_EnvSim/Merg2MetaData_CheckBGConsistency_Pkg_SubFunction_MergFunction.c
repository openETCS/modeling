/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Merg2MetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData */
void Merg2MetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::ind */kcg_int ind,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::acc */Metadata_T_Common_Types_Pkg *acc,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::metadata_in */Metadata_T_Common_Types_Pkg *metadata_in,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::metadata_out */Metadata_T_Common_Types_Pkg *metadata_out)
{
  static MetadataElement_T_Common_Types_Pkg tmp1;
  static MetadataElement_T_Common_Types_Pkg tmp;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::IfBlock1::else::_L20 */
  static kcg_int _L20_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::IfBlock1::else::_L15 */
  static kcg_int _L15_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::dup */
  static kcg_bool dup;
  
  dup = ((*acc)[0].nid_packet == (*metadata_in)[0].nid_packet) &
    ((*acc)[0].q_dir == (*metadata_in)[0].q_dir);
  if (dup) {
    kcg_copy_Metadata_T_Common_Types_Pkg(metadata_out, acc);
  }
  else {
    /* 3 */
    FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction(
      acc,
      &_L15_IfBlock1,
      &_L20_IfBlock1);
    kcg_copy_Metadata_T_Common_Types_Pkg(metadata_out, acc);
    if ((0 <= ind) & (ind < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(&tmp, &(*metadata_in)[ind]);
    }
    else {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &tmp,
        (MetadataElement_T_Common_Types_Pkg *)
          &cMetaDataElement_CheckBGConsistency_Pkg);
    }
    /* 1 */
    ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction(
      &tmp,
      _L20_IfBlock1,
      &tmp1);
    if ((0 <= _L15_IfBlock1) & (_L15_IfBlock1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &(*metadata_out)[_L15_IfBlock1],
        &tmp1);
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Merg2MetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction.c
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

