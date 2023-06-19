#include <iostream>

using namespace std;

int main()
{
    int hr_1, hr_2, min_1, min_2;
    int hour;
    int min;
    int time = 0; //最後計算停車費的倍數
    int price;
    
    cin >> hr_1 >> min_1 >> hr_2 >> min_2;
    
    hour = hr_2 - hr_1;
    min = min_2 - min_1;
    
    if(min >= 0)
    {
        if(min >= 30)
            time++;
    }
    else
    {
        hour--;
        min_2 += 60;
        min = min_2 - min_1;
        if(min >= 30)
            time++;
    }
    time += hour*2; //per 30min time will add 1
    
    if(time <= 4) //less than or equal to 2 hours
    {
        price = time*30;
        cout << price << endl;
    }
    else if(time <= 8 && time > 4) //more than 2 hours but less than 4 hours
    {
        price = 4*30 + (time-4)*40;
        cout << price << endl;
    }
    else //more than 4 hours
    {
        price = 4*30 + 4*40 + (time-8)*60;
        cout << price << endl;
    }
    
    return 0;
}
