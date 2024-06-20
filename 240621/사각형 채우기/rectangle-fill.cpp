#include <iostream>
#define MAX_N 1000
#define MOD 10007
using namespace std;

int n;
int dp[MAX_N + 1];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    dp[0] = 1;
    dp[1] = 1;
    for(int i = 2; i <= n; i ++)
    {
        dp[i] = (dp[i-1] + dp[i -2]) % MOD;
    }

    cout << dp[n];
    return 0;
}