/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "copyTrackDescription_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::copyTrackDescription */
void copyTrackDescription_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::copyTrackDescription::fromTrackAtlas */DataForDMI_t_TrackAtlasTypes *fromTrackAtlas,
  /* manage_DMI_Output_Pkg::copyTrackDescription::inSystemTime */T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_DMI_Output_Pkg::copyTrackDescription::toDMI */DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg *toDMI)
{
  static kcg_bool tmp;
  static kcg_int i;
  /* manage_DMI_Output_Pkg::copyTrackDescription::_L7 */
  static array__158347 _L7;
  /* manage_DMI_Output_Pkg::copyTrackDescription::_L19 */
  static array__158355 _L19;
  /* manage_DMI_Output_Pkg::copyTrackDescription::_L20 */
  static kcg_int _L20;
  /* manage_DMI_Output_Pkg::copyTrackDescription::_L26 */
  static kcg_bool _L26;
  
  kcg_copy_DMI_trackCondition_T_DMI_Types_Pkg(
    &(*toDMI).trackConditions,
    (DMI_trackCondition_T_DMI_Types_Pkg *)
      &cNoTrackCondition_manage_DMI_Output_Pkg);
  _L26 = (*fromTrackAtlas).Gradient_profile_updated |
    (*fromTrackAtlas).MRSP_updated;
  (*toDMI).valid = _L26;
  if ((*fromTrackAtlas).MRSP_updated) {
    for (i = 0; i < 32; i++) {
      /* 1 */
      copySpeedProfileElement_manage_DMI_Output_Pkg(
        i,
        &(*fromTrackAtlas).MRSP[i + 0],
        &tmp,
        &_L7[i]);
      _L20 = i + 1;
      if (!tmp) {
        break;
      }
    }
  }
  else {
    _L20 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  for (i = _L20; i < 32; i++) {
    kcg_copy_DMI_speedProfileElement_T_DMI_Types_Pkg(
      &_L7[i],
      (DMI_speedProfileElement_T_DMI_Types_Pkg *)
        &cEmptySpeedProfileElement_manage_DMI_Output_Pkg);
  }
#endif /* KCG_MAPW_CPY */
  
  (*toDMI).speedProfiles.profileChanged = (*fromTrackAtlas).MRSP_updated;
  kcg_copy_DMI_SpeedProfileArray_T_DMI_Types_Pkg(
    &(*toDMI).speedProfiles.speedProfiles,
    &_L7);
  if ((*fromTrackAtlas).Gradient_profile_updated) {
    for (i = 0; i < 32; i++) {
      /* 1 */
      copyGradientElement_manage_DMI_Output_Pkg(
        i,
        &(*fromTrackAtlas).GradientProfile[i + 0],
        &tmp,
        &_L19[i]);
      _L20 = i + 1;
      if (!tmp) {
        break;
      }
    }
  }
  else {
    _L20 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  for (i = _L20; i < 32; i++) {
    kcg_copy_DMI_gradientProfileElement_T_DMI_Types_Pkg(
      &_L19[i],
      (DMI_gradientProfileElement_T_DMI_Types_Pkg *)
        &cEmptyGradientProfileElement_manage_DMI_Output_Pkg);
  }
#endif /* KCG_MAPW_CPY */
  
  (*toDMI).gradientProfiles.profileChanged =
    (*fromTrackAtlas).Gradient_profile_updated;
  kcg_copy_DMI_gradientProfileArray_T_DMI_Types_Pkg(
    &(*toDMI).gradientProfiles.gradientProfiles,
    &_L19);
  if (_L26) {
    (*toDMI).system_clock = inSystemTime;
  }
  else {
    (*toDMI).system_clock = 0;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** copyTrackDescription_manage_DMI_Output_Pkg.c
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

