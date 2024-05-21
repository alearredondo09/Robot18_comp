#include <iostream>
#include "robot-config.h"
#include "constants.h"
#include "vex_global.h"

using namespace vex;
extern brain Brain;
//--------- Main auton functions ---------//
void auton()
{
    Drivetrain.drivefor(fwd, 15, distanceUnits::cm);

}


//--------- Main skills functions ---------//
void skill()
{

}