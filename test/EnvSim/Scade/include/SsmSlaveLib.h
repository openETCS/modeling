/*
 *  SCADE Simulator co-simulation API
 *  Copyright (c) 2003 Esterel Technologies
 *
 *  Error code :
 *	1 - 1000 : Error related to gateway
 *	    1 : Cannot access project 
 *	    2 : Cannot connect to SCADE on port 6311
 *	    3 : More than one instance of SCADE is running
 *	    4 : Cannot connect to SCADE on requested port
 *	    5 : Not connected to SCADE
 *	    
 *	1001 - 2000 : Error related to proxy
 *	    1001 : Error during tcl evaluation of a command
 *	    1002 : Cannot Access simulator interface
 *	    1003 : Simulator is not launched
 *	    1004 : Cannot access simulator command
 *	    1005 : Cannot access simulator data
 *	    1006 : Cannot find variable
 *	    1007 : Undefined error
 *	    1008 : Cannot start simulator due to configuration or root node
 *	    1009 : SCADE co simulation is allready started
 */

#define DllExport   __declspec( dllexport )
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* Close SCADE GUI */
extern int SsmCloseScadeSimulator();

/* Ask SCADE to do a step, and stop until SCADE resume button is pressed */
extern int SsmDbgStep(int nCycle);

/* Get explicit error message */
extern int SsmGetLastError(const char** ppszError);

/* Retrieve output value related to pszPath */
extern int SsmGetOutput(char* pszPath, const char** ppszValue);

/* Retrieve output values computed by SCADE Simulator */
extern int SsmGetOutputVector(const char** ppszOutputVector);

/* Ask SCADE GUI to be foreground window */
extern int SsmGuiActivate();

/* Ask SCADE GUI to refresh values */
extern int SsmGuiRefresh();

/*   Given a absolute worspace/project pathname , a root node,
 *   a conf name and a port number, launch SCADE in simulation state
 *   - pszRootNode should be filled only if no root node is set in the project settings 
 *     else default root node defined in setting is taken
 */
extern int SsmOpenScadeSimulator (const char* pszProjectPathName, const char* pszConfName, const char* pszRootNode, int nSocketPort);

/* Set pszValue to input named pszPath */
extern int SsmSetInput(char* pszPath, const char* pszValue);

/* Send input to SCADE simulator in formatted vector */
extern int SsmSetInputVector(const char* pszInputVector);

/*   Set the number of connexion retry when calling 
 *   SsmOpenScadeSimulator, default is 100
 */
extern int SsmSetConnectRetry (int nRetry);

/*   Set the hostname on which to connect when calling 
 *   SsmOpenScadeSimulator, default is 127.0.0.1
 */
extern int SsmSetHostName (const char* pszHostName);

/* Set SCADE binarie path (override PATH env variable)*/
extern int SsmSetScadeInstallPath(const char* pszPath);

/* Ask SCADE to do nCycle step, return when cycle is completed
 * and output values are ready to be retrieved.
 *   * Parameters:
 *   - nCycle : number of step to do
 *   - bRefresh : When 1, refresh values in SCADE GUI for each step (this is the default mode), 
 *	          when 0, values are not refreshed at each step, caller has the responsibility to call SsmGuiRefresh
 */
extern int SsmStep(int nCycle, int bRefresh);

/* Pauses until SCADE resume button is pressed */
extern int SsmPause();

/* Save current session in a scenario file */
extern int SsmSaveScenario(const char* pszPathName);

#ifdef __cplusplus
}
#endif /* __cplusplus */
