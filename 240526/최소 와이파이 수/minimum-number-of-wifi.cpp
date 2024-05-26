#include <iostream>
using namespace std;
#define MAX_N 100
int arr[MAX_N+1];

int main() {
    int n = 0;
    cin >> n;

    int m = 0;
    cin >> m;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int cnt = 0;
    int i = 0;
    while (i < n) {
        // 와이파이를 설치할 위치 찾기
        int install_pos = -1;
        for (int j = i + m; j >= i - m && j >= 0 && j < n; j--) {
            if (arr[j] == 1) {
                install_pos = j;
                break;
            }
        }

        // 와이파이를 설치할 위치가 없다면 그 위치에서 가장 오른쪽 위치에 설치
        if (install_pos == -1) {
            install_pos = i + m < n ? i + m : n - 1;
        }

        cnt++;
        i = install_pos + m + 1; // 다음 위치로 이동
    }

    cout << cnt;

    return 0;
}