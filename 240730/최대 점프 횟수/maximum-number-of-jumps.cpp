#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_N 1000

int n;
int a[MAX_N];
int dp[MAX_N];

int main() {
    // 입력 받기
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    // DP 배열 초기화
    for (int i = 0; i < n; i++)
        dp[i] = -1;
    dp[0] = 0;

    // DP 계산
    for (int i = 0; i < n; i++) {
        if (dp[i] == -1) continue;  // 해당 위치에 도달할 수 없는 경우
        for (int j = 1; j <= a[i]; j++) {
            if (i + j < n) {
                dp[i + j] = max(dp[i + j], dp[i] + 1);
            }
        }
    }

    // 결과 찾기
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans = max(ans, dp[i]);
    }

    // 결과 출력
    cout << ans << endl;

    return 0;
}