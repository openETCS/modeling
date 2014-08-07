/*
Description : The main function calculating the actual train position.
- Description: Calculates the actual train position based on passed balise groups
- Copyright Siemens AG, 2014
- Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl )
- Gist URL: ---
- Cryptography: No
- Author(s): Uwe Steinke

The use of this software is limited to non-vital applications.
It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.
THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.

*/

#ifndef CTP_WRAPPER_H
#define CTP_WRAPPER_H


//---------------------------------- INCLUDES --------------------------------


//Scade-Model
#include <kcg_consts.h>
#include <kcg_types.h>

extern "C" {
#include <calculateTrainPosition_CalculateTrainPosition_Pkg.h>
}




class ctp_Wrapper
{
public:

    //************************************************************************
    //                        INITIALIZATION
    //************************************************************************

    ctp_Wrapper(void);
    ~ctp_Wrapper(void);


    void init(void); // initialize the model completely


      // Restart the model
    void reset(void);

    //************************************************************************
    //                        INPUT FUNCTIONS
    //************************************************************************

    //sets the model inputs to current odometry and time values
    void setCurrentTimeAndOdometry(const odometry_T_Obu_BasicTypes_Pkg & odo_and_time);

    //when the train passes a balise group
    void onPassing_a_BaliseGroup(const passedBG_T_BG_Types_Pkg & passedBG);


    //************************************************************************
    //                        OUTPUT FUNCTIONS
    //************************************************************************

    //the current trainposition from the model
    void getTrainPosition(trainPosition_T_TrainPosition_Types_Pck & trainPosition) const;


private:


    //************************************************************************
    //                        INTERNAL STATE
    //************************************************************************

    inC_calculateTrainPosition_CalculateTrainPosition_Pkg  ctp_in;  // Model input
    outC_calculateTrainPosition_CalculateTrainPosition_Pkg ctp_out; // Model context and output

    bool loggingEnabled;

    int cycleNo;  //Counter for model cycles


    //************************************************************************
    //                        EXECUTION FUNCTIONS
    //************************************************************************


    void initInputs(void); //initializes the model inputs to an inactive state

        // Computes the results
    void execute(void);





};

#endif // CTP_WRAPPER_H
