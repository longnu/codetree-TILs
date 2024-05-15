#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int m1, d1, m2, d2;

    cin >> m1 >> d1 >> m2 >> d2;
    
    int month = m1, day = d1;
    int elpased_days = 1;

    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    while(true)
    {
        if(month == m2 && day == d2  ) break;
        elpased_days++;
        day++;
        if(day > num_of_days[month])
        {
            month++;
            day = 1;
        }
    }

    cout << elpased_days;

    return 0;
}