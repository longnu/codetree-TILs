#include <iostream>
using namespace std;

int n, m, k;

#define MAX_K 4
#define MAX_N 12

int turn[MAX_N];
int mal[MAX_K];

int ans;

int calc()
{
    int cnt = 0;
    for(int i = 0; i < k; i++)
    {
        if(mal[i] >= m)
        {
            cnt++;
        }
    }
    return cnt;
}

void initialize()
{
    for(int i = 0; i < k; i++)
    {
        mal[i] = 0; 
    }
}

void recur (int step)
{
    if(step == n)
    {
        ans = max(ans, calc());
        return;
    }

    for(int i = 0; i < k; i++)
    {
        mal[i] += turn[step];
        recur(step+1);
        mal[i] -= turn[step];
    }
}

int main() {
    // 여기에 코드를 작성해주세요.

    cin >> n >> m >> k;
    for(int i = 0; i < n; i ++)
    {
        cin >> turn[i];
    }

    recur(0);
    cout << ans;


    return 0;
}