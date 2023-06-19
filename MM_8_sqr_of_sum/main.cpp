#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    int num1, num2;
    
    while(cin >> num1 >> num2)
    {
        int sum = num1 + num2;
        cout << sum*sum << endl; //print the suqare of the sum
    }
    
    return 0;
}
