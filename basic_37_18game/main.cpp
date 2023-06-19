#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

void BubbleSort(int list[5], int n);

int main()
{
    int dice[5];
    int count = 0;
    int sum[1000] = {0};
    
    for(int i = 0; i < 4; i++)
    {
        cin >> dice[i];
    }
    
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(i != j)
            {
                if(dice[i] == dice[j])
                {
                    sum[count++] = dice[i] + dice[j];
                }
            }
        }
    }
    
    BubbleSort(sum, count);
    
    if(count == 12) //4 same dice
        cout << "WIN" << endl;
    else if(count == 2) //1 pair of same dice
    {
        int all_sum = 0;
        for(int i = 0; i < 4; i++)
        {
            all_sum  += dice[i];
        }
        cout << all_sum - sum[count-1] << endl;
    }
    else if(count == 4) //2 pairs of same dice
        cout << sum[count-1] << endl;
    else //3 same dice or all different
        cout << "R" << endl;
    
    return 0;
}

void BubbleSort(int list[1000], int n) //bubble sort
{
    int temp;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
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

