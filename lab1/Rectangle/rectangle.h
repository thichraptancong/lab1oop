#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

class Rectangle
{
    private:
    float width, length;
    public:
    void setLength(float);
    void setWidth(float);
    float getLength(void);
    float getWidth(void);
    float getArea(void);
};

#endif // RECTANGLE_H_INCLUDED
