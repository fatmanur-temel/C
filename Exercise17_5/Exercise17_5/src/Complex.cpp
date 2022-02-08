#include <iostream>
#include "Complex.h"
using namespace std;

Complex::Complex(double real, double imaginary)
{
    setComplexNumber(real, imaginary);
}

void Complex::setComplexNumber(double r, double i)
{
    realPart=r;
    imaginaryPart=i;
}

void Complex::printComplex()
{
    cout << "(" << realPart << "," << imaginaryPart << ")";
}

Complex Complex::add(const Complex &right)
{
    return Complex(realPart + right.realPart ,imaginaryPart + right.imaginaryPart);
}

Complex Complex::subtract(const Complex &right)
{
    return Complex(realPart - right.realPart, imaginaryPart - right.imaginaryPart);
}
