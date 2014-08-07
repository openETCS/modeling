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

#include "ctp_wrapper.h"

//************************************************************************
//                        INITIALIZATION
//************************************************************************

ctp_Wrapper::ctp_Wrapper(void)
{
    init();
}


ctp_Wrapper::~ctp_Wrapper(void)
{
}


//initializes the model inputs to an inactive state
void ctp_Wrapper::initInputs(void) {

    ctp_in.reset = kcg_false;

    ctp_in.currentOdometry.valid            = kcg_false;
    ctp_in.currentOdometry.timestamp        = 0;
    ctp_in.currentOdometry.odo.o_min        = 0;
    ctp_in.currentOdometry.odo.o_nominal    = 0;
    ctp_in.currentOdometry.odo.o_max        = 0;
    ctp_in.currentOdometry.speed            = 0;

    ctp_in.passedBG  = cNoPassedBG_CalculateTrainPosition_Pkg;

    ctp_in.LRBG     = cNoPositionedBG_CalculateTrainPosition_Pkg;
    ctp_in.prevLRBG = cNoPositionedBG_CalculateTrainPosition_Pkg;
}


// initialize the model completely
void ctp_Wrapper::init(void) {

    initInputs();
    calculateTrainPosition_init_CalculateTrainPosition_Pkg(&ctp_out);
    execute();

}

// Model reset
void ctp_Wrapper::reset(void) {

    ctp_in.reset = kcg_true;
    execute();
    ctp_in.reset = kcg_false;

}


// Computes the model results
void ctp_Wrapper::execute(void) {

    calculateTrainPosition_CalculateTrainPosition_Pkg(&ctp_in, &ctp_out);

}


//sets the model inputs to current odometry and time values
void ctp_Wrapper::setCurrentTimeAndOdometry(const odometry_T_Obu_BasicTypes_Pkg & odo_and_time) {

    ctp_in.currentOdometry = odo_and_time;
    execute();
}


//when the train passes a balise group
void  ctp_Wrapper::onPassing_a_BaliseGroup(const passedBG_T_BG_Types_Pkg & passedBG) {

    ctp_in.passedBG = passedBG;
    execute();
    ctp_in.passedBG = cNoPassedBG_CalculateTrainPosition_Pkg;

}


//the current trainposition from the model
void ctp_Wrapper::getTrainPosition(trainPosition_T_TrainPosition_Types_Pck & trainPosition) const {

    trainPosition = ctp_out.trainPosition;
}
