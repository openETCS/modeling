/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GradientProfile_to_DMI_loop_TA_Export.h"

/* TA_Export::GradientProfile_to_DMI_loop */
void GradientProfile_to_DMI_loop_TA_Export(
  /* TA_Export::GradientProfile_to_DMI_loop::Gradient_section_in */ Gradient_section_t_TrackAtlasTypes *Gradient_section_in,
  /* TA_Export::GradientProfile_to_DMI_loop::EoA */ L_internal_Type_Obu_BasicTypes_Pkg EoA,
  /* TA_Export::GradientProfile_to_DMI_loop::Gradiient_section_for_DMI_out */ GradientProfile_for_DMI_section_t_TrackAtlasTypes *Gradiient_section_for_DMI_out)
{
  static L_internal_Type_Obu_BasicTypes_Pkg noname;
  /* TA_Export::GradientProfile_to_DMI_loop::_L20 */
  static Gradient_section_t_TrackAtlasTypes _L20;
  /* TA_Export::GradientProfile_to_DMI_loop::_L25 */
  static kcg_int _L25;
  /* TA_Export::GradientProfile_to_DMI_loop::_L24 */
  static kcg_bool _L24;
  /* TA_Export::GradientProfile_to_DMI_loop::_L26 */
  static kcg_int _L26;
  /* TA_Export::GradientProfile_to_DMI_loop::_L27 */
  static kcg_int _L27;
  /* TA_Export::GradientProfile_to_DMI_loop::_L28 */
  static kcg_int _L28;
  /* TA_Export::GradientProfile_to_DMI_loop::_L40 */
  static GradientProfile_for_DMI_section_t_TrackAtlasTypes _L40;
  /* TA_Export::GradientProfile_to_DMI_loop::_L46 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L46;
  /* TA_Export::GradientProfile_to_DMI_loop::_L45 */
  static G_internal_Type_Obu_BasicTypes_Pkg _L45;
  /* TA_Export::GradientProfile_to_DMI_loop::_L44 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L44;
  /* TA_Export::GradientProfile_to_DMI_loop::_L43 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L43;
  /* TA_Export::GradientProfile_to_DMI_loop::_L42 */
  static kcg_bool _L42;
  /* TA_Export::GradientProfile_to_DMI_loop::_L47 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L47;
  /* TA_Export::GradientProfile_to_DMI_loop::_L48 */
  static kcg_bool _L48;
  /* TA_Export::GradientProfile_to_DMI_loop::_L50 */
  static kcg_bool _L50;
  /* TA_Export::GradientProfile_to_DMI_loop::_L51 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L51;
  /* TA_Export::GradientProfile_to_DMI_loop::_L52 */
  static kcg_bool _L52;
  /* TA_Export::GradientProfile_to_DMI_loop::_L53 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L53;
  /* TA_Export::GradientProfile_to_DMI_loop::_L54 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L54;
  /* TA_Export::GradientProfile_to_DMI_loop::_L55 */
  static kcg_int _L55;
  /* TA_Export::GradientProfile_to_DMI_loop::_L56 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L56;
  /* TA_Export::GradientProfile_to_DMI_loop::_L58 */
  static kcg_int _L58;
  /* TA_Export::GradientProfile_to_DMI_loop::_L59 */
  static kcg_int _L59;
  /* TA_Export::GradientProfile_to_DMI_loop::_L60 */
  static kcg_int _L60;
  
  _L47 = EoA;
  kcg_copy_Gradient_section_t_TrackAtlasTypes(&_L20, Gradient_section_in);
  _L43 = _L20.Loc_Absolute;
  _L48 = _L47 > _L43;
  _L42 = _L20.valid;
  _L50 = _L48 & _L42;
  _L55 = ZERO_TA_Export;
  /* 6 */ if (_L50) {
    _L54 = _L43;
  }
  else {
    _L54 = _L55;
  }
  _L46 = _L20.L_Gradient;
  _L28 = _L43 + _L46;
  _L51 = EoA;
  _L52 = _L28 > _L51;
  /* 5 */ if (_L52) {
    _L53 = _L51;
  }
  else {
    _L53 = _L28;
  }
  _L59 = ZERO_TA_Export;
  /* 7 */ if (_L50) {
    _L56 = _L53;
  }
  else {
    _L56 = _L59;
  }
  _L45 = _L20.Gradient;
  _L25 = 255;
  _L24 = _L45 == _L25;
  _L27 = 0;
  /* 3 */ if (_L24) {
    _L26 = _L27;
  }
  else {
    _L26 = _L45;
  }
  _L60 = ZERO_TA_Export;
  /* 9 */ if (_L50) {
    _L58 = _L26;
  }
  else {
    _L58 = _L60;
  }
  _L40.valid = _L50;
  _L40.begin_section = _L54;
  _L40.end_section = _L56;
  _L40.gradient = _L58;
  kcg_copy_GradientProfile_for_DMI_section_t_TrackAtlasTypes(
    Gradiient_section_for_DMI_out,
    &_L40);
  _L44 = _L20.Loc_LRBG;
  noname = _L44;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** GradientProfile_to_DMI_loop_TA_Export.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

