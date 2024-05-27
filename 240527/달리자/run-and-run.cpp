#include <iostream>
#define MAX_N 100
using namespace std;
int n;
int a[MAX_N], b[MAX_N];
int ans;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    for(int i = 0; i < n; i ++)
    {
        if(a[i] > b[i])
        {
            int num = a[i] - b[i];
            a[i] = a[i] - num;
            a[i+1] = a[i+1] + num;
            ans = ans + num;
        }
    }
    cout << ans;
    return 0;
}