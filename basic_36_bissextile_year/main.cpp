#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    int year;
    
    while(cin >> year)
    {
        if(!(year%4)) //multiple of 4
        {
            if(!(year%100)) //multiple of 100
            {
                if(!(year%400))
                    cout << "Bissextile Year" << endl; //multiple of 400
                else
                    cout << "Common Year" << endl; //multiple of 100
            }
            else
                cout << "Bissextile Year" << endl; //multiple of 4
        }
        else
            cout << "Common Year" << endl; //isn't a multiple of 4
    }
    
    return 0;
}

