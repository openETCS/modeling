/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "invert_Q_DIRTRAIN_CalculateTrainPosition_Pkg_Pos_Pkg.h"

/* CalculateTrainPosition_Pkg::Pos_Pkg::invert_Q_DIRTRAIN */
Q_DIRTRAIN invert_Q_DIRTRAIN_CalculateTrainPosition_Pkg_Pos_Pkg(
  /* CalculateTrainPosition_Pkg::Pos_Pkg::invert_Q_DIRTRAIN::in */ Q_DIRTRAIN in)
{
  /* CalculateTrainPosition_Pkg::Pos_Pkg::invert_Q_DIRTRAIN::_L1 */
  static Q_DIRTRAIN _L1;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::invert_Q_DIRTRAIN::_L2 */
  static Q_DIRTRAIN _L2;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::invert_Q_DIRTRAIN::_L3 */
  static Q_DIRTRAIN _L3;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::invert_Q_DIRTRAIN::_L4 */
  static Q_DIRTRAIN _L4;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::invert_Q_DIRTRAIN::_L5 */
  static Q_DIRTRAIN _L5;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::invert_Q_DIRTRAIN::out */
  static Q_DIRTRAIN out;
  
  _L1 = in;
  _L4 = Q_DIRTRAIN_Nominal;
  _L5 = Q_DIRTRAIN_Reverse;
  _L3 = Q_DIRTRAIN_Unknown;
  switch (_L1) {
    case Q_DIRTRAIN_Reverse :
      _L2 = _L4;
      break;
    case Q_DIRTRAIN_Nominal :
      _L2 = _L5;
      break;
    case Q_DIRTRAIN_Unknown :
      _L2 = _L3;
      break;
    
  }
  out = _L2;
  return out;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** invert_Q_DIRTRAIN_CalculateTrainPosition_Pkg_Pos_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

