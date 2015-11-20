/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MapModeToColumn_InformationFilter_Pkg.h"

/* InformationFilter_Pkg::MapModeToColumn */
kcg_int MapModeToColumn_InformationFilter_Pkg(
  /* InformationFilter_Pkg::MapModeToColumn::inMode */M_MODE inMode)
{
  /* InformationFilter_Pkg::MapModeToColumn::outColumn */
  static kcg_int outColumn;
  
  switch (inMode) {
    case M_MODE_No_Power :
      outColumn = 0;
      break;
    case M_MODE_Stand_By :
      outColumn = 1;
      break;
    case M_MODE_Passive_Shunting :
      outColumn = 2;
      break;
    case M_MODE_Shunting :
      outColumn = 3;
      break;
    case M_MODE_Full_Supervision :
      outColumn = 4;
      break;
    case M_MODE_Limited_Supervision :
      outColumn = 5;
      break;
    case M_MODE_Staff_Responsible :
      outColumn = 6;
      break;
    case M_MODE_On_Sight :
      outColumn = 7;
      break;
    case M_MODE_Sleeping :
      outColumn = 8;
      break;
    case M_MODE_Non_Leading :
      outColumn = 9;
      break;
    case M_MODE_Unfitted :
      outColumn = 10;
      break;
    case M_MODE_Trip :
      outColumn = 11;
      break;
    case M_MODE_Post_Trip :
      outColumn = 12;
      break;
    case M_MODE_System_Failure :
      outColumn = 13;
      break;
    case M_MODE_Isolation :
      outColumn = 14;
      break;
    case M_MODE_National_System :
      outColumn = 15;
      break;
    case M_MODE_Reversing :
      outColumn = 16;
      break;
    
  }
  return outColumn;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MapModeToColumn_InformationFilter_Pkg.c
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

