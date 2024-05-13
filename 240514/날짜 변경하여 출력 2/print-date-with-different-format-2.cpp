#include <iostream>

using namespace std;

int main() {
    // 변수 선언
    int y, m, d;

	// 입력
	cin >> m;
    cin.get();
    cin >> d;
    cin.get();
    cin >> y;
    
    // 출력
    cout << y << "." << m << "." << d;
    return 0;
}