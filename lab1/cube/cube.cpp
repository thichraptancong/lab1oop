#include "cube.h"

void cube::setEdge(float E)
{
    edge = E;
}

float cube::getEdge(void)
{
    return edge;
}
float cube::getVolume(void)
{
    return edge*edge*edge;
}
