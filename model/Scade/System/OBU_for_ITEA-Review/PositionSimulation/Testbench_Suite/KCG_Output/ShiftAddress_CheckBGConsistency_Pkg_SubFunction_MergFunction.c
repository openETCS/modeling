/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress */
void ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress::metaDataIn */ MetadataElement_T_Common_Types_Pkg *metaDataIn,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress::distance */ kcg_int distance,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress::metaDataOut */ MetadataElement_T_Common_Types_Pkg *metaDataOut)
{
  (*metaDataOut).nid_packet = (*metaDataIn).nid_packet;
  (*metaDataOut).q_dir = (*metaDataIn).q_dir;
  (*metaDataOut).valid = (*metaDataIn).valid;
  (*metaDataOut).startAddress = (*metaDataIn).startAddress + distance;
  (*metaDataOut).endAddress = (*metaDataIn).endAddress + distance;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

