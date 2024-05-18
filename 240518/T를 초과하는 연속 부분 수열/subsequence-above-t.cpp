#include <iostream>
using namespace std;
#define MAX_N 1000

int arr[MAX_N];
int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    cin >> n;
    int t = 0;
    cin >> t;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = 0;
    int cnt = 0;
    for(int i = 0 ; i < n; i++)
    {
        if(i == 0)
        {
            if(arr[i] > t)
            {
                cnt = 1;
            }
            else
            {
                cnt = 0;
            }
        }
        else{
            if(arr[i] > t)
            {
                cnt++;
            }
            else{
                cnt = 1;
            }
        }


        ans = max(ans, cnt);
    }

    cout << ans;

    return 0;
}