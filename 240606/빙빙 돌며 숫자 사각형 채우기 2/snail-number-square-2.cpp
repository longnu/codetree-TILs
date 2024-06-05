#include <iostream>
using namespace std;

int dx[4] = {0, 1, 0, -1}; // 동쪽, 남쪽, 서쪽, 북쪽 순서로 이동
int dy[4] = {1, 0, -1, 0}; 
int n, m;
#define MAX_NM 100
int arr[MAX_NM][MAX_NM];

bool InRange(int x, int y)
{
    return x >= 0 && x < m && y >= 0 && y < n;
}

int main() {
    cin >> n >> m;
    int dir = 0; // 처음에는 동쪽(우)으로 이동
    int posx = 0;
    int posy = 0;
    arr[0][0] = 1;

    for(int i = 2; i <= n * m; i++) {
        int nx = posx + dx[dir];
        int ny = posy + dy[dir];

        if(InRange(nx, ny) && arr[ny][nx] == 0) {
            posx = nx;
            posy = ny;
            arr[ny][nx] = i;
        } else {
            dir = (dir + 1) % 4; // 방향 전환
            nx = posx + dx[dir];
            ny = posy + dy[dir];
            posx = nx;
            posy = ny;
            arr[ny][nx] = i;
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}