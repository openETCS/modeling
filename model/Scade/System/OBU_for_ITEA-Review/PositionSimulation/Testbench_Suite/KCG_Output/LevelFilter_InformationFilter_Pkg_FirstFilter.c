/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LevelFilter_InformationFilter_Pkg_FirstFilter.h"

/* InformationFilter_Pkg::FirstFilter::LevelFilter */
kcg_bool LevelFilter_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inLevel */ M_LEVEL inLevel,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inPacketId */ kcg_int inPacketId,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inPacketOrigin */ MsgSource_T_Common_Types_Pkg inPacketOrigin)
{
  LevelDecisionTableActionKind_DataDictionary_Pkg tmp;
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::row */ kcg_int row;
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::column */ kcg_int column;
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::_L28 */ kcg_bool _L28;
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::outPacketAccept */ kcg_bool outPacketAccept;
  
  column = /* 1 */ MapLevelToColumn_InformationFilter_Pkg(inLevel);
  row = /* 1 */ MapPacketIdToRow_InformationFilter_Pkg(inPacketId);
  if (inPacketOrigin == msrc_Euroradio_Common_Types_Pkg) {
    if ((0 <= row) & (row < 256) & ((0 <= column) & (column < 5))) {
      tmp = LevelDecisionTableFromRBC_DataDictionary_Pkg[row][column];
    }
    else {
      tmp = LD_Invalid_DataDictionary_Pkg;
    }
  }
  else if ((0 <= row) & (row < 256) & ((0 <= column) & (column < 5))) {
    tmp = LevelDecisionTableFromBalise_DataDictionary_Pkg[row][column];
  }
  else {
    tmp = LD_Invalid_DataDictionary_Pkg;
  }
  /* 1 */
  CheckLevelExceptions_InformationFilter_Pkg_FirstFilter(
    tmp,
    kcg_false,
    kcg_false,
    kcg_false,
    kcg_false,
    0,
    kcg_false,
    &outPacketAccept,
    &_L28);
  return outPacketAccept;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** LevelFilter_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

