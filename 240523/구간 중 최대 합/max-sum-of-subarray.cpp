#include <iostream>
using namespace std;
#define MAX_N 100
int n, k;
int arr[MAX_N];
int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> k;

    for(int i =0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = -1;
    for(int i = 0; i <= n-k; i++)
    {
        int sum = 0;
        for(int j =i; j < i+k; j++)
        {
            sum = sum + arr[j];
        }
        ans = max(ans, sum);
    }

    cout << ans;


    return 0;
}