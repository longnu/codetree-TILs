#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_N 100
#define MAX_M 10000

int n, m;
int coin[MAX_N];
int dp[MAX_M+1];

int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        cin >> coin[i];
    }
    
    fill(dp, dp + MAX_M + 1, -1); // dp 배열을 -1로 초기화
    dp[0] = 0; // 0원을 만들기 위해 필요한 동전의 수는 0개

    for(int i = 1; i <= m; i++) {
        for(int j = 0; j < n; j++) {
            if(i - coin[j] >= 0 && dp[i - coin[j]] != -1) {
                dp[i] = max(dp[i], dp[i - coin[j]] + 1);
            }
        }
    }

    cout << dp[m] << endl;
    return 0;
}