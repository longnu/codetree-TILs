#include <iostream>
#define MAX_N 100

using namespace std;

int n, m;
int arr[MAX_N];

int main() {
    // 입력:
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    int cnt = 0;
    if (m == 0) {
        // m이 0일 경우, 각 사람마다 와이파이를 설치합니다.
        for(int i = 0; i < n; i++) {
            if(arr[i] == 1) {
                cnt++;
            }
        }
    } else {
        // m이 0이 아닐 경우, 기존 로직을 사용합니다.
        for(int i = 0; i < n; i++) {
            if(arr[i] == 1) {
                cnt++;
                i += 2 * m + 1; // 여기를 수정했습니다.
            }
        }
    }
    
    cout << cnt;
    return 0;
}