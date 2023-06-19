#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    int num;
    
    while(cin >> num)
    {
        cout << num << " " << num*num<< " " << num*num*num << endl; //print number, the square of number and the cube of number
    }
    return 0;
}
