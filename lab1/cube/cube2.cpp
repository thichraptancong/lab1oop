#include <iostream>
#include <conio.h>
using namespace std;
class cube
{
private:
    float edge;
public:
    cube (float E)
    {
        edge = E;
    }
    float getVolume()
    {
        return edge*edge*edge;
    }
};
int main()
{
    cube cube1(15);
    cube cube2(20);
    cout<<"The volume of the cube1: "<<cube1.getVolume()<<endl;
    cout<<"The volume of the cube2: "<<cube2.getVolume();
    getch();
}
