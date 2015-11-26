#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LATCHALL_MTC.h"

/* MTC::LATCHALL01 */

void LATCHALL01_MTC_init(outC_LATCHALL01_MTC *outC)
{
  outC->Output1 = 0;
  outC->mem = 0;
}

void LATCHALL01_MTC_reset(outC_LATCHALL01_MTC *outC)
{
}

void LATCHALL01_MTC(
  kcg_bool Input1,
  outC_LATCHALL01_MTC *outC)
{
  int nBit = 0;

  nBit <<= 1;
  nBit |= (Input1 == kcg_true);

  outC->mem |= nBit;
  outC->Output1 = outC->mem; 
}

void kcg_save_SV_LATCHALL01_MTC(
  SV_LATCHALL01_MTC *SV,
  outC_LATCHALL01_MTC *outC)
{
  SV->mem = outC->mem;
}

void kcg_load_SV_LATCHALL01_MTC(
  outC_LATCHALL01_MTC *outC,
  SV_LATCHALL01_MTC *SV)
{
  outC->mem = SV->mem;
}

/* MTC::LATCHALL02 */

void LATCHALL02_MTC_init(outC_LATCHALL02_MTC *outC)
{
  outC->Output1 = 0;
  outC->mem = 0;
}

void LATCHALL02_MTC_reset(outC_LATCHALL02_MTC *outC)
{
}

void LATCHALL02_MTC(
  kcg_bool Input1,
  kcg_bool Input2,
  outC_LATCHALL02_MTC *outC)
{
  int nBit = 0;

  nBit <<= 1;
  nBit |= (Input2 == kcg_true);

  nBit <<= 1;
  nBit |= (Input1 == kcg_true);

  outC->mem |= nBit;
  outC->Output1 = outC->mem; 
}

void kcg_save_SV_LATCHALL02_MTC(
  SV_LATCHALL02_MTC *SV,
  outC_LATCHALL02_MTC *outC)
{
  SV->mem = outC->mem;
}

void kcg_load_SV_LATCHALL02_MTC(
  outC_LATCHALL02_MTC *outC,
  SV_LATCHALL02_MTC *SV)
{
  outC->mem = SV->mem;
}

/* MTC::LATCHALL03 */

void LATCHALL03_MTC_init(outC_LATCHALL03_MTC *outC)
{
  outC->Output1 = 0;
  outC->mem = 0;
}

void LATCHALL03_MTC_reset(outC_LATCHALL03_MTC *outC)
{
}

void LATCHALL03_MTC(
  kcg_bool Input1,
  kcg_bool Input2,
  kcg_bool Input3,
  outC_LATCHALL03_MTC *outC)
{
  int nBit = 0;

  nBit <<= 1;
  nBit |= (Input3 == kcg_true);

  nBit <<= 1;
  nBit |= (Input2 == kcg_true);

  nBit <<= 1;
  nBit |= (Input1 == kcg_true);

  outC->mem |= nBit;
  outC->Output1 = outC->mem; 
}

void kcg_save_SV_LATCHALL03_MTC(
  SV_LATCHALL03_MTC *SV,
  outC_LATCHALL03_MTC *outC)
{
  SV->mem = outC->mem;
}

void kcg_load_SV_LATCHALL03_MTC(
  outC_LATCHALL03_MTC *outC,
  SV_LATCHALL03_MTC *SV)
{
  outC->mem = SV->mem;
}

/* MTC::LATCHALL04 */

void LATCHALL04_MTC_init(outC_LATCHALL04_MTC *outC)
{
  outC->Output1 = 0;
  outC->mem = 0;
}

void LATCHALL04_MTC_reset(outC_LATCHALL04_MTC *outC)
{
}

void LATCHALL04_MTC(
  kcg_bool Input1,
  kcg_bool Input2,
  kcg_bool Input3,
  kcg_bool Input4,
  outC_LATCHALL04_MTC *outC)
{
  int nBit = 0;

  nBit <<= 1;
  nBit |= (Input4 == kcg_true);

  nBit <<= 1;
  nBit |= (Input3 == kcg_true);

  nBit <<= 1;
  nBit |= (Input2 == kcg_true);

  nBit <<= 1;
  nBit |= (Input1 == kcg_true);

  outC->mem |= nBit;
  outC->Output1 = outC->mem; 
}

void kcg_save_SV_LATCHALL04_MTC(
  SV_LATCHALL04_MTC *SV,
  outC_LATCHALL04_MTC *outC)
{
  SV->mem = outC->mem;
}

void kcg_load_SV_LATCHALL04_MTC(
  outC_LATCHALL04_MTC *outC,
  SV_LATCHALL04_MTC *SV)
{
  outC->mem = SV->mem;
}

/* MTC::LATCHALL05 */

void LATCHALL05_MTC_init(outC_LATCHALL05_MTC *outC)
{
  outC->Output1 = 0;
  outC->mem = 0;
}

void LATCHALL05_MTC_reset(outC_LATCHALL05_MTC *outC)
{
}

void LATCHALL05_MTC(
  kcg_bool Input1,
  kcg_bool Input2,
  kcg_bool Input3,
  kcg_bool Input4,
  kcg_bool Input5,
  outC_LATCHALL05_MTC *outC)
{
  int nBit = 0;

  nBit <<= 1;
  nBit |= (Input5 == kcg_true);

  nBit <<= 1;
  nBit |= (Input4 == kcg_true);

  nBit <<= 1;
  nBit |= (Input3 == kcg_true);

  nBit <<= 1;
  nBit |= (Input2 == kcg_true);

  nBit <<= 1;
  nBit |= (Input1 == kcg_true);

  outC->mem |= nBit;
  outC->Output1 = outC->mem; 
}

void kcg_save_SV_LATCHALL05_MTC(
  SV_LATCHALL05_MTC *SV,
  outC_LATCHALL05_MTC *outC)
{
  SV->mem = outC->mem;
}

void kcg_load_SV_LATCHALL05_MTC(
  outC_LATCHALL05_MTC *outC,
  SV_LATCHALL05_MTC *SV)
{
  outC->mem = SV->mem;
}

/* MTC::LATCHALL06 */

void LATCHALL06_MTC_init(outC_LATCHALL06_MTC *outC)
{
  outC->Output1 = 0;
  outC->mem = 0;
}

void LATCHALL06_MTC_reset(outC_LATCHALL06_MTC *outC)
{
}

void LATCHALL06_MTC(
  kcg_bool Input1,
  kcg_bool Input2,
  kcg_bool Input3,
  kcg_bool Input4,
  kcg_bool Input5,
  kcg_bool Input6,
  outC_LATCHALL06_MTC *outC)
{
  int nBit = 0;

  nBit <<= 1;
  nBit |= (Input6 == kcg_true);

  nBit <<= 1;
  nBit |= (Input5 == kcg_true);

  nBit <<= 1;
  nBit |= (Input4 == kcg_true);

  nBit <<= 1;
  nBit |= (Input3 == kcg_true);

  nBit <<= 1;
  nBit |= (Input2 == kcg_true);

  nBit <<= 1;
  nBit |= (Input1 == kcg_true);

  outC->mem |= nBit;
  outC->Output1 = outC->mem; 
}

void kcg_save_SV_LATCHALL06_MTC(
  SV_LATCHALL06_MTC *SV,
  outC_LATCHALL06_MTC *outC)
{
  SV->mem = outC->mem;
}

void kcg_load_SV_LATCHALL06_MTC(
  outC_LATCHALL06_MTC *outC,
  SV_LATCHALL06_MTC *SV)
{
  outC->mem = SV->mem;
}

/* MTC::LATCHALL07 */

void LATCHALL07_MTC_init(outC_LATCHALL07_MTC *outC)
{
  outC->Output1 = 0;
  outC->mem = 0;
}

void LATCHALL07_MTC_reset(outC_LATCHALL07_MTC *outC)
{
}

void LATCHALL07_MTC(
  kcg_bool Input1,
  kcg_bool Input2,
  kcg_bool Input3,
  kcg_bool Input4,
  kcg_bool Input5,
  kcg_bool Input6,
  kcg_bool Input7,
  outC_LATCHALL07_MTC *outC)
{
  int nBit = 0;

  nBit <<= 1;
  nBit |= (Input7 == kcg_true);

  nBit <<= 1;
  nBit |= (Input6 == kcg_true);

  nBit <<= 1;
  nBit |= (Input5 == kcg_true);

  nBit <<= 1;
  nBit |= (Input4 == kcg_true);

  nBit <<= 1;
  nBit |= (Input3 == kcg_true);

  nBit <<= 1;
  nBit |= (Input2 == kcg_true);

  nBit <<= 1;
  nBit |= (Input1 == kcg_true);

  outC->mem |= nBit;
  outC->Output1 = outC->mem; 
}

void kcg_save_SV_LATCHALL07_MTC(
  SV_LATCHALL07_MTC *SV,
  outC_LATCHALL07_MTC *outC)
{
  SV->mem = outC->mem;
}

void kcg_load_SV_LATCHALL07_MTC(
  outC_LATCHALL07_MTC *outC,
  SV_LATCHALL07_MTC *SV)
{
  outC->mem = SV->mem;
}

/* MTC::LATCHALL08 */

void LATCHALL08_MTC_init(outC_LATCHALL08_MTC *outC)
{
  outC->Output1 = 0;
  outC->mem = 0;
}

void LATCHALL08_MTC_reset(outC_LATCHALL08_MTC *outC)
{
}

void LATCHALL08_MTC(
  kcg_bool Input1,
  kcg_bool Input2,
  kcg_bool Input3,
  kcg_bool Input4,
  kcg_bool Input5,
  kcg_bool Input6,
  kcg_bool Input7,
  kcg_bool Input8,
  outC_LATCHALL08_MTC *outC)
{
  int nBit = 0;

  nBit <<= 1;
  nBit |= (Input8 == kcg_true);

  nBit <<= 1;
  nBit |= (Input7 == kcg_true);

  nBit <<= 1;
  nBit |= (Input6 == kcg_true);

  nBit <<= 1;
  nBit |= (Input5 == kcg_true);

  nBit <<= 1;
  nBit |= (Input4 == kcg_true);

  nBit <<= 1;
  nBit |= (Input3 == kcg_true);

  nBit <<= 1;
  nBit |= (Input2 == kcg_true);

  nBit <<= 1;
  nBit |= (Input1 == kcg_true);

  outC->mem |= nBit;
  outC->Output1 = outC->mem; 
}

void kcg_save_SV_LATCHALL08_MTC(
  SV_LATCHALL08_MTC *SV,
  outC_LATCHALL08_MTC *outC)
{
  SV->mem = outC->mem;
}

void kcg_load_SV_LATCHALL08_MTC(
  outC_LATCHALL08_MTC *outC,
  SV_LATCHALL08_MTC *SV)
{
  outC->mem = SV->mem;
}

/* MTC::LATCHALL09 */

void LATCHALL09_MTC_init(outC_LATCHALL09_MTC *outC)
{
  outC->Output1 = 0;
  outC->mem = 0;
}

void LATCHALL09_MTC_reset(outC_LATCHALL09_MTC *outC)
{
}

void LATCHALL09_MTC(
  kcg_bool Input1,
  kcg_bool Input2,
  kcg_bool Input3,
  kcg_bool Input4,
  kcg_bool Input5,
  kcg_bool Input6,
  kcg_bool Input7,
  kcg_bool Input8,
  kcg_bool Input9,
  outC_LATCHALL09_MTC *outC)
{
  int nBit = 0;

  nBit <<= 1;
  nBit |= (Input9 == kcg_true);

  nBit <<= 1;
  nBit |= (Input8 == kcg_true);

  nBit <<= 1;
  nBit |= (Input7 == kcg_true);

  nBit <<= 1;
  nBit |= (Input6 == kcg_true);

  nBit <<= 1;
  nBit |= (Input5 == kcg_true);

  nBit <<= 1;
  nBit |= (Input4 == kcg_true);

  nBit <<= 1;
  nBit |= (Input3 == kcg_true);

  nBit <<= 1;
  nBit |= (Input2 == kcg_true);

  nBit <<= 1;
  nBit |= (Input1 == kcg_true);

  outC->mem |= nBit;
  outC->Output1 = outC->mem; 
}

void kcg_save_SV_LATCHALL09_MTC(
  SV_LATCHALL09_MTC *SV,
  outC_LATCHALL09_MTC *outC)
{
  SV->mem = outC->mem;
}

void kcg_load_SV_LATCHALL09_MTC(
  outC_LATCHALL09_MTC *outC,
  SV_LATCHALL09_MTC *SV)
{
  outC->mem = SV->mem;
}

/* MTC::LATCHALL10 */

void LATCHALL10_MTC_init(outC_LATCHALL10_MTC *outC)
{
  outC->Output1 = 0;
  outC->mem = 0;
}

void LATCHALL10_MTC_reset(outC_LATCHALL10_MTC *outC)
{
}

void LATCHALL10_MTC(
  kcg_bool Input1,
  kcg_bool Input2,
  kcg_bool Input3,
  kcg_bool Input4,
  kcg_bool Input5,
  kcg_bool Input6,
  kcg_bool Input7,
  kcg_bool Input8,
  kcg_bool Input9,
  kcg_bool Input10,
  outC_LATCHALL10_MTC *outC)
{
  int nBit = 0;

  nBit <<= 1;
  nBit |= (Input10 == kcg_true);

  nBit <<= 1;
  nBit |= (Input9 == kcg_true);

  nBit <<= 1;
  nBit |= (Input8 == kcg_true);

  nBit <<= 1;
  nBit |= (Input7 == kcg_true);

  nBit <<= 1;
  nBit |= (Input6 == kcg_true);

  nBit <<= 1;
  nBit |= (Input5 == kcg_true);

  nBit <<= 1;
  nBit |= (Input4 == kcg_true);

  nBit <<= 1;
  nBit |= (Input3 == kcg_true);

  nBit <<= 1;
  nBit |= (Input2 == kcg_true);

  nBit <<= 1;
  nBit |= (Input1 == kcg_true);

  outC->mem |= nBit;
  outC->Output1 = outC->mem; 
}

void kcg_save_SV_LATCHALL10_MTC(
  SV_LATCHALL10_MTC *SV,
  outC_LATCHALL10_MTC *outC)
{
  SV->mem = outC->mem;
}

void kcg_load_SV_LATCHALL10_MTC(
  outC_LATCHALL10_MTC *outC,
  SV_LATCHALL10_MTC *SV)
{
  outC->mem = SV->mem;
}

/* MTC::LATCHALL11 */

void LATCHALL11_MTC_init(outC_LATCHALL11_MTC *outC)
{
  outC->Output1 = 0;
  outC->mem = 0;
}

void LATCHALL11_MTC_reset(outC_LATCHALL11_MTC *outC)
{
}

void LATCHALL11_MTC(
  kcg_bool Input1,
  kcg_bool Input2,
  kcg_bool Input3,
  kcg_bool Input4,
  kcg_bool Input5,
  kcg_bool Input6,
  kcg_bool Input7,
  kcg_bool Input8,
  kcg_bool Input9,
  kcg_bool Input10,
  kcg_bool Input11,
  outC_LATCHALL11_MTC *outC)
{
  int nBit = 0;

  nBit <<= 1;
  nBit |= (Input11 == kcg_true);

  nBit <<= 1;
  nBit |= (Input10 == kcg_true);

  nBit <<= 1;
  nBit |= (Input9 == kcg_true);

  nBit <<= 1;
  nBit |= (Input8 == kcg_true);

  nBit <<= 1;
  nBit |= (Input7 == kcg_true);

  nBit <<= 1;
  nBit |= (Input6 == kcg_true);

  nBit <<= 1;
  nBit |= (Input5 == kcg_true);

  nBit <<= 1;
  nBit |= (Input4 == kcg_true);

  nBit <<= 1;
  nBit |= (Input3 == kcg_true);

  nBit <<= 1;
  nBit |= (Input2 == kcg_true);

  nBit <<= 1;
  nBit |= (Input1 == kcg_true);

  outC->mem |= nBit;
  outC->Output1 = outC->mem; 
}

void kcg_save_SV_LATCHALL11_MTC(
  SV_LATCHALL11_MTC *SV,
  outC_LATCHALL11_MTC *outC)
{
  SV->mem = outC->mem;
}

void kcg_load_SV_LATCHALL11_MTC(
  outC_LATCHALL11_MTC *outC,
  SV_LATCHALL11_MTC *SV)
{
  outC->mem = SV->mem;
}

/* MTC::LATCHALL12 */

void LATCHALL12_MTC_init(outC_LATCHALL12_MTC *outC)
{
  outC->Output1 = 0;
  outC->mem = 0;
}

void LATCHALL12_MTC_reset(outC_LATCHALL12_MTC *outC)
{
}

void LATCHALL12_MTC(
  kcg_bool Input1,
  kcg_bool Input2,
  kcg_bool Input3,
  kcg_bool Input4,
  kcg_bool Input5,
  kcg_bool Input6,
  kcg_bool Input7,
  kcg_bool Input8,
  kcg_bool Input9,
  kcg_bool Input10,
  kcg_bool Input11,
  kcg_bool Input12,
  outC_LATCHALL12_MTC *outC)
{
  int nBit = 0;

  nBit <<= 1;
  nBit |= (Input12 == kcg_true);

  nBit <<= 1;
  nBit |= (Input11 == kcg_true);

  nBit <<= 1;
  nBit |= (Input10 == kcg_true);

  nBit <<= 1;
  nBit |= (Input9 == kcg_true);

  nBit <<= 1;
  nBit |= (Input8 == kcg_true);

  nBit <<= 1;
  nBit |= (Input7 == kcg_true);

  nBit <<= 1;
  nBit |= (Input6 == kcg_true);

  nBit <<= 1;
  nBit |= (Input5 == kcg_true);

  nBit <<= 1;
  nBit |= (Input4 == kcg_true);

  nBit <<= 1;
  nBit |= (Input3 == kcg_true);

  nBit <<= 1;
  nBit |= (Input2 == kcg_true);

  nBit <<= 1;
  nBit |= (Input1 == kcg_true);

  outC->mem |= nBit;
  outC->Output1 = outC->mem; 
}

void kcg_save_SV_LATCHALL12_MTC(
  SV_LATCHALL12_MTC *SV,
  outC_LATCHALL12_MTC *outC)
{
  SV->mem = outC->mem;
}

void kcg_load_SV_LATCHALL12_MTC(
  outC_LATCHALL12_MTC *outC,
  SV_LATCHALL12_MTC *SV)
{
  outC->mem = SV->mem;
}

/* MTC::LATCHALL13 */

void LATCHALL13_MTC_init(outC_LATCHALL13_MTC *outC)
{
  outC->Output1 = 0;
  outC->mem = 0;
}

void LATCHALL13_MTC_reset(outC_LATCHALL13_MTC *outC)
{
}

void LATCHALL13_MTC(
  kcg_bool Input1,
  kcg_bool Input2,
  kcg_bool Input3,
  kcg_bool Input4,
  kcg_bool Input5,
  kcg_bool Input6,
  kcg_bool Input7,
  kcg_bool Input8,
  kcg_bool Input9,
  kcg_bool Input10,
  kcg_bool Input11,
  kcg_bool Input12,
  kcg_bool Input13,
  outC_LATCHALL13_MTC *outC)
{
  int nBit = 0;

  nBit <<= 1;
  nBit |= (Input13 == kcg_true);

  nBit <<= 1;
  nBit |= (Input12 == kcg_true);

  nBit <<= 1;
  nBit |= (Input11 == kcg_true);

  nBit <<= 1;
  nBit |= (Input10 == kcg_true);

  nBit <<= 1;
  nBit |= (Input9 == kcg_true);

  nBit <<= 1;
  nBit |= (Input8 == kcg_true);

  nBit <<= 1;
  nBit |= (Input7 == kcg_true);

  nBit <<= 1;
  nBit |= (Input6 == kcg_true);

  nBit <<= 1;
  nBit |= (Input5 == kcg_true);

  nBit <<= 1;
  nBit |= (Input4 == kcg_true);

  nBit <<= 1;
  nBit |= (Input3 == kcg_true);

  nBit <<= 1;
  nBit |= (Input2 == kcg_true);

  nBit <<= 1;
  nBit |= (Input1 == kcg_true);

  outC->mem |= nBit;
  outC->Output1 = outC->mem; 
}

void kcg_save_SV_LATCHALL13_MTC(
  SV_LATCHALL13_MTC *SV,
  outC_LATCHALL13_MTC *outC)
{
  SV->mem = outC->mem;
}

void kcg_load_SV_LATCHALL13_MTC(
  outC_LATCHALL13_MTC *outC,
  SV_LATCHALL13_MTC *SV)
{
  outC->mem = SV->mem;
}

/* MTC::LATCHALL14 */

void LATCHALL14_MTC_init(outC_LATCHALL14_MTC *outC)
{
  outC->Output1 = 0;
  outC->mem = 0;
}

void LATCHALL14_MTC_reset(outC_LATCHALL14_MTC *outC)
{
}

void LATCHALL14_MTC(
  kcg_bool Input1,
  kcg_bool Input2,
  kcg_bool Input3,
  kcg_bool Input4,
  kcg_bool Input5,
  kcg_bool Input6,
  kcg_bool Input7,
  kcg_bool Input8,
  kcg_bool Input9,
  kcg_bool Input10,
  kcg_bool Input11,
  kcg_bool Input12,
  kcg_bool Input13,
  kcg_bool Input14,
  outC_LATCHALL14_MTC *outC)
{
  int nBit = 0;

  nBit <<= 1;
  nBit |= (Input14 == kcg_true);

  nBit <<= 1;
  nBit |= (Input13 == kcg_true);

  nBit <<= 1;
  nBit |= (Input12 == kcg_true);

  nBit <<= 1;
  nBit |= (Input11 == kcg_true);

  nBit <<= 1;
  nBit |= (Input10 == kcg_true);

  nBit <<= 1;
  nBit |= (Input9 == kcg_true);

  nBit <<= 1;
  nBit |= (Input8 == kcg_true);

  nBit <<= 1;
  nBit |= (Input7 == kcg_true);

  nBit <<= 1;
  nBit |= (Input6 == kcg_true);

  nBit <<= 1;
  nBit |= (Input5 == kcg_true);

  nBit <<= 1;
  nBit |= (Input4 == kcg_true);

  nBit <<= 1;
  nBit |= (Input3 == kcg_true);

  nBit <<= 1;
  nBit |= (Input2 == kcg_true);

  nBit <<= 1;
  nBit |= (Input1 == kcg_true);

  outC->mem |= nBit;
  outC->Output1 = outC->mem; 
}

void kcg_save_SV_LATCHALL14_MTC(
  SV_LATCHALL14_MTC *SV,
  outC_LATCHALL14_MTC *outC)
{
  SV->mem = outC->mem;
}

void kcg_load_SV_LATCHALL14_MTC(
  outC_LATCHALL14_MTC *outC,
  SV_LATCHALL14_MTC *SV)
{
  outC->mem = SV->mem;
}

/* MTC::LATCHALL15 */

void LATCHALL15_MTC_init(outC_LATCHALL15_MTC *outC)
{
  outC->Output1 = 0;
  outC->mem = 0;
}

void LATCHALL15_MTC_reset(outC_LATCHALL15_MTC *outC)
{
}

void LATCHALL15_MTC(
  kcg_bool Input1,
  kcg_bool Input2,
  kcg_bool Input3,
  kcg_bool Input4,
  kcg_bool Input5,
  kcg_bool Input6,
  kcg_bool Input7,
  kcg_bool Input8,
  kcg_bool Input9,
  kcg_bool Input10,
  kcg_bool Input11,
  kcg_bool Input12,
  kcg_bool Input13,
  kcg_bool Input14,
  kcg_bool Input15,
  outC_LATCHALL15_MTC *outC)
{
  int nBit = 0;

  nBit <<= 1;
  nBit |= (Input15 == kcg_true);

  nBit <<= 1;
  nBit |= (Input14 == kcg_true);

  nBit <<= 1;
  nBit |= (Input13 == kcg_true);

  nBit <<= 1;
  nBit |= (Input12 == kcg_true);

  nBit <<= 1;
  nBit |= (Input11 == kcg_true);

  nBit <<= 1;
  nBit |= (Input10 == kcg_true);

  nBit <<= 1;
  nBit |= (Input9 == kcg_true);

  nBit <<= 1;
  nBit |= (Input8 == kcg_true);

  nBit <<= 1;
  nBit |= (Input7 == kcg_true);

  nBit <<= 1;
  nBit |= (Input6 == kcg_true);

  nBit <<= 1;
  nBit |= (Input5 == kcg_true);

  nBit <<= 1;
  nBit |= (Input4 == kcg_true);

  nBit <<= 1;
  nBit |= (Input3 == kcg_true);

  nBit <<= 1;
  nBit |= (Input2 == kcg_true);

  nBit <<= 1;
  nBit |= (Input1 == kcg_true);

  outC->mem |= nBit;
  outC->Output1 = outC->mem; 
}

void kcg_save_SV_LATCHALL15_MTC(
  SV_LATCHALL15_MTC *SV,
  outC_LATCHALL15_MTC *outC)
{
  SV->mem = outC->mem;
}

void kcg_load_SV_LATCHALL15_MTC(
  outC_LATCHALL15_MTC *outC,
  SV_LATCHALL15_MTC *SV)
{
  outC->mem = SV->mem;
}

/* MTC::LATCHALL16 */

void LATCHALL16_MTC_init(outC_LATCHALL16_MTC *outC)
{
  outC->Output1 = 0;
  outC->mem = 0;
}

void LATCHALL16_MTC_reset(outC_LATCHALL16_MTC *outC)
{
}

void LATCHALL16_MTC(
  kcg_bool Input1,
  kcg_bool Input2,
  kcg_bool Input3,
  kcg_bool Input4,
  kcg_bool Input5,
  kcg_bool Input6,
  kcg_bool Input7,
  kcg_bool Input8,
  kcg_bool Input9,
  kcg_bool Input10,
  kcg_bool Input11,
  kcg_bool Input12,
  kcg_bool Input13,
  kcg_bool Input14,
  kcg_bool Input15,
  kcg_bool Input16,
  outC_LATCHALL16_MTC *outC)
{
  int nBit = 0;

  nBit <<= 1;
  nBit |= (Input16 == kcg_true);

  nBit <<= 1;
  nBit |= (Input15 == kcg_true);

  nBit <<= 1;
  nBit |= (Input14 == kcg_true);

  nBit <<= 1;
  nBit |= (Input13 == kcg_true);

  nBit <<= 1;
  nBit |= (Input12 == kcg_true);

  nBit <<= 1;
  nBit |= (Input11 == kcg_true);

  nBit <<= 1;
  nBit |= (Input10 == kcg_true);

  nBit <<= 1;
  nBit |= (Input9 == kcg_true);

  nBit <<= 1;
  nBit |= (Input8 == kcg_true);

  nBit <<= 1;
  nBit |= (Input7 == kcg_true);

  nBit <<= 1;
  nBit |= (Input6 == kcg_true);

  nBit <<= 1;
  nBit |= (Input5 == kcg_true);

  nBit <<= 1;
  nBit |= (Input4 == kcg_true);

  nBit <<= 1;
  nBit |= (Input3 == kcg_true);

  nBit <<= 1;
  nBit |= (Input2 == kcg_true);

  nBit <<= 1;
  nBit |= (Input1 == kcg_true);

  outC->mem |= nBit;
  outC->Output1 = outC->mem; 
}

void kcg_save_SV_LATCHALL16_MTC(
  SV_LATCHALL16_MTC *SV,
  outC_LATCHALL16_MTC *outC)
{
  SV->mem = outC->mem;
}

void kcg_load_SV_LATCHALL16_MTC(
  outC_LATCHALL16_MTC *outC,
  SV_LATCHALL16_MTC *SV)
{
  outC->mem = SV->mem;
}

/* MTC::LATCHALL17 */

void LATCHALL17_MTC_init(outC_LATCHALL17_MTC *outC)
{
  outC->Output1 = 0;
  outC->mem = 0;
}

void LATCHALL17_MTC_reset(outC_LATCHALL17_MTC *outC)
{
}

void LATCHALL17_MTC(
  kcg_bool Input1,
  kcg_bool Input2,
  kcg_bool Input3,
  kcg_bool Input4,
  kcg_bool Input5,
  kcg_bool Input6,
  kcg_bool Input7,
  kcg_bool Input8,
  kcg_bool Input9,
  kcg_bool Input10,
  kcg_bool Input11,
  kcg_bool Input12,
  kcg_bool Input13,
  kcg_bool Input14,
  kcg_bool Input15,
  kcg_bool Input16,
  kcg_bool Input17,
  outC_LATCHALL17_MTC *outC)
{
  int nBit = 0;

  nBit <<= 1;
  nBit |= (Input17 == kcg_true);

  nBit <<= 1;
  nBit |= (Input16 == kcg_true);

  nBit <<= 1;
  nBit |= (Input15 == kcg_true);

  nBit <<= 1;
  nBit |= (Input14 == kcg_true);

  nBit <<= 1;
  nBit |= (Input13 == kcg_true);

  nBit <<= 1;
  nBit |= (Input12 == kcg_true);

  nBit <<= 1;
  nBit |= (Input11 == kcg_true);

  nBit <<= 1;
  nBit |= (Input10 == kcg_true);

  nBit <<= 1;
  nBit |= (Input9 == kcg_true);

  nBit <<= 1;
  nBit |= (Input8 == kcg_true);

  nBit <<= 1;
  nBit |= (Input7 == kcg_true);

  nBit <<= 1;
  nBit |= (Input6 == kcg_true);

  nBit <<= 1;
  nBit |= (Input5 == kcg_true);

  nBit <<= 1;
  nBit |= (Input4 == kcg_true);

  nBit <<= 1;
  nBit |= (Input3 == kcg_true);

  nBit <<= 1;
  nBit |= (Input2 == kcg_true);

  nBit <<= 1;
  nBit |= (Input1 == kcg_true);

  outC->mem |= nBit;
  outC->Output1 = outC->mem; 
}

void kcg_save_SV_LATCHALL17_MTC(
  SV_LATCHALL17_MTC *SV,
  outC_LATCHALL17_MTC *outC)
{
  SV->mem = outC->mem;
}

void kcg_load_SV_LATCHALL17_MTC(
  outC_LATCHALL17_MTC *outC,
  SV_LATCHALL17_MTC *SV)
{
  outC->mem = SV->mem;
}

/* MTC::LATCHALL18 */

void LATCHALL18_MTC_init(outC_LATCHALL18_MTC *outC)
{
  outC->Output1 = 0;
  outC->mem = 0;
}

void LATCHALL18_MTC_reset(outC_LATCHALL18_MTC *outC)
{
}

void LATCHALL18_MTC(
  kcg_bool Input1,
  kcg_bool Input2,
  kcg_bool Input3,
  kcg_bool Input4,
  kcg_bool Input5,
  kcg_bool Input6,
  kcg_bool Input7,
  kcg_bool Input8,
  kcg_bool Input9,
  kcg_bool Input10,
  kcg_bool Input11,
  kcg_bool Input12,
  kcg_bool Input13,
  kcg_bool Input14,
  kcg_bool Input15,
  kcg_bool Input16,
  kcg_bool Input17,
  kcg_bool Input18,
  outC_LATCHALL18_MTC *outC)
{
  int nBit = 0;

  nBit <<= 1;
  nBit |= (Input18 == kcg_true);

  nBit <<= 1;
  nBit |= (Input17 == kcg_true);

  nBit <<= 1;
  nBit |= (Input16 == kcg_true);

  nBit <<= 1;
  nBit |= (Input15 == kcg_true);

  nBit <<= 1;
  nBit |= (Input14 == kcg_true);

  nBit <<= 1;
  nBit |= (Input13 == kcg_true);

  nBit <<= 1;
  nBit |= (Input12 == kcg_true);

  nBit <<= 1;
  nBit |= (Input11 == kcg_true);

  nBit <<= 1;
  nBit |= (Input10 == kcg_true);

  nBit <<= 1;
  nBit |= (Input9 == kcg_true);

  nBit <<= 1;
  nBit |= (Input8 == kcg_true);

  nBit <<= 1;
  nBit |= (Input7 == kcg_true);

  nBit <<= 1;
  nBit |= (Input6 == kcg_true);

  nBit <<= 1;
  nBit |= (Input5 == kcg_true);

  nBit <<= 1;
  nBit |= (Input4 == kcg_true);

  nBit <<= 1;
  nBit |= (Input3 == kcg_true);

  nBit <<= 1;
  nBit |= (Input2 == kcg_true);

  nBit <<= 1;
  nBit |= (Input1 == kcg_true);

  outC->mem |= nBit;
  outC->Output1 = outC->mem; 
}

void kcg_save_SV_LATCHALL18_MTC(
  SV_LATCHALL18_MTC *SV,
  outC_LATCHALL18_MTC *outC)
{
  SV->mem = outC->mem;
}

void kcg_load_SV_LATCHALL18_MTC(
  outC_LATCHALL18_MTC *outC,
  SV_LATCHALL18_MTC *SV)
{
  outC->mem = SV->mem;
}

/* MTC::LATCHALL19 */

void LATCHALL19_MTC_init(outC_LATCHALL19_MTC *outC)
{
  outC->Output1 = 0;
  outC->mem = 0;
}

void LATCHALL19_MTC_reset(outC_LATCHALL19_MTC *outC)
{
}

void LATCHALL19_MTC(
  kcg_bool Input1,
  kcg_bool Input2,
  kcg_bool Input3,
  kcg_bool Input4,
  kcg_bool Input5,
  kcg_bool Input6,
  kcg_bool Input7,
  kcg_bool Input8,
  kcg_bool Input9,
  kcg_bool Input10,
  kcg_bool Input11,
  kcg_bool Input12,
  kcg_bool Input13,
  kcg_bool Input14,
  kcg_bool Input15,
  kcg_bool Input16,
  kcg_bool Input17,
  kcg_bool Input18,
  kcg_bool Input19,
  outC_LATCHALL19_MTC *outC)
{
  int nBit = 0;

  nBit <<= 1;
  nBit |= (Input19 == kcg_true);

  nBit <<= 1;
  nBit |= (Input18 == kcg_true);

  nBit <<= 1;
  nBit |= (Input17 == kcg_true);

  nBit <<= 1;
  nBit |= (Input16 == kcg_true);

  nBit <<= 1;
  nBit |= (Input15 == kcg_true);

  nBit <<= 1;
  nBit |= (Input14 == kcg_true);

  nBit <<= 1;
  nBit |= (Input13 == kcg_true);

  nBit <<= 1;
  nBit |= (Input12 == kcg_true);

  nBit <<= 1;
  nBit |= (Input11 == kcg_true);

  nBit <<= 1;
  nBit |= (Input10 == kcg_true);

  nBit <<= 1;
  nBit |= (Input9 == kcg_true);

  nBit <<= 1;
  nBit |= (Input8 == kcg_true);

  nBit <<= 1;
  nBit |= (Input7 == kcg_true);

  nBit <<= 1;
  nBit |= (Input6 == kcg_true);

  nBit <<= 1;
  nBit |= (Input5 == kcg_true);

  nBit <<= 1;
  nBit |= (Input4 == kcg_true);

  nBit <<= 1;
  nBit |= (Input3 == kcg_true);

  nBit <<= 1;
  nBit |= (Input2 == kcg_true);

  nBit <<= 1;
  nBit |= (Input1 == kcg_true);

  outC->mem |= nBit;
  outC->Output1 = outC->mem; 
}

void kcg_save_SV_LATCHALL19_MTC(
  SV_LATCHALL19_MTC *SV,
  outC_LATCHALL19_MTC *outC)
{
  SV->mem = outC->mem;
}

void kcg_load_SV_LATCHALL19_MTC(
  outC_LATCHALL19_MTC *outC,
  SV_LATCHALL19_MTC *SV)
{
  outC->mem = SV->mem;
}

/* MTC::LATCHALL20 */

void LATCHALL20_MTC_init(outC_LATCHALL20_MTC *outC)
{
  outC->Output1 = 0;
  outC->mem = 0;
}

void LATCHALL20_MTC_reset(outC_LATCHALL20_MTC *outC)
{
}

void LATCHALL20_MTC(
  kcg_bool Input1,
  kcg_bool Input2,
  kcg_bool Input3,
  kcg_bool Input4,
  kcg_bool Input5,
  kcg_bool Input6,
  kcg_bool Input7,
  kcg_bool Input8,
  kcg_bool Input9,
  kcg_bool Input10,
  kcg_bool Input11,
  kcg_bool Input12,
  kcg_bool Input13,
  kcg_bool Input14,
  kcg_bool Input15,
  kcg_bool Input16,
  kcg_bool Input17,
  kcg_bool Input18,
  kcg_bool Input19,
  kcg_bool Input20,
  outC_LATCHALL20_MTC *outC)
{
  int nBit = 0;

  nBit <<= 1;
  nBit |= (Input20 == kcg_true);

  nBit <<= 1;
  nBit |= (Input19 == kcg_true);

  nBit <<= 1;
  nBit |= (Input18 == kcg_true);

  nBit <<= 1;
  nBit |= (Input17 == kcg_true);

  nBit <<= 1;
  nBit |= (Input16 == kcg_true);

  nBit <<= 1;
  nBit |= (Input15 == kcg_true);

  nBit <<= 1;
  nBit |= (Input14 == kcg_true);

  nBit <<= 1;
  nBit |= (Input13 == kcg_true);

  nBit <<= 1;
  nBit |= (Input12 == kcg_true);

  nBit <<= 1;
  nBit |= (Input11 == kcg_true);

  nBit <<= 1;
  nBit |= (Input10 == kcg_true);

  nBit <<= 1;
  nBit |= (Input9 == kcg_true);

  nBit <<= 1;
  nBit |= (Input8 == kcg_true);

  nBit <<= 1;
  nBit |= (Input7 == kcg_true);

  nBit <<= 1;
  nBit |= (Input6 == kcg_true);

  nBit <<= 1;
  nBit |= (Input5 == kcg_true);

  nBit <<= 1;
  nBit |= (Input4 == kcg_true);

  nBit <<= 1;
  nBit |= (Input3 == kcg_true);

  nBit <<= 1;
  nBit |= (Input2 == kcg_true);

  nBit <<= 1;
  nBit |= (Input1 == kcg_true);

  outC->mem |= nBit;
  outC->Output1 = outC->mem; 
}

void kcg_save_SV_LATCHALL20_MTC(
  SV_LATCHALL20_MTC *SV,
  outC_LATCHALL20_MTC *outC)
{
  SV->mem = outC->mem;
}

void kcg_load_SV_LATCHALL20_MTC(
  outC_LATCHALL20_MTC *outC,
  SV_LATCHALL20_MTC *SV)
{
  outC->mem = SV->mem;
}

/* MTC::LATCHALL21 */

void LATCHALL21_MTC_init(outC_LATCHALL21_MTC *outC)
{
  outC->Output1 = 0;
  outC->mem = 0;
}

void LATCHALL21_MTC_reset(outC_LATCHALL21_MTC *outC)
{
}

void LATCHALL21_MTC(
  kcg_bool Input1,
  kcg_bool Input2,
  kcg_bool Input3,
  kcg_bool Input4,
  kcg_bool Input5,
  kcg_bool Input6,
  kcg_bool Input7,
  kcg_bool Input8,
  kcg_bool Input9,
  kcg_bool Input10,
  kcg_bool Input11,
  kcg_bool Input12,
  kcg_bool Input13,
  kcg_bool Input14,
  kcg_bool Input15,
  kcg_bool Input16,
  kcg_bool Input17,
  kcg_bool Input18,
  kcg_bool Input19,
  kcg_bool Input20,
  kcg_bool Input21,
  outC_LATCHALL21_MTC *outC)
{
  int nBit = 0;

  nBit <<= 1;
  nBit |= (Input21 == kcg_true);

  nBit <<= 1;
  nBit |= (Input20 == kcg_true);

  nBit <<= 1;
  nBit |= (Input19 == kcg_true);

  nBit <<= 1;
  nBit |= (Input18 == kcg_true);

  nBit <<= 1;
  nBit |= (Input17 == kcg_true);

  nBit <<= 1;
  nBit |= (Input16 == kcg_true);

  nBit <<= 1;
  nBit |= (Input15 == kcg_true);

  nBit <<= 1;
  nBit |= (Input14 == kcg_true);

  nBit <<= 1;
  nBit |= (Input13 == kcg_true);

  nBit <<= 1;
  nBit |= (Input12 == kcg_true);

  nBit <<= 1;
  nBit |= (Input11 == kcg_true);

  nBit <<= 1;
  nBit |= (Input10 == kcg_true);

  nBit <<= 1;
  nBit |= (Input9 == kcg_true);

  nBit <<= 1;
  nBit |= (Input8 == kcg_true);

  nBit <<= 1;
  nBit |= (Input7 == kcg_true);

  nBit <<= 1;
  nBit |= (Input6 == kcg_true);

  nBit <<= 1;
  nBit |= (Input5 == kcg_true);

  nBit <<= 1;
  nBit |= (Input4 == kcg_true);

  nBit <<= 1;
  nBit |= (Input3 == kcg_true);

  nBit <<= 1;
  nBit |= (Input2 == kcg_true);

  nBit <<= 1;
  nBit |= (Input1 == kcg_true);

  outC->mem |= nBit;
  outC->Output1 = outC->mem; 
}

void kcg_save_SV_LATCHALL21_MTC(
  SV_LATCHALL21_MTC *SV,
  outC_LATCHALL21_MTC *outC)
{
  SV->mem = outC->mem;
}

void kcg_load_SV_LATCHALL21_MTC(
  outC_LATCHALL21_MTC *outC,
  SV_LATCHALL21_MTC *SV)
{
  outC->mem = SV->mem;
}

/* MTC::LATCHALL22 */

void LATCHALL22_MTC_init(outC_LATCHALL22_MTC *outC)
{
  outC->Output1 = 0;
  outC->mem = 0;
}

void LATCHALL22_MTC_reset(outC_LATCHALL22_MTC *outC)
{
}

void LATCHALL22_MTC(
  kcg_bool Input1,
  kcg_bool Input2,
  kcg_bool Input3,
  kcg_bool Input4,
  kcg_bool Input5,
  kcg_bool Input6,
  kcg_bool Input7,
  kcg_bool Input8,
  kcg_bool Input9,
  kcg_bool Input10,
  kcg_bool Input11,
  kcg_bool Input12,
  kcg_bool Input13,
  kcg_bool Input14,
  kcg_bool Input15,
  kcg_bool Input16,
  kcg_bool Input17,
  kcg_bool Input18,
  kcg_bool Input19,
  kcg_bool Input20,
  kcg_bool Input21,
  kcg_bool Input22,
  outC_LATCHALL22_MTC *outC)
{
  int nBit = 0;

  nBit <<= 1;
  nBit |= (Input22 == kcg_true);

  nBit <<= 1;
  nBit |= (Input21 == kcg_true);

  nBit <<= 1;
  nBit |= (Input20 == kcg_true);

  nBit <<= 1;
  nBit |= (Input19 == kcg_true);

  nBit <<= 1;
  nBit |= (Input18 == kcg_true);

  nBit <<= 1;
  nBit |= (Input17 == kcg_true);

  nBit <<= 1;
  nBit |= (Input16 == kcg_true);

  nBit <<= 1;
  nBit |= (Input15 == kcg_true);

  nBit <<= 1;
  nBit |= (Input14 == kcg_true);

  nBit <<= 1;
  nBit |= (Input13 == kcg_true);

  nBit <<= 1;
  nBit |= (Input12 == kcg_true);

  nBit <<= 1;
  nBit |= (Input11 == kcg_true);

  nBit <<= 1;
  nBit |= (Input10 == kcg_true);

  nBit <<= 1;
  nBit |= (Input9 == kcg_true);

  nBit <<= 1;
  nBit |= (Input8 == kcg_true);

  nBit <<= 1;
  nBit |= (Input7 == kcg_true);

  nBit <<= 1;
  nBit |= (Input6 == kcg_true);

  nBit <<= 1;
  nBit |= (Input5 == kcg_true);

  nBit <<= 1;
  nBit |= (Input4 == kcg_true);

  nBit <<= 1;
  nBit |= (Input3 == kcg_true);

  nBit <<= 1;
  nBit |= (Input2 == kcg_true);

  nBit <<= 1;
  nBit |= (Input1 == kcg_true);

  outC->mem |= nBit;
  outC->Output1 = outC->mem; 
}

void kcg_save_SV_LATCHALL22_MTC(
  SV_LATCHALL22_MTC *SV,
  outC_LATCHALL22_MTC *outC)
{
  SV->mem = outC->mem;
}

void kcg_load_SV_LATCHALL22_MTC(
  outC_LATCHALL22_MTC *outC,
  SV_LATCHALL22_MTC *SV)
{
  outC->mem = SV->mem;
}

/* MTC::LATCHALL23 */

void LATCHALL23_MTC_init(outC_LATCHALL23_MTC *outC)
{
  outC->Output1 = 0;
  outC->mem = 0;
}

void LATCHALL23_MTC_reset(outC_LATCHALL23_MTC *outC)
{
}

void LATCHALL23_MTC(
  kcg_bool Input1,
  kcg_bool Input2,
  kcg_bool Input3,
  kcg_bool Input4,
  kcg_bool Input5,
  kcg_bool Input6,
  kcg_bool Input7,
  kcg_bool Input8,
  kcg_bool Input9,
  kcg_bool Input10,
  kcg_bool Input11,
  kcg_bool Input12,
  kcg_bool Input13,
  kcg_bool Input14,
  kcg_bool Input15,
  kcg_bool Input16,
  kcg_bool Input17,
  kcg_bool Input18,
  kcg_bool Input19,
  kcg_bool Input20,
  kcg_bool Input21,
  kcg_bool Input22,
  kcg_bool Input23,
  outC_LATCHALL23_MTC *outC)
{
  int nBit = 0;

  nBit <<= 1;
  nBit |= (Input23 == kcg_true);

  nBit <<= 1;
  nBit |= (Input22 == kcg_true);

  nBit <<= 1;
  nBit |= (Input21 == kcg_true);

  nBit <<= 1;
  nBit |= (Input20 == kcg_true);

  nBit <<= 1;
  nBit |= (Input19 == kcg_true);

  nBit <<= 1;
  nBit |= (Input18 == kcg_true);

  nBit <<= 1;
  nBit |= (Input17 == kcg_true);

  nBit <<= 1;
  nBit |= (Input16 == kcg_true);

  nBit <<= 1;
  nBit |= (Input15 == kcg_true);

  nBit <<= 1;
  nBit |= (Input14 == kcg_true);

  nBit <<= 1;
  nBit |= (Input13 == kcg_true);

  nBit <<= 1;
  nBit |= (Input12 == kcg_true);

  nBit <<= 1;
  nBit |= (Input11 == kcg_true);

  nBit <<= 1;
  nBit |= (Input10 == kcg_true);

  nBit <<= 1;
  nBit |= (Input9 == kcg_true);

  nBit <<= 1;
  nBit |= (Input8 == kcg_true);

  nBit <<= 1;
  nBit |= (Input7 == kcg_true);

  nBit <<= 1;
  nBit |= (Input6 == kcg_true);

  nBit <<= 1;
  nBit |= (Input5 == kcg_true);

  nBit <<= 1;
  nBit |= (Input4 == kcg_true);

  nBit <<= 1;
  nBit |= (Input3 == kcg_true);

  nBit <<= 1;
  nBit |= (Input2 == kcg_true);

  nBit <<= 1;
  nBit |= (Input1 == kcg_true);

  outC->mem |= nBit;
  outC->Output1 = outC->mem; 
}

void kcg_save_SV_LATCHALL23_MTC(
  SV_LATCHALL23_MTC *SV,
  outC_LATCHALL23_MTC *outC)
{
  SV->mem = outC->mem;
}

void kcg_load_SV_LATCHALL23_MTC(
  outC_LATCHALL23_MTC *outC,
  SV_LATCHALL23_MTC *SV)
{
  outC->mem = SV->mem;
}

/* MTC::LATCHALL24 */

void LATCHALL24_MTC_init(outC_LATCHALL24_MTC *outC)
{
  outC->Output1 = 0;
  outC->mem = 0;
}

void LATCHALL24_MTC_reset(outC_LATCHALL24_MTC *outC)
{
}

void LATCHALL24_MTC(
  kcg_bool Input1,
  kcg_bool Input2,
  kcg_bool Input3,
  kcg_bool Input4,
  kcg_bool Input5,
  kcg_bool Input6,
  kcg_bool Input7,
  kcg_bool Input8,
  kcg_bool Input9,
  kcg_bool Input10,
  kcg_bool Input11,
  kcg_bool Input12,
  kcg_bool Input13,
  kcg_bool Input14,
  kcg_bool Input15,
  kcg_bool Input16,
  kcg_bool Input17,
  kcg_bool Input18,
  kcg_bool Input19,
  kcg_bool Input20,
  kcg_bool Input21,
  kcg_bool Input22,
  kcg_bool Input23,
  kcg_bool Input24,
  outC_LATCHALL24_MTC *outC)
{
  int nBit = 0;

  nBit <<= 1;
  nBit |= (Input24 == kcg_true);

  nBit <<= 1;
  nBit |= (Input23 == kcg_true);

  nBit <<= 1;
  nBit |= (Input22 == kcg_true);

  nBit <<= 1;
  nBit |= (Input21 == kcg_true);

  nBit <<= 1;
  nBit |= (Input20 == kcg_true);

  nBit <<= 1;
  nBit |= (Input19 == kcg_true);

  nBit <<= 1;
  nBit |= (Input18 == kcg_true);

  nBit <<= 1;
  nBit |= (Input17 == kcg_true);

  nBit <<= 1;
  nBit |= (Input16 == kcg_true);

  nBit <<= 1;
  nBit |= (Input15 == kcg_true);

  nBit <<= 1;
  nBit |= (Input14 == kcg_true);

  nBit <<= 1;
  nBit |= (Input13 == kcg_true);

  nBit <<= 1;
  nBit |= (Input12 == kcg_true);

  nBit <<= 1;
  nBit |= (Input11 == kcg_true);

  nBit <<= 1;
  nBit |= (Input10 == kcg_true);

  nBit <<= 1;
  nBit |= (Input9 == kcg_true);

  nBit <<= 1;
  nBit |= (Input8 == kcg_true);

  nBit <<= 1;
  nBit |= (Input7 == kcg_true);

  nBit <<= 1;
  nBit |= (Input6 == kcg_true);

  nBit <<= 1;
  nBit |= (Input5 == kcg_true);

  nBit <<= 1;
  nBit |= (Input4 == kcg_true);

  nBit <<= 1;
  nBit |= (Input3 == kcg_true);

  nBit <<= 1;
  nBit |= (Input2 == kcg_true);

  nBit <<= 1;
  nBit |= (Input1 == kcg_true);

  outC->mem |= nBit;
  outC->Output1 = outC->mem; 
}

void kcg_save_SV_LATCHALL24_MTC(
  SV_LATCHALL24_MTC *SV,
  outC_LATCHALL24_MTC *outC)
{
  SV->mem = outC->mem;
}

void kcg_load_SV_LATCHALL24_MTC(
  outC_LATCHALL24_MTC *outC,
  SV_LATCHALL24_MTC *SV)
{
  outC->mem = SV->mem;
}

/* MTC::LATCHALL25 */

void LATCHALL25_MTC_init(outC_LATCHALL25_MTC *outC)
{
  outC->Output1 = 0;
  outC->mem = 0;
}

void LATCHALL25_MTC_reset(outC_LATCHALL25_MTC *outC)
{
}

void LATCHALL25_MTC(
  kcg_bool Input1,
  kcg_bool Input2,
  kcg_bool Input3,
  kcg_bool Input4,
  kcg_bool Input5,
  kcg_bool Input6,
  kcg_bool Input7,
  kcg_bool Input8,
  kcg_bool Input9,
  kcg_bool Input10,
  kcg_bool Input11,
  kcg_bool Input12,
  kcg_bool Input13,
  kcg_bool Input14,
  kcg_bool Input15,
  kcg_bool Input16,
  kcg_bool Input17,
  kcg_bool Input18,
  kcg_bool Input19,
  kcg_bool Input20,
  kcg_bool Input21,
  kcg_bool Input22,
  kcg_bool Input23,
  kcg_bool Input24,
  kcg_bool Input25,
  outC_LATCHALL25_MTC *outC)
{
  int nBit = 0;

  nBit <<= 1;
  nBit |= (Input25 == kcg_true);

  nBit <<= 1;
  nBit |= (Input24 == kcg_true);

  nBit <<= 1;
  nBit |= (Input23 == kcg_true);

  nBit <<= 1;
  nBit |= (Input22 == kcg_true);

  nBit <<= 1;
  nBit |= (Input21 == kcg_true);

  nBit <<= 1;
  nBit |= (Input20 == kcg_true);

  nBit <<= 1;
  nBit |= (Input19 == kcg_true);

  nBit <<= 1;
  nBit |= (Input18 == kcg_true);

  nBit <<= 1;
  nBit |= (Input17 == kcg_true);

  nBit <<= 1;
  nBit |= (Input16 == kcg_true);

  nBit <<= 1;
  nBit |= (Input15 == kcg_true);

  nBit <<= 1;
  nBit |= (Input14 == kcg_true);

  nBit <<= 1;
  nBit |= (Input13 == kcg_true);

  nBit <<= 1;
  nBit |= (Input12 == kcg_true);

  nBit <<= 1;
  nBit |= (Input11 == kcg_true);

  nBit <<= 1;
  nBit |= (Input10 == kcg_true);

  nBit <<= 1;
  nBit |= (Input9 == kcg_true);

  nBit <<= 1;
  nBit |= (Input8 == kcg_true);

  nBit <<= 1;
  nBit |= (Input7 == kcg_true);

  nBit <<= 1;
  nBit |= (Input6 == kcg_true);

  nBit <<= 1;
  nBit |= (Input5 == kcg_true);

  nBit <<= 1;
  nBit |= (Input4 == kcg_true);

  nBit <<= 1;
  nBit |= (Input3 == kcg_true);

  nBit <<= 1;
  nBit |= (Input2 == kcg_true);

  nBit <<= 1;
  nBit |= (Input1 == kcg_true);

  outC->mem |= nBit;
  outC->Output1 = outC->mem; 
}

void kcg_save_SV_LATCHALL25_MTC(
  SV_LATCHALL25_MTC *SV,
  outC_LATCHALL25_MTC *outC)
{
  SV->mem = outC->mem;
}

void kcg_load_SV_LATCHALL25_MTC(
  outC_LATCHALL25_MTC *outC,
  SV_LATCHALL25_MTC *SV)
{
  outC->mem = SV->mem;
}

/* MTC::LATCHALL26 */

void LATCHALL26_MTC_init(outC_LATCHALL26_MTC *outC)
{
  outC->Output1 = 0;
  outC->mem = 0;
}

void LATCHALL26_MTC_reset(outC_LATCHALL26_MTC *outC)
{
}

void LATCHALL26_MTC(
  kcg_bool Input1,
  kcg_bool Input2,
  kcg_bool Input3,
  kcg_bool Input4,
  kcg_bool Input5,
  kcg_bool Input6,
  kcg_bool Input7,
  kcg_bool Input8,
  kcg_bool Input9,
  kcg_bool Input10,
  kcg_bool Input11,
  kcg_bool Input12,
  kcg_bool Input13,
  kcg_bool Input14,
  kcg_bool Input15,
  kcg_bool Input16,
  kcg_bool Input17,
  kcg_bool Input18,
  kcg_bool Input19,
  kcg_bool Input20,
  kcg_bool Input21,
  kcg_bool Input22,
  kcg_bool Input23,
  kcg_bool Input24,
  kcg_bool Input25,
  kcg_bool Input26,
  outC_LATCHALL26_MTC *outC)
{
  int nBit = 0;

  nBit <<= 1;
  nBit |= (Input26 == kcg_true);

  nBit <<= 1;
  nBit |= (Input25 == kcg_true);

  nBit <<= 1;
  nBit |= (Input24 == kcg_true);

  nBit <<= 1;
  nBit |= (Input23 == kcg_true);

  nBit <<= 1;
  nBit |= (Input22 == kcg_true);

  nBit <<= 1;
  nBit |= (Input21 == kcg_true);

  nBit <<= 1;
  nBit |= (Input20 == kcg_true);

  nBit <<= 1;
  nBit |= (Input19 == kcg_true);

  nBit <<= 1;
  nBit |= (Input18 == kcg_true);

  nBit <<= 1;
  nBit |= (Input17 == kcg_true);

  nBit <<= 1;
  nBit |= (Input16 == kcg_true);

  nBit <<= 1;
  nBit |= (Input15 == kcg_true);

  nBit <<= 1;
  nBit |= (Input14 == kcg_true);

  nBit <<= 1;
  nBit |= (Input13 == kcg_true);

  nBit <<= 1;
  nBit |= (Input12 == kcg_true);

  nBit <<= 1;
  nBit |= (Input11 == kcg_true);

  nBit <<= 1;
  nBit |= (Input10 == kcg_true);

  nBit <<= 1;
  nBit |= (Input9 == kcg_true);

  nBit <<= 1;
  nBit |= (Input8 == kcg_true);

  nBit <<= 1;
  nBit |= (Input7 == kcg_true);

  nBit <<= 1;
  nBit |= (Input6 == kcg_true);

  nBit <<= 1;
  nBit |= (Input5 == kcg_true);

  nBit <<= 1;
  nBit |= (Input4 == kcg_true);

  nBit <<= 1;
  nBit |= (Input3 == kcg_true);

  nBit <<= 1;
  nBit |= (Input2 == kcg_true);

  nBit <<= 1;
  nBit |= (Input1 == kcg_true);

  outC->mem |= nBit;
  outC->Output1 = outC->mem; 
}

void kcg_save_SV_LATCHALL26_MTC(
  SV_LATCHALL26_MTC *SV,
  outC_LATCHALL26_MTC *outC)
{
  SV->mem = outC->mem;
}

void kcg_load_SV_LATCHALL26_MTC(
  outC_LATCHALL26_MTC *outC,
  SV_LATCHALL26_MTC *SV)
{
  outC->mem = SV->mem;
}

/* MTC::LATCHALL27 */

void LATCHALL27_MTC_init(outC_LATCHALL27_MTC *outC)
{
  outC->Output1 = 0;
  outC->mem = 0;
}

void LATCHALL27_MTC_reset(outC_LATCHALL27_MTC *outC)
{
}

void LATCHALL27_MTC(
  kcg_bool Input1,
  kcg_bool Input2,
  kcg_bool Input3,
  kcg_bool Input4,
  kcg_bool Input5,
  kcg_bool Input6,
  kcg_bool Input7,
  kcg_bool Input8,
  kcg_bool Input9,
  kcg_bool Input10,
  kcg_bool Input11,
  kcg_bool Input12,
  kcg_bool Input13,
  kcg_bool Input14,
  kcg_bool Input15,
  kcg_bool Input16,
  kcg_bool Input17,
  kcg_bool Input18,
  kcg_bool Input19,
  kcg_bool Input20,
  kcg_bool Input21,
  kcg_bool Input22,
  kcg_bool Input23,
  kcg_bool Input24,
  kcg_bool Input25,
  kcg_bool Input26,
  kcg_bool Input27,
  outC_LATCHALL27_MTC *outC)
{
  int nBit = 0;

  nBit <<= 1;
  nBit |= (Input27 == kcg_true);

  nBit <<= 1;
  nBit |= (Input26 == kcg_true);

  nBit <<= 1;
  nBit |= (Input25 == kcg_true);

  nBit <<= 1;
  nBit |= (Input24 == kcg_true);

  nBit <<= 1;
  nBit |= (Input23 == kcg_true);

  nBit <<= 1;
  nBit |= (Input22 == kcg_true);

  nBit <<= 1;
  nBit |= (Input21 == kcg_true);

  nBit <<= 1;
  nBit |= (Input20 == kcg_true);

  nBit <<= 1;
  nBit |= (Input19 == kcg_true);

  nBit <<= 1;
  nBit |= (Input18 == kcg_true);

  nBit <<= 1;
  nBit |= (Input17 == kcg_true);

  nBit <<= 1;
  nBit |= (Input16 == kcg_true);

  nBit <<= 1;
  nBit |= (Input15 == kcg_true);

  nBit <<= 1;
  nBit |= (Input14 == kcg_true);

  nBit <<= 1;
  nBit |= (Input13 == kcg_true);

  nBit <<= 1;
  nBit |= (Input12 == kcg_true);

  nBit <<= 1;
  nBit |= (Input11 == kcg_true);

  nBit <<= 1;
  nBit |= (Input10 == kcg_true);

  nBit <<= 1;
  nBit |= (Input9 == kcg_true);

  nBit <<= 1;
  nBit |= (Input8 == kcg_true);

  nBit <<= 1;
  nBit |= (Input7 == kcg_true);

  nBit <<= 1;
  nBit |= (Input6 == kcg_true);

  nBit <<= 1;
  nBit |= (Input5 == kcg_true);

  nBit <<= 1;
  nBit |= (Input4 == kcg_true);

  nBit <<= 1;
  nBit |= (Input3 == kcg_true);

  nBit <<= 1;
  nBit |= (Input2 == kcg_true);

  nBit <<= 1;
  nBit |= (Input1 == kcg_true);

  outC->mem |= nBit;
  outC->Output1 = outC->mem; 
}

void kcg_save_SV_LATCHALL27_MTC(
  SV_LATCHALL27_MTC *SV,
  outC_LATCHALL27_MTC *outC)
{
  SV->mem = outC->mem;
}

void kcg_load_SV_LATCHALL27_MTC(
  outC_LATCHALL27_MTC *outC,
  SV_LATCHALL27_MTC *SV)
{
  outC->mem = SV->mem;
}

/* MTC::LATCHALL28 */

void LATCHALL28_MTC_init(outC_LATCHALL28_MTC *outC)
{
  outC->Output1 = 0;
  outC->mem = 0;
}

void LATCHALL28_MTC_reset(outC_LATCHALL28_MTC *outC)
{
}

void LATCHALL28_MTC(
  kcg_bool Input1,
  kcg_bool Input2,
  kcg_bool Input3,
  kcg_bool Input4,
  kcg_bool Input5,
  kcg_bool Input6,
  kcg_bool Input7,
  kcg_bool Input8,
  kcg_bool Input9,
  kcg_bool Input10,
  kcg_bool Input11,
  kcg_bool Input12,
  kcg_bool Input13,
  kcg_bool Input14,
  kcg_bool Input15,
  kcg_bool Input16,
  kcg_bool Input17,
  kcg_bool Input18,
  kcg_bool Input19,
  kcg_bool Input20,
  kcg_bool Input21,
  kcg_bool Input22,
  kcg_bool Input23,
  kcg_bool Input24,
  kcg_bool Input25,
  kcg_bool Input26,
  kcg_bool Input27,
  kcg_bool Input28,
  outC_LATCHALL28_MTC *outC)
{
  int nBit = 0;

  nBit <<= 1;
  nBit |= (Input28 == kcg_true);

  nBit <<= 1;
  nBit |= (Input27 == kcg_true);

  nBit <<= 1;
  nBit |= (Input26 == kcg_true);

  nBit <<= 1;
  nBit |= (Input25 == kcg_true);

  nBit <<= 1;
  nBit |= (Input24 == kcg_true);

  nBit <<= 1;
  nBit |= (Input23 == kcg_true);

  nBit <<= 1;
  nBit |= (Input22 == kcg_true);

  nBit <<= 1;
  nBit |= (Input21 == kcg_true);

  nBit <<= 1;
  nBit |= (Input20 == kcg_true);

  nBit <<= 1;
  nBit |= (Input19 == kcg_true);

  nBit <<= 1;
  nBit |= (Input18 == kcg_true);

  nBit <<= 1;
  nBit |= (Input17 == kcg_true);

  nBit <<= 1;
  nBit |= (Input16 == kcg_true);

  nBit <<= 1;
  nBit |= (Input15 == kcg_true);

  nBit <<= 1;
  nBit |= (Input14 == kcg_true);

  nBit <<= 1;
  nBit |= (Input13 == kcg_true);

  nBit <<= 1;
  nBit |= (Input12 == kcg_true);

  nBit <<= 1;
  nBit |= (Input11 == kcg_true);

  nBit <<= 1;
  nBit |= (Input10 == kcg_true);

  nBit <<= 1;
  nBit |= (Input9 == kcg_true);

  nBit <<= 1;
  nBit |= (Input8 == kcg_true);

  nBit <<= 1;
  nBit |= (Input7 == kcg_true);

  nBit <<= 1;
  nBit |= (Input6 == kcg_true);

  nBit <<= 1;
  nBit |= (Input5 == kcg_true);

  nBit <<= 1;
  nBit |= (Input4 == kcg_true);

  nBit <<= 1;
  nBit |= (Input3 == kcg_true);

  nBit <<= 1;
  nBit |= (Input2 == kcg_true);

  nBit <<= 1;
  nBit |= (Input1 == kcg_true);

  outC->mem |= nBit;
  outC->Output1 = outC->mem; 
}

void kcg_save_SV_LATCHALL28_MTC(
  SV_LATCHALL28_MTC *SV,
  outC_LATCHALL28_MTC *outC)
{
  SV->mem = outC->mem;
}

void kcg_load_SV_LATCHALL28_MTC(
  outC_LATCHALL28_MTC *outC,
  SV_LATCHALL28_MTC *SV)
{
  outC->mem = SV->mem;
}

/* MTC::LATCHALL29 */

void LATCHALL29_MTC_init(outC_LATCHALL29_MTC *outC)
{
  outC->Output1 = 0;
  outC->mem = 0;
}

void LATCHALL29_MTC_reset(outC_LATCHALL29_MTC *outC)
{
}

void LATCHALL29_MTC(
  kcg_bool Input1,
  kcg_bool Input2,
  kcg_bool Input3,
  kcg_bool Input4,
  kcg_bool Input5,
  kcg_bool Input6,
  kcg_bool Input7,
  kcg_bool Input8,
  kcg_bool Input9,
  kcg_bool Input10,
  kcg_bool Input11,
  kcg_bool Input12,
  kcg_bool Input13,
  kcg_bool Input14,
  kcg_bool Input15,
  kcg_bool Input16,
  kcg_bool Input17,
  kcg_bool Input18,
  kcg_bool Input19,
  kcg_bool Input20,
  kcg_bool Input21,
  kcg_bool Input22,
  kcg_bool Input23,
  kcg_bool Input24,
  kcg_bool Input25,
  kcg_bool Input26,
  kcg_bool Input27,
  kcg_bool Input28,
  kcg_bool Input29,
  outC_LATCHALL29_MTC *outC)
{
  int nBit = 0;

  nBit <<= 1;
  nBit |= (Input29 == kcg_true);

  nBit <<= 1;
  nBit |= (Input28 == kcg_true);

  nBit <<= 1;
  nBit |= (Input27 == kcg_true);

  nBit <<= 1;
  nBit |= (Input26 == kcg_true);

  nBit <<= 1;
  nBit |= (Input25 == kcg_true);

  nBit <<= 1;
  nBit |= (Input24 == kcg_true);

  nBit <<= 1;
  nBit |= (Input23 == kcg_true);

  nBit <<= 1;
  nBit |= (Input22 == kcg_true);

  nBit <<= 1;
  nBit |= (Input21 == kcg_true);

  nBit <<= 1;
  nBit |= (Input20 == kcg_true);

  nBit <<= 1;
  nBit |= (Input19 == kcg_true);

  nBit <<= 1;
  nBit |= (Input18 == kcg_true);

  nBit <<= 1;
  nBit |= (Input17 == kcg_true);

  nBit <<= 1;
  nBit |= (Input16 == kcg_true);

  nBit <<= 1;
  nBit |= (Input15 == kcg_true);

  nBit <<= 1;
  nBit |= (Input14 == kcg_true);

  nBit <<= 1;
  nBit |= (Input13 == kcg_true);

  nBit <<= 1;
  nBit |= (Input12 == kcg_true);

  nBit <<= 1;
  nBit |= (Input11 == kcg_true);

  nBit <<= 1;
  nBit |= (Input10 == kcg_true);

  nBit <<= 1;
  nBit |= (Input9 == kcg_true);

  nBit <<= 1;
  nBit |= (Input8 == kcg_true);

  nBit <<= 1;
  nBit |= (Input7 == kcg_true);

  nBit <<= 1;
  nBit |= (Input6 == kcg_true);

  nBit <<= 1;
  nBit |= (Input5 == kcg_true);

  nBit <<= 1;
  nBit |= (Input4 == kcg_true);

  nBit <<= 1;
  nBit |= (Input3 == kcg_true);

  nBit <<= 1;
  nBit |= (Input2 == kcg_true);

  nBit <<= 1;
  nBit |= (Input1 == kcg_true);

  outC->mem |= nBit;
  outC->Output1 = outC->mem; 
}

void kcg_save_SV_LATCHALL29_MTC(
  SV_LATCHALL29_MTC *SV,
  outC_LATCHALL29_MTC *outC)
{
  SV->mem = outC->mem;
}

void kcg_load_SV_LATCHALL29_MTC(
  outC_LATCHALL29_MTC *outC,
  SV_LATCHALL29_MTC *SV)
{
  outC->mem = SV->mem;
}

/* MTC::LATCHALL30 */

void LATCHALL30_MTC_init(outC_LATCHALL30_MTC *outC)
{
  outC->Output1 = 0;
  outC->mem = 0;
}

void LATCHALL30_MTC_reset(outC_LATCHALL30_MTC *outC)
{
}

void LATCHALL30_MTC(
  kcg_bool Input1,
  kcg_bool Input2,
  kcg_bool Input3,
  kcg_bool Input4,
  kcg_bool Input5,
  kcg_bool Input6,
  kcg_bool Input7,
  kcg_bool Input8,
  kcg_bool Input9,
  kcg_bool Input10,
  kcg_bool Input11,
  kcg_bool Input12,
  kcg_bool Input13,
  kcg_bool Input14,
  kcg_bool Input15,
  kcg_bool Input16,
  kcg_bool Input17,
  kcg_bool Input18,
  kcg_bool Input19,
  kcg_bool Input20,
  kcg_bool Input21,
  kcg_bool Input22,
  kcg_bool Input23,
  kcg_bool Input24,
  kcg_bool Input25,
  kcg_bool Input26,
  kcg_bool Input27,
  kcg_bool Input28,
  kcg_bool Input29,
  kcg_bool Input30,
  outC_LATCHALL30_MTC *outC)
{
  int nBit = 0;

  nBit <<= 1;
  nBit |= (Input30 == kcg_true);

  nBit <<= 1;
  nBit |= (Input29 == kcg_true);

  nBit <<= 1;
  nBit |= (Input28 == kcg_true);

  nBit <<= 1;
  nBit |= (Input27 == kcg_true);

  nBit <<= 1;
  nBit |= (Input26 == kcg_true);

  nBit <<= 1;
  nBit |= (Input25 == kcg_true);

  nBit <<= 1;
  nBit |= (Input24 == kcg_true);

  nBit <<= 1;
  nBit |= (Input23 == kcg_true);

  nBit <<= 1;
  nBit |= (Input22 == kcg_true);

  nBit <<= 1;
  nBit |= (Input21 == kcg_true);

  nBit <<= 1;
  nBit |= (Input20 == kcg_true);

  nBit <<= 1;
  nBit |= (Input19 == kcg_true);

  nBit <<= 1;
  nBit |= (Input18 == kcg_true);

  nBit <<= 1;
  nBit |= (Input17 == kcg_true);

  nBit <<= 1;
  nBit |= (Input16 == kcg_true);

  nBit <<= 1;
  nBit |= (Input15 == kcg_true);

  nBit <<= 1;
  nBit |= (Input14 == kcg_true);

  nBit <<= 1;
  nBit |= (Input13 == kcg_true);

  nBit <<= 1;
  nBit |= (Input12 == kcg_true);

  nBit <<= 1;
  nBit |= (Input11 == kcg_true);

  nBit <<= 1;
  nBit |= (Input10 == kcg_true);

  nBit <<= 1;
  nBit |= (Input9 == kcg_true);

  nBit <<= 1;
  nBit |= (Input8 == kcg_true);

  nBit <<= 1;
  nBit |= (Input7 == kcg_true);

  nBit <<= 1;
  nBit |= (Input6 == kcg_true);

  nBit <<= 1;
  nBit |= (Input5 == kcg_true);

  nBit <<= 1;
  nBit |= (Input4 == kcg_true);

  nBit <<= 1;
  nBit |= (Input3 == kcg_true);

  nBit <<= 1;
  nBit |= (Input2 == kcg_true);

  nBit <<= 1;
  nBit |= (Input1 == kcg_true);

  outC->mem |= nBit;
  outC->Output1 = outC->mem; 
}

void kcg_save_SV_LATCHALL30_MTC(
  SV_LATCHALL30_MTC *SV,
  outC_LATCHALL30_MTC *outC)
{
  SV->mem = outC->mem;
}

void kcg_load_SV_LATCHALL30_MTC(
  outC_LATCHALL30_MTC *outC,
  SV_LATCHALL30_MTC *SV)
{
  outC->mem = SV->mem;
}

/* MTC::LATCHALL31 */

void LATCHALL31_MTC_init(outC_LATCHALL31_MTC *outC)
{
  outC->Output1 = 0;
  outC->mem = 0;
}

void LATCHALL31_MTC_reset(outC_LATCHALL31_MTC *outC)
{
}

void LATCHALL31_MTC(
  kcg_bool Input1,
  kcg_bool Input2,
  kcg_bool Input3,
  kcg_bool Input4,
  kcg_bool Input5,
  kcg_bool Input6,
  kcg_bool Input7,
  kcg_bool Input8,
  kcg_bool Input9,
  kcg_bool Input10,
  kcg_bool Input11,
  kcg_bool Input12,
  kcg_bool Input13,
  kcg_bool Input14,
  kcg_bool Input15,
  kcg_bool Input16,
  kcg_bool Input17,
  kcg_bool Input18,
  kcg_bool Input19,
  kcg_bool Input20,
  kcg_bool Input21,
  kcg_bool Input22,
  kcg_bool Input23,
  kcg_bool Input24,
  kcg_bool Input25,
  kcg_bool Input26,
  kcg_bool Input27,
  kcg_bool Input28,
  kcg_bool Input29,
  kcg_bool Input30,
  kcg_bool Input31,
  outC_LATCHALL31_MTC *outC)
{
  int nBit = 0;

  nBit <<= 1;
  nBit |= (Input31 == kcg_true);

  nBit <<= 1;
  nBit |= (Input30 == kcg_true);

  nBit <<= 1;
  nBit |= (Input29 == kcg_true);

  nBit <<= 1;
  nBit |= (Input28 == kcg_true);

  nBit <<= 1;
  nBit |= (Input27 == kcg_true);

  nBit <<= 1;
  nBit |= (Input26 == kcg_true);

  nBit <<= 1;
  nBit |= (Input25 == kcg_true);

  nBit <<= 1;
  nBit |= (Input24 == kcg_true);

  nBit <<= 1;
  nBit |= (Input23 == kcg_true);

  nBit <<= 1;
  nBit |= (Input22 == kcg_true);

  nBit <<= 1;
  nBit |= (Input21 == kcg_true);

  nBit <<= 1;
  nBit |= (Input20 == kcg_true);

  nBit <<= 1;
  nBit |= (Input19 == kcg_true);

  nBit <<= 1;
  nBit |= (Input18 == kcg_true);

  nBit <<= 1;
  nBit |= (Input17 == kcg_true);

  nBit <<= 1;
  nBit |= (Input16 == kcg_true);

  nBit <<= 1;
  nBit |= (Input15 == kcg_true);

  nBit <<= 1;
  nBit |= (Input14 == kcg_true);

  nBit <<= 1;
  nBit |= (Input13 == kcg_true);

  nBit <<= 1;
  nBit |= (Input12 == kcg_true);

  nBit <<= 1;
  nBit |= (Input11 == kcg_true);

  nBit <<= 1;
  nBit |= (Input10 == kcg_true);

  nBit <<= 1;
  nBit |= (Input9 == kcg_true);

  nBit <<= 1;
  nBit |= (Input8 == kcg_true);

  nBit <<= 1;
  nBit |= (Input7 == kcg_true);

  nBit <<= 1;
  nBit |= (Input6 == kcg_true);

  nBit <<= 1;
  nBit |= (Input5 == kcg_true);

  nBit <<= 1;
  nBit |= (Input4 == kcg_true);

  nBit <<= 1;
  nBit |= (Input3 == kcg_true);

  nBit <<= 1;
  nBit |= (Input2 == kcg_true);

  nBit <<= 1;
  nBit |= (Input1 == kcg_true);

  outC->mem |= nBit;
  outC->Output1 = outC->mem; 
}

void kcg_save_SV_LATCHALL31_MTC(
  SV_LATCHALL31_MTC *SV,
  outC_LATCHALL31_MTC *outC)
{
  SV->mem = outC->mem;
}

void kcg_load_SV_LATCHALL31_MTC(
  outC_LATCHALL31_MTC *outC,
  SV_LATCHALL31_MTC *SV)
{
  outC->mem = SV->mem;
}

/* MTC::LATCHALL32 */

void LATCHALL32_MTC_init(outC_LATCHALL32_MTC *outC)
{
  outC->Output1 = 0;
  outC->mem = 0;
}

void LATCHALL32_MTC_reset(outC_LATCHALL32_MTC *outC)
{
}

void LATCHALL32_MTC(
  kcg_bool Input1,
  kcg_bool Input2,
  kcg_bool Input3,
  kcg_bool Input4,
  kcg_bool Input5,
  kcg_bool Input6,
  kcg_bool Input7,
  kcg_bool Input8,
  kcg_bool Input9,
  kcg_bool Input10,
  kcg_bool Input11,
  kcg_bool Input12,
  kcg_bool Input13,
  kcg_bool Input14,
  kcg_bool Input15,
  kcg_bool Input16,
  kcg_bool Input17,
  kcg_bool Input18,
  kcg_bool Input19,
  kcg_bool Input20,
  kcg_bool Input21,
  kcg_bool Input22,
  kcg_bool Input23,
  kcg_bool Input24,
  kcg_bool Input25,
  kcg_bool Input26,
  kcg_bool Input27,
  kcg_bool Input28,
  kcg_bool Input29,
  kcg_bool Input30,
  kcg_bool Input31,
  kcg_bool Input32,
  outC_LATCHALL32_MTC *outC)
{
  int nBit = 0;

  nBit <<= 1;
  nBit |= (Input32 == kcg_true);

  nBit <<= 1;
  nBit |= (Input31 == kcg_true);

  nBit <<= 1;
  nBit |= (Input30 == kcg_true);

  nBit <<= 1;
  nBit |= (Input29 == kcg_true);

  nBit <<= 1;
  nBit |= (Input28 == kcg_true);

  nBit <<= 1;
  nBit |= (Input27 == kcg_true);

  nBit <<= 1;
  nBit |= (Input26 == kcg_true);

  nBit <<= 1;
  nBit |= (Input25 == kcg_true);

  nBit <<= 1;
  nBit |= (Input24 == kcg_true);

  nBit <<= 1;
  nBit |= (Input23 == kcg_true);

  nBit <<= 1;
  nBit |= (Input22 == kcg_true);

  nBit <<= 1;
  nBit |= (Input21 == kcg_true);

  nBit <<= 1;
  nBit |= (Input20 == kcg_true);

  nBit <<= 1;
  nBit |= (Input19 == kcg_true);

  nBit <<= 1;
  nBit |= (Input18 == kcg_true);

  nBit <<= 1;
  nBit |= (Input17 == kcg_true);

  nBit <<= 1;
  nBit |= (Input16 == kcg_true);

  nBit <<= 1;
  nBit |= (Input15 == kcg_true);

  nBit <<= 1;
  nBit |= (Input14 == kcg_true);

  nBit <<= 1;
  nBit |= (Input13 == kcg_true);

  nBit <<= 1;
  nBit |= (Input12 == kcg_true);

  nBit <<= 1;
  nBit |= (Input11 == kcg_true);

  nBit <<= 1;
  nBit |= (Input10 == kcg_true);

  nBit <<= 1;
  nBit |= (Input9 == kcg_true);

  nBit <<= 1;
  nBit |= (Input8 == kcg_true);

  nBit <<= 1;
  nBit |= (Input7 == kcg_true);

  nBit <<= 1;
  nBit |= (Input6 == kcg_true);

  nBit <<= 1;
  nBit |= (Input5 == kcg_true);

  nBit <<= 1;
  nBit |= (Input4 == kcg_true);

  nBit <<= 1;
  nBit |= (Input3 == kcg_true);

  nBit <<= 1;
  nBit |= (Input2 == kcg_true);

  nBit <<= 1;
  nBit |= (Input1 == kcg_true);

  outC->mem |= nBit;
  outC->Output1 = outC->mem; 
}

void kcg_save_SV_LATCHALL32_MTC(
  SV_LATCHALL32_MTC *SV,
  outC_LATCHALL32_MTC *outC)
{
  SV->mem = outC->mem;
}

void kcg_load_SV_LATCHALL32_MTC(
  outC_LATCHALL32_MTC *outC,
  SV_LATCHALL32_MTC *SV)
{
  outC->mem = SV->mem;
}
