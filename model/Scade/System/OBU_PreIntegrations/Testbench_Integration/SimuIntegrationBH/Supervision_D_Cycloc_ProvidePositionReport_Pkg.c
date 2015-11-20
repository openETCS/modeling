/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Supervision_D_Cycloc_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::Supervision_D_Cycloc */
kcg_bool Supervision_D_Cycloc_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Supervision_D_Cycloc::dcycloc */ D_CYCLOC dcycloc)
{
  static D_CYCLOC noname;
  /* ProvidePositionReport_Pkg::Supervision_D_Cycloc::_L1 */
  static kcg_bool _L1;
  /* ProvidePositionReport_Pkg::Supervision_D_Cycloc::_L2 */
  static D_CYCLOC _L2;
  /* ProvidePositionReport_Pkg::Supervision_D_Cycloc::trigger */
  static kcg_bool trigger;
  
  _L1 = kcg_false;
  trigger = _L1;
  _L2 = dcycloc;
  noname = _L2;
  return trigger;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Supervision_D_Cycloc_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

