#include <iostream>
#include <vector>

using namespace std;

#define MAX_N 200

int grid[MAX_N][MAX_N];
int next_grid[MAX_N][MAX_N];
int n, m;

bool InRange(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < n;
}

void InitializeNextGrid() {
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            next_grid[i][j] = 0;
}

void Bomb(int center_x, int center_y) {
    int bomb_range = grid[center_x][center_y];
    // 폭탄이 터질 위치는 0으로 채워줍니다.
    for (int i = -bomb_range + 1; i < bomb_range; ++i) {
        if (InRange(center_x + i, center_y)) {
            grid[center_x + i][center_y] = 0;
        }
        if (InRange(center_x, center_y + i)) {
            grid[center_x][center_y + i] = 0;
        }
    }

    // 폭탄이 터진 이후의 결과를 next_grid에 저장합니다.
    for (int j = 0; j < n; ++j) {
        int next_row = n - 1;
        for (int i = n - 1; i >= 0; --i) {
            if (grid[i][j] != 0) {
                next_grid[next_row--][j] = grid[i][j];
            }
        }
    }

    // next_grid로부터 값을 grid로 다시 옮겨줍니다.
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            grid[i][j] = next_grid[i][j];
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> grid[i][j];

    for (int i = 0; i < m; ++i) {
        int col;
        cin >> col;
        col -= 1;

        bool found = false;
        int row;
        for (row = 0; row < n; ++row) {
            if (grid[row][col] != 0) {
                found = true;
                break;
            }
        }

        if (found) {
            Bomb(row, col);
        }

        // Initialize the next grid after each bomb
        InitializeNextGrid();
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}