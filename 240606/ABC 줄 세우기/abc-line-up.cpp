#include <iostream>

#define MAX_N 26

using namespace std;

int n;
char arr[MAX_N + 1];
int ans;

int main() {
    // 입력
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> arr[i];

    // 'A' 부터 알파벳 순서대로 찾아 가장 앞으로 이동합니다.
    for(int i = 1; i <= n; i++) {
        char x = 'A' + i - 1;

        // i번째 알파벳을 찾아 idx에 저장합니다.
        int idx = 0;
        for(int j = 1; j <= n; j++)
            if(arr[j] == x) idx = j;
        
        // idx번째 알파벳을 i번째 위치까지 swap합니다.
        for(int j = idx - 1; j >= i; j--) {
            swap(arr[j], arr[j + 1]);
            ans++;
        }
    }

    cout << ans;
    return 0;
}