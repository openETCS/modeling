/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_reduction_TA_Export.h"

/* TA_Export::MRSP_reduction */
void MRSP_reduction_TA_Export(
  /* TA_Export::MRSP_reduction::i */ kcg_int i,
  /* TA_Export::MRSP_reduction::acc */ MRSP_reduction_acc_TA_Export *acc,
  /* TA_Export::MRSP_reduction::MRSP */ MRSP_Profile_t_TrackAtlasTypes *MRSP,
  /* TA_Export::MRSP_reduction::cont */ kcg_bool *cont,
  /* TA_Export::MRSP_reduction::reduced */ MRSP_reduction_acc_TA_Export *reduced)
{
  /* TA_Export::MRSP_reduction::index */
  static kcg_int index;
  /* TA_Export::MRSP_reduction::next_index */
  static kcg_int next_index;
  /* TA_Export::MRSP_reduction::_L1 */
  static kcg_int _L1;
  /* TA_Export::MRSP_reduction::_L3 */
  static MRSP_Profile_t_TrackAtlasTypes _L3;
  /* TA_Export::MRSP_reduction::_L7 */
  static MRSP_Profile_t_TrackAtlasTypes _L7;
  /* TA_Export::MRSP_reduction::_L6 */
  static kcg_int _L6;
  /* TA_Export::MRSP_reduction::_L11 */
  static MRSP_reduction_acc_TA_Export _L11;
  /* TA_Export::MRSP_reduction::_L12 */
  static kcg_int _L12;
  /* TA_Export::MRSP_reduction::_L13 */
  static MRSP_Profile_t_TrackAtlasTypes _L13;
  /* TA_Export::MRSP_reduction::_L14 */
  static kcg_int _L14;
  /* TA_Export::MRSP_reduction::_L15 */
  static MRSP_section_t_TrackAtlasTypes _L15;
  /* TA_Export::MRSP_reduction::_L16 */
  static kcg_int _L16;
  /* TA_Export::MRSP_reduction::_L17 */
  static kcg_int _L17;
  /* TA_Export::MRSP_reduction::_L19 */
  static MRSP_section_t_TrackAtlasTypes _L19;
  /* TA_Export::MRSP_reduction::_L18 */
  static MRSP_Profile_t_TrackAtlasTypes _L18;
  /* TA_Export::MRSP_reduction::_L20 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L20;
  /* TA_Export::MRSP_reduction::_L21 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L21;
  /* TA_Export::MRSP_reduction::_L22 */
  static kcg_bool _L22;
  /* TA_Export::MRSP_reduction::_L23 */
  static kcg_int _L23;
  /* TA_Export::MRSP_reduction::_L24 */
  static kcg_int _L24;
  /* TA_Export::MRSP_reduction::_L25 */
  static kcg_int _L25;
  /* TA_Export::MRSP_reduction::_L26 */
  static kcg_int _L26;
  /* TA_Export::MRSP_reduction::_L28 */
  static kcg_bool _L28;
  /* TA_Export::MRSP_reduction::_L2 */
  static MRSP_reduction_acc_TA_Export _L2;
  
  _L1 = i;
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&_L3, MRSP);
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&_L18, MRSP);
  if ((0 <= _L1) & (_L1 < 110)) {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(&_L19, &_L18[_L1]);
  }
  else {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(
      &_L19,
      (MRSP_section_t_TrackAtlasTypes *) &DEFAULT_MRSP_section_TA_Export);
  }
  _L20 = _L19.MRS;
  _L17 = 1;
  _L16 = _L1 + _L17;
  if ((0 <= _L16) & (_L16 < 110)) {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(&_L15, &_L3[_L16]);
  }
  else {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(
      &_L15,
      (MRSP_section_t_TrackAtlasTypes *) &DEFAULT_MRSP_section_TA_Export);
  }
  _L21 = _L15.MRS;
  _L22 = _L20 == _L21;
  kcg_copy_MRSP_reduction_acc_TA_Export(&_L2, acc);
  _L6 = _L2.write_index;
  index = _L6;
  _L24 = index;
  _L25 = 1;
  _L26 = _L24 + _L25;
  /* 1 */ if (_L22) {
    _L23 = _L24;
  }
  else {
    _L23 = _L26;
  }
  next_index = _L23;
  _L12 = next_index;
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&_L7, &_L2.MRSP);
  _L14 = index;
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&_L13, &_L7);
  if ((0 <= _L14) & (_L14 < 110)) {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(&_L13[_L14], &_L19);
  }
  _L11.write_index = _L12;
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&_L11.MRSP, &_L13);
  kcg_copy_MRSP_reduction_acc_TA_Export(reduced, &_L11);
  _L28 = _L19.valid;
  *cont = _L28;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MRSP_reduction_TA_Export.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

