#include <iostream>
#include <algorithm>
#include <climits>

#define MAX_N 100000

using namespace std;

int n;
int arr[2 * MAX_N];
int ans = INT_MAX;

int main() {
    // 입력
    cin >> n;
    for(int i = 1; i <= 2 * n; i++)
        cin >> arr[i];

    sort(arr + 1, arr + 2 * n + 1);

    // 정렬한 뒤 1번째 값과 n + 1번째 값, 2번째 값과 n + 2번째 값, ... n번째 값과 2n번째 값의
    // 차이를 구합니다. 구한 값들의 최솟값을 찾습니다.
    for(int i = 1; i <= n; i++) {
        ans = min(ans, arr[n + i] - arr[i]);
    }

    cout << ans;
    return 0;
}