#include <iostream>
#include <cstring>
#include <ios>
#include <limits>
using namespace std;

// difining macro for ignore fuction as "d"
#define d ignore(numeric_limits<streamsize>::max(), '\n')

int main()
{
    int x;
    cin >> x;

    string s1;
    cin.d; // d is defined
    getline(cin, s1);

    int y;
    cin >> y;

    char s2[10];
    cin >> ws; // to clear the buffer
    cin.getline(s2, 10);
    //cin.getline(s2,10);

    cout << "\nx= " << x << endl;
    cout << "s1 = " << s1 << endl;
    cout << "y= " << y << endl;
    cout << "s2 = " << s2 << endl;

    return 0;
}
