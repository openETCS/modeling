/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calcDistances_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::calcDistances */
void calcDistances_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::calcDistances::inTrainPosition */ trainPosition_T_TrainPosition_Types_Pck *inTrainPosition,
  /* manage_DMI_Output_Pkg::calcDistances::outLocationKP_Balise_Track */ L_internal_Type_Obu_BasicTypes_Pkg *outLocationKP_Balise_Track,
  /* manage_DMI_Output_Pkg::calcDistances::ouDistanceKP_Balise */ L_internal_Type_Obu_BasicTypes_Pkg *_3_ouDistanceKP_Balise,
  /* manage_DMI_Output_Pkg::calcDistances::outDistance_ToTSA */ L_internal_Type_Obu_BasicTypes_Pkg *outDistance_ToTSA)
{
  /* manage_DMI_Output_Pkg::calcDistances::ouDistanceKP_Balise */
  static L_internal_Type_Obu_BasicTypes_Pkg _1_ouDistanceKP_Balise;
  /* manage_DMI_Output_Pkg::calcDistances::IfBlock1::then::_L1 */
  static kcg_int _L1_IfBlock1;
  /* manage_DMI_Output_Pkg::calcDistances::ouDistanceKP_Balise */
  static L_internal_Type_Obu_BasicTypes_Pkg ouDistanceKP_Balise;
  /* manage_DMI_Output_Pkg::calcDistances::IfBlock1::else::_L1 */
  static kcg_int _L12_IfBlock1;
  /* manage_DMI_Output_Pkg::calcDistances::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* manage_DMI_Output_Pkg::calcDistances::doCalc */
  static kcg_bool doCalc;
  /* manage_DMI_Output_Pkg::calcDistances::_L1 */
  static kcg_int _L1;
  /* manage_DMI_Output_Pkg::calcDistances::_L2 */
  static trainPosition_T_TrainPosition_Types_Pck _L2;
  /* manage_DMI_Output_Pkg::calcDistances::_L3 */
  static kcg_bool _L3;
  /* manage_DMI_Output_Pkg::calcDistances::_L4 */
  static kcg_bool _L4;
  /* manage_DMI_Output_Pkg::calcDistances::_L5 */
  static kcg_bool _L5;
  /* manage_DMI_Output_Pkg::calcDistances::_L6 */
  static kcg_bool _L6;
  /* manage_DMI_Output_Pkg::calcDistances::_L7 */
  static kcg_bool _L7;
  /* manage_DMI_Output_Pkg::calcDistances::_L8 */
  static kcg_bool _L8;
  /* manage_DMI_Output_Pkg::calcDistances::_L9 */
  static kcg_bool _L9;
  
  _L1 = - 1;
  *outLocationKP_Balise_Track = _L1;
  *outDistance_ToTSA = _L1;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L2, inTrainPosition);
  _L3 = _L2.valid;
  _L4 = _L2.trainPositionIsUnknown;
  _L5 = _L2.noCoordinateSystemHasBeenAssigned;
  _L6 = !_L5;
  _L7 = !_L4;
  _L9 = _L2.LRBG.valid;
  _L8 = _L3 & _L7 & _L6 & _L9;
  doCalc = _L8;
  IfBlock1_clock = doCalc;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L1_IfBlock1 = - 1;
    _1_ouDistanceKP_Balise = _L1_IfBlock1;
    *_3_ouDistanceKP_Balise = _1_ouDistanceKP_Balise;
  }
  else {
    _L12_IfBlock1 = - 1;
    ouDistanceKP_Balise = _L12_IfBlock1;
    *_3_ouDistanceKP_Balise = ouDistanceKP_Balise;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** calcDistances_manage_DMI_Output_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

