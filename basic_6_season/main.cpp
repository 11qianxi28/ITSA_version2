#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    int month;
    cin >> month;
    
    if(month >= 3 && month <= 5) //month is 3~5
        cout << "Spring" << endl;
    else if(month >= 6 && month <= 8) //month is 6~8
        cout << "Summer" << endl;
    else if(month >= 9 && month <= 11) //month is 9~11
        cout << "Autumn" << endl;
    else if(month >= 1 && month <= 12) //month is 12~2
        cout << "Winter" << endl;
    
    return 0;
}
