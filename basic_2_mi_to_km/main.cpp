#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    int mile;
    double km;
    
    while(cin >> mile)
    {
        km = 1.6*mile; //transform km to mile
        cout << fixed << setprecision(1) << km << endl;
    }
    
    return 0;
}
