#include <iostream>
using namespace std;
double pi=3.14;

inline double circleArea(double r)
{
    return pi*r*r;
}

int main()
{
    double radius;

    cout << "Enter the radius: ";
    cin>> radius;

    cout << "The radius is " << circleArea(radius) << endl;
    return 0;
}
