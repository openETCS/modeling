/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Position_In_Area_Librairies.h"

/* Librairies::Position_In_Area */
kcg_bool Position_In_Area_Librairies(
  /* Librairies::Position_In_Area::Position */ Location_T_Obu_BasicTypes_Pkg Position,
  /* Librairies::Position_In_Area::D_Area */ Location_T_Obu_BasicTypes_Pkg D_Area,
  /* Librairies::Position_In_Area::L_Area */ Location_T_Obu_BasicTypes_Pkg L_Area)
{
  /* Librairies::Position_In_Area::_L2 */
  static Location_T_Obu_BasicTypes_Pkg _L2;
  /* Librairies::Position_In_Area::_L3 */
  static Location_T_Obu_BasicTypes_Pkg _L3;
  /* Librairies::Position_In_Area::_L4 */
  static Location_T_Obu_BasicTypes_Pkg _L4;
  /* Librairies::Position_In_Area::_L5 */
  static kcg_bool _L5;
  /* Librairies::Position_In_Area::_L6 */
  static Location_T_Obu_BasicTypes_Pkg _L6;
  /* Librairies::Position_In_Area::_L8 */
  static kcg_bool _L8;
  /* Librairies::Position_In_Area::_L9 */
  static Location_T_Obu_BasicTypes_Pkg _L9;
  /* Librairies::Position_In_Area::_L10 */
  static kcg_int _L10;
  /* Librairies::Position_In_Area::_L11 */
  static kcg_bool _L11;
  /* Librairies::Position_In_Area::Position_In_Area */
  static kcg_bool Position_In_Area;
  
  _L2 = Position;
  _L3 = D_Area;
  _L4 = L_Area;
  _L5 = _L2 >= _L3;
  _L6 = Position;
  _L9 = D_Area;
  _L10 = _L9 + _L4;
  _L8 = _L6 <= _L10;
  _L11 = _L5 & _L8;
  Position_In_Area = _L11;
  return Position_In_Area;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Position_In_Area_Librairies.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

