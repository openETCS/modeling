/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Normalize_Profile_TA_Gradient.h"

/* TA_Gradient::GP_Normalize_Profile */
void GP_Normalize_Profile_TA_Gradient(
  /* TA_Gradient::GP_Normalize_Profile::ProfileIn */ GradientProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_Gradient::GP_Normalize_Profile::pos_BG */ L_internal_Type_Obu_BasicTypes_Pkg pos_BG,
  /* TA_Gradient::GP_Normalize_Profile::ProfileNormalized_LRBG */ GradientProfile_t_TrackAtlasTypes *ProfileNormalized_LRBG)
{
  static kcg_int i1;
  /* TA_Gradient::GP_Normalize_Profile */
  static GradientProfile_t_TrackAtlasTypes acc;
  static kcg_int i;
  /* TA_Gradient::GP_Normalize_Profile::_L1 */
  static GradientProfile_t_TrackAtlasTypes _L1;
  /* TA_Gradient::GP_Normalize_Profile::_L2 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L2;
  /* TA_Gradient::GP_Normalize_Profile::_L3 */
  static GradientProfile_t_TrackAtlasTypes _L3;
  /* TA_Gradient::GP_Normalize_Profile::_L4 */
  static M_TrainTrack_compressed_packets_T_TM_radio_messages _L4;
  
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&_L1, ProfileIn);
  _L2 = pos_BG;
  /* pow */ for (i1 = 0; i1 < 50; i1++) {
    _L4[i1] = _L2;
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&_L3, &_L1);
  /* 1 */ for (i = 0; i < 50; i++) {
    kcg_copy_GradientProfile_t_TrackAtlasTypes(&acc, &_L3);
    /* 1 */ GP_Normalize_Profile_loop_TA_Gradient(i, &acc, _L4[i], &_L3);
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(ProfileNormalized_LRBG, &_L3);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** GP_Normalize_Profile_TA_Gradient.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

