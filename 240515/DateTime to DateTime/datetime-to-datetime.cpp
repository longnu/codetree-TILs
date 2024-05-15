#include <iostream>
using namespace std;


int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;

    cin >> a >> b >> c;

    if(a<11)
    {
        return -1;
    }
    else if(a==11)
    {
        if(b<11) return -1;
        else if(b==11)
        {
            if(c<11) return -1;
        }
    }
    else{
        
    }

    int elapesd_minute = 0;
    int day = 11;
    int hour = 11;
    int minute = 11;

    while(true)
    {
        if(day == a && hour == b && minute == c)
        {
            break;
        }
        minute++;
        elapesd_minute++;
        if(minute == 60)
        {
            hour++;
            minute=0;
        }
        if(hour==24)
        {
            day++;
            hour=0;
        }
    }

    cout << elapesd_minute;

    return 0;
}