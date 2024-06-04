#include <iostream>
#include <algorithm>
#include <climits>

#define MAX_N 1000
#define MAX_H 100

using namespace std;

int n;
int arr[MAX_N];

int main() {
    // 입력 받기
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = INT_MAX;

    // 높이 차이가 17 이하가 되도록 만들기 위한 범위를 탐색
    for (int i = 0; i <= MAX_H - 17; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] < i) {
                sum += (i - arr[j]) * (i - arr[j]);
            } else if (arr[j] > i + 17) {
                sum += (arr[j] - (i + 17)) * (arr[j] - (i + 17));
            }
        }
        ans = min(ans, sum);
    }

    cout << ans << endl;

    return 0;
}