/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "validateDataDirectionForSinglePacket_ValidateDataDirectionGeneral_Pkg_Subfunctions.h"

/* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket */
void validateDataDirectionForSinglePacket_ValidateDataDirectionGeneral_Pkg_Subfunctions(
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::inMetadataElement */ MetadataElement_T_Common_Types_Pkg *inMetadataElement,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::inTrainRunningDirection */ Q_DIRTRAIN inTrainRunningDirection,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::LRBGKnown */ kcg_bool LRBGKnown,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::coordinateSystemAssigned */ kcg_bool coordinateSystemAssigned,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::outMetadataElement */ MetadataElement_T_Common_Types_Pkg *_8_outMetadataElement)
{
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::outMetadataElement */
  static MetadataElement_T_Common_Types_Pkg _1_outMetadataElement;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::IfBlock1::then::_L32 */
  static kcg_bool _L32_IfBlock1;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::IfBlock1::then::_L31 */
  static kcg_bool _L31_IfBlock1;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::IfBlock1::then::_L30 */
  static kcg_bool _L30_IfBlock1;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::IfBlock1::then::_L29 */
  static kcg_bool _L29_IfBlock1;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::IfBlock1::then::_L1 */
  static kcg_bool _L1_IfBlock1;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::IfBlock1::then::_L2 */
  static kcg_bool _L2_IfBlock1;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::IfBlock1::then::_L3 */
  static kcg_bool _L3_IfBlock1;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::IfBlock1::then::_L5 */
  static MetadataElement_T_Common_Types_Pkg _L5_IfBlock1;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::IfBlock1::then::_L6 */
  static Q_DIRTRAIN _L6_IfBlock1;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::IfBlock1::then::_L7 */
  static Q_DIR _L7_IfBlock1;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::IfBlock1::then::_L8 */
  static kcg_bool _L8_IfBlock1;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::IfBlock1::then::_L9 */
  static MetadataElement_T_Common_Types_Pkg _L9_IfBlock1;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::IfBlock1::then::_L10 */
  static Q_DIR _L10_IfBlock1;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::IfBlock1::then::_L15 */
  static kcg_int _L15_IfBlock1;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::IfBlock1::then::_L14 */
  static kcg_int _L14_IfBlock1;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::IfBlock1::then::_L13 */
  static kcg_bool _L13_IfBlock1;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::IfBlock1::then::_L12 */
  static Q_DIR _L12_IfBlock1;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::IfBlock1::then::_L11 */
  static NID_PACKET _L11_IfBlock1;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::IfBlock1::then::_L16 */
  static Q_DIRTRAIN _L16_IfBlock1;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::IfBlock1::then::_L18 */
  static Q_DIRTRAIN _L18_IfBlock1;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::IfBlock1::then::_L19 */
  static kcg_bool _L19_IfBlock1;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::IfBlock1::then::_L20 */
  static kcg_bool _L20_IfBlock1;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::IfBlock1::then::_L21 */
  static kcg_bool _L21_IfBlock1;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::IfBlock1::then::_L22 */
  static kcg_bool _L22_IfBlock1;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::IfBlock1::then::_L23 */
  static kcg_bool _L23_IfBlock1;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::IfBlock1::then::_L24 */
  static Q_DIR _L24_IfBlock1;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::IfBlock1::then::_L25 */
  static kcg_bool _L25_IfBlock1;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::IfBlock1::then::_L27 */
  static Q_DIRTRAIN _L27_IfBlock1;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::IfBlock1::then::_L28 */
  static kcg_bool _L28_IfBlock1;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::outMetadataElement */
  static MetadataElement_T_Common_Types_Pkg outMetadataElement;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::IfBlock1::else::_L1 */
  static MetadataElement_T_Common_Types_Pkg _L17_IfBlock1;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::trainPositionKnown */
  static kcg_bool trainPositionKnown;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::_L36 */
  static trainPosition_T_TrainPosition_Types_Pck _L36;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::_L35 */
  static kcg_bool _L35;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::_L34 */
  static kcg_bool _L34;
  
  IfBlock1_clock = (*inMetadataElement).nid_packet != 44;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      &_L5_IfBlock1,
      inMetadataElement);
    _L11_IfBlock1 = _L5_IfBlock1.nid_packet;
    _L12_IfBlock1 = _L5_IfBlock1.q_dir;
    _L13_IfBlock1 = _L5_IfBlock1.valid;
    _L7_IfBlock1 = Q_DIR_Nominal;
    _L1_IfBlock1 = _L12_IfBlock1 == _L7_IfBlock1;
    _L18_IfBlock1 = Q_DIRTRAIN_Nominal;
    _L27_IfBlock1 = inTrainRunningDirection;
    _L3_IfBlock1 = _L18_IfBlock1 == _L27_IfBlock1;
  }
  else {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      &_L17_IfBlock1,
      inMetadataElement);
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      &outMetadataElement,
      &_L17_IfBlock1);
  }
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L36, trainPosition);
  _L35 = _L36.trainPositionIsUnknown;
  _L34 = !_L35;
  trainPositionKnown = _L34;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L21_IfBlock1 = trainPositionKnown;
    _L29_IfBlock1 = coordinateSystemAssigned;
    _L31_IfBlock1 = LRBGKnown;
    _L25_IfBlock1 = _L1_IfBlock1 & _L3_IfBlock1 & _L21_IfBlock1 &
      _L29_IfBlock1 & _L31_IfBlock1;
    _L10_IfBlock1 = Q_DIR_Reverse;
    _L22_IfBlock1 = _L12_IfBlock1 == _L10_IfBlock1;
    _L16_IfBlock1 = Q_DIRTRAIN_Reverse;
    _L6_IfBlock1 = inTrainRunningDirection;
    _L23_IfBlock1 = _L16_IfBlock1 == _L6_IfBlock1;
    _L2_IfBlock1 = trainPositionKnown;
    _L30_IfBlock1 = coordinateSystemAssigned;
    _L32_IfBlock1 = LRBGKnown;
    _L28_IfBlock1 = _L22_IfBlock1 & _L23_IfBlock1 & _L2_IfBlock1 &
      _L30_IfBlock1 & _L32_IfBlock1;
    _L24_IfBlock1 = Q_DIR_Both_directions;
    _L8_IfBlock1 = _L12_IfBlock1 == _L24_IfBlock1;
    _L20_IfBlock1 = _L25_IfBlock1 | _L28_IfBlock1 | _L8_IfBlock1;
    _L19_IfBlock1 = _L13_IfBlock1 & _L20_IfBlock1;
    _L14_IfBlock1 = _L5_IfBlock1.startAddress;
    _L15_IfBlock1 = _L5_IfBlock1.endAddress;
    _L9_IfBlock1.nid_packet = _L11_IfBlock1;
    _L9_IfBlock1.q_dir = _L12_IfBlock1;
    _L9_IfBlock1.valid = _L19_IfBlock1;
    _L9_IfBlock1.startAddress = _L14_IfBlock1;
    _L9_IfBlock1.endAddress = _L15_IfBlock1;
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      &_1_outMetadataElement,
      &_L9_IfBlock1);
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      _8_outMetadataElement,
      &_1_outMetadataElement);
  }
  else {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      _8_outMetadataElement,
      &outMetadataElement);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** validateDataDirectionForSinglePacket_ValidateDataDirectionGeneral_Pkg_Subfunctions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

