/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LevelSymbolToIndex_DMI_Control_Pkg_Sub_func.h"

/* DMI_Control_Pkg::Sub_func::LevelSymbolToIndex */
void LevelSymbolToIndex_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::LevelSymbolToIndex::LevelSymbolPacket */ M_LEVEL LevelSymbolPacket,
  /* DMI_Control_Pkg::Sub_func::LevelSymbolToIndex::Visibility */ kcg_bool *Visibility,
  /* DMI_Control_Pkg::Sub_func::LevelSymbolToIndex::LevelSymbol */ kcg_int *LevelSymbol)
{
  *Visibility = kcg_true;
  switch (LevelSymbolPacket) {
    case M_LEVEL_Level_0 :
      *LevelSymbol = 1;
      break;
    case M_LEVEL_Level_1 :
      *LevelSymbol = 3;
      break;
    case M_LEVEL_Level_2 :
      *LevelSymbol = 4;
      break;
    case M_LEVEL_Level_3 :
      *LevelSymbol = 5;
      break;
    
    default :
      *LevelSymbol = 2;
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** LevelSymbolToIndex_DMI_Control_Pkg_Sub_func.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

