#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    int i;
    
    while(cin >> i)
    {
        if(i > 31)
            cout << "Value of more than 31" << endl;
        else
        {
            unsigned long long ans = 1;
            for(int j = 0; j < i; j++) //count 2 to the power of i
            {
                ans *= 2;
            }
            cout << ans << endl;
        }
    }
    
    return 0;
}
