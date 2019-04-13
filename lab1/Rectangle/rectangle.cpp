#include "rectangle.h"

void Rectangle::setLength(float W)
{
    width = W;
}

void Rectangle::setWidth(float L)
{
    length = L;
}
float Rectangle::getLength(void)
{
    return length;
}
float Rectangle::getWidth(void)
{
    return width;
}
float Rectangle::getArea(void)
{
    return width*length;
}
