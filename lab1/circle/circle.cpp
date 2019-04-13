#include "circle.h"
#include <cmath>

Circle::Circle(float R)
{
    Radius= R;
}
float Circle::getArea(void)
{
    return M_PI*pow(Radius,2);
}
float Circle::getPerimeter(void)
{
    return 2*M_PI*Radius;
}
