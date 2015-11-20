/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckMode_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::CheckMode */
kcg_bool CheckMode_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::CheckMode::currentMode */ M_MODE currentMode)
{
  /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L37 */
  static kcg_bool _L37;
  /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L36 */
  static M_MODE _L36;
  /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L35 */
  static kcg_bool _L35;
  /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L34 */
  static M_MODE _L34;
  /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L33 */
  static M_MODE _L33;
  /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L32 */
  static kcg_bool _L32;
  /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L31 */
  static M_MODE _L31;
  /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L30 */
  static M_MODE _L30;
  /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L29 */
  static M_MODE _L29;
  /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L28 */
  static M_MODE _L28;
  /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L27 */
  static kcg_bool _L27;
  /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L26 */
  static M_MODE _L26;
  /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L25 */
  static kcg_bool _L25;
  /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L24 */
  static M_MODE _L24;
  /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L23 */
  static M_MODE _L23;
  /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L22 */
  static kcg_bool _L22;
  /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L21 */
  static kcg_bool _L21;
  /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L20 */
  static kcg_bool _L20;
  /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L19 */
  static kcg_bool _L19;
  /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L18 */
  static kcg_bool _L18;
  /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L17 */
  static M_MODE _L17;
  /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L16 */
  static M_MODE _L16;
  /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L15 */
  static kcg_bool _L15;
  /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L14 */
  static kcg_bool _L14;
  /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L52 */
  static M_MODE _L52;
  /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L51 */
  static kcg_bool _L51;
  /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L50 */
  static kcg_bool _L50;
  /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L49 */
  static M_MODE _L49;
  /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L48 */
  static M_MODE _L48;
  /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L46 */
  static kcg_bool _L46;
  /* CheckBGConsistency_Pkg::SubFunction::CheckMode::bgConsistansyIsActive */
  static kcg_bool bgConsistansyIsActive;
  
  _L34 = currentMode;
  _L29 = M_MODE_Non_Leading;
  _L14 = _L34 == _L29;
  _L30 = M_MODE_Stand_By;
  _L15 = _L34 == _L30;
  _L16 = M_MODE_Sleeping;
  _L17 = M_MODE_Shunting;
  _L18 = _L34 == _L17;
  _L33 = M_MODE_Post_Trip;
  _L19 = _L34 == _L33;
  _L24 = M_MODE_Reversing;
  _L20 = _L34 == _L24;
  _L36 = M_MODE_Staff_Responsible;
  _L21 = _L34 == _L36;
  _L27 = _L34 == _L16;
  _L26 = M_MODE_Trip;
  _L37 = _L34 == _L26;
  _L28 = M_MODE_Unfitted;
  _L32 = _L34 == _L28;
  _L23 = M_MODE_National_System;
  _L25 = _L34 == _L23;
  _L31 = M_MODE_Post_Trip;
  _L35 = _L34 == _L31;
  _L49 = M_MODE_On_Sight;
  _L50 = _L34 == _L49;
  _L48 = M_MODE_Limited_Supervision;
  _L46 = _L34 == _L48;
  _L52 = M_MODE_Full_Supervision;
  _L51 = _L34 == _L52;
  _L22 = _L15 | _L18 | _L21 | _L27 | _L37 | _L14 | _L32 | _L20 | _L25 | _L35 |
    _L19 | _L50 | _L46 | _L51;
  bgConsistansyIsActive = _L22;
  return bgConsistansyIsActive;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckMode_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

