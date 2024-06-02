#include <iostream>
#include <algorithm>

#define MAX_N 3

using namespace std;

int n = 3;
int a[MAX_N];

int main() {
    // 입력:
    for(int i = 0; i < n; i++)
        cin >> a[i];

    // 주어진 값들을 정렬합니다.
    sort(a, a + n);

    // Case 1. 3개의 숫자가 전부 연속한 경우
    // 이 경우에는 이동할 필요가 없으므로
    // 최소 이동 횟수는 0이 됩니다.
    if(a[0] + 1 == a[1] && a[1] + 1 == a[2])
        cout << 0;
    // Case 2. 2개의 숫자의 차이가 정확히 2가 나는 경우
    // 이 경우에는 남은 숫자를 두 숫자 사이에 바로 넣어주면 되므로
    // 최소 이동 횟수는 1이 됩니다.
    else if(a[0] + 2 == a[1] || a[1] + 2 == a[2])
        cout << 1;
    // Case 3. 그렇지 않은 경우에는 항상 2번에 걸쳐
    // 3개의 숫자를 연속하게 만드는 것이 가능합니다.
    else
        cout << 2;
        
    return 0;
}