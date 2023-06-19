#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    int num1, num2;
    
    cin >> num1 >> num2;
    
    cout << num1 << "+" << num2 << "=" << num1+num2 << endl; //sum
    cout << num1 << "*" << num2 << "=" << num1*num2 << endl;  //product
    cout << num1 << "-" << num2 << "=" << num1-num2 << endl; //remainder
    
    if(num1%num2 >= 0) //remainder greater than 0
        cout << num1 << "/" << num2 << "=" << num1/num2 << "..." << num1%num2 <<endl; //quotient and remainder
    else //remainder less than 0
    {
        cout << num1 << "/" << num2 << "=" << num1/num2-1 << "..." << num1%num2+num2 <<endl;//quotient and remainder
    }
    
    return 0;
}
