#include <iostream>

#define MAX_N 100

using namespace std;

int n, k;
int num[MAX_N];

int main() {
    // 입력
    cin >> n >> k;
    
    for(int i = 0; i < n; i++)
        cin >> num[i];
	
	int ans = -1;

    // 모든 쌍에 대해서 터질 수 있는 폭탄을 찾고
    // 그 중 번호가 최대인 값을 찾습니다.
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++) {
			// 거리가 k를 초과하는 경우 넘어갑니다.
			if(j - i > k)
				break;
			
			// 두 폭탄의 번호가 다를 경우 터지지 않습니다.
			if(num[i] != num[j])
				continue;
			
			ans = max(ans, num[i]);
		}
    
    cout << ans;
	
    return 0;
}