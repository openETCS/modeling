/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Merge_New_P21_to_Profile_TA_Gradient.h"

/* TA_Gradient::GP_Merge_New_P21_to_Profile */
void GP_Merge_New_P21_to_Profile_TA_Gradient(
  /* TA_Gradient::GP_Merge_New_P21_to_Profile::new_GP */ GradientProfile_t_TrackAtlasTypes *new_GP,
  /* TA_Gradient::GP_Merge_New_P21_to_Profile::Last_GradientProfile_in */ GradientProfile_t_TrackAtlasTypes *Last_GradientProfile_in,
  /* TA_Gradient::GP_Merge_New_P21_to_Profile::GradientdProfile_out */ GradientProfile_t_TrackAtlasTypes *GradientdProfile_out)
{
  static kcg_int i2;
  static kcg_int i1;
  /* TA_Gradient::GP_Merge_New_P21_to_Profile */
  static GradientProfile_t_TrackAtlasTypes acc;
  static kcg_int i;
  /* TA_Gradient::GP_Merge_New_P21_to_Profile */
  static kcg_int op_call;
  /* TA_Gradient::GP_Merge_New_P21_to_Profile */
  static kcg_bool ck_every;
  /* TA_Gradient::GP_Merge_New_P21_to_Profile::_L1 */
  static kcg_int _L1;
  /* TA_Gradient::GP_Merge_New_P21_to_Profile::_L5 */
  static GradientProfile_t_TrackAtlasTypes _L5;
  /* TA_Gradient::GP_Merge_New_P21_to_Profile::_L9 */
  static M_TrainTrack_compressed_packets_T_TM_radio_messages _L9;
  /* TA_Gradient::GP_Merge_New_P21_to_Profile::_L14 */
  static GradientProfile_t_TrackAtlasTypes _L14;
  /* TA_Gradient::GP_Merge_New_P21_to_Profile::_L45 */
  static GradientProfile_t_TrackAtlasTypes _L45;
  /* TA_Gradient::GP_Merge_New_P21_to_Profile::_L47 */
  static array_169371 _L47;
  /* TA_Gradient::GP_Merge_New_P21_to_Profile::_L148 */
  static kcg_bool _L148;
  
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&_L45, Last_GradientProfile_in);
  _L148 = _L45[0].valid;
  ck_every = _L148;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&_L5, new_GP);
  /* ck_GP_Merge_New_P21_to_Profile */ if (ck_every) {
    op_call = /* 1 */
      FindStartOfNewGradientProfileAbs_TA_Lib_internal(&_L45, &_L5);
    _L1 = op_call;
  }
  else {
    _L1 = 0;
  }
  /* pow */ for (i2 = 0; i2 < 50; i2++) {
    _L9[i2] = _L1;
  }
  /* pow */ for (i1 = 0; i1 < 50; i1++) {
    kcg_copy_GradientProfile_t_TrackAtlasTypes(&_L47[i1], &_L5);
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&_L14, &_L45);
  /* 2 */ for (i = 0; i < 50; i++) {
    kcg_copy_GradientProfile_t_TrackAtlasTypes(&acc, &_L14);
    /* 1 */
    GP_Merge_New_P21_to_Profile_loop_TA_Gradient(
      i,
      &acc,
      _L9[i],
      &_L47[i],
      &_L14);
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(GradientdProfile_out, &_L14);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** GP_Merge_New_P21_to_Profile_TA_Gradient.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

