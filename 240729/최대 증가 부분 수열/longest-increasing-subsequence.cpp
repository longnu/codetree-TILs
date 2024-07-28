#include <iostream>
#include <climits>
using namespace std;
#define MAX_N 1000


int a[MAX_N];
int dp[MAX_N];
int n;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i = 0;i < n; i ++)
    {
        cin >> a[i];
    }

    for(int i = 0;i < n; i ++)
    {
        dp[i] = INT_MIN;
    }

    dp[0] = 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            if(a[i] > a[j])
            {
                dp[i] = dp[j]+1;
            }
        }
    }

    int ans = 0;
    for(int i = 0 ; i < n; i++)
    {
        ans = max(ans, dp[i]);
    }

    cout << ans;


    return 0;
}