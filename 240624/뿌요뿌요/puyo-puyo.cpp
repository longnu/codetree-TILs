#include <iostream>
#define MAX_N 100
#define DIR_NUM 4
using namespace std;

int n;
int grid[MAX_N][MAX_N];
bool visited[MAX_N][MAX_N];

bool InRange(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < n;
}

bool CanGo(int x, int y, int num) {
    return InRange(x, y) && !visited[x][y] && grid[x][y] == num;
}

void InitializeVisited() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            visited[i][j] = false;
        }
    }
}

int DFS(int x, int y, int num) {
    int xdir[DIR_NUM] = {0, -1, 0, 1};
    int ydir[DIR_NUM] = {1, 0, -1, 0};
    int block_size = 1;
    visited[x][y] = true;

    for (int dir = 0; dir < DIR_NUM; dir++) {
        int new_x = x + xdir[dir];
        int new_y = y + ydir[dir];
        if (CanGo(new_x, new_y, num)) {
            block_size += DFS(new_x, new_y, num);
        }
    }
    return block_size;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    int num_bursts = 0;
    int max_block_size = 0;

    InitializeVisited();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!visited[i][j]) {
                int block_size = DFS(i, j, grid[i][j]);
                if (block_size >= 4) {
                    num_bursts++;
                }
                if (block_size > max_block_size) {
                    max_block_size = block_size;
                }
            }
        }
    }

    cout << num_bursts << " " << max_block_size;

    return 0;
}