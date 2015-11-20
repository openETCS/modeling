/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MapPacketIdToRow_InformationFilter_Pkg.h"

/* InformationFilter_Pkg::MapPacketIdToRow */
kcg_int MapPacketIdToRow_InformationFilter_Pkg(
  /* InformationFilter_Pkg::MapPacketIdToRow::inPacketId */ kcg_int inPacketId)
{
  /* InformationFilter_Pkg::MapPacketIdToRow::_L1 */
  static kcg_int _L1;
  /* InformationFilter_Pkg::MapPacketIdToRow::outRow */
  static kcg_int outRow;
  
  _L1 = inPacketId;
  outRow = _L1;
  return outRow;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MapPacketIdToRow_InformationFilter_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

