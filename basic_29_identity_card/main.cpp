#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    char id[15];
    int x1, x2;
    int p;
    
    cin >> id;
    
    for(int i = 1; i <= 9; i++)
    {
        id[i] -= 48;
    }
    
    if(id[0] != 73 && id[0] != 79 && id[0] != 87 && id[0] != 90)
    {
        int extra;
        if(id[0] >= 65 && id[0] <= 72) //letter is A~H
            extra = 0;
        if(id[0] >= 74 && id[0] <= 78) //letter is J~N
            extra = 1;
        if(id[0] >= 80 && id[0] <= 86) //letter is P~V
            extra = 2;
        if(id[0] >= 88 && id[0] <= 89) //letter is X~Y
            extra = 3;
        
        x1 = (id[0]-55-extra) / 10;
        x2 = (id[0]-55-extra) % 10;
    }
    else
    {
        if(id[0] == 73) //letter is I
        {
            x1 = (id[0]-39) / 10;
            x2 = (id[0]-39) % 10;
        }
        else if(id[0] == 79) //letter is O
        {
            x1 = (id[0]-44) / 10;
            x2 = (id[0]-44) % 10;
        }
        else if(id[0] == 87) //letter is W
        {
            x1 = (id[0]-55) / 10;
            x2 = (id[0]-55) % 10;
        }
        else //letter is Z
        {
            x1 = (id[0]-63) / 10;
            x2 = (id[0]-63) % 10;
        }
    }
     
    //count the p
    p = x1 + 9*x2;
    for(int i = 1; i <= 8; i++)
    {
        p += (9-i)*id[i];
    }
    p += id[9];
    
    if(!(p%10))
        cout << "CORRECT!!!" << endl;
    else
        cout << "WRONG!!!" << endl;
        
    return 0;
}


