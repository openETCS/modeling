/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CommandTripBraking_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::CommandTripBraking */
EB_command_T_SDM_Commands_Pkg CommandTripBraking_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CommandTripBraking::trainLocations */trainPosition_T_TrainPosition_Types_Pck *trainLocations,
  /* SDM_Commands_Pkg::CommandTripBraking::locations */SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::CommandTripBraking::TrainData_int */trainData_internal_t_SDM_Types_Pkg *TrainData_int)
{
  /* SDM_Commands_Pkg::CommandTripBraking::_L44 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L44;
  /* SDM_Commands_Pkg::CommandTripBraking::eb */
  static EB_command_T_SDM_Commands_Pkg eb;
  
  if ((*locations).d_eoa <= (*locations).d_svl) {
    _L44 = (*locations).d_eoa;
  }
  else {
    _L44 = (*locations).d_svl;
  }
  eb = ((*trainLocations).minSafeFrontEndPosition -
      (*TrainData_int).offsetAntennaL1 > _L44) & (_L44 > 0);
  return eb;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CommandTripBraking_SDM_Commands_Pkg.c
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

