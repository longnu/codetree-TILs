#include <iostream>

using namespace std;

int NumOfDays(int m, int d) {
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

int NumOfDay(string s) {
    // 간단한 비교를 위해 요일을 숫자로 나타내줍니다.
    if(s == "Mon") return 0;
    else if(s == "Tue") return 1;
    else if(s == "Wed") return 2;
    else if(s == "Thu") return 3;
    else if(s == "Fri") return 4;
    else if(s == "Sat") return 5;
    return 6;
}

int ans;

int main() {
    // 변수 선언 및 입력
    int m1, m2, d1, d2;
    string A;
    cin >> m1 >> d1 >> m2 >> d2;
    cin >> A;

    int start_date = NumOfDays(m1, d1);
    int end_date = NumOfDays(m2, d2);
    int cur_day = NumOfDay("Mon");

    for(int date = start_date; date <= end_date; date++) {
        // 오늘의 요일이 A요일과 같다면 정답에 추가합니다.
        if(cur_day == NumOfDay(A)) ans++;
        cur_day = (cur_day + 1) % 7;
    }
    
    // 출력
    cout << ans;
    return 0;
}