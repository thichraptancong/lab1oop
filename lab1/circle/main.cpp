#include <iostream>
#include "circle.h"
using namespace std;

int main()
{
    Circle myCircle(5.0);
    cout<<"The area of the Circle: "<< myCircle.getArea()<<endl;
    cout<<"The perimeter of the Circle: "<< myCircle.getPerimeter();
}
