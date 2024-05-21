#include <iostream>
#include <climits>
using namespace std;
int n;
#define MAX_N 1003
int arr[MAX_N];


int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        int sum = 0;
        for(int j = 0; j < n; j++)
        {
            sum = sum + arr[j]*((j-i+n)%n);
        }
        ans = min(ans,sum);
    }

    cout<<ans;

    return 0;
}