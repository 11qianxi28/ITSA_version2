#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    int height, gender;
    double weight;
    
    while(cin >> height >> gender)
    {
        if(gender == 1) //male
        {
            weight = (height-80) * 0.7;
            cout << fixed << setprecision(1) << weight << endl;
        }
        else //female
        {
            weight = (height-70) * 0.6;
            cout << fixed << setprecision(1) << weight << endl;
        }
    }
    
    return 0;
}
