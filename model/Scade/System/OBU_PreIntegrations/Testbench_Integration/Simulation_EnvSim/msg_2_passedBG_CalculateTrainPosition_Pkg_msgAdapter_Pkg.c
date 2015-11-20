/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg.h"

/* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG */
void msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg(
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::msgFromTrack */ReceivedMessage_T_Common_Types_Pkg *msgFromTrack,
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::passedBG */passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::BG_passed */kcg_bool *BG_passed,
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::onlyBGsAnnouncedViaRadio */kcg_bool *onlyBGsAnnouncedViaRadio)
{
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L114 */
  static kcg_bool _L114;
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L295 */
  static LinkedBGs_T_BG_Types_Pkg _L295;
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L296 */
  static NID_LRBG _L296;
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L306 */
  static NID_BG _L306;
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L305 */
  static NID_C _L305;
  
  kcg_copy_BG_Header_T_BG_Types_Pkg(
    &(*passedBG).BG_Header,
    &(*msgFromTrack).BG_Common_Header);
  /* 1 */
  DECODE_NID_LRBG_TM_conversions(
    (*msgFromTrack).Radio_Common_Header.nid_lrbg,
    &_L305,
    &_L306);
  _L114 = (*msgFromTrack).source == msrc_Euroradio_Common_Types_Pkg;
  if (_L114) {
    _L296 = /* 2 */
      nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        kcg_true,
        _L305,
        _L306 % 100000);
  }
  else {
    _L296 = /* 1 */
      nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        (*msgFromTrack).BG_Common_Header.valid,
        (*msgFromTrack).BG_Common_Header.nid_c,
        (*msgFromTrack).BG_Common_Header.nid_bg);
  }
  /* 3 */
  NIDLRBG_2_nidC_nidBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    (*msgFromTrack).valid,
    _L296,
    &_L305,
    &_L306);
  /* 2 */
  Read_P005_ForCalcTrainPos_TM_specific(
    &(*msgFromTrack).packets,
    _L296,
    _L305,
    &_L295);
  (*passedBG).valid = ((*msgFromTrack).valid &
      (*msgFromTrack).BG_Common_Header.valid) | ((*msgFromTrack).valid &
      _L295[0].valid);
  kcg_copy_LinkedBGs_T_BG_Types_Pkg(&(*passedBG).linkedBGs, &_L295);
  *onlyBGsAnnouncedViaRadio = (*msgFromTrack).valid &
    !(*msgFromTrack).BG_Common_Header.valid & _L114 & _L295[0].valid;
  *BG_passed = (*msgFromTrack).valid & (msrc_Eurobalise_Common_Types_Pkg ==
      (*msgFromTrack).source) & (*msgFromTrack).BG_Common_Header.valid;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

