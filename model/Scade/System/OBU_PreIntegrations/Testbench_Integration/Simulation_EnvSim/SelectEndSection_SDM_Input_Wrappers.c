/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SelectEndSection_SDM_Input_Wrappers.h"

/* SDM_Input_Wrappers::SelectEndSection */
void SelectEndSection_SDM_Input_Wrappers(
  /* SDM_Input_Wrappers::SelectEndSection::I */L_internal_Type_Obu_BasicTypes_Pkg I,
  /* SDM_Input_Wrappers::SelectEndSection::section */MovementAuthoritySection_t_TrackAtlasTypes *section,
  /* SDM_Input_Wrappers::SelectEndSection::go_on */kcg_bool *go_on,
  /* SDM_Input_Wrappers::SelectEndSection::eoa */L_internal_Type_Obu_BasicTypes_Pkg *eoa)
{
  /* SDM_Input_Wrappers::SelectEndSection::_L11 */
  static kcg_bool _L11;
  
  _L11 = (*section).valid & (*section).q_endsection;
  *go_on = !_L11;
  if (_L11) {
    *eoa = (*section).l_section;
  }
  else {
    *eoa = I;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SelectEndSection_SDM_Input_Wrappers.c
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

