#include <iostream>
#include <string>
using namespace std;

string day_arr[7] = {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
int days_arr[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int returnidx (string s) {
    // 간단한 비교를 위해 요일을 숫자로 나타내줍니다.
    if(s == "Mon") return 0;
    else if(s == "Tue") return 1;
    else if(s == "Wed") return 2;
    else if(s == "Thu") return 3;
    else if(s == "Fri") return 4;
    else if(s == "Sat") return 5;
    return 6;
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
int answer;
int main() {
    // 여기에 코드를 작성해주세요.

    int m1, d1, m2, d2;
    string A;

    cin >> m1 >> d1 >> m2 >> d2 >> A;

    int curidx = returnidx(A);

    int daysoffirst = daysofdate(m1, d1);
    int daysofsecond = daysofdate(m2, d2);

    for(int date = daysoffirst; date <= daysofsecond; date++)
    {
        if(curidx == returnidx(A) )
        {
           answer++; 
        }
        curidx = (curidx+1)%7;
    }
    cout << answer;



    return 0;
}