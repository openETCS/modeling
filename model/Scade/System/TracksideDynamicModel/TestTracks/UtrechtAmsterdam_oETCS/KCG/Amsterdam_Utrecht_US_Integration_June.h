/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-07-22T10:57:38
*************************************************************$ */
#ifndef _Amsterdam_Utrecht_US_Integration_June_H_
#define _Amsterdam_Utrecht_US_Integration_June_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ======================  no context type  ======================== */

/* ===========  node initialization and cycle functions  =========== */
/* US_Integration_June::Amsterdam_Utrecht */
extern void Amsterdam_Utrecht_US_Integration_June(void);

extern void Amsterdam_Utrecht_reset_US_Integration_June(void);

/* US_Integration_June::Amsterdam_Utrecht::TrainPos */
extern kcg_real TrainPos;
/* US_Integration_June::Amsterdam_Utrecht::Trigger_in */
extern kcg_int Trigger_in;

/* US_Integration_June::Amsterdam_Utrecht::Balise_Packets */
extern CompressedPackets_T_Common_Types_Pkg Balise_Packets;
/* US_Integration_June::Amsterdam_Utrecht::Balise_Header */
extern TelegramHeader_T_BG_Types_Pkg Balise_Header;
/* US_Integration_June::Amsterdam_Utrecht::RadioTrackTrainHeader_out */
extern Radio_TrackTrain_Header_T_Radio_Types_Pkg RadioTrackTrainHeader_out;
/* US_Integration_June::Amsterdam_Utrecht::Compressed_Packets_out */
extern CompressedPackets_T_Common_Types_Pkg Compressed_Packets_out;
/* US_Integration_June::Amsterdam_Utrecht::Compressed_Radio_Message_out */
extern CompressedRadioMessage_TM Compressed_Radio_Message_out;

#endif /* _Amsterdam_Utrecht_US_Integration_June_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Amsterdam_Utrecht_US_Integration_June.h
** Generation date: 2015-07-22T10:57:38
*************************************************************$ */

