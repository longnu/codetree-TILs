#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int answer = - a*60 - b + c*60  + d;
    
    cout << answer;

    return 0;
}