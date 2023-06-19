#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    int price;
    
    cin >> price;
    
    cout << "NT10=" << price/10 << endl; //the number of 10 coins
    price = price % 10; //remaining price
    
    cout << "NT5=" << price/5 << endl; //the number of 5 coins
    price = price % 5; //remaining price
    
    cout << "NT1=" << price << endl; //the number of 1 coins
    
    return 0;
}
