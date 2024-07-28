#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define MAX_N 1000

int a[MAX_N];
int dp[MAX_N];
int n;

int main() {
    // 입력 받기
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // dp 배열 초기화
    for(int i = 0; i < n; i++) {
        dp[i] = 1;
    }

    // dp 계산
    for(int i = 1; i < n; i++) {
        for(int j = 0; j < i; j++) {
            if(a[i] > a[j]) {
                dp[i] = max(dp[i],dp[j] + 1);
            }
        }
    }

    // 가장 긴 증가 부분 수열의 길이 구하기
    int ans = 0;
    for(int i = 0; i < n; i++) {
        ans = max(ans, dp[i]);
    }

    cout << ans << endl;

    return 0;
}