/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "defaultMA_SDM_Input_Wrappers.h"

/* SDM_Input_Wrappers::defaultMA */
void defaultMA_SDM_Input_Wrappers(
  /* SDM_Input_Wrappers::defaultMA::Ma_out */ MA_section_real_T_TargetManagement_types *Ma_out)
{
  /* SDM_Input_Wrappers::defaultMA::_L39 */
  static EOA_real_T_TargetManagement_types _L39;
  /* SDM_Input_Wrappers::defaultMA::_L114 */
  static MA_section_real_T_TargetManagement_types _L114;
  /* SDM_Input_Wrappers::defaultMA::_L195 */
  static kcg_bool _L195;
  /* SDM_Input_Wrappers::defaultMA::_L196 */
  static kcg_real _L196;
  /* SDM_Input_Wrappers::defaultMA::_L197 */
  static MA_Level_t_TrackAtlasTypes _L197;
  
  _L196 = 0.0;
  _L39.Location = _L196;
  _L39.TargetSpeed = _L196;
  _L195 = kcg_false;
  _L197 = MA_L23_TrackAtlasTypes;
  _L114.valid = _L195;
  _L114.v_main = _L196;
  kcg_copy_EOA_real_T_TargetManagement_types(&_L114.EOA, &_L39);
  _L114.DP_valid = _L195;
  _L114.DangerPoint = _L196;
  _L114.OL_valid = _L195;
  _L114.Overlap = _L196;
  _L114.q_calculate_release = _L195;
  _L114.ReleaseSpeed = _L196;
  _L114.level = _L197;
  kcg_copy_MA_section_real_T_TargetManagement_types(Ma_out, &_L114);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** defaultMA_SDM_Input_Wrappers.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

