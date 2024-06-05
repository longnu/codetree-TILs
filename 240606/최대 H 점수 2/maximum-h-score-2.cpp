#include <iostream>
#include <algorithm>

#define MAX_N 1000

using namespace std;

int n, l;
int a[MAX_N];

int main() {
    // 입력:
    cin >> n >> l;
    
    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    // 모든 답을 일일히 가정해 봅니다.
    int ans = 0;
    for(int i = 1; i <= n; i++) {
        // 정답이 i일 때 가능한지 판단합니다.

        // i - 1인 값은 최대 l개까지 i로 올릴 수 있습니다.
        // cnt : i이상인 숫자의 개수(i - 1인 숫자는 l개까지 카운트)
        // cntl : 지금까지 1 증가시킨 숫자의 개수
        int cnt = 0;
        int cntl = 0;

        for(int j = 0; j < n; j++) {
            if(a[j] >= i)
                cnt++;
            else if(a[j] == i - 1)
                if(cntl < l) {
                    cntl++;
                    cnt++;
                }
        }

        if(cnt >= i)
            ans = i;
    }

    cout << ans;

    return 0;
}