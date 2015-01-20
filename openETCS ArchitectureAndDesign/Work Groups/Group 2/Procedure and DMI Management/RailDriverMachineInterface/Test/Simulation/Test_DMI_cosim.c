
/* Code generated for Graphical Panels Co-simulation */

#include "SDY1_DMI.h"
#include "SDY2_TestPanel.h"
#include "Test_DMI_interface.h"



void AfterSimInit(void){
	SDY1_DMI__init();
	SDY1_DMI__draw();
	SDY2_TestPanel__init();
	SDY2_TestPanel__draw();
}


void BeforeSimStep(void){
	SDY1_DMI__lockio();
	SDY2_TestPanel__lockio();
	/* RP_SpeedTarget <= SpeedTarget */
	{	SGLfloat v; 
		SDY2_TestPanel_O_control_panel__SpeedTarget(&v);
		inputs_ctx.RP_SpeedTarget = v;
	}
	/* RP_SpeedPermitted <= SpeedPermitted */
	{	SGLfloat v; 
		SDY2_TestPanel_O_control_panel__SpeedPermitted(&v);
		inputs_ctx.RP_SpeedPermitted = v;
	}
	/* RP_SpeedRelease <= SpeedRelease */
	{	SGLfloat v; 
		SDY2_TestPanel_O_control_panel__SpeedRelease(&v);
		inputs_ctx.RP_SpeedRelease = v;
	}
	/* OverA <= OverA */
	{	SGLbool v; 
		SDY1_DMI_O_DMI__OverA(&v);
		inputs_ctx.OverA = v;
	}
	/* MousePressed <= MousePressed */
	{	SGLbool v; 
		SDY1_DMI_O_DMI__MousePressed(&v);
		inputs_ctx.MousePressed = v;
	}
	/* VisibleGradients <= VisibleGradients */
	{	SGLbool v[12]; 
		SDY1_DMI_O_DMI__VisibleGradients(&v);
		{	int i2;
			for (i2 = 0; i2<12; i2++) {
				inputs_ctx.VisibleGradients[i2] = v[i2];
			}
		}
	}
	/* Brake <= Brake */
	{	SGLfloat v; 
		SDY2_TestPanel_O_control_panel__Brake(&v);
		inputs_ctx.Brake = v;
	}
	/* lala <= lala */
	{	SGLbool v; 
		SDY1_DMI_O_DMI__lala(&v);
		inputs_ctx.lala = v;
	}
	/* insideButton <= insideButton */
	{	SGLbool v; 
		SDY1_DMI_O_DMI__insideButton(&v);
		inputs_ctx.insideButton = v;
	}
	/* arraykey <= keyarray */
	{	SGLbool v[12]; 
		SDY1_DMI_O_DMI__keyarray(&v);
		{	int i2;
			for (i2 = 0; i2<12; i2++) {
				inputs_ctx.arraykey[i2] = v[i2];
			}
		}
	}
	SDY1_DMI__unlockio();
	SDY2_TestPanel__unlockio();
}


void AfterSimStep(void){
	SDY1_DMI__lockio();
	SDY2_TestPanel__lockio();
	/* TrainPosition => TrainPosition */
	SDY1_DMI_I_DMI__TrainPosition(outputs_ctx.TrainPosition);
	/* TrainSpeed => TrainSpeed */
	SDY1_DMI_I_DMI__TrainSpeed(outputs_ctx.TrainSpeed);
	/* SpeedDigitOne => SpeedDigitOne */
	SDY1_DMI_I_DMI__SpeedDigitOne(outputs_ctx.SpeedDigitOne);
	/* SpeedDigitOne => Value */
	SDY2_TestPanel_I_control_panel__Value(outputs_ctx.SpeedDigitOne);
	/* SpeedDigitTwo => SpeedDigitTwo */
	SDY1_DMI_I_DMI__SpeedDigitTwo(outputs_ctx.SpeedDigitTwo);
	/* SpeedDigitThree => SpeedDigitThree */
	SDY1_DMI_I_DMI__SpeedDigitThree(outputs_ctx.SpeedDigitThree);
	/* SpeedTarget => Vtarget */
	SDY1_DMI_I_DMI__Vtarget(outputs_ctx.SpeedTarget);
	/* SpeedPermitted => Vperm */
	SDY1_DMI_I_DMI__Vperm(outputs_ctx.SpeedPermitted);
	/* SpeedRelease => Vrelease */
	SDY1_DMI_I_DMI__Vrelease(outputs_ctx.SpeedRelease);
	/* GradientsStart => GradientsStart */
	{	SGLfloat v[12]; 
		{	int i2;
			for (i2 = 0; i2<12; i2++) {
				v[i2] = outputs_ctx.GradientsStart[i2];
			}
		}
		SDY1_DMI_I_DMI__GradientsStart(&v);
	}
	/* GradientsEnd => GradientsEnd */
	{	SGLfloat v[12]; 
		{	int i2;
			for (i2 = 0; i2<12; i2++) {
				v[i2] = outputs_ctx.GradientsEnd[i2];
			}
		}
		SDY1_DMI_I_DMI__GradientsEnd(&v);
	}
	/* GradientsValue => GradientsValue */
	{	SGLfloat v[12]; 
		{	int i2;
			for (i2 = 0; i2<12; i2++) {
				v[i2] = outputs_ctx.GradientsValue[i2];
			}
		}
		SDY1_DMI_I_DMI__GradientsValue(&v);
	}
	/* DistanceToTarget => DistanceToTarget */
	SDY1_DMI_I_DMI__DistanceToTarget(outputs_ctx.DistanceToTarget);
	/* DistanceToTargetVisible => DistanceToTargetVisible */
	SDY1_DMI_I_DMI__DistanceToTargetVisible(outputs_ctx.DistanceToTargetVisible);
	/* InterpolatedDistanceToTarget => InterpolatedDistanceToTarget */
	SDY1_DMI_I_DMI__InterpolatedDistanceToTarget(outputs_ctx.InterpolatedDistanceToTarget);
	/* StatusSymbolBrake => StatusSymbolBrake */
	SDY1_DMI_I_DMI__StatusSymbolBrake(outputs_ctx.StatusSymbolBrake);
	/* PointerColor => PointerColor */
	SDY1_DMI_I_DMI__PointerColor(outputs_ctx.PointerColor);
	/* showlala => showlala */
	SDY1_DMI_I_DMI__showlala(outputs_ctx.showlala);
	/* digit1_view => display_digit0 */
	{	SGLlong v[1]; 
		{	int i2;
			for (i2 = 0; i2<1; i2++) {
				v[i2] = outputs_ctx.digit1_view[i2];
			}
		}
		SDY1_DMI_I_DMI__display_digit0(&v);
	}
	SDY1_DMI__draw();
	SDY2_TestPanel__draw();
}


void RefreshSimValues(void){
	 if (GraphicalInputsConnected) {
		BeforeSimStep();
		UpdateSimulatorValues();
	}
}


void BeforeSimInit(void){
	SDY1_DMI__refreshCallback(RefreshSimValues);
	SDY2_TestPanel__refreshCallback(RefreshSimValues);
}


void ExtendedSimStop(void){
}


int ExtendedGetDumpSize(){
	return 0;
}


void ExtendedGatherDumpData(char * pData){
}


void ExtendedRestoreDumpData(const char * pData){
	AfterSimStep();
}


void UpdateValues(void){
}

