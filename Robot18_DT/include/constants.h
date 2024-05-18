#include <math.h> 

// Robot constants en mm 
const double WHEEL_DIAMETER = 100;    //mm
const double WHEEL_TRAVEL   = M_PI * WHEEL_DIAMETER;
const double TRACK_WIDTH    = 4250;      //mm ancho 42.5
const double TRACK_BASE     = 3600;      //mm 
const double EXT_GEAR_RATIO = 1;    
// autonomous time 
const double DIST_TO_BALL_1 = 30;
const double TURN_TO_BALL_1 = 30;
// user cotrol 
const double JOYSTICK_DEADBAND = 10; 