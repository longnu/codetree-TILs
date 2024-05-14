#include <iostream>
#include <string>

using namespace std;

// Forecast 정보를 나타내는 클래스 선언
class Forecast {
    public:
        string date, day, weather;
        Forecast(string date, string day, string weather) {
            this->date = date;
            this->day = day;
            this->weather = weather;
        }
};

Forecast ans = Forecast("9999-99-99", "", "");

int main(){
    // 변수 선언 및 입력
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        string date, day, weather;
        cin >> date >> day >> weather;

        // Forecast 객체를 만들어 줍니다.
        Forecast f = Forecast(date, day, weather);
        if(weather == "Rain")
            // 비가 오는 경우 가장 최근인지 확인하고,
            // 가장 최근일 경우 정답을 업데이트합니다.
            if(ans.date >= f.date)
                ans = f;
    }

    // 결과를 출력합니다.
    cout << ans.date << " " << ans.day << " " << ans.weather;
    return 0;
}