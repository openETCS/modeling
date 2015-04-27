/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "invert_Q_DIRTRAIN_CalculateTrainPosition_Pkg_Pos_Pkg.h"

/* CalculateTrainPosition_Pkg::Pos_Pkg::invert_Q_DIRTRAIN */
Q_DIRTRAIN invert_Q_DIRTRAIN_CalculateTrainPosition_Pkg_Pos_Pkg(
  /* CalculateTrainPosition_Pkg::Pos_Pkg::invert_Q_DIRTRAIN::in */ Q_DIRTRAIN in)
{
  /* CalculateTrainPosition_Pkg::Pos_Pkg::invert_Q_DIRTRAIN::out */ Q_DIRTRAIN out;
  
  switch (in) {
    case Q_DIRTRAIN_Reverse :
      out = Q_DIRTRAIN_Nominal;
      break;
    case Q_DIRTRAIN_Nominal :
      out = Q_DIRTRAIN_Reverse;
      break;
    case Q_DIRTRAIN_Unknown :
      out = Q_DIRTRAIN_Unknown;
      break;
    
  }
  return out;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** invert_Q_DIRTRAIN_CalculateTrainPosition_Pkg_Pos_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

