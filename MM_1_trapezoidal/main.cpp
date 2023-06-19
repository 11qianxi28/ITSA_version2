#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    float up, down, height;
    while(cin >> up >> down >> height)
    {
        cout << "Trapezoid area:" << fixed << setprecision(1) << (up+down)*height/2 << endl; //calculate and print the area of trapezoidal
    }
    return 0;
}
