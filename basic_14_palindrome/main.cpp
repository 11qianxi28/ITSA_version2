#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    char str[1000];
    
    while(cin >> str)
    {
        unsigned long l = strlen(str);
        int count = 0; //the pair of the same string
        int mid = l/2; //middle
        
        if(l%2) //lengh of str is odd
        {
            for(int i = 1; i <= mid; i++)
            {
                if(str[mid-i] == str[mid+i])
                    count++;
            }
        }
        else //lengh of str is even
        {
            for(int i = 0; i <mid; i++)
            {
                if(str[i] == str[l-1-i])
                    count++;
            }
        }
        
        if(count == mid)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    return 0;
}

