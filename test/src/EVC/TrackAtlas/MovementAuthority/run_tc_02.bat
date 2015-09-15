@echo off
if not exist out mkdir out
SCSSMLNC ..\..\..\..\model\Scade\System\ObuFunctions\TrackAtlas\Simulation\TA_MA__Build_MA.dll -scenario .\TA-MA-02.sss -out out\TA-MA-02.out