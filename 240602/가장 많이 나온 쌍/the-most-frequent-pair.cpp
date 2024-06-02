#include <iostream>
#include <algorithm>

#define MAX_M 100

using namespace std;

int n, m;
int a[MAX_M], b[MAX_M];

int CountNum(int first, int second) {
    int cnt = 0;
    // (first, second) 쌍이 (a[i], b[i]) 혹은 (b[i], a[i])라면
    // 그 개수를 세줍니다.
    for(int i = 0; i < m; i++) {
        if(first == a[i] && second == b[i])
            cnt++;
        else if(second == a[i] && first == b[i])
            cnt++;
    }
    return cnt;
}

int main() {
    // 입력:
    cin >> n >> m;
    for(int i = 0; i < m; i++)
        cin >> a[i] >> b[i];

    int ans = 0;
    // 모든 쌍 (i, j)를 잡아보며
    // 각 쌍이 몇 번씩 나왔는지를 확인하여
    // 그 중 최댓값을 계산합니다.
    for(int i = 1; i <= n; i++)
        for(int j = i + 1; j <= n; j++)
            ans = max(ans, CountNum(i, j));

    cout << ans;
    return 0;
}