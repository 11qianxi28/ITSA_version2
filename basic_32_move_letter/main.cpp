#include <iostream>
#include <cstring>
#include <iomanip>
#include <cstdio>

using namespace std;

int main()
{
    char string[105];
    char *str = string;
    int num;
    
    fgets(str, 105, stdin);
    cin >> num;
    
    for(int i = 0; i < strlen(string); i++)
    {
        if(isalnum(string[i]))
        {
            if(isalpha(string[i])) //char is letter
            {
                if(string[i]+num >= 65 && string[i]+num <= 90) //upper letter
                    cout <<  char(string[i]+num);
                else if (string[i]+num >= 97 && string[i]+num <= 122) //lower letter
                    cout <<  char(string[i]+num);
                else
                    cout <<  char(string[i]+num-26);
            }
            else //char is number
            {
                if(string[i]+num >= 48 && string[i]+num <= 57)
                    cout <<  char(string[i]+num);
                else
                    cout <<  char(string[i]+num-10);
            }
        }
        else
            cout <<  char(string[i]);
    }
    
    return 0;
}
