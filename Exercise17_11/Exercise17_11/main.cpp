#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
    Rectangle a, b(4.0, 5.0), c(65.0, 320.0);

    cout << "a: length= " << a.getLength() << "; width= " << a.getWidth()
         << "; perimeter= " << a.perimeter() <<"; area= " << a.area() <<'\n';

    cout << "b: length= " << b.getLength() << "; width= " << b.getWidth()
         << "; perimeter= " << b.perimeter() <<"; area= " << b.area() <<'\n';

    cout << "c: length= " << c.getLength() << "; width= " << c.getWidth()
         << "; perimeter= " << c.perimeter() <<"; area= " << c.area() <<'\n';
    return 0;
}
