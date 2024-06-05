#include <iostream>

using namespace std;

// 전역 변수 선언:
// 이미 방문한적이 있다면 true / 아니라면 false로 표시합니다.
bool visited[100][100] = {0};

// 함수 선언:
bool CanGo(int n, int m, int new_x, int new_y){
    // 나아가려는 위치가 직사각형 안에 들어 있는지 확인하고
    // 들어있다면 아직 방문한적이 없는 곳인지 판단합니다.
    if(0 <= new_x && new_x < n && \
            0 <= new_y && new_y < m && \
            visited[new_x][new_y] == false) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    // 변수 선언:
    int n, m;
    char answer[100][100] = {0}; // 답에 해당하는 알파벳을 적을 배열입니다.

    // 입력:
    cin >> n >> m;
    
    // direction에 따라 바뀌는 (x, y)의 변화량인 dx, dy를 정의합니다.
    int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};
    int curr_x = 0, curr_y = 0; // 시작은 (0, 0) 입니다.
    int direction = 0; //0: 오른쪽, 1: 아래쪽, 2: 왼쪽, 3: 위쪽

    // 처음 시작 위치에 초기값을 적습니다.
    answer[curr_x][curr_y] = 'A';  
    visited[curr_x][curr_y] = true;

    // n*m개의 알파벳을 적어야 합니다. 
    for(int i = 1; i < n * m; i++) { // i번째 문자를 어디에 적을지 결정합니다.
        while(true) { // 나아갈 수 있을때까지 방향을 바꿔가며 확인해봅니다. 
            // 현재 방향 dir를 기준으로 그 다음 위치 값을 계산합니다.
            int next_x = curr_x + dx[direction];
            int next_y = curr_y + dy[direction];
			// 그 위치로 나아갈 수 있는지 확인합니다.
            if(CanGo(n, m, next_x, next_y)) {
                // 나아갈 수 있다면 위치를 갱신해주고 배열에 올바른 값을 채워넣습니다.
                curr_x = next_x; 
                curr_y = next_y;
                visited[curr_x][curr_y] = true;
                answer[curr_x][curr_y] = (char)(i % 26 + 'A');
                break;
            } else {
                // 나아갈 수 없다면 시계방향으로 90'를 회전하여 
				// 그 다음 방향을 확인해봐야 합니다.
                direction = (direction + 1) % 4;
            }
        }
    }
    
    // 출력:
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) 
            cout << answer[i][j] << " ";
        cout << endl;
    }
    return 0;
}