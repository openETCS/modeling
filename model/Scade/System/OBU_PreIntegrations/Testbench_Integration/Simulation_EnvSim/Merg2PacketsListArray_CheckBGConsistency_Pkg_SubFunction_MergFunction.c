/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray */
void Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray::acc */CompressedPacketData_T_Common_Types_Pkg *acc,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray::addressArray */CompressedPacketData_T_Common_Types_Pkg *addressArray,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray::newPackets */CompressedPacketData_T_Common_Types_Pkg *newPackets,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray::mergPackets */CompressedPacketData_T_Common_Types_Pkg *mergPackets)
{
  static CompressedPacketData_T_Common_Types_Pkg tmp;
  static kcg_int i;
  
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(mergPackets, acc);
  for (i = 0; i < 500; i++) {
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&tmp, mergPackets);
    /* 1 */
    Merg2PacketsList_CheckBGConsistency_Pkg_SubFunction_MergFunction(
      i,
      &tmp,
      addressArray,
      newPackets,
      mergPackets);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction.c
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

