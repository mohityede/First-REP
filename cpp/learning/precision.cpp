#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// difining macro for ignore fuction as "d"
#define d ignore(numeric_limits<streamsize>::max(), '\n')

int main()
{
    float x = 1.313, y = 1.500, z = 1.894;
    float a = -1.313, b = -1.500, c = -1.894;
    // floor : round of closest integer value which is less than given value
    cout << "Floor() to positive numbers : "
         << "x = " << floor(x) << " y= " << floor(y) << " z= " << floor(z) << endl;

    cout << "Floor() to negative numbers : "
         << "a = " << floor(a) << " b= " << floor(b) << " c= " << floor(c) << endl
         << endl;

    // cail : round of closest interger value which is more than given value
    cout << "ceil() to positive numbers : "
         << "x = " << ceil(x) << " y= " << ceil(y) << " z= " << ceil(z) << endl;

    cout << "ceil() to negative numbers : "
         << "a = " << ceil(a) << " b= " << ceil(b) << " c= " << ceil(c) << endl
         << endl;

    // trunc : remove digits after decimal point
    cout << "trunc() to positive numbers : "
         << "x = " << trunc(x) << " y= " << trunc(y) << " z= " << trunc(z) << endl;

    cout << "trunc() to negative numbers : "
         << "a = " << trunc(a) << " b= " << trunc(b) << " c= " << trunc(c) << endl
         << endl;

    // round : round to closest interger
    cout << "round() to positive numbers : "
         << "x = " << round(x) << " y= " << round(y) << " z= " << round(z) << endl;

    cout << "round() to negative numbers : "
         << "a = " << round(a) << " b= " << round(b) << " c= " << round(c) << endl
         << endl;

    // setprecision : to set precision after decimal point
    cout << "setprecision() to positive numbers : "
         << "x(0) = " << fixed << setprecision(0) << x << " y(1)= " << fixed << setprecision(1) << y << " z(2)= " << fixed << setprecision(2) << z << endl;

    cout << "setprecision() to negaive numbers : "
         << "a(5) = " << fixed << setprecision(5) << a << " b(6)= " << fixed << setprecision(6) << b << " c(7)= " << fixed << setprecision(7) << c << endl;

    return 0;
}
