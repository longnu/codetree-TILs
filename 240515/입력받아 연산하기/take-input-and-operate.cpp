#include <iostream>

using namespace std;

int main() {
    // 변수 선언
    int a, b;

	// 입력
	cin >> a >> b;
	
	a += 87;
	b %= 10;
    
    // 출력
    cout << a << endl;
	cout << b;
    return 0;
}