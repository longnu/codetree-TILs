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

int daysofdate(int m, int d) {
    // 계산 편의를 위해 월마다 몇 일이 있는지를 적어줍니다. 
    int days[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total_days = 0;
    
    // 1월부터 (m - 1)월 까지는 전부 꽉 채워져 있습니다.
    for(int i = 1; i < m; i++)
        total_days += days[i];
    
    // m월의 경우에는 정확이 d일만 있습니다.
    total_days += d;
    
    return total_days;
}
int answer;
int main() {
    // 여기에 코드를 작성해주세요.

    int m1, d1, m2, d2;
    string A;

    cin >> m1 >> d1 >> m2 >> d2;
    cin >>A;

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