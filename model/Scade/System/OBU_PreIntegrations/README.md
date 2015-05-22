# Directory structure

This directory contains the whole SCADE model of the EVC kernel.

Directory | Description
----------|-------------
[BaliseRadioLocation](https://github.com/stefan-karg/modeling/tree/master/model/Scade/System/OBU_PreIntegrations/BaliseRadioLocation) (*deprecated*)| Integration project for the submodules Manage_TrackSideInformation_Integration, MoRC, ProvidePositionReport and CalculateTrainPosition. This pre-integration was used in the OBU integration for the ITEA Review in March 2015 and is not used anymore in the current integration model.
[TestBenchExample](https://github.com/stefan-karg/modeling/tree/master/model/Scade/System/OBU_PreIntegrations/TestBenchExample) | Example project: How to use the Toolbox and the testtrack?
[Testbench_Integration](https://github.com/stefan-karg/modeling/tree/master/model/Scade/System/OBU_PreIntegrations/Testbench_Integration) | Current integration project, which integrates the EVC and the test environment.
[Toolbox](https://github.com/stefan-karg/modeling/tree/master/model/Scade/System/OBU_PreIntegrations/Toolbox) | Contains the environment simulation (TIU, DMI integration, BTM, JRU, physical simulation, ...)
[openETCS_EVC](https://github.com/stefan-karg/modeling/tree/master/model/Scade/System/OBU_PreIntegrations/openETCS_EVC) | Contains the current EVC model, which integrates the subfunctions.