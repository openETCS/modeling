/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Merg2PacketsList_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList */
void Merg2PacketsList_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::ind */kcg_int ind,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::acc */CompressedPacketData_T_Common_Types_Pkg *acc,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::lastvalidAddress */CompressedPacketData_T_Common_Types_Pkg *lastvalidAddress,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::compressedPacketIn */CompressedPacketData_T_Common_Types_Pkg *compressedPacketIn,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::mergedPackets */CompressedPacketData_T_Common_Types_Pkg *mergedPackets)
{
  static kcg_int tmp;
  
  if (ind < (*lastvalidAddress)[0]) {
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(mergedPackets, acc);
  }
  else {
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(mergedPackets, acc);
    if ((0 <= ind - (*lastvalidAddress)[0]) & (ind - (*lastvalidAddress)[0] <
        500)) {
      tmp = (*compressedPacketIn)[ind - (*lastvalidAddress)[0]];
    }
    else {
      tmp = 0;
    }
    if ((0 <= ind) & (ind < 500)) {
      (*mergedPackets)[ind] = tmp;
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Merg2PacketsList_CheckBGConsistency_Pkg_SubFunction_MergFunction.c
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

