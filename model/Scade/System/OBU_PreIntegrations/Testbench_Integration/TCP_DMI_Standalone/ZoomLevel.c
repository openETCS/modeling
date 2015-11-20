/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ZoomLevel.h"

void ZoomLevel_reset(outC_ZoomLevel *outC)
{
  outC->init = kcg_true;
}

/* ZoomLevel */
void ZoomLevel(
  /* ZoomLevel::ZoomIn */kcg_bool ZoomIn,
  /* ZoomLevel::ZoomOut */kcg_bool ZoomOut,
  outC_ZoomLevel *outC)
{
  /* ZoomLevel::SM1 */ SSM_ST_SM1 SM1_state_sel;
  /* ZoomLevel::SM1 */ SSM_ST_SM1 SM1_state_act;
  
  if (outC->init) {
    outC->init = kcg_false;
    SM1_state_sel = SSM_st_Zoom3_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  switch (SM1_state_sel) {
    case SSM_st_Zoom1_SM1 :
      if (ZoomIn) {
        SM1_state_act = SSM_st_Zoom2_SM1;
      }
      else {
        SM1_state_act = SSM_st_Zoom1_SM1;
      }
      break;
    case SSM_st_Zoom2_SM1 :
      if (ZoomIn) {
        SM1_state_act = SSM_st_Zoom3_SM1;
      }
      else if (ZoomOut) {
        SM1_state_act = SSM_st_Zoom1_SM1;
      }
      else {
        SM1_state_act = SSM_st_Zoom2_SM1;
      }
      break;
    case SSM_st_Zoom4_SM1 :
      if (ZoomOut) {
        SM1_state_act = SSM_st_Zoom3_SM1;
      }
      else if (ZoomIn) {
        SM1_state_act = SSM_st_Zoom5_SM1;
      }
      else {
        SM1_state_act = SSM_st_Zoom4_SM1;
      }
      break;
    case SSM_st_Zoom3_SM1 :
      if (ZoomIn) {
        SM1_state_act = SSM_st_Zoom4_SM1;
      }
      else if (ZoomOut) {
        SM1_state_act = SSM_st_Zoom2_SM1;
      }
      else {
        SM1_state_act = SSM_st_Zoom3_SM1;
      }
      break;
    case SSM_st_Zoom6_SM1 :
      if (ZoomOut) {
        SM1_state_act = SSM_st_Zoom5_SM1;
      }
      else {
        SM1_state_act = SSM_st_Zoom6_SM1;
      }
      break;
    case SSM_st_Zoom5_SM1 :
      if (ZoomIn) {
        SM1_state_act = SSM_st_Zoom6_SM1;
      }
      else if (ZoomOut) {
        SM1_state_act = SSM_st_Zoom4_SM1;
      }
      else {
        SM1_state_act = SSM_st_Zoom5_SM1;
      }
      break;
    
  }
  switch (SM1_state_act) {
    case SSM_st_Zoom1_SM1 :
      outC->SM1_state_nxt = SSM_st_Zoom1_SM1;
      outC->zoomlevel = 5;
      kcg_copy_tScale(&outC->Scale, (tScale *) &Scales[5]);
      break;
    case SSM_st_Zoom2_SM1 :
      outC->SM1_state_nxt = SSM_st_Zoom2_SM1;
      outC->zoomlevel = 4;
      kcg_copy_tScale(&outC->Scale, (tScale *) &Scales[4]);
      break;
    case SSM_st_Zoom4_SM1 :
      outC->SM1_state_nxt = SSM_st_Zoom4_SM1;
      outC->zoomlevel = 2;
      kcg_copy_tScale(&outC->Scale, (tScale *) &Scales[2]);
      break;
    case SSM_st_Zoom3_SM1 :
      outC->SM1_state_nxt = SSM_st_Zoom3_SM1;
      outC->zoomlevel = 3;
      kcg_copy_tScale(&outC->Scale, (tScale *) &Scales[3]);
      break;
    case SSM_st_Zoom6_SM1 :
      outC->SM1_state_nxt = SSM_st_Zoom6_SM1;
      outC->zoomlevel = 0;
      kcg_copy_tScale(&outC->Scale, (tScale *) &Scales[0]);
      break;
    case SSM_st_Zoom5_SM1 :
      outC->SM1_state_nxt = SSM_st_Zoom5_SM1;
      outC->zoomlevel = 1;
      kcg_copy_tScale(&outC->Scale, (tScale *) &Scales[1]);
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ZoomLevel.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

