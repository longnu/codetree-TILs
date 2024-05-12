#include <iostream>
#include <algorithm>
using namespace std;

int N;
#define INT_MAX 1000
int arr [INT_MAX];

int main() {
    // 여기에 코드를 작성해주세요.
    
    cin >> N;

    for (int i=0; i<2 * N; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr+2 * N);
    int maxnum = -1;
    for (int i = 0; i<N; i++)
    {
        maxnum = max(maxnum, arr[i] + arr[2 * N-i-1]);
    }

    cout << maxnum;

    return 0;
}