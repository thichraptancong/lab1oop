#include <iostream>
#include <cmath>

using namespace std;

class student
{
private:
    string name;
    int id;
    float math, english, physic, chemistry;
public:
    student (string name1, int id1)
    {
        name= name1;
        id= id1;
    }
    void mathMark(double value)
    {
        math= value;
    }
    void engMark(double value)
    {
        english= value;
    }
    void physicMark(double value)
    {
        physic= value;
    }
    void chemMark(double value)
    {
        chemistry= value;
    }
    float getAverage(void)
    {
        return (math+english+physic+chemistry)/4;
    }
    void display()
    {
        cout<<"Student name: "<<name<<endl;
        cout<<"Student ID: "<<id<<endl;
        cout<<"The average of the student1: "<<getAverage();
    }
};

int main()
{
    student student1("Tung",123);
    student1.mathMark(90);
    student1.engMark(87);
    student1.physicMark(85);
    student1.chemMark(82);
    student1.display();
}
