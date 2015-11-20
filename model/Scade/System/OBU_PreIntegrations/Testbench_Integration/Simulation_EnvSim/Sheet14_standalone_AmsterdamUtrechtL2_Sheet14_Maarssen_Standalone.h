/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:06
*************************************************************$ */
#ifndef _Sheet14_standalone_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone_H_
#define _Sheet14_standalone_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone_H_

#include "kcg_types.h"
#include "CASTLIB_BaliseHeaders_TM_conversions.h"
#include "C_TrackTrainMessage_to_Int_TM_conversions.h"
#include "RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.h"
#include "Sheet14_Maarssen_balises_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.h"
#include "Sheet14_Balises_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.h"
#include "Sheet14_Radio_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.h"
#include "TrackClose_InfraLib.h"
#include "TrackInit_InfraLib.h"
#include "TrackDiscontinuity_InfraLib.h"
#include "RBC_close_RadioLib.h"
#include "RBC_init_RadioLib.h"
#include "compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.h"

/* =====================  no input structure  ====================== */


/* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone */
extern void Sheet14_standalone_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::TrainPos_in */kcg_real TrainPos_in,
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::Trigger_in */kcg_int Trigger_in,
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::Packets */CompressedPackets_T_Common_Types_Pkg *Packets,
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::Header */TelegramHeader_T_BG_Types_Pkg *Header,
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::CompressedBaliseMessage */CompressedBaliseMessage_TM *CompressedBaliseMessage,
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::RadioTrackTrainHeader_out */Radio_TrackTrain_Header_T_Radio_Types_Pkg *RadioTrackTrainHeader_out,
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::Compressed_Packets_out */CompressedPackets_T_Common_Types_Pkg *Compressed_Packets_out,
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::Compressed_Radio_Message_out */CompressedRadioMessage_TM *Compressed_Radio_Message_out);

#endif /* _Sheet14_standalone_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Sheet14_standalone_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.h
** Generation date: 2015-11-20T19:47:06
*************************************************************$ */

