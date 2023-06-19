#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int arr[3][3];
    int sum;
    
    for(int i = 0; i < 3; i++) //input the matrix
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    
    sum = arr[0][0]*arr[1][1]*arr[2][2] + arr[0][1]*arr[1][2]*arr[2][0] + arr[0][2]*arr[1][0]*arr[2][1] - arr[0][2]*arr[1][1]*arr[2][0] - arr[0][0]*arr[1][2]*arr[2][1] - arr[0][1]*arr[1][0]*arr[2][2]; //calculate the determinant
    cout << sum << endl;
    
    return 0;
}
