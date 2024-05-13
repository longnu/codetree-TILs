#include <iostream>

using namespace std;

int main() {
    // 변수 선언
    int y, m, d;

	// 입력
	cin >> y;
    cin.get();
    cin >> m;
    cin.get();
    cin >> d;
    
    // 출력
    cout << m << "-" << d << "-" << y;
    return 0;
}