/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Position_In_Ack_Area_Librairies.h"

/* Librairies::Position_In_Ack_Area */
kcg_bool Position_In_Ack_Area_Librairies(
  /* Librairies::Position_In_Ack_Area::Position */ Location_T_Obu_BasicTypes_Pkg Position,
  /* Librairies::Position_In_Ack_Area::D_Area */ Location_T_Obu_BasicTypes_Pkg D_Area,
  /* Librairies::Position_In_Ack_Area::L_Ack_Area */ Location_T_Obu_BasicTypes_Pkg L_Ack_Area)
{
  /* Librairies::Position_In_Ack_Area::_L9 */
  static kcg_bool _L9;
  /* Librairies::Position_In_Ack_Area::_L7 */
  static Location_T_Obu_BasicTypes_Pkg _L7;
  /* Librairies::Position_In_Ack_Area::_L6 */
  static Location_T_Obu_BasicTypes_Pkg _L6;
  /* Librairies::Position_In_Ack_Area::_L5 */
  static Location_T_Obu_BasicTypes_Pkg _L5;
  /* Librairies::Position_In_Ack_Area::_L4 */
  static Location_T_Obu_BasicTypes_Pkg _L4;
  /* Librairies::Position_In_Ack_Area::_L2 */
  static Location_T_Obu_BasicTypes_Pkg _L2;
  /* Librairies::Position_In_Ack_Area::_L10 */
  static kcg_int _L10;
  /* Librairies::Position_In_Ack_Area::_L11 */
  static kcg_bool _L11;
  /* Librairies::Position_In_Ack_Area::_L12 */
  static kcg_bool _L12;
  /* Librairies::Position_In_Ack_Area::Position_In_Ack_Area */
  static kcg_bool Position_In_Ack_Area;
  
  _L2 = L_Ack_Area;
  _L4 = Position;
  _L5 = Position;
  _L6 = D_Area;
  _L7 = D_Area;
  _L12 = _L4 <= _L6;
  _L10 = _L7 - _L2;
  _L11 = _L5 >= _L10;
  _L9 = _L12 & _L11;
  Position_In_Ack_Area = _L9;
  return Position_In_Ack_Area;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Position_In_Ack_Area_Librairies.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

