/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_SymbolsToIndex_DMI_Control_Pkg_Sub_func.h"

/* DMI_Control_Pkg::Sub_func::RBC_SymbolsToIndex */
void RBC_SymbolsToIndex_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::RBC_SymbolsToIndex::connectionEstabilished */ connectionStatusRadioUnit_T_API_RadioCommunication_Pkg connectionEstabilished,
  /* DMI_Control_Pkg::Sub_func::RBC_SymbolsToIndex::symbol */ kcg_int *symbol,
  /* DMI_Control_Pkg::Sub_func::RBC_SymbolsToIndex::visibility */ kcg_bool *visibility)
{
  switch (connectionEstabilished) {
    case conn_ConnectionUp_API_RadioCommunication_Pkg :
      *symbol = 3;
      break;
    case conn_no_connection_API_RadioCommunication_Pkg :
      *symbol = 0;
      break;
    case conn_SetupFailed_API_RadioCommunication_Pkg :
      *symbol = 4;
      break;
    
    default :
      *symbol = 0;
  }
  if (*symbol == 0) {
    *visibility = kcg_false;
  }
  else {
    *visibility = kcg_true;
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** RBC_SymbolsToIndex_DMI_Control_Pkg_Sub_func.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

