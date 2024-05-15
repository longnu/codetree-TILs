#include <iostream>
#include <algorithm>

#define MAX_DIGIT 20

using namespace std;

int main() {
    // 변수 선언 및 입력
    string binary;
    cin >> binary;
    
    // 십진수로 변환합니다.
    int num = 0;
    for(int i = 0; i < (int) binary.size(); i++)
        num = num * 2 + (binary[i] - '0');
    
	// 십진수에 17을 곱합니다.
	num *= 17;
	
	// 이진수로 변환합니다.
	int digits[MAX_DIGIT] = {};
	int cnt = 0;
	
	while(true) {
        if(num < 2) {
            digits[cnt++] = num;
            break;
        }
        
        digits[cnt++] = num % 2;
        num /= 2;
    }
    
    // 배열의 순서를 뒤집어 이진수를 출력합니다.
    for(int i = cnt - 1; i >= 0; i--)
        cout << digits[i];

    return 0;
}