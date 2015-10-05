@echo off
if not exist out mkdir out
SCSSMLNC ..\..\..\..\model\Scade\System\RBC-System\Simulation\RBC_Internal_Test_Pkg__Unit_Test_Pkg__Test_TryPutDiagMsg.dll -scenario .\RBC-DM-01.sss -out out\RBC-DM-01.out