#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    
    while(cin >> n)
    {
        int sum = 0;
        for(int i = 1; i <= n; i++)
        {
            if(i%3 == 0) //i is divided by 3
                sum += i;
        }
        
        cout << sum << endl;
    }
    return 0;
}
