
/* Code generated for Standalone Executable */

#include "SDY1_DMI.h"

/* Contexts for SCADE Suite KCG Code */

/* includes */
#include "testDMI.h"
#include <unistd.h> /* for sleep */

uint8_t fakeFromSDM[] = {0x01,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0x5c,0x11,0x00,0x00,0xff,0xff,0xff,0xff,0xae,0xd9,0x02,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0x01,0x00,0x00,0x00,0x2c,0x01,0x00,0x00,0x92,0x0d,0x00,0x00,0xb2,0x0b,0x00,0x00,0x72,0x0f,0x00,0x00,0x1f,0x00,0x00,0x00,0x1e,0x00,0x00,0x00,0x1d,0x00,0x00,0x00,0x1f,0x00,0x00,0x00,0x64,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa0,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0xa0,0xa8,0x02,0x00,0xa0,0xa8,0x02,0x00,0xa0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};

/* Declare scade context */
typedef struct {
    inC_testDMI SAO_CTX_inC_testDMI;
    outC_testDMI SAO_CTX_outC_testDMI;
} WU_testDMI;
#define WU_CTX_TYPE_testDMI WU_testDMI
#define WU_CTX_TYPE_testDMI_SIZE sizeof(WU_testDMI)


static WU_testDMI CTX_testDMI;

#include <windows.h>
#include <time.h>
#define PERIOD (clock_t)20.0
#define POLL_TIMEOUT_MS 20

void MODEL_inputs() {
			/* Connect Graphical Panels => SCADE Suite */
		SDY1_DMI__lockio();
		/* DMI_C1AreaAck <= C1AreaAck */
		{	SGLbool v; 
		v = SDY1_DMI_DMI_G_C1AreaAck(SDY1_DMI_L_DMI());
			CTX_testDMI.SAO_CTX_inC_testDMI.DMI_C1AreaAck = v;
		}
		/* DMI_closeButtonMain <= closeMainMenu */
		{	SGLbool v; 
		v = SDY1_DMI_DMI_G_closeMainMenu(SDY1_DMI_L_DMI());
			CTX_testDMI.SAO_CTX_inC_testDMI.DMI_closeButtonMain = v;
		}
		/* DMI_ShowPlanningArea_fromDisplay <= ShowPlanningArea */
		{	SGLbool v; 
		v = SDY1_DMI_DMI_G_ShowPlanningArea(SDY1_DMI_L_DMI());
			CTX_testDMI.SAO_CTX_inC_testDMI.DMI_ShowPlanningArea_fromDisplay = v;
		}
		/* DMI_HidePlanningArea_fromDisplay <= hidePlanningArea */
		{	SGLbool v; 
		v = SDY1_DMI_DMI_G_hidePlanningArea(SDY1_DMI_L_DMI());
			CTX_testDMI.SAO_CTX_inC_testDMI.DMI_HidePlanningArea_fromDisplay = v;
		}
		/* DMI_OverD12_frpmDisplay <= OverD12 */
		{	SGLbool v; 
		v = SDY1_DMI_DMI_G_OverD12(SDY1_DMI_L_DMI());
			CTX_testDMI.SAO_CTX_inC_testDMI.DMI_OverD12_frpmDisplay = v;
		}
		/* DMI_OverD9_fromDisplay <= OverD9 */
		{	SGLbool v; 
		v = SDY1_DMI_DMI_G_OverD9(SDY1_DMI_L_DMI());
			CTX_testDMI.SAO_CTX_inC_testDMI.DMI_OverD9_fromDisplay = v;
		}
		/* DMI_openMainMenu_fromDisplay <= OpenMainMenu */
		{	SGLbool v; 
		v = SDY1_DMI_DMI_G_OpenMainMenu(SDY1_DMI_L_DMI());
			CTX_testDMI.SAO_CTX_inC_testDMI.DMI_openMainMenu_fromDisplay = v;
		}
		/* DMI_openLevelMenu <= openLevelMenu */
		{	SGLbool v; 
		v = SDY1_DMI_DMI_G_openLevelMenu(SDY1_DMI_L_DMI());
			CTX_testDMI.SAO_CTX_inC_testDMI.DMI_openLevelMenu = v;
		}
		/* DMI_InputFieldAck <= InputFieldAck */
		{	SGLbool v; 
		v = SDY1_DMI_DMI_G_InputFieldAck(SDY1_DMI_L_DMI());
			CTX_testDMI.SAO_CTX_inC_testDMI.DMI_InputFieldAck = v;
		}
		/* DMI_textMsgAck <= textMsgAck */
		{	SGLbool v; 
		v = SDY1_DMI_DMI_G_textMsgAck(SDY1_DMI_L_DMI());
			CTX_testDMI.SAO_CTX_inC_testDMI.DMI_textMsgAck = v;
		}
		/* DMI_confirmTrainData <= confirmTrainData */
		{	SGLbool v; 
		v = SDY1_DMI_DMI_G_confirmTrainData(SDY1_DMI_L_DMI());
			CTX_testDMI.SAO_CTX_inC_testDMI.DMI_confirmTrainData = v;
		}
		/* DMI_closeButton <= closeButton */
		{	SGLbool v; 
		v = SDY1_DMI_DMI_G_closeButton(SDY1_DMI_L_DMI());
			CTX_testDMI.SAO_CTX_inC_testDMI.DMI_closeButton = v;
		}
		/* DMI_traindataAck <= traindataAck */
		{	SGLbool v; 
		v = SDY1_DMI_DMI_G_traindataAck(SDY1_DMI_L_DMI());
			CTX_testDMI.SAO_CTX_inC_testDMI.DMI_traindataAck = v;
		}
		/* DMI_traindataNoAck <= traindataNoAck */
		{	SGLbool v; 
		v = SDY1_DMI_DMI_G_traindataNoAck(SDY1_DMI_L_DMI());
			CTX_testDMI.SAO_CTX_inC_testDMI.DMI_traindataNoAck = v;
		}
		/* DMI_openDriverID <= openDriverID */
		{	SGLbool v; 
		v = SDY1_DMI_DMI_G_openDriverID(SDY1_DMI_L_DMI());
			CTX_testDMI.SAO_CTX_inC_testDMI.DMI_openDriverID = v;
		}
		/* DMI_openTrainDataWindow <= openTrainData */
		{	SGLbool v; 
		v = SDY1_DMI_DMI_G_openTrainData(SDY1_DMI_L_DMI());
			CTX_testDMI.SAO_CTX_inC_testDMI.DMI_openTrainDataWindow = v;
		}
		/* DMI_keypad <= keyarray */
		{	SGLbool v[12]; 
			kcg_assign(v, (SDY1_DMI_DMI_G_keyarray(SDY1_DMI_L_DMI())), sizeof(v));
			{	int i3;
				for (i3 = 0; i3<12; i3++) {
					CTX_testDMI.SAO_CTX_inC_testDMI.DMI_keypad[i3] = v[i3];
				}
			}
		}
		/* DMI_traindataYesAck <= traindataYesAck */
		{	SGLbool v; 
		v = SDY1_DMI_DMI_G_traindataYesAck(SDY1_DMI_L_DMI());
			CTX_testDMI.SAO_CTX_inC_testDMI.DMI_traindataYesAck = v;
		}
		/* DMI_openTrainRN <= openTrainRN */
		{	SGLbool v; 
		v = SDY1_DMI_DMI_G_openTrainRN(SDY1_DMI_L_DMI());
			CTX_testDMI.SAO_CTX_inC_testDMI.DMI_openTrainRN = v;
		}
		/* DMI_startRequest <= startRequest */
		{	SGLbool v; 
		v = SDY1_DMI_DMI_G_startRequest(SDY1_DMI_L_DMI());
			CTX_testDMI.SAO_CTX_inC_testDMI.DMI_startRequest = v;
		}
		/* DMI_MousePressed <= MousePressed */
		{	SGLbool v; 
		v = SDY1_DMI_DMI_G_MousePressed(SDY1_DMI_L_DMI());
			CTX_testDMI.SAO_CTX_inC_testDMI.DMI_MousePressed = v;
		}
		/* DMI_ScrollDown <= scrollDown */
		{	SGLbool v; 
		v = SDY1_DMI_DMI_G_scrollDown(SDY1_DMI_L_DMI());
			CTX_testDMI.SAO_CTX_inC_testDMI.DMI_ScrollDown = v;
		}
		/* DMI_ScrollUp <= scrollUp */
		{	SGLbool v; 
		v = SDY1_DMI_DMI_G_scrollUp(SDY1_DMI_L_DMI());
			CTX_testDMI.SAO_CTX_inC_testDMI.DMI_ScrollUp = v;
		}
		SDY1_DMI__unlockio();
}

void MODEL_outputs() {
			/* Connect SCADE Suite => Graphical Panels */
		SDY1_DMI__lockio();
		/* DMI_PlanningAreaVisibility_toDisplay => PlanningAreaVisibility */
		SDY1_DMI_DMI_S_PlanningAreaVisibility(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_PlanningAreaVisibility_toDisplay);
		/* DMI_D_Scale_toDisplay => D_Scale */
		{	SGLfloat v[9]; 
			{	int i3;
				for (i3 = 0; i3<9; i3++) {
					v[i3] = CTX_testDMI.SAO_CTX_outC_testDMI.DMI_D_Scale_toDisplay[i3];
				}
			}
			SDY1_DMI_DMI_S_D_Scale(SDY1_DMI_L_DMI(), v);
		}
		/* DMI_D_GradientVisible_toDisplay => D_GradientsVisible */
		{	SGLbool v[32]; 
			{	int i3;
				for (i3 = 0; i3<32; i3++) {
					v[i3] = CTX_testDMI.SAO_CTX_outC_testDMI.DMI_D_GradientVisible_toDisplay[i3];
				}
			}
			SDY1_DMI_DMI_S_D_GradientsVisible(SDY1_DMI_L_DMI(), v);
		}
		/* DMI_D_PASP_Distances_toDisplay => D_PASP_BreakPointPositions */
		{	SGLfloat v[4]; 
			{	int i3;
				for (i3 = 0; i3<4; i3++) {
					v[i3] = CTX_testDMI.SAO_CTX_outC_testDMI.DMI_D_PASP_Distances_toDisplay[i3];
				}
			}
			SDY1_DMI_DMI_S_D_PASP_BreakPointPositions(SDY1_DMI_L_DMI(), v);
		}
		/* DMI_D_PASP_Speeds_toDisplay => D_PASP_FilteredSpeeds */
		{	SGLfloat v[4]; 
			{	int i3;
				for (i3 = 0; i3<4; i3++) {
					v[i3] = CTX_testDMI.SAO_CTX_outC_testDMI.DMI_D_PASP_Speeds_toDisplay[i3];
				}
			}
			SDY1_DMI_DMI_S_D_PASP_FilteredSpeeds(SDY1_DMI_L_DMI(), v);
		}
		/* DMI_D_SPDI_SpeedChangePosition_toDisplay => D_SPDI_speedChangePosition */
		{	SGLfloat v[10]; 
			{	int i3;
				for (i3 = 0; i3<10; i3++) {
					v[i3] = CTX_testDMI.SAO_CTX_outC_testDMI.DMI_D_SPDI_SpeedChangePosition_toDisplay[i3];
				}
			}
			SDY1_DMI_DMI_S_D_SPDI_speedChangePosition(SDY1_DMI_L_DMI(), v);
		}
		/* DMI_D_SPDI_SpeedChangeIndex_toDisplay => D_SPID_SpeedChangeIndex */
		{	SGLlong v[10]; 
			{	int i3;
				for (i3 = 0; i3<10; i3++) {
					v[i3] = CTX_testDMI.SAO_CTX_outC_testDMI.DMI_D_SPDI_SpeedChangeIndex_toDisplay[i3];
				}
			}
			SDY1_DMI_DMI_S_D_SPID_SpeedChangeIndex(SDY1_DMI_L_DMI(), v);
		}
		/* DMI_D_SPDI_SpeedChangeSymbolsVisible_toDisplay => D_SPDI_SpeedChangeVisible */
		{	SGLbool v[10]; 
			{	int i3;
				for (i3 = 0; i3<10; i3++) {
					v[i3] = CTX_testDMI.SAO_CTX_outC_testDMI.DMI_D_SPDI_SpeedChangeSymbolsVisible_toDisplay[i3];
				}
			}
			SDY1_DMI_DMI_S_D_SPDI_SpeedChangeVisible(SDY1_DMI_L_DMI(), v);
		}
		/* DMI_isAuxiliarMsg_toDisplay => isAuxiliarMsg */
		SDY1_DMI_DMI_S_isAuxiliarMsg(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_isAuxiliarMsg_toDisplay);
		/* DMI_Array_mm_toDisplay => Array_mm */
		{	SGLfloat v[5]; 
			{	int i3;
				for (i3 = 0; i3<5; i3++) {
					v[i3] = CTX_testDMI.SAO_CTX_outC_testDMI.DMI_Array_mm_toDisplay[i3];
				}
			}
			SDY1_DMI_DMI_S_Array_mm(SDY1_DMI_L_DMI(), v);
		}
		/* DMI_Array_hh_toDisplay => Array_hh */
		{	SGLfloat v[5]; 
			{	int i3;
				for (i3 = 0; i3<5; i3++) {
					v[i3] = CTX_testDMI.SAO_CTX_outC_testDMI.DMI_Array_hh_toDisplay[i3];
				}
			}
			SDY1_DMI_DMI_S_Array_hh(SDY1_DMI_L_DMI(), v);
		}
		/* DMI_PlainText_toDisplay => PlainText */
		{	SGLbyte v[5][30]; 
			{	int i3;
				for (i3 = 0; i3<5; i3++) {
					{	int i5;
						for (i5 = 0; i5<30; i5++) {
							v[i3][i5] = CTX_testDMI.SAO_CTX_outC_testDMI.DMI_PlainText_toDisplay[i3][i5];
						}
					}
				}
			}
			SDY1_DMI_DMI_S_PlainText(SDY1_DMI_L_DMI(), v);
		}
		/* DMI_levelMenuVisibility_toDisplay => levelMenuVisibility */
		SDY1_DMI_DMI_S_levelMenuVisibility(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_levelMenuVisibility_toDisplay);
		/* DMI_ArrayLevelIndex_toDisplay => ArrayLevelIndex */
		{	SGLlong v[12]; 
			{	int i3;
				for (i3 = 0; i3<12; i3++) {
					v[i3] = CTX_testDMI.SAO_CTX_outC_testDMI.DMI_ArrayLevelIndex_toDisplay[i3];
				}
			}
			SDY1_DMI_DMI_S_ArrayLevelIndex(SDY1_DMI_L_DMI(), v);
		}
		/* DMI_IndexLevel_toDisplay => LevelIndex */
		SDY1_DMI_DMI_S_LevelIndex(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_IndexLevel_toDisplay);
		/* DMI_IndexFixedMsg_toDisplay => IndexFixedMsg */
		{	SGLlong v[5]; 
			{	int i3;
				for (i3 = 0; i3<5; i3++) {
					v[i3] = CTX_testDMI.SAO_CTX_outC_testDMI.DMI_IndexFixedMsg_toDisplay[i3];
				}
			}
			SDY1_DMI_DMI_S_IndexFixedMsg(SDY1_DMI_L_DMI(), v);
		}
		/* DMI_SingleMsgAckRequiredVisibility_toDysplay => SingleMsgAckRequiredVisibility */
		SDY1_DMI_DMI_S_SingleMsgAckRequiredVisibility(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_SingleMsgAckRequiredVisibility_toDysplay);
		/* DMI_InterpolatedDistanceToTarget_toDisplay => InterpolatedDistanceToTarget */
		SDY1_DMI_DMI_S_InterpolatedDistanceToTarget(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_InterpolatedDistanceToTarget_toDisplay);
		/* DMI_ArrayOfMsgIndex_toDisplay => ArrayOfMsgIndex */
		{	SGLlong v[5]; 
			{	int i3;
				for (i3 = 0; i3<5; i3++) {
					v[i3] = CTX_testDMI.SAO_CTX_outC_testDMI.DMI_ArrayOfMsgIndex_toDisplay[i3];
				}
			}
			SDY1_DMI_DMI_S_ArrayOfMsgIndex(SDY1_DMI_L_DMI(), v);
		}
		/* DMI_iconGroupIndex_toDisplay => iconGroupIndex */
		SDY1_DMI_DMI_S_iconGroupIndex(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_iconGroupIndex_toDisplay);
		/* DMI_TrainSpeed_toDisplay => TrainSpeed */
		SDY1_DMI_DMI_S_TrainSpeed(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_TrainSpeed_toDisplay);
		/* DMI_StatusSymbolVisibility_toDisplay => StatusSymbolVisibility */
		SDY1_DMI_DMI_S_StatusSymbolVisibility(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_StatusSymbolVisibility_toDisplay);
		/* DMI_traindataValidWinVisibility_toDisplay => traindataValidWinVisibility */
		SDY1_DMI_DMI_S_traindataValidWinVisibility(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_traindataValidWinVisibility_toDisplay);
		/* DMI_Vtarget_permVisibility_toDisplay => Vtarget_permVisible */
		SDY1_DMI_DMI_S_Vtarget_permVisible(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_Vtarget_permVisibility_toDisplay);
		/* DMI_GradientsStart_toDisplay => D_GradientsStartInterpolated */
		{	SGLfloat v[32]; 
			{	int i3;
				for (i3 = 0; i3<32; i3++) {
					v[i3] = CTX_testDMI.SAO_CTX_outC_testDMI.DMI_GradientsStart_toDisplay[i3];
				}
			}
			SDY1_DMI_DMI_S_D_GradientsStartInterpolated(SDY1_DMI_L_DMI(), v);
		}
		/* DMI_trainAirtightIndex_toDisplay => trainAirtightIndex */
		SDY1_DMI_DMI_S_trainAirtightIndex(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_trainAirtightIndex_toDisplay);
		/* DMI_yellowBorderC1Area_toDisplay => yellowBorderC1Area */
		SDY1_DMI_DMI_S_yellowBorderC1Area(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_yellowBorderC1Area_toDisplay);
		/* DMI_SpeedDigitTwo_toDisplay => SpeedDigitTwo */
		SDY1_DMI_DMI_S_SpeedDigitTwo(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_SpeedDigitTwo_toDisplay);
		/* DMI_DriverID_Display_toDisplay => DriverID_Display */
		{	SGLlong v[9]; 
			{	int i3;
				for (i3 = 0; i3<9; i3++) {
					v[i3] = CTX_testDMI.SAO_CTX_outC_testDMI.DMI_DriverID_Display_toDisplay[i3];
				}
			}
			SDY1_DMI_DMI_S_DriverID_Display(SDY1_DMI_L_DMI(), v);
		}
		/* DMI_yellowBorderMsg_toDisplay => yellowBorderMsg */
		SDY1_DMI_DMI_S_yellowBorderMsg(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_yellowBorderMsg_toDisplay);
		/* DMI_Vinterv_Color_toDisplay => VintervColor */
		SDY1_DMI_DMI_S_VintervColor(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_Vinterv_Color_toDisplay);
		/* DMI_DistanceToTarget_toDisplay => DistanceToTarget */
		SDY1_DMI_DMI_S_DistanceToTarget(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_DistanceToTarget_toDisplay);
		/* DMI_ModeSymbol_toDisplay => ModeSymbol */
		SDY1_DMI_DMI_S_ModeSymbol(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_ModeSymbol_toDisplay);
		/* DMI_modeSymbolAnnouncementIndex_toDisplay => ModeSymbolAnnouncement */
		SDY1_DMI_DMI_S_ModeSymbolAnnouncement(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_modeSymbolAnnouncementIndex_toDisplay);
		/* DMI_ETCS_LevelSymbol_toDisplay => LevelSymbol */
		SDY1_DMI_DMI_S_LevelSymbol(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_ETCS_LevelSymbol_toDisplay);
		/* DMI_ArrayButtonsEnabler_toDisplay => buttonEnabler */
		{	SGLlong v[30]; 
			{	int i3;
				for (i3 = 0; i3<30; i3++) {
					v[i3] = CTX_testDMI.SAO_CTX_outC_testDMI.DMI_ArrayButtonsEnabler_toDisplay[i3];
				}
			}
			SDY1_DMI_DMI_S_buttonEnabler(SDY1_DMI_L_DMI(), v);
		}
		/* DMI_trainBrakePerc_toDisplay => trainBrakePerc */
		SDY1_DMI_DMI_S_trainBrakePerc(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_trainBrakePerc_toDisplay);
		/* DMI_VreleaseColor_toDisplay => VreleaseColor */
		SDY1_DMI_DMI_S_VreleaseColor(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_VreleaseColor_toDisplay);
		/* DMI_SpeedPermitted_toDisplay => Vperm */
		SDY1_DMI_DMI_S_Vperm(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_SpeedPermitted_toDisplay);
		/* DMI_trainCategoryIndex_toDisplay => indexTrainCategory */
		SDY1_DMI_DMI_S_indexTrainCategory(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_trainCategoryIndex_toDisplay);
		/* DMI_levelSymbolAnnouncementIndex_toDisplay => LevelSymbolAnncouncement */
		SDY1_DMI_DMI_S_LevelSymbolAnncouncement(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_levelSymbolAnnouncementIndex_toDisplay);
		/* DMI_TrainDataWindowVisibility_toDisplay => TrainDataWindowVisibility */
		SDY1_DMI_DMI_S_TrainDataWindowVisibility(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_TrainDataWindowVisibility_toDisplay);
		/* DMI_StatusSymbolBrake_toDisplay => StatusSymbolBrake */
		SDY1_DMI_DMI_S_StatusSymbolBrake(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_StatusSymbolBrake_toDisplay);
		/* DMI_traindataYesNoIndex_toDisplay => traindataYesNoIndex */
		SDY1_DMI_DMI_S_traindataYesNoIndex(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_traindataYesNoIndex_toDisplay);
		/* DMI_vtarget_permColor_toDisplay => Vtarget_permColor */
		SDY1_DMI_DMI_S_Vtarget_permColor(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_vtarget_permColor_toDisplay);
		/* DMI_GradientsEnd_toDisplay => D_GradientsEndInterpolated */
		{	SGLfloat v[32]; 
			{	int i3;
				for (i3 = 0; i3<32; i3++) {
					v[i3] = CTX_testDMI.SAO_CTX_outC_testDMI.DMI_GradientsEnd_toDisplay[i3];
				}
			}
			SDY1_DMI_DMI_S_D_GradientsEndInterpolated(SDY1_DMI_L_DMI(), v);
		}
		/* DMI_RBC_status_symbol_toDisplay => RBC_status_symbol */
		SDY1_DMI_DMI_S_RBC_status_symbol(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_RBC_status_symbol_toDisplay);
		/* DMI_TrainRN_Display_toDisplay => TrainRN_Display */
		{	SGLlong v[9]; 
			{	int i3;
				for (i3 = 0; i3<9; i3++) {
					v[i3] = CTX_testDMI.SAO_CTX_outC_testDMI.DMI_TrainRN_Display_toDisplay[i3];
				}
			}
			SDY1_DMI_DMI_S_TrainRN_Display(SDY1_DMI_L_DMI(), v);
		}
		/* DMI_trainLoadingGougeIndex_toDisplay => trainLoadingGaugeIndex */
		SDY1_DMI_DMI_S_trainLoadingGaugeIndex(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_trainLoadingGougeIndex_toDisplay);
		/* DMI_hourGlassCounter_toDisplay => translateHourGlass */
		SDY1_DMI_DMI_S_translateHourGlass(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_hourGlassCounter_toDisplay);
		/* DMI_SpeedDigitThree_toDisplay => SpeedDigitThree */
		SDY1_DMI_DMI_S_SpeedDigitThree(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_SpeedDigitThree_toDisplay);
		/* DMI_ModeSymbolVisibility_toDisplay => ModeSymbolVisibility */
		SDY1_DMI_DMI_S_ModeSymbolVisibility(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_ModeSymbolVisibility_toDisplay);
		/* DMI_closeButtonIndex_toDisplay => closeButtonIndex */
		SDY1_DMI_DMI_S_closeButtonIndex(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_closeButtonIndex_toDisplay);
		/* DMI_yellowBorderBrakeSymbol_toDisplay => yellowBorderBrakeSymbol */
		SDY1_DMI_DMI_S_yellowBorderBrakeSymbol(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_yellowBorderBrakeSymbol_toDisplay);
		/* DMI_SpeedIntervention_toDisplay => Vinterv */
		SDY1_DMI_DMI_S_Vinterv(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_SpeedIntervention_toDisplay);
		/* DMI_LevelSymbolVisibility_toDisplay => LevelSymbolVisibility */
		SDY1_DMI_DMI_S_LevelSymbolVisibility(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_LevelSymbolVisibility_toDisplay);
		/* DMI_DistanceToTargetVisible_toDisplay => DistanceToTargetVisibilityDigital */
		SDY1_DMI_DMI_S_DistanceToTargetVisibilityDigital(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_DistanceToTargetVisible_toDisplay);
		/* DMI_trainMaxspeed_toDisplay => trainMaxSpeed */
		SDY1_DMI_DMI_S_trainMaxSpeed(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_trainMaxspeed_toDisplay);
		/* DMI_VtargetColor_toDisplay => VtargetColor */
		SDY1_DMI_DMI_S_VtargetColor(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_VtargetColor_toDisplay);
		/* DMI_SpeedRelease_toDisplay => Vrelease */
		SDY1_DMI_DMI_S_Vrelease(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_SpeedRelease_toDisplay);
		/* DMI_CloseButtonEnabler_toDisplay => closeButtonEnabler */
		SDY1_DMI_DMI_S_closeButtonEnabler(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_CloseButtonEnabler_toDisplay);
		/* DMI_PointerColor_toDisplay => PointerColor */
		SDY1_DMI_DMI_S_PointerColor(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_PointerColor_toDisplay);
		/* DMI_trainAxleloadIndex_toDisplay => trainAxleLoad */
		SDY1_DMI_DMI_S_trainAxleLoad(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_trainAxleloadIndex_toDisplay);
		/* DMI_hourGlassVisibility_toDisplay => hourGlassVisibility */
		SDY1_DMI_DMI_S_hourGlassVisibility(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_hourGlassVisibility_toDisplay);
		/* DMI_SpeedDigitOne_toDisplay => SpeedDigitOne */
		SDY1_DMI_DMI_S_SpeedDigitOne(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_SpeedDigitOne_toDisplay);
		/* DMI_DistanceToTargetBarVisibility_toDisplay => DistanceToTargetBarVisibility */
		SDY1_DMI_DMI_S_DistanceToTargetBarVisibility(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_DistanceToTargetBarVisibility_toDisplay);
		/* DMI_Vinterv_Visibility_toDisplay => VintervVisible */
		SDY1_DMI_DMI_S_VintervVisible(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_Vinterv_Visibility_toDisplay);
		/* DMI_TrainPosition_toDisplay => TrainPosition */
		SDY1_DMI_DMI_S_TrainPosition(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_TrainPosition_toDisplay);
		/* DMI_GradientsValue_toDisplay => D_GradientsValue */
		{	SGLfloat v[32]; 
			{	int i3;
				for (i3 = 0; i3<32; i3++) {
					v[i3] = CTX_testDMI.SAO_CTX_outC_testDMI.DMI_GradientsValue_toDisplay[i3];
				}
			}
			SDY1_DMI_DMI_S_D_GradientsValue(SDY1_DMI_L_DMI(), v);
		}
		/* DMI_trainLenght_toDisplay => trainLenght */
		SDY1_DMI_DMI_S_trainLenght(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_trainLenght_toDisplay);
		/* DMI_VpermColor_toDisplay => VpermColor */
		SDY1_DMI_DMI_S_VpermColor(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_VpermColor_toDisplay);
		/* DMI_SpeedTarget_toDisplay => Vtarget */
		SDY1_DMI_DMI_S_Vtarget(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_SpeedTarget_toDisplay);
		/* DMI_window_mask_visibility__toDisplay => window_mask */
		{	SGLbool v[15]; 
			{	int i3;
				for (i3 = 0; i3<15; i3++) {
					v[i3] = CTX_testDMI.SAO_CTX_outC_testDMI.DMI_window_mask_visibility__toDisplay[i3];
				}
			}
			SDY1_DMI_DMI_S_window_mask(SDY1_DMI_L_DMI(), v);
		}
		/* DMI_openDesk_toDisplay => openDesk */
		SDY1_DMI_DMI_S_openDesk(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_openDesk_toDisplay);
		/* DMI_D_PASP_IndicationMarker_toDisplay => D_PASP_IndicationMarkerPosition */
		{	SGLfloat v[1]; 
			{	int i3;
				for (i3 = 0; i3<1; i3++) {
					v[i3] = CTX_testDMI.SAO_CTX_outC_testDMI.DMI_D_PASP_IndicationMarker_toDisplay[i3];
				}
			}
			SDY1_DMI_DMI_S_D_PASP_IndicationMarkerPosition(SDY1_DMI_L_DMI(), v);
		}
		/* DMI_ScrollDownEnableIndex => scrollDownEnableTypeIndex */
		SDY1_DMI_DMI_S_scrollDownEnableTypeIndex(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_ScrollDownEnableIndex);
		/* DMI_ScrollUpEnableIndex => scrollUpEnableTypeIndex */
		SDY1_DMI_DMI_S_scrollUpEnableTypeIndex(SDY1_DMI_L_DMI(), CTX_testDMI.SAO_CTX_outC_testDMI.DMI_ScrollUpEnableIndex);
		/* DMI_localTime => localTimeArray */
		{	SGLfloat v[4]; 
			{	int i3;
				for (i3 = 0; i3<4; i3++) {
					v[i3] = CTX_testDMI.SAO_CTX_outC_testDMI.DMI_localTime[i3];
				}
			}
			SDY1_DMI_DMI_S_localTimeArray(SDY1_DMI_L_DMI(), v);
		}

		/* Perform Graphical Panels drawings */
		SDY1_DMI__draw();

}

int main(int argc, char **argv){

	do {
		memset(&CTX_testDMI.SAO_CTX_inC_testDMI, 0, sizeof(CTX_testDMI.SAO_CTX_inC_testDMI));
	    testDMI_init(&CTX_testDMI.SAO_CTX_outC_testDMI);

		/* Initialize Graphical Panels drawings */
		SDY1_DMI__init();
		SDY1_DMI__draw();

		do {

			/* Exit point*/
			CTX_testDMI.SAO_CTX_inC_testDMI.finalize = SDY1_DMI__cancelled();
			/* CTX_testDMI.SAO_CTX_inC_testDMI.getC = "getchar()"; */

			MODEL_inputs();

			/* Perform SCADE Suite cycle computation */
			testDMI( &CTX_testDMI.SAO_CTX_inC_testDMI, &CTX_testDMI.SAO_CTX_outC_testDMI );

			MODEL_outputs();

			if (!CTX_testDMI.SAO_CTX_inC_testDMI.fromSDM.sdm.valid)
				memcpy(&CTX_testDMI.SAO_CTX_inC_testDMI.fromSDM, fakeFromSDM, sizeof(CTX_testDMI.SAO_CTX_inC_testDMI.fromSDM));

		} while(CTX_testDMI.SAO_CTX_outC_testDMI.running);

		if (!SDY1_DMI__cancelled()) {
			sleep(10); /* since it is meant to loop after possible recovery, wait a little */
		}
	} while (!SDY1_DMI__cancelled());
}

