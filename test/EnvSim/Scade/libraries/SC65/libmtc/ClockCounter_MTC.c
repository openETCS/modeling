#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ClockCounter_MTC.h"

void ClockCounter_MTC_init(outC_ClockCounter_MTC *outC)
{
    (outC->_reset_ClockCounter_MTC) = kcg_true;
    (outC->Count) = 0;
}

void ClockCounter_MTC_reset(outC_ClockCounter_MTC *outC)
{
    (outC->_reset_ClockCounter_MTC) = kcg_true;
}

/* MTC::ClockCounter */
void ClockCounter_MTC(kcg_bool Reset, outC_ClockCounter_MTC *outC)
{
    if ((outC->_reset_ClockCounter_MTC)) {
	(outC->Count) = 0;
    } else {
    	if ((Reset)) {
		(outC->Count) = 0;
    	} else {
		(outC->Count) = ((outC->Count) + 1);
    	}
    }

    (outC->_reset_ClockCounter_MTC) = kcg_false;
}

void kcg_save_SV_ClockCounter_MTC(
  SV_ClockCounter_MTC *SV,
  outC_ClockCounter_MTC *outC)
{
    SV->_reset_ClockCounter_MTC = outC->_reset_ClockCounter_MTC;
}

void kcg_load_SV_ClockCounter_MTC(
  outC_ClockCounter_MTC *outC,
  SV_ClockCounter_MTC *SV)
{
    outC->_reset_ClockCounter_MTC = SV->_reset_ClockCounter_MTC;
}
