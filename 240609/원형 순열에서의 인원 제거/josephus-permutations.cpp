#include <iostream>
#include <queue>

using namespace std;

// 변수 선언
int n, k;
queue<int> q;  

int main() {
    // 입력:
    cin >> n >> k;

    // 큐로 현재 남은 사람들을 관리합니다.
    for(int i = 0; i < n; i++)
        q.push(i + 1);

    while(q.size() != 1) {
        // k번째 사람을 찾습니다.
        // 이 과정에서 이미 탐색한 사람은 맨 뒤로 옮겨줍니다.
        for(int i = 0; i < k - 1; i++) {
            q.push(q.front());
            q.pop();
        }
        // k번째 사람을 제거합니다.
        cout << q.front() << " ";
        q.pop();
    }
    // 마지막 사람을 제거합니다.
    cout << q.front();

    return 0;
}