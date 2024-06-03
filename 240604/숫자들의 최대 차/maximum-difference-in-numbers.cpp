#include <iostream>

#define MAX_N 1000
#define MAX_NUM 10000

using namespace std;

int n, k;
int arr[MAX_N];

// 구간 [l, r] 
// 사이에 들어있는 숫자 개수를 반환합니다.
int CountNum(int l, int r) {
    int cnt = 0;
    for(int i = 0; i < n; i++)
        if(l <= arr[i] && arr[i] <= r)
            cnt++;

    return cnt;
}

int main() {
    // 입력:
    cin >> n >> k;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int ans = 0;
    // 크기가 K인 모든 구간을 잡아
    // 해당 구간 안에 들어오는 숫자의 개수를 세서
    // 그 중 최댓값을 계산합니다.
    for(int i = 1; i <= MAX_NUM; i++) {
        // 구간 [i, i + k] 사이에 들어있는 숫자를 세어
        // 최댓값을 계산합니다.
        ans = max(ans, CountNum(i, i + k));
    }

    cout << ans;
    return 0;
}