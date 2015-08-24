/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG_MEN_QNX\kcg_s2c_config.txt
** Generation date: 2015-08-20T18:54:31
*************************************************************$ */
#ifndef _EVC_stub_QNX_Internal_Tests_H_
#define _EVC_stub_QNX_Internal_Tests_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ======================  no context type  ======================== */

/* ===========  node initialization and cycle functions  =========== */
/* Internal_Tests::EVC_stub_QNX */
extern void EVC_stub_QNX_Internal_Tests(void);

extern void EVC_stub_QNX_reset_Internal_Tests(void);

/* Internal_Tests::EVC_stub_QNX::BG_data */
extern CompressedBaliseMessage_TM BG_data;

/* Internal_Tests::EVC_stub_QNX::BaliseHeader */
extern BaliseTelegramHeader_int_T_TM BaliseHeader;
/* Internal_Tests::EVC_stub_QNX::packet_received */
extern kcg_bool packet_received;
/* Internal_Tests::EVC_stub_QNX::packet_045 */
extern P45_RadioNetworkRegistration_T_Packet_Types_Pkg packet_045;
/* Internal_Tests::EVC_stub_QNX::packet_042 */
extern P42_SessionManagement_T_Packet_Types_Pkg packet_042;
/* Internal_Tests::EVC_stub_QNX::packet_041 */
extern P041_OBU_T_TM packet_041;
/* Internal_Tests::EVC_stub_QNX::packet_003 */
extern P003V1_OBU_T_TM_baseline2 packet_003;
/* Internal_Tests::EVC_stub_QNX::packet_137 */
extern P137_StopIfInStaffResponsible_T_Packet_Types_Pkg packet_137;

#endif /* _EVC_stub_QNX_Internal_Tests_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** EVC_stub_QNX_Internal_Tests.h
** Generation date: 2015-08-20T18:54:31
*************************************************************$ */

