#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int num;
    char input[1000][15];
    
    cin >> num;
    for(int i = 0; i < num; i++)
        cin >> input[i];
    
    for(int i = 0; i < num; i++)
    {
        int check = 0;
        
        if(strlen(input[i]) != 4) //digit isn't equal to 4 is a failure input
            cout << "Failure Input" << endl;
        else
        {
            for(int j = 0; j < 5; j++)
            {
                for(int k = 1; k < 4-j; k++)
                {
                    if(input[i][j] == input[i][j+k])
                        check++; //count the pair of same number
                }
            }
            if(check == 1) //only one pair is a good number
                cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    
    return 0;
}
