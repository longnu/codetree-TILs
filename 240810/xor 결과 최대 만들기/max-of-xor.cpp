#include <iostream>
#include <vector>
using namespace std;
int n, m;
#define MAX_N 1000000
int a[MAX_N];
vector<int> comb;
int ans;

int calc()
{
    int ret = 0;
    for(int i = 0; i < comb.size(); i++)
    {
        ret = ret ^ comb[i];
    }
    return ret;
}

void recur(int idx, int cnt)
{
    if (idx >= n)
    {
        if(cnt == m)
        {
            ans = max(ans, calc());           
        }
        return;
    } 
    comb.push_back(a[idx]);
    recur(idx + 1, cnt + 1);
    comb.pop_back();
    recur(idx + 1, cnt);
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> m;
    for(int i = 0; i < n; i ++)
    {
        cin >> a[i];
    }
    
    recur(0, 0);
    cout << ans;
    
    return 0;
}