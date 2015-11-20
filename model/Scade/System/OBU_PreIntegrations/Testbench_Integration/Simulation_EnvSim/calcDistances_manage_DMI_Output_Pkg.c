/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calcDistances_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::calcDistances */
void calcDistances_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::calcDistances::inTrainPosition */trainPosition_T_TrainPosition_Types_Pck *inTrainPosition,
  /* manage_DMI_Output_Pkg::calcDistances::outLocationKP_Balise_Track */L_internal_Type_Obu_BasicTypes_Pkg *outLocationKP_Balise_Track,
  /* manage_DMI_Output_Pkg::calcDistances::ouDistanceKP_Balise */L_internal_Type_Obu_BasicTypes_Pkg *ouDistanceKP_Balise,
  /* manage_DMI_Output_Pkg::calcDistances::outDistance_ToTSA */L_internal_Type_Obu_BasicTypes_Pkg *outDistance_ToTSA)
{
  /* manage_DMI_Output_Pkg::calcDistances::doCalc */
  static kcg_bool doCalc;
  
  *outLocationKP_Balise_Track = - 1;
  *outDistance_ToTSA = *outLocationKP_Balise_Track;
  doCalc = (*inTrainPosition).valid &
    !(*inTrainPosition).trainPositionIsUnknown &
    !(*inTrainPosition).noCoordinateSystemHasBeenAssigned &
    (*inTrainPosition).LRBG.valid;
  if (doCalc) {
    *ouDistanceKP_Balise = *outDistance_ToTSA;
  }
  else {
    *ouDistanceKP_Balise = *outDistance_ToTSA;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** calcDistances_manage_DMI_Output_Pkg.c
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

