/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */
#ifndef _TA_to_ML_TA_Export_H_
#define _TA_to_ML_TA_Export_H_

#include "kcg_types.h"
#include "CAST_NID_MESSAGE_to_int_TM_conversions.h"
#include "Read_P046_Legacy_TM_specific.h"
#include "Read_P041_Legacy_TM_specific.h"
#include "Read_P027V1_Legacy_for_ML_TM_specific.h"
#include "Read_P137_Legacy_TM_specific.h"
#include "Read_P139_Legacy_TM_specific.h"
#include "Read_P015_Legacy_TM_specific.h"
#include "Read_P138_Legacy_TM_specific.h"
#include "Read_P021_Legacy_TM_specific.h"

/* =====================  no input structure  ====================== */


/* TA_Export::TA_to_ML */
extern void TA_to_ML_TA_Export(
  /* TA_Export::TA_to_ML::MessageIn */ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_Export::TA_to_ML::t_nvcontact_overpass */kcg_bool t_nvcontact_overpass,
  /* TA_Export::TA_to_ML::valid_GP */kcg_bool valid_GP,
  /* TA_Export::TA_to_ML::valid_MA */kcg_bool valid_MA,
  /* TA_Export::TA_to_ML::valid_SSP */kcg_bool valid_SSP,
  /* TA_Export::TA_to_ML::Data_to_From_Track_Packets_at_ML */T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *Data_to_From_Track_Packets_at_ML,
  /* TA_Export::TA_to_ML::Data_to_From_Track_Messages_at_ML */T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg *Data_to_From_Track_Messages_at_ML,
  /* TA_Export::TA_to_ML::P_12_to_Input_MA_SSP_Gradient_at_ML */kcg_bool *P_12_to_Input_MA_SSP_Gradient_at_ML,
  /* TA_Export::TA_to_ML::P_15_to_Input_MA_SSP_Gradient_at_ML */kcg_bool *P_15_to_Input_MA_SSP_Gradient_at_ML,
  /* TA_Export::TA_to_ML::P_21_to_Input_MA_SSP_Gradient_at_ML */kcg_bool *P_21_to_Input_MA_SSP_Gradient_at_ML,
  /* TA_Export::TA_to_ML::P_27_to_Input_MA_SSP_Gradient_at_ML */kcg_bool *P_27_to_Input_MA_SSP_Gradient_at_ML);

#endif /* _TA_to_ML_TA_Export_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TA_to_ML_TA_Export.h
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */

