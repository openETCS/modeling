/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MapLevelToColumn_InformationFilter_Pkg.h"

/* InformationFilter_Pkg::MapLevelToColumn */
kcg_int MapLevelToColumn_InformationFilter_Pkg(
  /* InformationFilter_Pkg::MapLevelToColumn::inLevel */ M_LEVEL inLevel)
{
  /* InformationFilter_Pkg::MapLevelToColumn::_L1 */
  static M_LEVEL _L1;
  /* InformationFilter_Pkg::MapLevelToColumn::_L2 */
  static kcg_int _L2;
  /* InformationFilter_Pkg::MapLevelToColumn::_L3 */
  static kcg_int _L3;
  /* InformationFilter_Pkg::MapLevelToColumn::_L4 */
  static kcg_int _L4;
  /* InformationFilter_Pkg::MapLevelToColumn::_L5 */
  static kcg_int _L5;
  /* InformationFilter_Pkg::MapLevelToColumn::_L6 */
  static kcg_int _L6;
  /* InformationFilter_Pkg::MapLevelToColumn::_L7 */
  static kcg_int _L7;
  /* InformationFilter_Pkg::MapLevelToColumn::outColumn */
  static kcg_int outColumn;
  
  _L1 = inLevel;
  _L3 = 0;
  _L4 = 1;
  _L5 = 2;
  _L6 = 3;
  _L7 = 4;
  switch (_L1) {
    case M_LEVEL_Level_0 :
      _L2 = _L3;
      break;
    case M_LEVEL_Level_NTC_specified_by_NID_NTC :
      _L2 = _L4;
      break;
    case M_LEVEL_Level_1 :
      _L2 = _L5;
      break;
    case M_LEVEL_Level_2 :
      _L2 = _L6;
      break;
    case M_LEVEL_Level_3 :
      _L2 = _L7;
      break;
    
  }
  outColumn = _L2;
  return outColumn;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MapLevelToColumn_InformationFilter_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

