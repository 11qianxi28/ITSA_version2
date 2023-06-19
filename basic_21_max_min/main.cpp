#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

void BubbleSort(float list[15]);

int main()
{
    float list[15];
    
    for(int i = 0; i < 10; i++)
    {
        cin >> list[i];
    }
    
    BubbleSort(list); //sorting th list
    cout << "maximum:" << fixed << setprecision(2) << list[9] << endl; //print max
    cout << "minimum:" << fixed << setprecision(2) << list[0] << endl; //print min
    
    return 0;
}

void BubbleSort(float list[15]) //bubble sort
{
    int temp;
    for(int i = 0; i <  10 - 1; i++)
    {
        for(int j = 0; j < 10 - i - 1; j++)
        {
            if(list[j] > list[j+1])
            {
                temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    }
}
