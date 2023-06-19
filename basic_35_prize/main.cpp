#include <iostream>
#include <cstring>
#include <iomanip>
#include <cstdio>
#define MAX 1000

using namespace std;

void BubbleSort(int price[MAX], int number);

int main()
{
    int n;
    int prize[MAX];
    char output[15][MAX];
    
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int t, m ,k;
        int sum = 0;
        
        cin >> t >> m >> k;
        for(int j = 0; j < k; j++)
        {
            cin >> prize[j];
        }
        BubbleSort(prize, k); //sort the prize
        
        for(int i = 0; i < m; i++) //add cost of prize in m times
        {
            sum += prize[i];
        }
        
        if(sum <= t) //cost is under budget
        {
            char itoa[MAX];
            sprintf(itoa, "%d", sum);
            strcpy(output[i] , itoa); //output total cost
        }
        else //cost is over budget
            strcpy(output[i] , "Impossible"); //output "Impossible"
            
    }
    
    for(int i = 0; i < n; i++)
    {
        cout << output[i] << endl;
    }
    return 0;
}

void BubbleSort(int prize[MAX], int number) //bubble sort
{
    int temp;
    for(int i = 0; i <  number - 1; i++)
    {
        for(int j = 0; j < number - i - 1; j++)
        {
            if(prize[j] > prize[j+1])
            {
                temp = prize[j];
                prize[j] = prize[j+1];
                prize[j+1] = temp;
            }
        }
    }
}

