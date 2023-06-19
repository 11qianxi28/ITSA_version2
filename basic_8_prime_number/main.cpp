#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

void Prime(int num);

int main()
{
    int input;
    
    while(cin >> input)
        Prime(input);
    
    return 0;
}

void Prime(int num) //check the number is prime or not
{
    for(int i = 2; i <= num; i++)
    {
        if((num%i) == 0)
        {
            if(num == i) //num is divided by itself
            {
                cout << "YES" << endl;
                break;
            }
            else
            {
                cout << "NO" << endl;
                break;
            }
        }
    }
}

