/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "insertBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex_itr */
void insertBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex_itr::iteratorIndex */ kcg_int iteratorIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex_itr::indexOfBG */ kcg_int indexOfBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex_itr::BG_toBeInserted */ positionedBG_T_TrainPosition_Types_Pck *BG_toBeInserted,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex_itr::BG_in */ positionedBG_T_TrainPosition_Types_Pck *BG_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex_itr::BG_shifted_in */ positionedBG_T_TrainPosition_Types_Pck *BG_shifted_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex_itr::cont */ kcg_bool *cont11,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex_itr::BG_out */ positionedBG_T_TrainPosition_Types_Pck *_10_BG_out)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex_itr::BG_out */
  static positionedBG_T_TrainPosition_Types_Pck _2_BG_out;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex_itr::cont */
  static kcg_bool cont1;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex_itr::IfBlock1::then::_L2 */
  static kcg_bool _L2_IfBlock1;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex_itr::IfBlock1::then::_L1 */
  static positionedBG_T_TrainPosition_Types_Pck _L1_IfBlock1;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex_itr::BG_out */
  static positionedBG_T_TrainPosition_Types_Pck BG_out;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex_itr::cont */
  static kcg_bool cont;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex_itr::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex_itr::IfBlock1::else::else::_L1 */
  static positionedBG_T_TrainPosition_Types_Pck _L19_IfBlock1;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex_itr::IfBlock1::else::else::_L2 */
  static kcg_bool _L28_IfBlock1;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex_itr::cont */
  static kcg_bool cont3;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex_itr::BG_out */
  static positionedBG_T_TrainPosition_Types_Pck _4_BG_out;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex_itr::IfBlock1::else::then::_L2 */
  static kcg_bool _L27_IfBlock1;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex_itr::IfBlock1::else::then::_L3 */
  static positionedBG_T_TrainPosition_Types_Pck _L3_IfBlock1;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex_itr::cont */
  static kcg_bool cont5;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex_itr::BG_out */
  static positionedBG_T_TrainPosition_Types_Pck _6_BG_out;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex_itr::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  
  IfBlock1_clock = iteratorIndex < indexOfBG;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L2_IfBlock1 = kcg_true;
    cont1 = _L2_IfBlock1;
    *cont11 = cont1;
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L1_IfBlock1, BG_in);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_2_BG_out, &_L1_IfBlock1);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(_10_BG_out, &_2_BG_out);
  }
  else {
    else_clock_IfBlock1 = iteratorIndex == indexOfBG;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _L27_IfBlock1 = kcg_true;
      cont5 = _L27_IfBlock1;
      cont = cont5;
    }
    else {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &_L19_IfBlock1,
        BG_shifted_in);
      _L28_IfBlock1 = _L19_IfBlock1.valid;
      cont3 = _L28_IfBlock1;
      cont = cont3;
    }
    *cont11 = cont;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &_L3_IfBlock1,
        BG_toBeInserted);
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &_6_BG_out,
        &_L3_IfBlock1);
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&BG_out, &_6_BG_out);
    }
    else {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &_4_BG_out,
        &_L19_IfBlock1);
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&BG_out, &_4_BG_out);
    }
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(_10_BG_out, &BG_out);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** insertBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

