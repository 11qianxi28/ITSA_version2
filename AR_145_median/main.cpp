#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    float num[15] = {0};
    float med;
    
    for(int i = 0; i < 10; i++)
        cin >> num[i];
    
    for(int i = 0; i < 10-1; i++) //bubble sort the list
    {
        for(int j = 0; j < 10-i-1; j++)
        {
           if(num[j+1] < num[j])
           {
               float temp = num[j+1];
               num[j+1] = num[j];
               num[j] = temp;
           }
        }
    }
    
    for(int i = 0; i < 10; i++) //print the list after sorting
    {
        cout << fixed << setprecision(0) << num[i];
        if(i != 9)
            cout << " ";
    }
    cout << endl;
    
    med = num[4]/2+num[5]/2; //count the median if the list
    cout << "Median:" << fixed << setprecision(2) << med << endl;
    return 0;
}
