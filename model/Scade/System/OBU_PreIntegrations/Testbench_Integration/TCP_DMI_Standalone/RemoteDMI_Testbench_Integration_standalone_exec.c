
/* Code generated for Standalone Executable */

#include "SDY1_DMI.h"

/* Contexts for SCADE Suite KCG Code */

/* includes */
#include "RemoteDMI_Testbench_Integration.h"


/* Declare scade context */
typedef struct {
    inC_RemoteDMI_Testbench_Integration SAO_CTX_inC_RemoteDMI_Testbench_Integration;
    outC_RemoteDMI_Testbench_Integration SAO_CTX_outC_RemoteDMI_Testbench_Integration;
} WU_RemoteDMI_Testbench_Integration;
#define WU_CTX_TYPE_RemoteDMI WU_RemoteDMI_Testbench_Integration
#define WU_CTX_TYPE_RemoteDMI_SIZE sizeof(WU_RemoteDMI_Testbench_Integration)


static WU_RemoteDMI_Testbench_Integration CTX_RemoteDMI_Testbench_Integration;



#include <windows.h>
#include <time.h>
#define PERIOD (clock_t)10.0
int main(int argc, char **argv){

	/* Local declarations */
	clock_t __start, __finish;
	long __duration;

	/* Reset SCADE Suite KCG output context */
	    RemoteDMI_reset_Testbench_Integration(&CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration);

	/* Initialize Graphical Panels drawings */
	SDY1_DMI__init();
	SDY1_DMI__draw();

	/* Loop forever */
	while(1) {

		/* Record starting time */
		__start = clock();

		/* Exit point*/
		if (SDY1_DMI__cancelled()) break;

		/* Connect Graphical Panels => SCADE Suite */
		SDY1_DMI__lockio();
		/* DMI_C1AreaAck <= C1AreaAck */
		{	SGLbool v; 
		v = SDY1_DMI_DMI_G_C1AreaAck(SDY1_DMI_L_DMI());
			CTX_RemoteDMI_Testbench_Integration.SAO_CTX_inC_RemoteDMI_Testbench_Integration.DMI_C1AreaAck = v;
		}
		/* DMI_closeButtonMain <= closeMainMenu */
		{	SGLbool v; 
		v = SDY1_DMI_DMI_G_closeMainMenu(SDY1_DMI_L_DMI());
			CTX_RemoteDMI_Testbench_Integration.SAO_CTX_inC_RemoteDMI_Testbench_Integration.DMI_closeButtonMain = v;
		}
		/* DMI_ShowPlanningArea_fromDisplay <= ShowPlanningArea */
		{	SGLbool v; 
		v = SDY1_DMI_DMI_G_ShowPlanningArea(SDY1_DMI_L_DMI());
			CTX_RemoteDMI_Testbench_Integration.SAO_CTX_inC_RemoteDMI_Testbench_Integration.DMI_ShowPlanningArea_fromDisplay = v;
		}
		/* DMI_HidePlanningArea_fromDisplay <= hidePlanningArea */
		{	SGLbool v; 
		v = SDY1_DMI_DMI_G_hidePlanningArea(SDY1_DMI_L_DMI());
			CTX_RemoteDMI_Testbench_Integration.SAO_CTX_inC_RemoteDMI_Testbench_Integration.DMI_HidePlanningArea_fromDisplay = v;
		}
		/* DMI_OverD12_frpmDisplay <= OverD12 */
		{	SGLbool v; 
		v = SDY1_DMI_DMI_G_OverD12(SDY1_DMI_L_DMI());
			CTX_RemoteDMI_Testbench_Integration.SAO_CTX_inC_RemoteDMI_Testbench_Integration.DMI_OverD12_frpmDisplay = v;
		}
		/* DMI_OverD9_fromDisplay <= OverD9 */
		{	SGLbool v; 
		v = SDY1_DMI_DMI_G_OverD9(SDY1_DMI_L_DMI());
			CTX_RemoteDMI_Testbench_Integration.SAO_CTX_inC_RemoteDMI_Testbench_Integration.DMI_OverD9_fromDisplay = v;
		}
		/* DMI_openMainMenu_fromDisplay <= OpenMainMenu */
		{	SGLbool v; 
		v = SDY1_DMI_DMI_G_OpenMainMenu(SDY1_DMI_L_DMI());
			CTX_RemoteDMI_Testbench_Integration.SAO_CTX_inC_RemoteDMI_Testbench_Integration.DMI_openMainMenu_fromDisplay = v;
		}
		/* DMI_openLevelMenu <= openLevelMenu */
		{	SGLbool v; 
		v = SDY1_DMI_DMI_G_openLevelMenu(SDY1_DMI_L_DMI());
			CTX_RemoteDMI_Testbench_Integration.SAO_CTX_inC_RemoteDMI_Testbench_Integration.DMI_openLevelMenu = v;
		}
		/* DMI_InputFieldAck <= InputFieldAck */
		{	SGLbool v; 
		v = SDY1_DMI_DMI_G_InputFieldAck(SDY1_DMI_L_DMI());
			CTX_RemoteDMI_Testbench_Integration.SAO_CTX_inC_RemoteDMI_Testbench_Integration.DMI_InputFieldAck = v;
		}
		/* DMI_textMsgAck <= textMsgAck */
		{	SGLbool v; 
		v = SDY1_DMI_DMI_G_textMsgAck(SDY1_DMI_L_DMI());
			CTX_RemoteDMI_Testbench_Integration.SAO_CTX_inC_RemoteDMI_Testbench_Integration.DMI_textMsgAck = v;
		}
		/* DMI_confirmTrainData <= confirmTrainData */
		{	SGLbool v; 
		v = SDY1_DMI_DMI_G_confirmTrainData(SDY1_DMI_L_DMI());
			CTX_RemoteDMI_Testbench_Integration.SAO_CTX_inC_RemoteDMI_Testbench_Integration.DMI_confirmTrainData = v;
		}
		/* DMI_closeButton <= closeButton */
		{	SGLbool v; 
		v = SDY1_DMI_DMI_G_closeButton(SDY1_DMI_L_DMI());
			CTX_RemoteDMI_Testbench_Integration.SAO_CTX_inC_RemoteDMI_Testbench_Integration.DMI_closeButton = v;
		}
		/* DMI_traindataAck <= traindataAck */
		{	SGLbool v; 
		v = SDY1_DMI_DMI_G_traindataAck(SDY1_DMI_L_DMI());
			CTX_RemoteDMI_Testbench_Integration.SAO_CTX_inC_RemoteDMI_Testbench_Integration.DMI_traindataAck = v;
		}
		/* DMI_traindataNoAck <= traindataNoAck */
		{	SGLbool v; 
		v = SDY1_DMI_DMI_G_traindataNoAck(SDY1_DMI_L_DMI());
			CTX_RemoteDMI_Testbench_Integration.SAO_CTX_inC_RemoteDMI_Testbench_Integration.DMI_traindataNoAck = v;
		}
		/* DMI_openDriverID <= openDriverID */
		{	SGLbool v; 
		v = SDY1_DMI_DMI_G_openDriverID(SDY1_DMI_L_DMI());
			CTX_RemoteDMI_Testbench_Integration.SAO_CTX_inC_RemoteDMI_Testbench_Integration.DMI_openDriverID = v;
		}
		/* DMI_openTrainDataWindow <= openTrainData */
		{	SGLbool v; 
		v = SDY1_DMI_DMI_G_openTrainData(SDY1_DMI_L_DMI());
			CTX_RemoteDMI_Testbench_Integration.SAO_CTX_inC_RemoteDMI_Testbench_Integration.DMI_openTrainDataWindow = v;
		}
		/* DMI_keypad <= keyarray */
		{	SGLbool v[12]; 
			kcg_assign(v, (SDY1_DMI_DMI_G_keyarray(SDY1_DMI_L_DMI())), sizeof(v));
			{	int i3;
				for (i3 = 0; i3<12; i3++) {
					CTX_RemoteDMI_Testbench_Integration.SAO_CTX_inC_RemoteDMI_Testbench_Integration.DMI_keypad[i3] = v[i3];
				}
			}
		}
		/* DMI_traindataYesAck <= traindataYesAck */
		{	SGLbool v; 
		v = SDY1_DMI_DMI_G_traindataYesAck(SDY1_DMI_L_DMI());
			CTX_RemoteDMI_Testbench_Integration.SAO_CTX_inC_RemoteDMI_Testbench_Integration.DMI_traindataYesAck = v;
		}
		/* DMI_openTrainRN <= openTrainRN */
		{	SGLbool v; 
		v = SDY1_DMI_DMI_G_openTrainRN(SDY1_DMI_L_DMI());
			CTX_RemoteDMI_Testbench_Integration.SAO_CTX_inC_RemoteDMI_Testbench_Integration.DMI_openTrainRN = v;
		}
		/* DMI_startRequest <= startRequest */
		{	SGLbool v; 
		v = SDY1_DMI_DMI_G_startRequest(SDY1_DMI_L_DMI());
			CTX_RemoteDMI_Testbench_Integration.SAO_CTX_inC_RemoteDMI_Testbench_Integration.DMI_startRequest = v;
		}
		/* DMI_MousePressed <= MousePressed */
		{	SGLbool v; 
		v = SDY1_DMI_DMI_G_MousePressed(SDY1_DMI_L_DMI());
			CTX_RemoteDMI_Testbench_Integration.SAO_CTX_inC_RemoteDMI_Testbench_Integration.DMI_MousePressed = v;
		}
		/* DMI_ScrollDown <= scrollDown */
		{	SGLbool v; 
		v = SDY1_DMI_DMI_G_scrollDown(SDY1_DMI_L_DMI());
			CTX_RemoteDMI_Testbench_Integration.SAO_CTX_inC_RemoteDMI_Testbench_Integration.DMI_ScrollDown = v;
		}
		/* DMI_ScrollUp <= scrollUp */
		{	SGLbool v; 
		v = SDY1_DMI_DMI_G_scrollUp(SDY1_DMI_L_DMI());
			CTX_RemoteDMI_Testbench_Integration.SAO_CTX_inC_RemoteDMI_Testbench_Integration.DMI_ScrollUp = v;
		}
		SDY1_DMI__unlockio();
	{
	}

		/* Perform SCADE Suite cycle computation */
		    RemoteDMI_Testbench_Integration( 
        &CTX_RemoteDMI_Testbench_Integration.SAO_CTX_inC_RemoteDMI_Testbench_Integration /* input context */,
        &CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration /* output/memories context */
    );


		/* Connect SCADE Suite => Graphical Panels */
		SDY1_DMI__lockio();
		/* DMI_PlanningAreaVisibility_toDisplay => PlanningAreaVisibility */
		SDY1_DMI_DMI_S_PlanningAreaVisibility(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_PlanningAreaVisibility_toDisplay);
		/* DMI_D_Scale_toDisplay => D_Scale */
		{	SGLfloat v[9]; 
			{	int i3;
				for (i3 = 0; i3<9; i3++) {
					v[i3] = CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_D_Scale_toDisplay[i3];
				}
			}
			SDY1_DMI_DMI_S_D_Scale(SDY1_DMI_L_DMI(), v);
		}
		/* DMI_D_GradientVisible_toDisplay => D_GradientsVisible */
		{	SGLbool v[12]; 
			{	int i3;
				for (i3 = 0; i3<12; i3++) {
					v[i3] = CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_D_GradientVisible_toDisplay[i3];
				}
			}
			SDY1_DMI_DMI_S_D_GradientsVisible(SDY1_DMI_L_DMI(), v);
		}
		/* DMI_D_PASP_Distances_toDisplay => D_PASP_BreakPointPositions */
		{	SGLfloat v[4]; 
			{	int i3;
				for (i3 = 0; i3<4; i3++) {
					v[i3] = CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_D_PASP_Distances_toDisplay[i3];
				}
			}
			SDY1_DMI_DMI_S_D_PASP_BreakPointPositions(SDY1_DMI_L_DMI(), v);
		}
		/* DMI_D_PASP_Speeds_toDisplay => D_PASP_FilteredSpeeds */
		{	SGLfloat v[4]; 
			{	int i3;
				for (i3 = 0; i3<4; i3++) {
					v[i3] = CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_D_PASP_Speeds_toDisplay[i3];
				}
			}
			SDY1_DMI_DMI_S_D_PASP_FilteredSpeeds(SDY1_DMI_L_DMI(), v);
		}
		/* DMI_D_SPDI_SpeedChangePosition_toDisplay => D_SPDI_speedChangePosition */
		{	SGLfloat v[10]; 
			{	int i3;
				for (i3 = 0; i3<10; i3++) {
					v[i3] = CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_D_SPDI_SpeedChangePosition_toDisplay[i3];
				}
			}
			SDY1_DMI_DMI_S_D_SPDI_speedChangePosition(SDY1_DMI_L_DMI(), v);
		}
		/* DMI_D_SPDI_SpeedChangeIndex_toDisplay => D_SPID_SpeedChangeIndex */
		{	SGLlong v[10]; 
			{	int i3;
				for (i3 = 0; i3<10; i3++) {
					v[i3] = CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_D_SPDI_SpeedChangeIndex_toDisplay[i3];
				}
			}
			SDY1_DMI_DMI_S_D_SPID_SpeedChangeIndex(SDY1_DMI_L_DMI(), v);
		}
		/* DMI_D_SPDI_SpeedChangeSymbolsVisible_toDisplay => D_SPDI_SpeedChangeVisible */
		{	SGLbool v[10]; 
			{	int i3;
				for (i3 = 0; i3<10; i3++) {
					v[i3] = CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_D_SPDI_SpeedChangeSymbolsVisible_toDisplay[i3];
				}
			}
			SDY1_DMI_DMI_S_D_SPDI_SpeedChangeVisible(SDY1_DMI_L_DMI(), v);
		}
		/* DMI_isAuxiliarMsg_toDisplay => isAuxiliarMsg */
		SDY1_DMI_DMI_S_isAuxiliarMsg(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_isAuxiliarMsg_toDisplay);
		/* DMI_Array_mm_toDisplay => Array_mm */
		{	SGLfloat v[5]; 
			{	int i3;
				for (i3 = 0; i3<5; i3++) {
					v[i3] = CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_Array_mm_toDisplay[i3];
				}
			}
			SDY1_DMI_DMI_S_Array_mm(SDY1_DMI_L_DMI(), v);
		}
		/* DMI_Array_hh_toDisplay => Array_hh */
		{	SGLfloat v[5]; 
			{	int i3;
				for (i3 = 0; i3<5; i3++) {
					v[i3] = CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_Array_hh_toDisplay[i3];
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
							v[i3][i5] = CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_PlainText_toDisplay[i3][i5];
						}
					}
				}
			}
			SDY1_DMI_DMI_S_PlainText(SDY1_DMI_L_DMI(), v);
		}
		/* DMI_levelMenuVisibility_toDisplay => levelMenuVisibility */
		SDY1_DMI_DMI_S_levelMenuVisibility(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_levelMenuVisibility_toDisplay);
		/* DMI_ArrayLevelIndex_toDisplay => ArrayLevelIndex */
		{	SGLlong v[12]; 
			{	int i3;
				for (i3 = 0; i3<12; i3++) {
					v[i3] = CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_ArrayLevelIndex_toDisplay[i3];
				}
			}
			SDY1_DMI_DMI_S_ArrayLevelIndex(SDY1_DMI_L_DMI(), v);
		}
		/* DMI_IndexLevel_toDisplay => LevelIndex */
		SDY1_DMI_DMI_S_LevelIndex(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_IndexLevel_toDisplay);
		/* DMI_IndexFixedMsg_toDisplay => IndexFixedMsg */
		{	SGLlong v[5]; 
			{	int i3;
				for (i3 = 0; i3<5; i3++) {
					v[i3] = CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_IndexFixedMsg_toDisplay[i3];
				}
			}
			SDY1_DMI_DMI_S_IndexFixedMsg(SDY1_DMI_L_DMI(), v);
		}
		/* DMI_SingleMsgAckRequiredVisibility_toDysplay => SingleMsgAckRequiredVisibility */
		SDY1_DMI_DMI_S_SingleMsgAckRequiredVisibility(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_SingleMsgAckRequiredVisibility_toDysplay);
		/* DMI_InterpolatedDistanceToTarget_toDisplay => InterpolatedDistanceToTarget */
		SDY1_DMI_DMI_S_InterpolatedDistanceToTarget(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_InterpolatedDistanceToTarget_toDisplay);
		/* DMI_ArrayOfMsgIndex_toDisplay => ArrayOfMsgIndex */
		{	SGLlong v[5]; 
			{	int i3;
				for (i3 = 0; i3<5; i3++) {
					v[i3] = CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_ArrayOfMsgIndex_toDisplay[i3];
				}
			}
			SDY1_DMI_DMI_S_ArrayOfMsgIndex(SDY1_DMI_L_DMI(), v);
		}
		/* DMI_iconGroupIndex_toDisplay => iconGroupIndex */
		SDY1_DMI_DMI_S_iconGroupIndex(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_iconGroupIndex_toDisplay);
		/* DMI_TrainSpeed_toDisplay => TrainSpeed */
		SDY1_DMI_DMI_S_TrainSpeed(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_TrainSpeed_toDisplay);
		/* DMI_StatusSymbolVisibility_toDisplay => StatusSymbolVisibility */
		SDY1_DMI_DMI_S_StatusSymbolVisibility(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_StatusSymbolVisibility_toDisplay);
		/* DMI_traindataValidWinVisibility_toDisplay => traindataValidWinVisibility */
		SDY1_DMI_DMI_S_traindataValidWinVisibility(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_traindataValidWinVisibility_toDisplay);
		/* DMI_Vtarget_permVisibility_toDisplay => Vtarget_permVisible */
		SDY1_DMI_DMI_S_Vtarget_permVisible(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_Vtarget_permVisibility_toDisplay);
		/* DMI_GradientsStart_toDisplay => D_GradientsStartInterpolated */
		{	SGLfloat v[12]; 
			{	int i3;
				for (i3 = 0; i3<12; i3++) {
					v[i3] = CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_GradientsStart_toDisplay[i3];
				}
			}
			SDY1_DMI_DMI_S_D_GradientsStartInterpolated(SDY1_DMI_L_DMI(), v);
		}
		/* DMI_trainAirtightIndex_toDisplay => trainAirtightIndex */
		SDY1_DMI_DMI_S_trainAirtightIndex(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_trainAirtightIndex_toDisplay);
		/* DMI_yellowBorderC1Area_toDisplay => yellowBorderC1Area */
		SDY1_DMI_DMI_S_yellowBorderC1Area(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_yellowBorderC1Area_toDisplay);
		/* DMI_SpeedDigitTwo_toDisplay => SpeedDigitTwo */
		SDY1_DMI_DMI_S_SpeedDigitTwo(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_SpeedDigitTwo_toDisplay);
		/* DMI_DriverID_Display_toDisplay => DriverID_Display */
		{	SGLlong v[9]; 
			{	int i3;
				for (i3 = 0; i3<9; i3++) {
					v[i3] = CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_DriverID_Display_toDisplay[i3];
				}
			}
			SDY1_DMI_DMI_S_DriverID_Display(SDY1_DMI_L_DMI(), v);
		}
		/* DMI_yellowBorderMsg_toDisplay => yellowBorderMsg */
		SDY1_DMI_DMI_S_yellowBorderMsg(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_yellowBorderMsg_toDisplay);
		/* DMI_Vinterv_Color_toDisplay => VintervColor */
		SDY1_DMI_DMI_S_VintervColor(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_Vinterv_Color_toDisplay);
		/* DMI_DistanceToTarget_toDisplay => DistanceToTarget */
		SDY1_DMI_DMI_S_DistanceToTarget(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_DistanceToTarget_toDisplay);
		/* DMI_ModeSymbol_toDisplay => ModeSymbol */
		SDY1_DMI_DMI_S_ModeSymbol(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_ModeSymbol_toDisplay);
		/* DMI_modeSymbolAnnouncementIndex_toDisplay => ModeSymbolAnnouncement */
		SDY1_DMI_DMI_S_ModeSymbolAnnouncement(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_modeSymbolAnnouncementIndex_toDisplay);
		/* DMI_ETCS_LevelSymbol_toDisplay => LevelSymbol */
		SDY1_DMI_DMI_S_LevelSymbol(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_ETCS_LevelSymbol_toDisplay);
		/* DMI_ArrayButtonsEnabler_toDisplay => buttonEnabler */
		{	SGLlong v[30]; 
			{	int i3;
				for (i3 = 0; i3<30; i3++) {
					v[i3] = CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_ArrayButtonsEnabler_toDisplay[i3];
				}
			}
			SDY1_DMI_DMI_S_buttonEnabler(SDY1_DMI_L_DMI(), v);
		}
		/* DMI_trainBrakePerc_toDisplay => trainBrakePerc */
		SDY1_DMI_DMI_S_trainBrakePerc(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_trainBrakePerc_toDisplay);
		/* DMI_VreleaseColor_toDisplay => VreleaseColor */
		SDY1_DMI_DMI_S_VreleaseColor(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_VreleaseColor_toDisplay);
		/* DMI_SpeedPermitted_toDisplay => Vperm */
		SDY1_DMI_DMI_S_Vperm(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_SpeedPermitted_toDisplay);
		/* DMI_trainCategoryIndex_toDisplay => indexTrainCategory */
		SDY1_DMI_DMI_S_indexTrainCategory(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_trainCategoryIndex_toDisplay);
		/* DMI_levelSymbolAnnouncementIndex_toDisplay => LevelSymbolAnncouncement */
		SDY1_DMI_DMI_S_LevelSymbolAnncouncement(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_levelSymbolAnnouncementIndex_toDisplay);
		/* DMI_TrainDataWindowVisibility_toDisplay => TrainDataWindowVisibility */
		SDY1_DMI_DMI_S_TrainDataWindowVisibility(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_TrainDataWindowVisibility_toDisplay);
		/* DMI_StatusSymbolBrake_toDisplay => StatusSymbolBrake */
		SDY1_DMI_DMI_S_StatusSymbolBrake(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_StatusSymbolBrake_toDisplay);
		/* DMI_traindataYesNoIndex_toDisplay => traindataYesNoIndex */
		SDY1_DMI_DMI_S_traindataYesNoIndex(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_traindataYesNoIndex_toDisplay);
		/* DMI_vtarget_permColor_toDisplay => Vtarget_permColor */
		SDY1_DMI_DMI_S_Vtarget_permColor(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_vtarget_permColor_toDisplay);
		/* DMI_GradientsEnd_toDisplay => D_GradientEndInterpolated */
		{	SGLfloat v[12]; 
			{	int i3;
				for (i3 = 0; i3<12; i3++) {
					v[i3] = CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_GradientsEnd_toDisplay[i3];
				}
			}
			SDY1_DMI_DMI_S_D_GradientEndInterpolated(SDY1_DMI_L_DMI(), v);
		}
		/* DMI_GradientsEnd_toDisplay => D_GradientsEndInterpolated */
		{	SGLfloat v[12]; 
			{	int i3;
				for (i3 = 0; i3<12; i3++) {
					v[i3] = CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_GradientsEnd_toDisplay[i3];
				}
			}
			SDY1_DMI_DMI_S_D_GradientsEndInterpolated(SDY1_DMI_L_DMI(), v);
		}
		/* DMI_RBC_status_symbol_toDisplay => RBC_status_symbol */
		SDY1_DMI_DMI_S_RBC_status_symbol(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_RBC_status_symbol_toDisplay);
		/* DMI_TrainRN_Display_toDisplay => TrainRN_Display */
		{	SGLlong v[9]; 
			{	int i3;
				for (i3 = 0; i3<9; i3++) {
					v[i3] = CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_TrainRN_Display_toDisplay[i3];
				}
			}
			SDY1_DMI_DMI_S_TrainRN_Display(SDY1_DMI_L_DMI(), v);
		}
		/* DMI_trainLoadingGougeIndex_toDisplay => trainLoadingGaugeIndex */
		SDY1_DMI_DMI_S_trainLoadingGaugeIndex(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_trainLoadingGougeIndex_toDisplay);
		/* DMI_hourGlassCounter_toDisplay => translateHourGlass */
		SDY1_DMI_DMI_S_translateHourGlass(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_hourGlassCounter_toDisplay);
		/* DMI_SpeedDigitThree_toDisplay => SpeedDigitThree */
		SDY1_DMI_DMI_S_SpeedDigitThree(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_SpeedDigitThree_toDisplay);
		/* DMI_ModeSymbolVisibility_toDisplay => ModeSymbolVisibility */
		SDY1_DMI_DMI_S_ModeSymbolVisibility(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_ModeSymbolVisibility_toDisplay);
		/* DMI_closeButtonIndex_toDisplay => closeButtonIndex */
		SDY1_DMI_DMI_S_closeButtonIndex(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_closeButtonIndex_toDisplay);
		/* DMI_yellowBorderBrakeSymbol_toDisplay => yellowBorderBrakeSymbol */
		SDY1_DMI_DMI_S_yellowBorderBrakeSymbol(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_yellowBorderBrakeSymbol_toDisplay);
		/* DMI_SpeedIntervention_toDisplay => Vinterv */
		SDY1_DMI_DMI_S_Vinterv(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_SpeedIntervention_toDisplay);
		/* DMI_LevelSymbolVisibility_toDisplay => LevelSymbolVisibility */
		SDY1_DMI_DMI_S_LevelSymbolVisibility(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_LevelSymbolVisibility_toDisplay);
		/* DMI_DistanceToTargetVisible_toDisplay => DistanceToTargetBarVisibility */
		SDY1_DMI_DMI_S_DistanceToTargetBarVisibility(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_DistanceToTargetVisible_toDisplay);
		/* DMI_trainMaxspeed_toDisplay => trainMaxSpeed */
		SDY1_DMI_DMI_S_trainMaxSpeed(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_trainMaxspeed_toDisplay);
		/* DMI_VtargetColor_toDisplay => VtargetColor */
		SDY1_DMI_DMI_S_VtargetColor(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_VtargetColor_toDisplay);
		/* DMI_SpeedRelease_toDisplay => Vrelease */
		SDY1_DMI_DMI_S_Vrelease(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_SpeedRelease_toDisplay);
		/* DMI_CloseButtonEnabler_toDisplay => closeButtonEnabler */
		SDY1_DMI_DMI_S_closeButtonEnabler(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_CloseButtonEnabler_toDisplay);
		/* DMI_PointerColor_toDisplay => PointerColor */
		SDY1_DMI_DMI_S_PointerColor(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_PointerColor_toDisplay);
		/* DMI_trainAxleloadIndex_toDisplay => trainAxleLoad */
		SDY1_DMI_DMI_S_trainAxleLoad(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_trainAxleloadIndex_toDisplay);
		/* DMI_hourGlassVisibility_toDisplay => hourGlassVisibility */
		SDY1_DMI_DMI_S_hourGlassVisibility(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_hourGlassVisibility_toDisplay);
		/* DMI_SpeedDigitOne_toDisplay => SpeedDigitOne */
		SDY1_DMI_DMI_S_SpeedDigitOne(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_SpeedDigitOne_toDisplay);
		/* DMI_DistanceToTargetBarVisibility_toDisplay => DistanceToTargetVisibilityDigital */
		SDY1_DMI_DMI_S_DistanceToTargetVisibilityDigital(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_DistanceToTargetBarVisibility_toDisplay);
		/* DMI_Vinterv_Visibility_toDisplay => VintervVisible */
		SDY1_DMI_DMI_S_VintervVisible(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_Vinterv_Visibility_toDisplay);
		/* DMI_TrainPosition_toDisplay => TrainPosition */
		SDY1_DMI_DMI_S_TrainPosition(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_TrainPosition_toDisplay);
		/* DMI_GradientsValue_toDisplay => D_GradientsValue */
		{	SGLfloat v[12]; 
			{	int i3;
				for (i3 = 0; i3<12; i3++) {
					v[i3] = CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_GradientsValue_toDisplay[i3];
				}
			}
			SDY1_DMI_DMI_S_D_GradientsValue(SDY1_DMI_L_DMI(), v);
		}
		/* DMI_trainLenght_toDisplay => trainLenght */
		SDY1_DMI_DMI_S_trainLenght(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_trainLenght_toDisplay);
		/* DMI_VpermColor_toDisplay => VpermColor */
		SDY1_DMI_DMI_S_VpermColor(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_VpermColor_toDisplay);
		/* DMI_SpeedTarget_toDisplay => Vtarget */
		SDY1_DMI_DMI_S_Vtarget(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_SpeedTarget_toDisplay);
		/* DMI_window_mask_visibility__toDisplay => window_mask */
		{	SGLbool v[15]; 
			{	int i3;
				for (i3 = 0; i3<15; i3++) {
					v[i3] = CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_window_mask_visibility__toDisplay[i3];
				}
			}
			SDY1_DMI_DMI_S_window_mask(SDY1_DMI_L_DMI(), v);
		}
		/* DMI_openDesk_toDisplay => openDesk */
		SDY1_DMI_DMI_S_openDesk(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_openDesk_toDisplay);
		/* DMI_D_PASP_IndicationMarker_toDisplay => D_PASP_IndicationMarkerPosition */
		{	SGLfloat v[1]; 
			{	int i3;
				for (i3 = 0; i3<1; i3++) {
					v[i3] = CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_D_PASP_IndicationMarker_toDisplay[i3];
				}
			}
			SDY1_DMI_DMI_S_D_PASP_IndicationMarkerPosition(SDY1_DMI_L_DMI(), v);
		}
		/* DMI_ScrollDownEnableIndex => scrollDownEnableTypeIndex */
		SDY1_DMI_DMI_S_scrollDownEnableTypeIndex(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_ScrollDownEnableIndex);
		/* DMI_ScrollUpEnableIndex => scrollUpEnableTypeIndex */
		SDY1_DMI_DMI_S_scrollUpEnableTypeIndex(SDY1_DMI_L_DMI(), CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_ScrollUpEnableIndex);
		/* DMI_localTime => localTimeArray */
		{	SGLfloat v[4]; 
			{	int i3;
				for (i3 = 0; i3<4; i3++) {
					v[i3] = CTX_RemoteDMI_Testbench_Integration.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_localTime[i3];
				}
			}
			SDY1_DMI_DMI_S_localTimeArray(SDY1_DMI_L_DMI(), v);
		}

		/* Perform Graphical Panels drawings */
		SDY1_DMI__draw();
	{
	}

		/* Sleep remaining time to PERIOD */
		__finish = clock();
		__duration = (long) ((double)(__finish - __start) / CLOCKS_PER_SEC * 1000.0);
		if (__duration < PERIOD) {
			Sleep(PERIOD - __duration);
		}

	}

}

