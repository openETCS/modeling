#ifndef STORY00A_FIRSTTEST_SCSIM_MAPPING
#define STORY00A_FIRSTTEST_SCSIM_MAPPING

#include "SmuTypes.h"
#include "Story00A_FirstTest_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "Story00A_FirstTest.h"
void _SCSIM_Mapping_Story00A_FirstTest();

void* _SCSIM_Get_Story00A_FirstTest_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Story00A_BTM_FirstTest.h"
void _SCSIM_Mapping_Story00A_BTM_FirstTest(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Story00A_BTM_FirstTest_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "RECV_ConvertBaliseHeader_CT.h"
void _SCSIM_Mapping_RECV_ConvertBaliseHeader_CT(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_RECV_ConvertBaliseHeader_CT_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_Group_364_FirstTest_InfraLib.h"
void _SCSIM_Mapping_Balise_Group_364_FirstTest_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_Group_364_FirstTest_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_Group_365_FirstTest_InfraLib.h"
void _SCSIM_Mapping_Balise_Group_365_FirstTest_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_Group_365_FirstTest_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_Group_366_FirstTest_InfraLib.h"
void _SCSIM_Mapping_Balise_Group_366_FirstTest_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_Group_366_FirstTest_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_Group_367_FirstTest_InfraLib.h"
void _SCSIM_Mapping_Balise_Group_367_FirstTest_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_Group_367_FirstTest_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_Group_368_FirstTest_InfraLib.h"
void _SCSIM_Mapping_Balise_Group_368_FirstTest_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_Group_368_FirstTest_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_Group_369_FirstTest_InfraLib.h"
void _SCSIM_Mapping_Balise_Group_369_FirstTest_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_Group_369_FirstTest_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_Group_341_FirstTest_InfraLib.h"
void _SCSIM_Mapping_Balise_Group_341_FirstTest_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_Group_341_FirstTest_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "TOOLS_Int_to_Q_UPDOWN.h"
void _SCSIM_Mapping_TOOLS_Int_to_Q_UPDOWN(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_TOOLS_Int_to_Q_UPDOWN_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "TOOLS_Int_to_M_VERSION.h"
void _SCSIM_Mapping_TOOLS_Int_to_M_VERSION(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_TOOLS_Int_to_M_VERSION_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "TOOLS_Int_to_Q_MEDIA.h"
void _SCSIM_Mapping_TOOLS_Int_to_Q_MEDIA(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_TOOLS_Int_to_Q_MEDIA_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "TOOLS_Int_to_N_PIG.h"
void _SCSIM_Mapping_TOOLS_Int_to_N_PIG(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_TOOLS_Int_to_N_PIG_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_601_Utils;
extern ControlUtils _SCSIM_603_Utils;
extern ControlUtils _SCSIM_600_Utils;
extern ControlUtils _SCSIM_605_Utils;
extern ControlUtils _SCSIM_599_Utils;
extern ControlUtils _SCSIM_607_Utils;
extern ControlUtils _SCSIM_598_Utils;
extern ControlUtils _SCSIM_609_Utils;
extern ControlUtils _SCSIM_597_Utils;
extern ControlUtils _SCSIM_611_Utils;
extern ControlUtils _SCSIM_596_Utils;
extern ControlUtils _SCSIM_613_Utils;
extern ControlUtils _SCSIM_595_Utils;
extern ControlUtils _SCSIM_615_Utils;
#include "TOOLS_Int_to_N_TOTAL.h"
void _SCSIM_Mapping_TOOLS_Int_to_N_TOTAL(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_TOOLS_Int_to_N_TOTAL_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_626_Utils;
extern ControlUtils _SCSIM_628_Utils;
extern ControlUtils _SCSIM_625_Utils;
extern ControlUtils _SCSIM_630_Utils;
extern ControlUtils _SCSIM_624_Utils;
extern ControlUtils _SCSIM_632_Utils;
extern ControlUtils _SCSIM_623_Utils;
extern ControlUtils _SCSIM_634_Utils;
extern ControlUtils _SCSIM_622_Utils;
extern ControlUtils _SCSIM_636_Utils;
extern ControlUtils _SCSIM_621_Utils;
extern ControlUtils _SCSIM_638_Utils;
extern ControlUtils _SCSIM_620_Utils;
extern ControlUtils _SCSIM_640_Utils;
#include "TOOLS_Int_to_M_DUP.h"
void _SCSIM_Mapping_TOOLS_Int_to_M_DUP(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_TOOLS_Int_to_M_DUP_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_647_Utils;
extern ControlUtils _SCSIM_650_Utils;
extern ControlUtils _SCSIM_646_Utils;
extern ControlUtils _SCSIM_653_Utils;
extern ControlUtils _SCSIM_645_Utils;
extern ControlUtils _SCSIM_656_Utils;
#include "TOOLS_Int_to_Q_LINK.h"
void _SCSIM_Mapping_TOOLS_Int_to_Q_LINK(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_TOOLS_Int_to_Q_LINK_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_364_1_FirstTest_InfraLib.h"
void _SCSIM_Mapping_Balise_364_1_FirstTest_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_364_1_FirstTest_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_Group_Init_FirstTest_InfraLib.h"
void _SCSIM_Mapping_Balise_Group_Init_FirstTest_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_Group_Init_FirstTest_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_Group_Close_FirstTest_InfraLib.h"
void _SCSIM_Mapping_Balise_Group_Close_FirstTest_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_Group_Close_FirstTest_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_364_0_FirstTest_InfraLib.h"
void _SCSIM_Mapping_Balise_364_0_FirstTest_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_364_0_FirstTest_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_365_0_FirstTest_InfraLib.h"
void _SCSIM_Mapping_Balise_365_0_FirstTest_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_365_0_FirstTest_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_365_1_FirstTest_InfraLib.h"
void _SCSIM_Mapping_Balise_365_1_FirstTest_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_365_1_FirstTest_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_366_0_FirstTest_InfraLib.h"
void _SCSIM_Mapping_Balise_366_0_FirstTest_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_366_0_FirstTest_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_366_1_FirstTest_InfraLib.h"
void _SCSIM_Mapping_Balise_366_1_FirstTest_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_366_1_FirstTest_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_367_0_FirstTest_InfraLib.h"
void _SCSIM_Mapping_Balise_367_0_FirstTest_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_367_0_FirstTest_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_367_1_FirstTest_InfraLib.h"
void _SCSIM_Mapping_Balise_367_1_FirstTest_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_367_1_FirstTest_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_368_1_FirstTest_InfraLib.h"
void _SCSIM_Mapping_Balise_368_1_FirstTest_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_368_1_FirstTest_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_368_0_FirstTest_InfraLib.h"
void _SCSIM_Mapping_Balise_368_0_FirstTest_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_368_0_FirstTest_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_369_1_FirstTest_InfraLib.h"
void _SCSIM_Mapping_Balise_369_1_FirstTest_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_369_1_FirstTest_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_369_0_FirstTest_InfraLib.h"
void _SCSIM_Mapping_Balise_369_0_FirstTest_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_369_0_FirstTest_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_341_0_FirstTest_InfraLib.h"
void _SCSIM_Mapping_Balise_341_0_FirstTest_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_341_0_FirstTest_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_341_1_FirstTest_InfraLib.h"
void _SCSIM_Mapping_Balise_341_1_FirstTest_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_341_1_FirstTest_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_Localisation_FirstTest_InfraLib.h"
void _SCSIM_Mapping_Balise_Localisation_FirstTest_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_Localisation_FirstTest_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_Packets_364_FirstTest_InfraLib.h"
void _SCSIM_Mapping_Balise_Packets_364_FirstTest_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_Packets_364_FirstTest_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "TEMPLATE_Balise_Packets_FirstTest_InfraLib.h"
void _SCSIM_Mapping_TEMPLATE_Balise_Packets_FirstTest_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_TEMPLATE_Balise_Packets_FirstTest_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Balise_Interdistance_FirstTest_InfraLib.h"
void _SCSIM_Mapping_Balise_Interdistance_FirstTest_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Balise_Interdistance_FirstTest_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "TOOLS_convert_engineering.h"
void _SCSIM_Mapping_TOOLS_convert_engineering(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_TOOLS_convert_engineering_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Send_364_P005_FirstTest_InfraLib.h"
void _SCSIM_Mapping_Send_364_P005_FirstTest_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Send_364_P005_FirstTest_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "SEND_WritePacket005_IT.h"
void _SCSIM_Mapping_SEND_WritePacket005_IT(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_SEND_WritePacket005_IT_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "SEND_ConvertP005forWrite_IT.h"
void _SCSIM_Mapping_SEND_ConvertP005forWrite_IT(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_SEND_ConvertP005forWrite_IT_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "SIM_SEND_WriteRadioMessag.h"
void _SCSIM_Mapping_SIM_SEND_WriteRadioMessag(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_SIM_SEND_WriteRadioMessag_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "SIM_SEND_WriteRadioMessageData.h"
void _SCSIM_Mapping_SIM_SEND_WriteRadioMessageData(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_SIM_SEND_WriteRadioMessageData_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "TOOLS_Int_to_Q_DIR.h"
void _SCSIM_Mapping_TOOLS_Int_to_Q_DIR(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_TOOLS_Int_to_Q_DIR_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "SEND_ConvertP005forWriteS.h"
void _SCSIM_Mapping_SEND_ConvertP005forWriteS(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_SEND_ConvertP005forWriteS_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "TOOLS_calculate_L_PACKET.h"
void _SCSIM_Mapping_TOOLS_calculate_L_PACKET(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_TOOLS_calculate_L_PACKET_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "SEND_FindSlot.h"
void _SCSIM_Mapping_SEND_FindSlot(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_SEND_FindSlot_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "SIM_SEND_WriteBaliseDataE.h"
void _SCSIM_Mapping_SIM_SEND_WriteBaliseDataE(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_SIM_SEND_WriteBaliseDataE_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

static int _SCSIM_ClockActive_kcg_true(void*);
static int _SCSIM_ClockActive_kcg_false(void*);

#endif /*STORY00A_FIRSTTEST_SCSIM_MAPPING */
