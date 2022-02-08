#include <iostream>

using namespace std;

int tripleByValue(int);
void tripleByReference (int &);

int main()
{
    int c;

    cout << "Enter a value: ";
    cin >> c;

    cout << "Value of c before function call (triplebyValue) is: " << c <<"\nValue returned from function (triplebyValue) is: "
         << tripleByValue(c) << "\nValue of c after function call (triplebyValue) is: " << c;

    cout << "\nValue of c before function call (triplebyRef) is: " << c << endl;

    tripleByReference(c);

    cout << "Value of c after function call is: " << c << endl;

    return 0;
}

int tripleByValue(int value)
{
    return value*3;
}

void tripleByReference (int &valueRef)
{
    valueRef = valueRef*3;
}
