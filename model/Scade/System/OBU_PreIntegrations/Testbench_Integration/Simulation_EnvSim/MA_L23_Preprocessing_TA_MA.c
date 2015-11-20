/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MA_L23_Preprocessing_TA_MA.h"

/* TA_MA::MA_L23_Preprocessing */
void MA_L23_Preprocessing_TA_MA(
  /* TA_MA::MA_L23_Preprocessing::p15 */P015_OBU_T_TM *p15,
  /* TA_MA::MA_L23_Preprocessing::reset */kcg_bool reset,
  /* TA_MA::MA_L23_Preprocessing::msg_LRBG */kcg_bool msg_LRBG,
  /* TA_MA::MA_L23_Preprocessing::msg_prvLRBG */kcg_bool msg_prvLRBG,
  /* TA_MA::MA_L23_Preprocessing::pos_LRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_MA::MA_L23_Preprocessing::pos_prvLRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* TA_MA::MA_L23_Preprocessing::NV_in */P003V1_OBU_T_TM_baseline2 *NV_in,
  /* TA_MA::MA_L23_Preprocessing::MA */MovementAuthority_t_TrackAtlasTypes *MA)
{
  static MovementAuthority_t_TrackAtlasTypes tmp;
  
  /* 1 */ MA_Convert_P15_to_DistanceProfile_TA_MA(p15, NV_in, &tmp);
  /* 1 */
  MoveMAAbsolute_TA_Lib_internal(
    &tmp,
    msg_prvLRBG,
    msg_LRBG,
    pos_LRBG,
    pos_prvLRBG,
    MA);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MA_L23_Preprocessing_TA_MA.c
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

