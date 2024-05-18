#include <iostream>
using namespace std;
#define MAX_N 1000

int arr[MAX_N];

int main() {
    int n = 0;
    cin >> n;

    for(int i = 0 ; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = 0;
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        if(n >= 1 && arr[i-1] * arr[i] >0)
        {
            cnt++;
        }
        else
        {
            cnt = 1;
        }
        ans = max(ans, cnt);
    }
    // 여기에 코드를 작성해주세요.

    cout << ans;
    return 0;
}