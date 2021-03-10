#include <conversion.h>
float Radian(float degree) //conversion from degree to radian.
{   
    float rad;
    return rad=degree*(M_PI/180);
    
}
float Degree(float rad) //conversion from radian to degree.
{ 
    float degree;
    return degree=rad/(M_PI/180);
}

