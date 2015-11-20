/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getLRBGForRadioMessageIterator_ValidateDataDirectionGeneral_Pkg_Subfunctions.h"

/* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator */
void getLRBGForRadioMessageIterator_ValidateDataDirectionGeneral_Pkg_Subfunctions(
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator::accumulator */ positionedBG_T_TrainPosition_Types_Pck *accumulator,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator::nid_c */ NID_C nid_c,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator::nid_lrbg */ NID_LRBG nid_lrbg,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator::positionedBG */ positionedBG_T_TrainPosition_Types_Pck *positionedBG,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator::LRBG */ positionedBG_T_TrainPosition_Types_Pck *LRBG)
{
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator::_L1 */
  static positionedBG_T_TrainPosition_Types_Pck _L1;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator::_L2 */
  static NID_LRBG _L2;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator::_L3 */
  static positionedBG_T_TrainPosition_Types_Pck _L3;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator::_L4 */
  static kcg_bool _L4;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator::_L5 */
  static NID_BG _L5;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator::_L7 */
  static positionedBG_T_TrainPosition_Types_Pck _L7;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator::_L8 */
  static positionedBG_T_TrainPosition_Types_Pck _L8;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator::_L9 */
  static kcg_bool _L9;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator::_L10 */
  static kcg_bool _L10;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator::_L11 */
  static NID_C _L11;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator::_L12 */
  static kcg_bool _L12;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator::_L14 */
  static NID_C _L14;
  
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L1, accumulator);
  _L2 = nid_lrbg;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L3, positionedBG);
  _L11 = nid_c;
  _L14 = _L3.nid_c;
  _L12 = _L11 == _L14;
  _L5 = _L3.nid_bg;
  _L4 = _L2 == _L5;
  _L10 = _L3.valid;
  _L9 = _L12 & _L4 & _L10;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L8, positionedBG);
  /* 1 */ if (_L9) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L7, &_L8);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L7, &_L1);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(LRBG, &_L7);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** getLRBGForRadioMessageIterator_ValidateDataDirectionGeneral_Pkg_Subfunctions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

