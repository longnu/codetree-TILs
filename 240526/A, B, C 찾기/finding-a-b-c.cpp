#include <iostream>
#include <algorithm>

#define MAX_N 7

int n = 7;
int arr[MAX_N];

using namespace std;

int main() {
    // 입력:
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    // 오름차순으로 정렬을 진행합니다.
    sort(arr, arr + n);

    // 오름차순으로 정렬했을 때,
    // 가장 작은 숫자는 A,
    // 두 번째로 작은 숫자는 항상 B가 됩니다.
    int a = arr[0];
    int b = arr[1];
    // 또한, 가장 큰 숫자는 항상 A + B + C가 되므로
    // C 는 끝 숫자 - A - B가 됩니다
    int c = arr[n - 1] - a - b;

    cout << a << " " << b << " " << c;
    return 0;
}