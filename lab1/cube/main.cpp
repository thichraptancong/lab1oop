#include <iostream>
#include "cube.h"
using namespace std;

int main()
{
    cube myCube;
    myCube.setEdge(6.0);
    cout<<"The volume of the cube: "<<myCube.getVolume();
    return 0;
}
