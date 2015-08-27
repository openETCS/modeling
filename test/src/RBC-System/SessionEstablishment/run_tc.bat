@echo off
if not exist out mkdir out
SCSSMLNC ..\..\..\..\model\Scade\System\RBC-System\Simulation\RBC_Internal_Test_Pkg__RBC_Wrapper.dll -scenario .\RBC-SE-01.sss -out out\RBC-SE-01.out