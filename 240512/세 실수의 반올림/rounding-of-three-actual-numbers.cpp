#include <iostream>

using namespace std;

int main() {
    // 변수 선언
    double a, b, c;

	// 입력
	cin >> a >> b >> c;
	
	cout << fixed;
	cout.precision(3);
    
    // 출력
    cout << a << endl;
	cout << b << endl;
	cout << c;
    return 0;
}