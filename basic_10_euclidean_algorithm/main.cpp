#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main() {
    int a, b, r;
    
    cin >> b >> r;
    
    while(r) //eucliden algorithm
    {
        a = b;
        b = r;
        r = a % b;
    }
    
    cout << b << endl; //highest common factor
    
    return 0;
}
