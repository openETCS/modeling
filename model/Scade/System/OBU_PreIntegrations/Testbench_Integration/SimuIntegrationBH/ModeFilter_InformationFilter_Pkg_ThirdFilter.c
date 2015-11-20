/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ModeFilter_InformationFilter_Pkg_ThirdFilter.h"

/* InformationFilter_Pkg::ThirdFilter::ModeFilter */
kcg_bool ModeFilter_InformationFilter_Pkg_ThirdFilter(
  /* InformationFilter_Pkg::ThirdFilter::ModeFilter::inOperationModus */ M_MODE inOperationModus,
  /* InformationFilter_Pkg::ThirdFilter::ModeFilter::inPacketId */ kcg_int inPacketId)
{
  /* InformationFilter_Pkg::ThirdFilter::ModeFilter::_L249 */
  static ModeDecisionTableType_DataDictionary_Pkg _L249;
  /* InformationFilter_Pkg::ThirdFilter::ModeFilter::_L256 */
  static ModeDecisionTableActionKind_DataDictionary_Pkg _L256;
  /* InformationFilter_Pkg::ThirdFilter::ModeFilter::_L259 */
  static M_MODE _L259;
  /* InformationFilter_Pkg::ThirdFilter::ModeFilter::_L261 */
  static kcg_int _L261;
  /* InformationFilter_Pkg::ThirdFilter::ModeFilter::_L262 */
  static kcg_int _L262;
  /* InformationFilter_Pkg::ThirdFilter::ModeFilter::_L263 */
  static kcg_bool _L263;
  /* InformationFilter_Pkg::ThirdFilter::ModeFilter::_L268 */
  static kcg_int _L268;
  /* InformationFilter_Pkg::ThirdFilter::ModeFilter::outPacketAccept */
  static kcg_bool outPacketAccept;
  
  kcg_copy_ModeDecisionTableType_DataDictionary_Pkg(
    &_L249,
    (ModeDecisionTableType_DataDictionary_Pkg *)
      &ModeDecisionTable_DataDictionary_Pkg);
  _L268 = inPacketId;
  _L261 = /* 1 */ MapPacketIdToRow_InformationFilter_Pkg(_L268);
  _L259 = inOperationModus;
  _L262 = /* 1 */ MapModeToColumn_InformationFilter_Pkg(_L259);
  if ((0 <= _L261) & (_L261 < 256) & ((0 <= _L262) & (_L262 < 17))) {
    _L256 = _L249[_L261][_L262];
  }
  else {
    _L256 = MD_NotRelevant_DataDictionary_Pkg;
  }
  _L263 = /* 1 */ CheckModeExceptions_InformationFilter_Pkg(_L256);
  outPacketAccept = _L263;
  return outPacketAccept;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ModeFilter_InformationFilter_Pkg_ThirdFilter.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

