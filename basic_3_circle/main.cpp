#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    int x, y;
    
    cin >> x >> y;
    
    if(x*x + y*y <= 10000) //point is inside the circle
        cout << "inside" << endl;
    else cout << "outside" << endl; //point is outside the circle
    
    return 0;
}
