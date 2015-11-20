/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LevelSymbolToIndex_DMI_Control_Pkg_Sub_func.h"

#ifndef KCG_USER_DEFINED_INIT
void LevelSymbolToIndex_init_DMI_Control_Pkg_Sub_func(
  outC_LevelSymbolToIndex_DMI_Control_Pkg_Sub_func *outC)
{
  outC->_L26 = kcg_true;
  outC->_L25 = 0;
  outC->_L17 = 0;
  outC->_L14 = 0;
  outC->_L13 = 0;
  outC->_L12 = 0;
  outC->_L10 = 0;
  outC->_L1 = M_LEVEL_Level_0;
  outC->LevelSymbol = 0;
  outC->Visibility = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void LevelSymbolToIndex_reset_DMI_Control_Pkg_Sub_func(
  outC_LevelSymbolToIndex_DMI_Control_Pkg_Sub_func *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Sub_func::LevelSymbolToIndex */
void LevelSymbolToIndex_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::LevelSymbolToIndex::LevelSymbolPacket */ M_LEVEL LevelSymbolPacket,
  outC_LevelSymbolToIndex_DMI_Control_Pkg_Sub_func *outC)
{
  outC->_L1 = LevelSymbolPacket;
  outC->_L26 = kcg_true;
  outC->Visibility = outC->_L26;
  outC->_L12 = 1;
  outC->_L13 = 3;
  outC->_L25 = 4;
  outC->_L17 = 5;
  outC->_L14 = 2;
  switch (outC->_L1) {
    case M_LEVEL_Level_0 :
      outC->_L10 = outC->_L12;
      break;
    case M_LEVEL_Level_1 :
      outC->_L10 = outC->_L13;
      break;
    case M_LEVEL_Level_2 :
      outC->_L10 = outC->_L25;
      break;
    case M_LEVEL_Level_3 :
      outC->_L10 = outC->_L17;
      break;
    
    default :
      outC->_L10 = outC->_L14;
  }
  outC->LevelSymbol = outC->_L10;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** LevelSymbolToIndex_DMI_Control_Pkg_Sub_func.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

