#include <iostream>
using namespace std;
#define MAX_N 100

int dx[4] = {1, 0, -1, 0};  // 동, 북, 서, 남 방향
int dy[4] = {0, 1, 0, -1};
char dir[MAX_N];
int dist[MAX_N];
int n;

int main() {
    int x = 0, y = 0;  // x와 y 초기화를 0으로 설정합니다.
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> dir[i] >> dist[i];
    }
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        int d;
        if(dir[i] == 'E') {
            d = 0;
        } else if (dir[i] == 'N') {
            d = 1;
        } else if (dir[i] == 'W') {
            d = 2;
        } else if (dir[i] == 'S') {
            d = 3;
        } else {
            continue;  // 유효하지 않은 방향은 건너뜁니다.
        }
        
        for(int j = 0; j < dist[i]; j++) {  // 1초에 한 칸씩 이동
            x += dx[d];
            y += dy[d];
            cnt++;
            if(x == 0 && y == 0) {
                cout << cnt << endl;
                return 0;
            }
        }
    }

    cout << -1 << endl;  // (0, 0)으로 돌아오지 않으면 -1을 출력합니다.
    return 0;
}