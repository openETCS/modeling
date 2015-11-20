/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "scaledDLINK_2_dlink_BasicLocationFunctions_Pkg.h"

/* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink */
void scaledDLINK_2_dlink_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::q_scale */Q_SCALE q_scale,
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::d_link */D_LINK d_link,
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::q_locacc */Q_LOCACC q_locacc,
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::distance */LocWithInAcc_T_Obu_BasicTypes_Pkg *distance)
{
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::_L15 */
  static kcg_int _L15;
  
  _L15 = q_locacc * cQLOCACC_resolution_TrainPosition_Types_Pck;
  (*distance).d_min = - _L15;
  (*distance).d_max = _L15;
  switch (q_scale) {
    case Q_SCALE_10_cm_scale :
      (*distance).nominal = d_link *
        cQ_SCALE_10_cm_resolution_TrainPosition_Types_Pck;
      break;
    case Q_SCALE_1_m_scale :
      (*distance).nominal = d_link *
        cQ_SCALE_1_m_resolution_TrainPosition_Types_Pck;
      break;
    case Q_SCALE_10_m_scale :
      (*distance).nominal = d_link *
        cQ_SCALE_10_m_resolution_TrainPosition_Types_Pck;
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** scaledDLINK_2_dlink_BasicLocationFunctions_Pkg.c
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

