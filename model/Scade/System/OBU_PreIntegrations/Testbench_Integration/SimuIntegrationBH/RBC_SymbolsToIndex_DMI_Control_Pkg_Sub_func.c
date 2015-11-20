/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_SymbolsToIndex_DMI_Control_Pkg_Sub_func.h"

#ifndef KCG_USER_DEFINED_INIT
void RBC_SymbolsToIndex_init_DMI_Control_Pkg_Sub_func(
  outC_RBC_SymbolsToIndex_DMI_Control_Pkg_Sub_func *outC)
{
  outC->_L12 = 0;
  outC->_L11 = kcg_true;
  outC->_L10 = 0;
  outC->_L9 = kcg_true;
  outC->_L8 = 0;
  outC->_L7 = kcg_true;
  outC->_L6 = 0;
  outC->_L5 = kcg_true;
  outC->_L4 = 0;
  outC->_L3 = 0;
  outC->_L1 = conn_unknown_API_RadioCommunication_Pkg;
  outC->visibility = kcg_true;
  outC->symbol = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RBC_SymbolsToIndex_reset_DMI_Control_Pkg_Sub_func(
  outC_RBC_SymbolsToIndex_DMI_Control_Pkg_Sub_func *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Sub_func::RBC_SymbolsToIndex */
void RBC_SymbolsToIndex_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::RBC_SymbolsToIndex::connectionEstabilished */ connectionStatusRadioUnit_T_API_RadioCommunication_Pkg connectionEstabilished,
  outC_RBC_SymbolsToIndex_DMI_Control_Pkg_Sub_func *outC)
{
  outC->_L1 = connectionEstabilished;
  outC->_L3 = 3;
  outC->_L4 = 0;
  outC->_L12 = 4;
  outC->_L8 = 0;
  switch (outC->_L1) {
    case conn_ConnectionUp_API_RadioCommunication_Pkg :
      outC->_L6 = outC->_L3;
      break;
    case conn_no_connection_API_RadioCommunication_Pkg :
      outC->_L6 = outC->_L4;
      break;
    case conn_SetupFailed_API_RadioCommunication_Pkg :
      outC->_L6 = outC->_L12;
      break;
    
    default :
      outC->_L6 = outC->_L8;
  }
  outC->symbol = outC->_L6;
  outC->_L10 = 0;
  outC->_L9 = outC->_L6 == outC->_L10;
  outC->_L11 = kcg_false;
  outC->_L5 = kcg_true;
  /* 1 */ if (outC->_L9) {
    outC->_L7 = outC->_L11;
  }
  else {
    outC->_L7 = outC->_L5;
  }
  outC->visibility = outC->_L7;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RBC_SymbolsToIndex_DMI_Control_Pkg_Sub_func.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

