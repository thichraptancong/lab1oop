#include <iostream>
#include "rectangle.h"

using namespace std;

int main()
{
    Rectangle Rec;
    float tmpLen;
    float tmpWidth;
    cout<<"The length of the Rectangle: ";
    cin>>tmpLen;
    cout<<"The width of the Rectangle:";
    cin>>tmpWidth;
    Rec.setWidth(tmpWidth);
    Rec.setLength(tmpLen);
    cout<<"The area of the Rectangle: "<<Rec.getArea();
    return 0;
}
