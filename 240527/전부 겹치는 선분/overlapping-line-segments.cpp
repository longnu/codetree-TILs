#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int n;
int x1, x2;
int max_x1;
int min_x2 = INT_MAX;

int main() {
    // 입력
    cin >> n;

    // 시작점 중 가장 뒤에 있는 좌표와 끝점 중 가장 앞에 있는 점의 좌표를 확인합니다.
    for(int i = 0; i < n; i++) {
        cin >> x1 >> x2;
        max_x1 = max(max_x1, x1);
        min_x2 = min(min_x2, x2);
    }
    
    // 만약 어느 한 선분이라도 시작점이 다른 선분의 끝점보다 뒤에 온다면
    // 선분이 전부 겹칠 수 없습니다.
    if(min_x2 >= max_x1)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}