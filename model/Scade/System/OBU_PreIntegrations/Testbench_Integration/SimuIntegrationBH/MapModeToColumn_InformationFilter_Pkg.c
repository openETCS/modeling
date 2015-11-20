/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MapModeToColumn_InformationFilter_Pkg.h"

/* InformationFilter_Pkg::MapModeToColumn */
kcg_int MapModeToColumn_InformationFilter_Pkg(
  /* InformationFilter_Pkg::MapModeToColumn::inMode */ M_MODE inMode)
{
  /* InformationFilter_Pkg::MapModeToColumn::_L1 */
  static M_MODE _L1;
  /* InformationFilter_Pkg::MapModeToColumn::_L2 */
  static kcg_int _L2;
  /* InformationFilter_Pkg::MapModeToColumn::_L10 */
  static kcg_int _L10;
  /* InformationFilter_Pkg::MapModeToColumn::_L11 */
  static kcg_int _L11;
  /* InformationFilter_Pkg::MapModeToColumn::_L12 */
  static kcg_int _L12;
  /* InformationFilter_Pkg::MapModeToColumn::_L13 */
  static kcg_int _L13;
  /* InformationFilter_Pkg::MapModeToColumn::_L14 */
  static kcg_int _L14;
  /* InformationFilter_Pkg::MapModeToColumn::_L15 */
  static kcg_int _L15;
  /* InformationFilter_Pkg::MapModeToColumn::_L16 */
  static kcg_int _L16;
  /* InformationFilter_Pkg::MapModeToColumn::_L17 */
  static kcg_int _L17;
  /* InformationFilter_Pkg::MapModeToColumn::_L18 */
  static kcg_int _L18;
  /* InformationFilter_Pkg::MapModeToColumn::_L19 */
  static kcg_int _L19;
  /* InformationFilter_Pkg::MapModeToColumn::_L20 */
  static kcg_int _L20;
  /* InformationFilter_Pkg::MapModeToColumn::_L21 */
  static kcg_int _L21;
  /* InformationFilter_Pkg::MapModeToColumn::_L22 */
  static kcg_int _L22;
  /* InformationFilter_Pkg::MapModeToColumn::_L23 */
  static kcg_int _L23;
  /* InformationFilter_Pkg::MapModeToColumn::_L24 */
  static kcg_int _L24;
  /* InformationFilter_Pkg::MapModeToColumn::_L25 */
  static kcg_int _L25;
  /* InformationFilter_Pkg::MapModeToColumn::_L28 */
  static kcg_int _L28;
  /* InformationFilter_Pkg::MapModeToColumn::outColumn */
  static kcg_int outColumn;
  
  _L1 = inMode;
  _L10 = 0;
  _L11 = 1;
  _L12 = 2;
  _L13 = 3;
  _L14 = 4;
  _L15 = 5;
  _L16 = 6;
  _L17 = 7;
  _L18 = 8;
  _L19 = 9;
  _L20 = 10;
  _L21 = 11;
  _L22 = 12;
  _L23 = 13;
  _L24 = 14;
  _L25 = 15;
  _L28 = 16;
  switch (_L1) {
    case M_MODE_No_Power :
      _L2 = _L10;
      break;
    case M_MODE_Stand_By :
      _L2 = _L11;
      break;
    case M_MODE_Passive_Shunting :
      _L2 = _L12;
      break;
    case M_MODE_Shunting :
      _L2 = _L13;
      break;
    case M_MODE_Full_Supervision :
      _L2 = _L14;
      break;
    case M_MODE_Limited_Supervision :
      _L2 = _L15;
      break;
    case M_MODE_Staff_Responsible :
      _L2 = _L16;
      break;
    case M_MODE_On_Sight :
      _L2 = _L17;
      break;
    case M_MODE_Sleeping :
      _L2 = _L18;
      break;
    case M_MODE_Non_Leading :
      _L2 = _L19;
      break;
    case M_MODE_Unfitted :
      _L2 = _L20;
      break;
    case M_MODE_Trip :
      _L2 = _L21;
      break;
    case M_MODE_Post_Trip :
      _L2 = _L22;
      break;
    case M_MODE_System_Failure :
      _L2 = _L23;
      break;
    case M_MODE_Isolation :
      _L2 = _L24;
      break;
    case M_MODE_National_System :
      _L2 = _L25;
      break;
    case M_MODE_Reversing :
      _L2 = _L28;
      break;
    
  }
  outColumn = _L2;
  return outColumn;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MapModeToColumn_InformationFilter_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

