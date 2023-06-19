#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    double price_summer, price_non;
    
    cin >> n;
    
    if(n <= 120) //n<=120
    {
        price_summer = n*2.10;
        price_non = n*2.10;
    }
    else if(n > 120 && n <= 330) //120<n<=330
    {
        price_summer = 120*2.10 + (n-120)*3.02;
        price_non = 120*2.10 + (n-120)*2.68;
    }
    else if(n > 330 && n <= 500) //330<n<=500
    {
        price_summer = 120*2.10 + (330-120)*3.02 + (n-330)*4.39;
        price_non = 120*2.10 + (330-120)*2.68 + (n-330)*3.61;
    }
    else if(n > 500 && n <= 700) //500<n<=700
    {
        price_summer = 120*2.10 + (330-120)*3.02 + (500-330)*4.39 + (n-500)*4.97;
        price_non = 120*2.10 + (330-120)*2.68 + (500-330)*3.61 + (n-500)*4.01;
    }
    else //n>700
    {
        price_summer = 120*2.10 + (330-120)*3.02 + (500-330)*4.39 + (700-500)*4.97 + (n-700)*5.63;
        price_non = 120*2.10 + (330-120)*2.68 + (500-330)*3.61 + (700-500)*4.01 + (n-700)*4.50;
    }
    cout << "Summer months:" << fixed << setprecision(2) << price_summer << endl;
    cout <<"Non-Summer months:" << fixed << setprecision(2) << price_non << endl;
        
    return 0;
}

