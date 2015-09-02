/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-31T19:03:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_GradientProfileNew_TA_Gradient.h"

void Build_GradientProfileNew_reset_TA_Gradient(
  outC_Build_GradientProfileNew_TA_Gradient *outC)
{
  outC->init = kcg_true;
  /* 1 */ Position_GP_with_LRBG_reset_TA_Gradient(&outC->_2_Context_1);
  /* 3 */ MoveGPSectionsAbsolute_reset_TA_Lib_internal(&outC->Context_3);
  /* 2 */ _3_Convert_P21_to_DistancePr_reset_TA_Gradient(&outC->Context_2);
  /* 1 */ Read_P021_reset_TM(&outC->_1_Context_1);
  /* 1 */ Eval_LRBG_reset_TA_Lib_internal(&outC->Context_1);
}

/* TA_Gradient::Build_GradientProfileNew */
void Build_GradientProfileNew_TA_Gradient(
  inC_Build_GradientProfileNew_TA_Gradient *inC,
  outC_Build_GradientProfileNew_TA_Gradient *outC)
{
  kcg_bool noname;
  kcg_bool _1_noname;
  kcg_bool _2_noname;
  kcg_bool _3_noname;
  
  if (outC->init) {
    kcg_copy_GradientProfile_t_TrackAtlasTypes(
      &outC->_L208,
      (GradientProfile_t_TrackAtlasTypes *)
        &DEFAULT_GradientProfile_TrackAtlasTypes);
  }
  else {
    kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L208, &outC->_L206);
  }
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->_L42,
    &inC->train_position);
  outC->_L194 = outC->_L42.prvLRBG.location.nominal;
  outC->pos_prvLRBG = outC->_L194;
  outC->_L205 = outC->pos_prvLRBG;
  outC->_L193 = outC->_L42.LRBG.location.nominal;
  outC->pos_LRBG = outC->_L193;
  outC->_L204 = outC->pos_LRBG;
  outC->_L202 = inC->reset;
  _3_noname = outC->_L202;
  if (outC->init) {
    outC->_L103 = 0;
  }
  else {
    outC->_L103 = outC->_L108;
  }
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L107, &inC->MessageIn);
  /* 1 */ Eval_LRBG_TA_Lib_internal(&outC->_L107, &outC->Context_1);
  outC->_L108 = outC->Context_1.LRBG;
  outC->_L112 = outC->_L42.prvLRBG.nid_bg;
  outC->_L109 = outC->_L108 == outC->_L112;
  outC->_L111 = outC->_L42.LRBG.nid_bg;
  outC->_L113 = outC->_L108 == outC->_L111;
  outC->_L181 = outC->_L109 & outC->_L113;
  outC->_L180 = !outC->_L181;
  outC->other_LRBG = outC->_L180;
  outC->_L201 = outC->other_LRBG;
  _2_noname = outC->_L201;
  outC->_L104 = outC->_L108 != outC->_L103;
  outC->new_LRBG = outC->_L104;
  outC->_L200 = outC->new_LRBG;
  _1_noname = outC->_L200;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1, &inC->MessageIn);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L73,
    &outC->_L1.packets);
  /* 1 */ Read_P021_TM(&outC->_L73, &outC->_1_Context_1);
  outC->_L59 = outC->_1_Context_1.received;
  kcg_copy_P021_OBU_T_TM(&outC->_L60, &outC->_1_Context_1.P021_OBU_out);
  outC->new_GP = outC->_L59;
  outC->_L199 = outC->new_GP;
  noname = outC->_L199;
  kcg_copy_P021_OBU_T_TM(&outC->P21_local, &outC->_L60);
  kcg_copy_P021_OBU_T_TM(&outC->_L187, &outC->P21_local);
  /* 2 */
  _3_Convert_P21_to_DistancePr_TA_Gradient(&outC->_L187, &outC->Context_2);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L186,
    &outC->Context_2.GradientProfile);
  outC->msg_prvLRBG = outC->_L109;
  outC->_L191 = outC->msg_prvLRBG;
  outC->msg_LRBG = outC->_L113;
  outC->_L192 = outC->msg_LRBG;
  outC->_L197 = outC->pos_LRBG;
  outC->_L198 = outC->pos_prvLRBG;
  /* 3 */
  MoveGPSectionsAbsolute_TA_Lib_internal(
    &outC->_L186,
    outC->_L191,
    outC->_L192,
    outC->_L197,
    outC->_L198,
    &outC->Context_3);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L185,
    &outC->Context_3.ProfileOut);
  /* 1 */
  Position_GP_with_LRBG_TA_Gradient(
    &outC->_L185,
    outC->_L204,
    outC->_L205,
    &outC->_L208,
    &outC->_2_Context_1);
  outC->_L190 = outC->_2_Context_1.updated;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L207,
    &outC->_2_Context_1.ProfileOut);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L206,
    &outC->_2_Context_1.ProfileLoopOut);
  outC->updated = outC->_L190;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->GP, &outC->_L207);
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_GradientProfileNew_TA_Gradient.c
** Generation date: 2015-08-31T19:03:53
*************************************************************$ */

