#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    double side;
    
    while(cin >> side)
    {
        double area;
        area = side * side; //square area
        area = (int)(area*10+0.5)/10.0; //rounding the number
        cout << fixed << setprecision(1) << area <<endl;
    }
    
    return 0;
}

