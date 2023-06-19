
#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    int month, date;
    
    cin >> month >> date;
    
    switch(month)
    {
        case 1:
            if(date < 21)
                cout << "Capricorn" << endl; //12/22~1/20 摩羯
            else
                cout << "Aquarius" << endl; //1/21~2/18 水瓶
            break;
            
        case 2:
            if(date < 19)
                cout << "Aquarius" << endl; //1/21~2/18 水瓶
            else
                cout << "Pisces" << endl; //2/19~3/20 雙魚
            break;
            
        case 3:
            if(date < 21)
                cout << "Pisces" << endl; //2/19~3/20 雙魚
            else
                cout << "Aries" << endl; //3/21~4/20 牡羊
            break;
            
        case 4:
            if(date < 21)
                cout << "Aries" << endl; //3/21~4/20 牡羊
            else
                cout << "Taurus" << endl; //4/21~5/21 金牛
            break;
            
        case 5:
            if(date < 22)
                cout << "Taurus" << endl; //4/21~5/21 金牛
            else
                cout << "Gemini" << endl; //5/22~6/21 雙子
            break;
            
        case 6:
            if(date < 22)
                cout << "Gemini" << endl; //5/22~6/21 雙子
            else
                cout << "Cancer" << endl; //6/22~7/22 巨蟹
            break;
            
        case 7:
            if(date < 23)
                cout << "Cancer" << endl; //6/22~7/22 巨蟹
            else
                cout << "Leo" << endl; //7/23~8/23 獅子
            break;
            
        case 8:
            if(date < 24)
                cout << "Leo" << endl; //7/23~8/23 獅子
            else
                cout << "Virgo" << endl; //8/24~9/23 處女
            break;
            
        case 9:
            if(date < 24)
                cout << "Virgo" << endl; //8/24~9/23 處女
            else
                cout << "Libra" << endl; //9/24~10/23 天秤
            break;
            
        case 10:
            if(date < 24)
                cout << "Libra" << endl; //9/24~10/23 天秤
            else
                cout << "Scorpio" << endl; //10/24~11/22 天蠍
            break;
            
        case 11:
            if(date < 23)
                cout << "Scorpio" << endl; //10/24~11/22 天蠍
            else
                cout << "Sagittarius" << endl; //11/23~12/21 射手
            break;
            
        case 12:
            if(date < 22)
                cout << "Sagittarius" << endl; //11/23~12/21 射手
            else
                cout << "Capricorn" << endl; //12/22~1/20 摩羯
            break;
    }
    
    return 0;
}
