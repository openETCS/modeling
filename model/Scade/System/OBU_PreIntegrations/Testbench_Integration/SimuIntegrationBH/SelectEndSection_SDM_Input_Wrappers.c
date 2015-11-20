/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SelectEndSection_SDM_Input_Wrappers.h"

/* SDM_Input_Wrappers::SelectEndSection */
void SelectEndSection_SDM_Input_Wrappers(
  /* SDM_Input_Wrappers::SelectEndSection::I */ L_internal_Type_Obu_BasicTypes_Pkg I,
  /* SDM_Input_Wrappers::SelectEndSection::section */ MovementAuthoritySection_t_TrackAtlasTypes *section,
  /* SDM_Input_Wrappers::SelectEndSection::go_on */ kcg_bool *go_on,
  /* SDM_Input_Wrappers::SelectEndSection::eoa */ L_internal_Type_Obu_BasicTypes_Pkg *eoa)
{
  /* SDM_Input_Wrappers::SelectEndSection::_L2 */
  static MovementAuthoritySection_t_TrackAtlasTypes _L2;
  /* SDM_Input_Wrappers::SelectEndSection::_L4 */
  static kcg_bool _L4;
  /* SDM_Input_Wrappers::SelectEndSection::_L5 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L5;
  /* SDM_Input_Wrappers::SelectEndSection::_L6 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L6;
  /* SDM_Input_Wrappers::SelectEndSection::_L8 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L8;
  /* SDM_Input_Wrappers::SelectEndSection::_L10 */
  static kcg_bool _L10;
  /* SDM_Input_Wrappers::SelectEndSection::_L11 */
  static kcg_bool _L11;
  /* SDM_Input_Wrappers::SelectEndSection::_L12 */
  static kcg_bool _L12;
  
  kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(&_L2, section);
  _L4 = _L2.valid;
  _L10 = _L2.q_endsection;
  _L11 = _L4 & _L10;
  _L5 = _L2.l_section;
  _L8 = I;
  /* 1 */ if (_L11) {
    _L6 = _L5;
  }
  else {
    _L6 = _L8;
  }
  *eoa = _L6;
  _L12 = !_L11;
  *go_on = _L12;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SelectEndSection_SDM_Input_Wrappers.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

