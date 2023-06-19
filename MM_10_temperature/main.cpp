#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    double c = 0.0;
    
    while(cin >> c)
    {
        double f;
        f = c*9/5+32; //celsius transform to fahrenheit
        f = (int)(f*10+0.5)/10.0; //rounding
        cout << fixed << setprecision(1) << f << endl;
    }
    
    return 0;
}
