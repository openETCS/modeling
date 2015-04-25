/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getLRBGForRadioMessageIterator_ValidateDataDirectionGeneral_Pkg_Subfunctions.h"

/* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator */
void getLRBGForRadioMessageIterator_ValidateDataDirectionGeneral_Pkg_Subfunctions(
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator::accumulator */ positionedBG_T_TrainPosition_Types_Pck *accumulator,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator::nid_lrbg */ NID_LRBG nid_lrbg,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator::positionedBG */ positionedBG_T_TrainPosition_Types_Pck *positionedBG,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator::LRBG */ positionedBG_T_TrainPosition_Types_Pck *LRBG)
{
  if ((nid_lrbg == (*positionedBG).nid_bg) & (*positionedBG).valid) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(LRBG, positionedBG);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(LRBG, accumulator);
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** getLRBGForRadioMessageIterator_ValidateDataDirectionGeneral_Pkg_Subfunctions.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

