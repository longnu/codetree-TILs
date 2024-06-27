#include <iostream>
#define MAX_N 1000
using namespace std;
int dp[MAX_N + 1];




int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 3;
    for(int i = 3; i<= n; i++)
    {
        dp[i] = dp[i-1] + dp[i-2] * 2;
    }
    cout << dp[n];
    return 0;
}