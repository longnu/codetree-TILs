#include <iostream>
using namespace std;

int n;

#define MAX_N 100

int profit[MAX_N + 1];
int dp[MAX_N + 1];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i = 1; i <= n; i ++)
    {
        cin >> arr[i];
    }

    dp[0] = 0;

    for(int i =1; i <= n; i++)
    {
        for(int j = 1; j<= i; j++)
        {
            dp[i] = max(dp[i], dp[i-j] + profit[j]);
        }
    }

    cout << dp[n];
    return 0;



    return 0;
}