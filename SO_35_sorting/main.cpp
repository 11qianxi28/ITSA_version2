#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    
    cin >> n;
    
    if(n < 95)
    {
        if(n < 56)
        {
            if(n < 23)
            {
                if(n < 9)
                {
                    if(n < 6)
                    {
                        if(n < 1)
                            cout << n << ",1,6,9,23,56,95" << endl; //n<1
                        else
                            cout << "1," << n << ",6,9,23,56,95" << endl; //1<n<6
                    }
                    else
                        cout << "1,6," << n << ",9,23,56,95" <<endl; //6<n<9
                }
                else
                    cout << "1,6,9," << n << ",23,56,95" << endl; //9<n<23
            }
            else
                cout << "1,6,9,23," << n << ",56,95" << endl; //23<n<56
        }
        else
            cout << "1,6,9,23,56," << n << ",95" << endl; //56<n<95
    }
    else
        cout << "1,6,9,23,56,95," << n << endl; //n>95
    
    return 0;
}

