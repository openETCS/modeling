/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_limit_to_EOA_TA_Export.h"

/* TA_Export::MRSP_limit_to_EOA */
void MRSP_limit_to_EOA_TA_Export(
  /* TA_Export::MRSP_limit_to_EOA::i */ kcg_int i,
  /* TA_Export::MRSP_limit_to_EOA::MRSP */ MRSP_Profile_t_TrackAtlasTypes *MRSP,
  /* TA_Export::MRSP_limit_to_EOA::EoA */ L_internal_Type_Obu_BasicTypes_Pkg EoA,
  /* TA_Export::MRSP_limit_to_EOA::cont */ kcg_bool *cont,
  /* TA_Export::MRSP_limit_to_EOA::limited */ MRSP_section_t_TrackAtlasTypes *limited)
{
  /* TA_Export::MRSP_limit_to_EOA::MRSP_section0 */
  static MRSP_section_t_TrackAtlasTypes MRSP_section0;
  /* TA_Export::MRSP_limit_to_EOA::MRSP_section1 */
  static MRSP_section_t_TrackAtlasTypes MRSP_section1;
  /* TA_Export::MRSP_limit_to_EOA::_L1 */
  static kcg_int _L1;
  /* TA_Export::MRSP_limit_to_EOA::_L3 */
  static MRSP_Profile_t_TrackAtlasTypes _L3;
  /* TA_Export::MRSP_limit_to_EOA::_L4 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L4;
  /* TA_Export::MRSP_limit_to_EOA::_L225 */
  static kcg_bool _L225;
  /* TA_Export::MRSP_limit_to_EOA::_L226 */
  static MRSP_section_t_TrackAtlasTypes _L226;
  /* TA_Export::MRSP_limit_to_EOA::_L227 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L227;
  /* TA_Export::MRSP_limit_to_EOA::_L229 */
  static kcg_bool _L229;
  /* TA_Export::MRSP_limit_to_EOA::_L230 */
  static MRSP_section_t_TrackAtlasTypes _L230;
  /* TA_Export::MRSP_limit_to_EOA::_L231 */
  static MRSP_section_t_TrackAtlasTypes _L231;
  /* TA_Export::MRSP_limit_to_EOA::_L233 */
  static MRSP_section_t_TrackAtlasTypes _L233;
  /* TA_Export::MRSP_limit_to_EOA::_L235 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L235;
  /* TA_Export::MRSP_limit_to_EOA::_L236 */
  static kcg_bool _L236;
  /* TA_Export::MRSP_limit_to_EOA::_L237 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L237;
  /* TA_Export::MRSP_limit_to_EOA::_L238 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L238;
  /* TA_Export::MRSP_limit_to_EOA::_L239 */
  static kcg_bool _L239;
  /* TA_Export::MRSP_limit_to_EOA::_L240 */
  static kcg_bool _L240;
  /* TA_Export::MRSP_limit_to_EOA::_L241 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L241;
  /* TA_Export::MRSP_limit_to_EOA::_L242 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L242;
  /* TA_Export::MRSP_limit_to_EOA::_L244 */
  static MRSP_section_t_TrackAtlasTypes _L244;
  /* TA_Export::MRSP_limit_to_EOA::_L245 */
  static MRSP_section_t_TrackAtlasTypes _L245;
  /* TA_Export::MRSP_limit_to_EOA::_L249 */
  static MRSP_section_t_TrackAtlasTypes _L249;
  /* TA_Export::MRSP_limit_to_EOA::_L248 */
  static kcg_int _L248;
  /* TA_Export::MRSP_limit_to_EOA::_L247 */
  static MRSP_Profile_t_TrackAtlasTypes _L247;
  /* TA_Export::MRSP_limit_to_EOA::_L250 */
  static kcg_int _L250;
  /* TA_Export::MRSP_limit_to_EOA::_L251 */
  static kcg_int _L251;
  /* TA_Export::MRSP_limit_to_EOA::_L252 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L252;
  /* TA_Export::MRSP_limit_to_EOA::_L253 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L253;
  /* TA_Export::MRSP_limit_to_EOA::_L254 */
  static kcg_bool _L254;
  /* TA_Export::MRSP_limit_to_EOA::_L255 */
  static MRSP_section_t_TrackAtlasTypes _L255;
  /* TA_Export::MRSP_limit_to_EOA::_L256 */
  static MRSP_section_t_TrackAtlasTypes _L256;
  /* TA_Export::MRSP_limit_to_EOA::_L257 */
  static MRSP_section_t_TrackAtlasTypes _L257;
  
  _L1 = i;
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&_L3, MRSP);
  _L4 = EoA;
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&_L247, MRSP);
  _L248 = i;
  _L251 = 1;
  _L250 = _L248 - _L251;
  if ((0 <= _L250) & (_L250 < 110)) {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(&_L249, &_L247[_L250]);
  }
  else {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(
      &_L249,
      (MRSP_section_t_TrackAtlasTypes *) &DEFAULT_MRSP_section_TA_Export);
  }
  _L252 = _L249.Loc_Abs;
  _L253 = END_OF_SSP_encoding_TA_Export;
  _L254 = _L252 == _L253;
  kcg_copy_MRSP_section_t_TrackAtlasTypes(
    &_L255,
    (MRSP_section_t_TrackAtlasTypes *) &DEFAULT_MRSP_section_TA_Export);
  if ((0 <= _L1) & (_L1 < 110)) {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(&_L226, &_L3[_L1]);
  }
  else {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(
      &_L226,
      (MRSP_section_t_TrackAtlasTypes *) &DEFAULT_MRSP_section_TA_Export);
  }
  _L227 = _L226.Loc_Abs;
  _L229 = _L227 > _L4;
  kcg_copy_MRSP_section_t_TrackAtlasTypes(&_L231, &_L226);
  if (kcg_true) {
    _L231.Loc_Abs = _L4;
  }
  /* 1 */ if (_L229) {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(&_L230, &_L231);
  }
  else {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(&_L230, &_L226);
  }
  kcg_copy_MRSP_section_t_TrackAtlasTypes(&MRSP_section0, &_L230);
  kcg_copy_MRSP_section_t_TrackAtlasTypes(&_L244, &MRSP_section0);
  kcg_copy_MRSP_section_t_TrackAtlasTypes(&_L233, &MRSP_section0);
  _L235 = _L233.Loc_Abs;
  _L236 = _L4 == _L235;
  _L238 = END_OF_SSP_TA_Export;
  _L237 = _L233.MRS;
  _L239 = _L238 == _L237;
  _L240 = _L236 | _L239;
  _L241 = END_OF_SSP_encoding_TA_Export;
  /* 2 */ if (_L240) {
    _L242 = _L241;
  }
  else {
    _L242 = _L237;
  }
  kcg_copy_MRSP_section_t_TrackAtlasTypes(&_L245, &_L244);
  if (kcg_true) {
    _L245.MRS = _L242;
  }
  kcg_copy_MRSP_section_t_TrackAtlasTypes(&MRSP_section1, &_L245);
  kcg_copy_MRSP_section_t_TrackAtlasTypes(&_L257, &MRSP_section1);
  /* 3 */ if (_L254) {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(&_L256, &_L255);
  }
  else {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(&_L256, &_L257);
  }
  kcg_copy_MRSP_section_t_TrackAtlasTypes(limited, &_L256);
  _L225 = kcg_true;
  *cont = _L225;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MRSP_limit_to_EOA_TA_Export.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

