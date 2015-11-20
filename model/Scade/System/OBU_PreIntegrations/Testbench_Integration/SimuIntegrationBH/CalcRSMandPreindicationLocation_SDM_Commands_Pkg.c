/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcRSMandPreindicationLocation_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::CalcRSMandPreindicationLocation */
void CalcRSMandPreindicationLocation_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CalcRSMandPreindicationLocation::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::CalcRSMandPreindicationLocation::trainLocations */ trainPosition_T_TrainPosition_Types_Pck *trainLocations,
  /* SDM_Commands_Pkg::CalcRSMandPreindicationLocation::isPreIndicationLocation */ kcg_bool *isPreIndicationLocation,
  /* SDM_Commands_Pkg::CalcRSMandPreindicationLocation::isRSMLocation */ kcg_bool *isRSMLocation)
{
  /* SDM_Commands_Pkg::CalcRSMandPreindicationLocation::_L1 */
  static SDM_Locations_T_SDM_Types_Pkg _L1;
  /* SDM_Commands_Pkg::CalcRSMandPreindicationLocation::_L2 */
  static kcg_bool _L2;
  /* SDM_Commands_Pkg::CalcRSMandPreindicationLocation::_L3 */
  static kcg_bool _L3;
  /* SDM_Commands_Pkg::CalcRSMandPreindicationLocation::_L4 */
  static kcg_bool _L4;
  /* SDM_Commands_Pkg::CalcRSMandPreindicationLocation::_L5 */
  static Location_T_Obu_BasicTypes_Pkg _L5;
  /* SDM_Commands_Pkg::CalcRSMandPreindicationLocation::_L7 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L7;
  /* SDM_Commands_Pkg::CalcRSMandPreindicationLocation::_L8 */
  static Location_T_Obu_BasicTypes_Pkg _L8;
  /* SDM_Commands_Pkg::CalcRSMandPreindicationLocation::_L9 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L9;
  /* SDM_Commands_Pkg::CalcRSMandPreindicationLocation::_L10 */
  static kcg_bool _L10;
  /* SDM_Commands_Pkg::CalcRSMandPreindicationLocation::_L11 */
  static kcg_bool _L11;
  /* SDM_Commands_Pkg::CalcRSMandPreindicationLocation::_L12 */
  static kcg_bool _L12;
  /* SDM_Commands_Pkg::CalcRSMandPreindicationLocation::_L13 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L13;
  /* SDM_Commands_Pkg::CalcRSMandPreindicationLocation::_L14 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L14;
  /* SDM_Commands_Pkg::CalcRSMandPreindicationLocation::_L15 */
  static trainPosition_T_TrainPosition_Types_Pck _L15;
  /* SDM_Commands_Pkg::CalcRSMandPreindicationLocation::_L19 */
  static kcg_bool _L19;
  /* SDM_Commands_Pkg::CalcRSMandPreindicationLocation::_L22 */
  static kcg_bool _L22;
  /* SDM_Commands_Pkg::CalcRSMandPreindicationLocation::_L23 */
  static kcg_bool _L23;
  /* SDM_Commands_Pkg::CalcRSMandPreindicationLocation::_L24 */
  static kcg_bool _L24;
  /* SDM_Commands_Pkg::CalcRSMandPreindicationLocation::_L25 */
  static kcg_bool _L25;
  /* SDM_Commands_Pkg::CalcRSMandPreindicationLocation::_L26 */
  static kcg_bool _L26;
  /* SDM_Commands_Pkg::CalcRSMandPreindicationLocation::_L27 */
  static kcg_bool _L27;
  /* SDM_Commands_Pkg::CalcRSMandPreindicationLocation::_L28 */
  static kcg_bool _L28;
  
  kcg_copy_SDM_Locations_T_SDM_Types_Pkg(&_L1, locations);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L15, trainLocations);
  _L5 = _L15.maxSafeFrontEndPostion;
  _L7 = _L1.EBD_preindication_location;
  _L3 = _L5 > _L7;
  _L23 = _L1.Preindication_EBD_location_valid;
  _L19 = _L3 & _L23;
  _L27 = _L1.Preindication_SBD_location_valid;
  _L8 = _L15.estimatedFrontEndPosition;
  _L9 = _L1.SBD_preindication_location;
  _L4 = _L8 > _L9;
  _L22 = _L27 & _L4;
  _L2 = _L19 | _L22;
  *isPreIndicationLocation = _L2;
  _L13 = _L1.EBD_RSM_start_location;
  _L10 = _L5 > _L13;
  _L24 = _L1.RSM_start_location_EBD_valid;
  _L25 = _L10 & _L24;
  _L28 = _L1.RSM_start_location_SBD_valid;
  _L14 = _L1.SBD_RSM_start_location;
  _L11 = _L8 > _L14;
  _L26 = _L28 & _L11;
  _L12 = _L25 | _L26;
  *isRSMLocation = _L12;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CalcRSMandPreindicationLocation_SDM_Commands_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

