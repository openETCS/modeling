@echo off
if not exist out mkdir out
SCSSMLNC ..\..\..\..\model\Scade\System\RBC-System\Simulation\RBC_Internal_Test_Pkg__Unit_Test_Pkg__Test_DiagController.dll -scenario .\RBC-DM-03.sss -out out\RBC-DM-03.out