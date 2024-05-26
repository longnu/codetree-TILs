#include <iostream>
using namespace std;
#define MAX_N 100
int arr[MAX_N + 1];
int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    for(int i = a; i < b; i++)
    {
        arr[i] = 1;
    }
    for(int j = c; j < d; j++)
    {
        arr[j] = 1;
    }
    int cnt = 0;
    for(int k = 0; k < MAX_N+1; k++)
    {
        if(arr[k] == 1)
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}