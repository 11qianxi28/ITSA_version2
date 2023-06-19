#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    int col, row;
    int matrix[100][100];
    
    while(cin >> col >> row)
    {
        for(int i = 0; i < col; i++)
        {
            for(int j = 0; j < row; j++)
            {
                cin >> matrix[i][j];
            }
        }
        
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                cout << matrix[j][i]; //reverse print
                if(j != (col-1))
                    cout << " " ; //print blank
            }
            cout << endl;
        }
    }
    
    return 0;
}
