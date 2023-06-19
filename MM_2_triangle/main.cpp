#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    float base, height;
    cin >> base >> height;
    cout << fixed << setprecision(1) << base*height/2 << endl; //area = base * height / 2
    return 0;
}

