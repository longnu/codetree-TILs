#include <iostream>

#define MAX_N 200

using namespace std;

// 전역 변수 선언:
int n, t;

int l[MAX_N + 1];
int r[MAX_N + 1];
int d[MAX_N + 1];

int main() {
    // 입력:
    cin >> n >> t;
    
    for(int i = 0; i < n; i++)
        cin >> l[i];

     for(int i = 0; i < n; i++)
        cin >> r[i];       
    
    for(int i = 0; i < n; i++)
        cin >> d[i];
        
    while(t--) {
        // Step 1
        // 왼쪽에서 가장 오른쪽에 있는 숫자를 따로 temp값에 저장해놓습니다.
        int temp = l[n - 1];
        
        // Step 2
        // 왼쪽에 있는 숫자들을 완성합니다. 
        // 벨트를 기준으로 오른쪽에서부터 채워넣어야 하며, 
        // 맨 왼쪽 숫자는 아래에서 가져와야함에 유의합니다.
        for(int i = n - 1; i >= 1; i--)
			l[i] = l[i - 1];
		l[0] = d[n - 1];
        
        // Step 3
        // 오른쪽에 있는 숫자들을 완성합니다. 
        // 벨트를 기준으로 마찬가지로 오른쪽에서부터 채워넣어야 하며, 
        // 맨 왼쪽 숫자는 이전 단계에서 미리 저장해놨던 temp값을 가져와야함에 유의합니다.
        int temp2 = r[n - 1];
        for(int i = n - 1; i >= 1; i--)
			r[i] = r[i - 1];
		r[0] = temp;

        // Step 4
        // 아래에 있는 숫자들을 완성합니다. 
        // 마찬가지로 벨트를 기준으로 오른쪽에서부터 채워넣어야 하며, 
        // 맨 왼쪽 숫자는 이전 단계에서 미리 저장해놨던 temp값을 가져와야함에 유의합니다.
        for(int i = n - 1; i >= 1; i--)
			d[i] = d[i - 1];
		d[0] = temp2;
    }

    // 출력:
    for(int i = 0; i < n; i++)
		cout << l[i] << " ";
	cout << endl;
    
    for(int i = 0; i < n; i++)
		cout << r[i] << " ";
	cout << endl;

	for(int i = 0; i < n; i++)
		cout << d[i] << " ";
        
    return 0;
}