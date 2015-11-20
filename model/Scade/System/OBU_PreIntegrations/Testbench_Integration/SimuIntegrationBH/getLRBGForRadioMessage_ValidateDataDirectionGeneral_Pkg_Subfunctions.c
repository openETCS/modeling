/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions.h"

/* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage */
void getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions(
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage::inMessage */ ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage::inPositionedBGs */ positionedBGs_T_TrainPosition_Types_Pck *inPositionedBGs,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage::outLRBG */ positionedBG_T_TrainPosition_Types_Pck *outLRBG)
{
  static kcg_int i2;
  static kcg_int i1;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage */
  static positionedBG_T_TrainPosition_Types_Pck acc;
  static kcg_int i;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage::_L1 */
  static ReceivedMessage_T_Common_Types_Pkg _L1;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage::_L2 */
  static positionedBGs_T_TrainPosition_Types_Pck _L2;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage::_L3 */
  static NID_LRBG _L3;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage::_L5 */
  static positionedBG_T_TrainPosition_Types_Pck _L5;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage::_L6 */
  static array_int_41 _L6;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage::_L8 */
  static positionedBG_T_TrainPosition_Types_Pck _L8;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage::_L10 */
  static NID_BG _L10;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage::_L9 */
  static NID_C _L9;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage::_L12 */
  static array_int_41 _L12;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L1, inMessage);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L2, inPositionedBGs);
  _L3 = _L1.Radio_Common_Header.nid_lrbg;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &_L8,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cEmptyLRBG_ValidateDataDirection_Pkg);
  /* 1 */ Decode_NID_LRBG_TM(_L3, &_L9, &_L10);
  /* pow */ for (i2 = 0; i2 < 41; i2++) {
    _L12[i2] = _L9;
  }
  /* pow */ for (i1 = 0; i1 < 41; i1++) {
    _L6[i1] = _L10;
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L5, &_L8);
  for (i = 0; i < 41; i++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&acc, &_L5);
    /* 1 */
    getLRBGForRadioMessageIterator_ValidateDataDirectionGeneral_Pkg_Subfunctions(
      &acc,
      _L12[i],
      _L6[i],
      &_L2[i],
      &_L5);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(outLRBG, &_L5);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

