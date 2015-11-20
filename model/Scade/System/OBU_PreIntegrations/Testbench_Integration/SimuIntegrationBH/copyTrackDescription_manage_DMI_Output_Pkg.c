/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "copyTrackDescription_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::copyTrackDescription */
void copyTrackDescription_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::copyTrackDescription::fromTrackAtlas */ DataForDMI_t_TrackAtlasTypes *fromTrackAtlas,
  /* manage_DMI_Output_Pkg::copyTrackDescription::inSystemTime */ T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_DMI_Output_Pkg::copyTrackDescription::toDMI */ DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg *toDMI)
{
  /* manage_DMI_Output_Pkg::copyTrackDescription */
  static kcg_bool _2_cond_iterw;
  static kcg_int i1;
  /* manage_DMI_Output_Pkg::copyTrackDescription */
  static kcg_bool cond_iterw;
  static kcg_int i;
  static kcg_int noname;
  static kcg_int _3_noname;
  /* manage_DMI_Output_Pkg::copyTrackDescription::_L1 */
  static DataForDMI_t_TrackAtlasTypes _L1;
  /* manage_DMI_Output_Pkg::copyTrackDescription::_L7 */
  static DMI_SpeedProfileArray_T_DMI_Types_Pkg _L7;
  /* manage_DMI_Output_Pkg::copyTrackDescription::_L8 */
  static kcg_int _L8;
  /* manage_DMI_Output_Pkg::copyTrackDescription::_L10 */
  static kcg_bool _L10;
  /* manage_DMI_Output_Pkg::copyTrackDescription::_L11 */
  static MRSP_Profile_t_TrackAtlasTypes _L11;
  /* manage_DMI_Output_Pkg::copyTrackDescription::_L13 */
  static DMI_SpeedProfileArray_T_DMI_Types_Pkg _L13;
  /* manage_DMI_Output_Pkg::copyTrackDescription::_L16 */
  static DMI_gradientProfileArray_T_DMI_Types_Pkg _L16;
  /* manage_DMI_Output_Pkg::copyTrackDescription::_L15 */
  static GradientProfile_for_DMI_t_TrackAtlasTypes _L15;
  /* manage_DMI_Output_Pkg::copyTrackDescription::_L17 */
  static kcg_bool _L17;
  /* manage_DMI_Output_Pkg::copyTrackDescription::_L19 */
  static DMI_gradientProfileArray_T_DMI_Types_Pkg _L19;
  /* manage_DMI_Output_Pkg::copyTrackDescription::_L20 */
  static kcg_int _L20;
  /* manage_DMI_Output_Pkg::copyTrackDescription::_L22 */
  static DMI_speedProfile_T_DMI_Types_Pkg _L22;
  /* manage_DMI_Output_Pkg::copyTrackDescription::_L23 */
  static DMI_gradientProfile_T_DMI_Types_Pkg _L23;
  /* manage_DMI_Output_Pkg::copyTrackDescription::_L25 */
  static kcg_bool _L25;
  /* manage_DMI_Output_Pkg::copyTrackDescription::_L26 */
  static kcg_bool _L26;
  /* manage_DMI_Output_Pkg::copyTrackDescription::_L27 */
  static DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg _L27;
  /* manage_DMI_Output_Pkg::copyTrackDescription::_L28 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L28;
  /* manage_DMI_Output_Pkg::copyTrackDescription::_L29 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L29;
  /* manage_DMI_Output_Pkg::copyTrackDescription::_L30 */
  static kcg_int _L30;
  /* manage_DMI_Output_Pkg::copyTrackDescription::_L31 */
  static DMI_trackCondition_T_DMI_Types_Pkg _L31;
  /* manage_DMI_Output_Pkg::copyTrackDescription::_L33 */
  static DMI_speedProfileElement_T_DMI_Types_Pkg _L33;
  /* manage_DMI_Output_Pkg::copyTrackDescription::_L34 */
  static DMI_gradientProfileElement_T_DMI_Types_Pkg _L34;
  
  kcg_copy_DataForDMI_t_TrackAtlasTypes(&_L1, fromTrackAtlas);
  _L25 = _L1.Gradient_profile_updated;
  _L10 = _L1.MRSP_updated;
  _L26 = _L25 | _L10;
  _L28 = inSystemTime;
  _L30 = 0;
  /* 1 */ if (_L26) {
    _L29 = _L28;
  }
  else {
    _L29 = _L30;
  }
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&_L11, &_L1.MRSP);
  kcg_copy_DMI_SpeedProfileArray_T_DMI_Types_Pkg(
    &_L13,
    (DMI_SpeedProfileArray_T_DMI_Types_Pkg *) &_L11[0]);
  kcg_copy_DMI_speedProfileElement_T_DMI_Types_Pkg(
    &_L33,
    (DMI_speedProfileElement_T_DMI_Types_Pkg *)
      &cEmptySpeedProfileElement_manage_DMI_Output_Pkg);
  /* 1 */ if (_L10) {
    /* 1 */ for (i1 = 0; i1 < 32; i1++) {
      /* 1 */
      copySpeedProfileElement_manage_DMI_Output_Pkg(
        i1,
        &_L13[i1],
        &_2_cond_iterw,
        &_L7[i1]);
      _L8 = i1 + 1;
      /* 1 */ if (!_2_cond_iterw) {
        break;
      }
    }
  }
  else {
    _L8 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  /* 1 */ for (i1 = _L8; i1 < 32; i1++) {
    kcg_copy_DMI_speedProfileElement_T_DMI_Types_Pkg(&_L7[i1], &_L33);
  }
#endif /* KCG_MAPW_CPY */
  
  _L22.profileChanged = _L10;
  kcg_copy_DMI_SpeedProfileArray_T_DMI_Types_Pkg(&_L22.speedProfiles, &_L7);
  _L17 = _L1.Gradient_profile_updated;
  kcg_copy_GradientProfile_for_DMI_t_TrackAtlasTypes(
    &_L15,
    &_L1.GradientProfile);
  kcg_copy_DMI_gradientProfileArray_T_DMI_Types_Pkg(
    &_L16,
    (DMI_gradientProfileArray_T_DMI_Types_Pkg *) &_L15[0]);
  kcg_copy_DMI_gradientProfileElement_T_DMI_Types_Pkg(
    &_L34,
    (DMI_gradientProfileElement_T_DMI_Types_Pkg *)
      &cEmptyGradientProfileElement_manage_DMI_Output_Pkg);
  /* 2 */ if (_L17) {
    /* 2 */ for (i = 0; i < 32; i++) {
      /* 1 */
      copyGradientElement_manage_DMI_Output_Pkg(
        i,
        &_L16[i],
        &cond_iterw,
        &_L19[i]);
      _L20 = i + 1;
      /* 2 */ if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L20 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  /* 2 */ for (i = _L20; i < 32; i++) {
    kcg_copy_DMI_gradientProfileElement_T_DMI_Types_Pkg(&_L19[i], &_L34);
  }
#endif /* KCG_MAPW_CPY */
  
  _L23.profileChanged = _L17;
  kcg_copy_DMI_gradientProfileArray_T_DMI_Types_Pkg(
    &_L23.gradientProfiles,
    &_L19);
  kcg_copy_DMI_trackCondition_T_DMI_Types_Pkg(
    &_L31,
    (DMI_trackCondition_T_DMI_Types_Pkg *)
      &cNoTrackCondition_manage_DMI_Output_Pkg);
  _L27.valid = _L26;
  _L27.system_clock = _L29;
  kcg_copy_DMI_speedProfile_T_DMI_Types_Pkg(&_L27.speedProfiles, &_L22);
  kcg_copy_DMI_gradientProfile_T_DMI_Types_Pkg(&_L27.gradientProfiles, &_L23);
  kcg_copy_DMI_trackCondition_T_DMI_Types_Pkg(&_L27.trackConditions, &_L31);
  kcg_copy_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg(toDMI, &_L27);
  noname = _L8;
  _3_noname = _L20;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** copyTrackDescription_manage_DMI_Output_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

