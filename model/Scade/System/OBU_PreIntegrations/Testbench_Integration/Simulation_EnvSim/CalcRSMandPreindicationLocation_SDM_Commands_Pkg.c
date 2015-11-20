/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcRSMandPreindicationLocation_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::CalcRSMandPreindicationLocation */
void CalcRSMandPreindicationLocation_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CalcRSMandPreindicationLocation::locations */SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::CalcRSMandPreindicationLocation::trainLocations */trainPosition_T_TrainPosition_Types_Pck *trainLocations,
  /* SDM_Commands_Pkg::CalcRSMandPreindicationLocation::isPreIndicationLocation */kcg_bool *isPreIndicationLocation,
  /* SDM_Commands_Pkg::CalcRSMandPreindicationLocation::isRSMLocation */kcg_bool *isRSMLocation)
{
  *isRSMLocation = (((*trainLocations).maxSafeFrontEndPostion >
        (*locations).EBD_RSM_start_location) &
      (*locations).RSM_start_location_EBD_valid) |
    ((*locations).RSM_start_location_SBD_valid &
      ((*trainLocations).estimatedFrontEndPosition >
        (*locations).SBD_RSM_start_location));
  *isPreIndicationLocation = (((*trainLocations).maxSafeFrontEndPostion >
        (*locations).EBD_preindication_location) &
      (*locations).Preindication_EBD_location_valid) |
    ((*locations).Preindication_SBD_location_valid &
      ((*trainLocations).estimatedFrontEndPosition >
        (*locations).SBD_preindication_location));
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CalcRSMandPreindicationLocation_SDM_Commands_Pkg.c
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

