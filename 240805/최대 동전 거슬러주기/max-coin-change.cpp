#include <iostream>
using namespace std;
int n, m;

#define MAX_N 100
#define MAX_M 10000

int coin[MAX_N];
int dp[MAX_M+1];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        cin >> coin[i];
    }
    dp[0] = 0;

    for(int i  =1; i <= m; i ++ )
    {
        for(int j = 0; j < n; j++)
        {
            if(i - coin[j] >= 0 )
            {
                dp[i] = max(dp[i], dp[i - coin[j]]+1);
            }
            
        }
    }
    cout << dp[m];
    return 0;
}