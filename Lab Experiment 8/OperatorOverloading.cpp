//WAP to demonstrate operator overloading

#include <iostream>

using namespace std;

class Point
{
    public:
    float x, y;

    Point(float x, float y)
    {
        this->x = x;
        this->y = y;
    }

    Point operator +(Point p)
    {
        float newX = x + p.x;
        float newY = y + p.y;
        return Point(newX, newY);
    }
};

int main()
{
    Point p1(1.2, 2.5), p2(2.7, 5.4);
    Point sum = p1 + p2;

    cout<<"The sum of points\nx: "<<sum.x<<"\ny: "<<sum.y<<endl;
    return 0;
}