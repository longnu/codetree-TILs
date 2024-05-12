#include <iostream>

using namespace std;

int main() {
    // 변수 선언
    char a;
	double b, c;

	// 입력
	cin >> a >> b >> c;
	
	cout << fixed;
	cout.precision(2);
    
    // 출력
    cout << a << endl;
	cout << b << endl;
	cout << c;
    return 0;
}