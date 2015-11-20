/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_to_DMI_TA_Export.h"

/* TA_Export::MRSP_to_DMI */
void MRSP_to_DMI_TA_Export(
  /* TA_Export::MRSP_to_DMI::EoA */ L_internal_Type_Obu_BasicTypes_Pkg EoA,
  /* TA_Export::MRSP_to_DMI::MRSP_in */ MRSP_Profile_t_TrackAtlasTypes *MRSP_in,
  /* TA_Export::MRSP_to_DMI::MRSP_to_DMI */ MRSP_Profile_t_TrackAtlasTypes *MRSP_to_DMI)
{
  static kcg_int i5;
  /* TA_Export::MRSP_to_DMI */
  static MRSP_reduction_acc_TA_Export acc;
  /* TA_Export::MRSP_to_DMI */
  static kcg_bool _4_cond_iterw;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  /* TA_Export::MRSP_to_DMI */
  static kcg_bool cond_iterw;
  static kcg_int i;
  static kcg_int noname;
  static kcg_int _6_noname;
  /* TA_Export::MRSP_to_DMI::_L657 */
  static MRSP_Profile_t_TrackAtlasTypes _L657;
  /* TA_Export::MRSP_to_DMI::_L660 */
  static MRSP_reduction_acc_TA_Export _L660;
  /* TA_Export::MRSP_to_DMI::_L659 */
  static array_170382 _L659;
  /* TA_Export::MRSP_to_DMI::_L658 */
  static MRSP_Profile_t_TrackAtlasTypes _L658;
  /* TA_Export::MRSP_to_DMI::_L665 */
  static MRSP_reduction_acc_TA_Export _L665;
  /* TA_Export::MRSP_to_DMI::_L666 */
  static kcg_int _L666;
  /* TA_Export::MRSP_to_DMI::_L667 */
  static kcg_bool _L667;
  /* TA_Export::MRSP_to_DMI::_L669 */
  static kcg_int _L669;
  /* TA_Export::MRSP_to_DMI::_L670 */
  static kcg_bool _L670;
  /* TA_Export::MRSP_to_DMI::_L676 */
  static array_int_110 _L676;
  /* TA_Export::MRSP_to_DMI::_L677 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L677;
  /* TA_Export::MRSP_to_DMI::_L679 */
  static MRSP_Profile_t_TrackAtlasTypes _L679;
  /* TA_Export::MRSP_to_DMI::_L680 */
  static array_170382 _L680;
  
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&_L657, MRSP_in);
  kcg_copy_MRSP_reduction_acc_TA_Export(
    &_L660,
    (MRSP_reduction_acc_TA_Export *) &DEFAULT_MRSP_reduction_acc_TA_Export);
  /* pow */ for (i5 = 0; i5 < 110; i5++) {
    kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&_L659[i5], &_L657);
  }
  _L667 = kcg_true;
  kcg_copy_MRSP_reduction_acc_TA_Export(&_L665, &_L660);
  /* 2 */ if (_L667) {
    /* 2 */ for (i3 = 0; i3 < 110; i3++) {
      kcg_copy_MRSP_reduction_acc_TA_Export(&acc, &_L665);
      /* 1 */
      MRSP_reduction_TA_Export(i3, &acc, &_L659[i3], &_4_cond_iterw, &_L665);
      _L666 = i3 + 1;
      /* 2 */ if (!_4_cond_iterw) {
        break;
      }
    }
  }
  else {
    _L666 = 0;
  }
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&_L658, &_L665.MRSP);
  /* pow */ for (i2 = 0; i2 < 110; i2++) {
    kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&_L680[i2], &_L658);
  }
  _L677 = EoA;
  /* pow */ for (i1 = 0; i1 < 110; i1++) {
    _L676[i1] = _L677;
  }
  _L670 = kcg_true;
  /* 3 */ if (_L670) {
    /* 3 */ for (i = 0; i < 110; i++) {
      /* 1 */
      MRSP_limit_to_EOA_TA_Export(
        i,
        &_L680[i],
        _L676[i],
        &cond_iterw,
        &_L679[i]);
      _L669 = i + 1;
      /* 3 */ if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L669 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  /* 3 */ for (i = _L669; i < 110; i++) {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(
      &_L679[i],
      (MRSP_section_t_TrackAtlasTypes *) &DEFAULT_MRSP_section_TA_Export);
  }
#endif /* KCG_MAPW_CPY */
  
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(MRSP_to_DMI, &_L679);
  noname = _L666;
  _6_noname = _L669;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MRSP_to_DMI_TA_Export.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

