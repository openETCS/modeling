/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "invert_Q_DIRTRAIN_CalculateTrainPosition_Pkg_Pos_Pkg.h"

/* CalculateTrainPosition_Pkg::Pos_Pkg::invert_Q_DIRTRAIN */
Q_DIRTRAIN invert_Q_DIRTRAIN_CalculateTrainPosition_Pkg_Pos_Pkg(
  /* CalculateTrainPosition_Pkg::Pos_Pkg::invert_Q_DIRTRAIN::in */Q_DIRTRAIN in)
{
  /* CalculateTrainPosition_Pkg::Pos_Pkg::invert_Q_DIRTRAIN::out */
  static Q_DIRTRAIN out;
  
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

/* $*************** KCG Version 6.1.3 (build i6) ****************
** invert_Q_DIRTRAIN_CalculateTrainPosition_Pkg_Pos_Pkg.c
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

