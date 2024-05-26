#include <iostream>
using namespace std;
#define MAX_N 10000
int arr[MAX_N + 1];

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    cin >> n;
    for(int = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for(int j = 0; j < n; j++)
    {
        sum = sum + arr[j];
    }
    int average = sum / n;
    int ans = 0;
    

    return 0;
}