#include <iostream>
#include <string>
using namespace std;

string day_arr[7] = {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
int days_arr[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int returnidx(string A)
{
    for (int i = 0 ; i < 7; i++)
    {
        if(day_arr[i] == A)
        {
            return i;
        }
    }
}

int daysofdate(int month, int day)
{
    int days = 0;
    for(int i = 1; i < month; i++)
    {
        days = days + days_arr[i];
    }

    days = days + day;
    return days;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int m1, d1, m2, d2;
    string A;

    cin >> m1 >> d1 >> m2 >> d2 >> A;

    int idx = returnidx(A);

    int daysoffirst = daysofdate(m1, d1);
    int daysofsecond = daysofdate(m2, d2);

    int days = daysofsecond - daysoffirst;
    int answer = days/7 + 1;

    cout << answer;



    return 0;
}