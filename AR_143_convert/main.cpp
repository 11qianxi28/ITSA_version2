#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char letter[20];
    int i = 0;
    
    cin >> letter;
    
    while(letter[i] != '\0')
    {
        cout << "(" << letter[i] - 'a' << ")" ; //print the size of letter, a is 0
        i++;
    }
    cout << endl;
    
    return 0;
}
