/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EntryInLevel2or3_OutputToRBC.h"

/* OutputToRBC::EntryInLevel2or3 */
kcg_bool EntryInLevel2or3_OutputToRBC(
  /* OutputToRBC::EntryInLevel2or3::last_level */ M_LEVEL last_level,
  /* OutputToRBC::EntryInLevel2or3::new_level */ M_LEVEL new_level)
{
  /* OutputToRBC::EntryInLevel2or3::_L11 */
  static kcg_bool _L11;
  /* OutputToRBC::EntryInLevel2or3::_L10 */
  static M_LEVEL _L10;
  /* OutputToRBC::EntryInLevel2or3::_L9 */
  static kcg_bool _L9;
  /* OutputToRBC::EntryInLevel2or3::_L8 */
  static kcg_bool _L8;
  /* OutputToRBC::EntryInLevel2or3::_L7 */
  static kcg_bool _L7;
  /* OutputToRBC::EntryInLevel2or3::_L6 */
  static kcg_bool _L6;
  /* OutputToRBC::EntryInLevel2or3::_L5 */
  static kcg_bool _L5;
  /* OutputToRBC::EntryInLevel2or3::_L4 */
  static M_LEVEL _L4;
  /* OutputToRBC::EntryInLevel2or3::_L3 */
  static kcg_bool _L3;
  /* OutputToRBC::EntryInLevel2or3::_L2 */
  static kcg_bool _L2;
  /* OutputToRBC::EntryInLevel2or3::_L1 */
  static kcg_bool _L1;
  /* OutputToRBC::EntryInLevel2or3::PositionReportNeeded */
  static kcg_bool PositionReportNeeded;
  
  _L4 = last_level;
  _L10 = new_level;
  _L8 = _L4 != _L10;
  _L5 = new_level == M_LEVEL_Level_2;
  _L9 = new_level == M_LEVEL_Level_3;
  _L3 = _L5 | _L9;
  _L1 = last_level == M_LEVEL_Level_0;
  _L6 = last_level == M_LEVEL_Level_1;
  _L7 = last_level == M_LEVEL_Level_NTC_specified_by_NID_NTC;
  _L2 = _L1 | _L6 | _L7;
  _L11 = _L8 & _L3 & _L2;
  PositionReportNeeded = _L11;
  return PositionReportNeeded;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** EntryInLevel2or3_OutputToRBC.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

