#include <iostream>
#include <queue>
#include <vector>
using namespace std;

#define MAX_N 100
#define DIR_NUM 4

int n, h, m;
queue<pair<int, int>> q;
int visited[MAX_N][MAX_N];
int step[MAX_N][MAX_N];
int grid[MAX_N][MAX_N];
int answer[MAX_N][MAX_N];
vector<pair<int, int>> shelters;

void Push(int x, int y, int new_step) {
    q.push(make_pair(x, y));
    visited[x][y] = true;
    step[x][y] = new_step;
}

bool InRange(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < n;
}

bool CanGo(int x, int y) {
    return InRange(x, y) && !visited[x][y] && (grid[x][y] != 1);
}

void InitVisited() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            visited[i][j] = 0;
        }
    }
}

void InitStep() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            step[i][j] = 0;
        }
    }
}

void BFS() {
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        int dx[DIR_NUM] = {-1, 1, 0, 0};
        int dy[DIR_NUM] = {0, 0, -1, 1};

        for (int i = 0; i < DIR_NUM; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (CanGo(nx, ny)) {
                Push(nx, ny, step[x][y] + 1);
            }
        }
    }
}

int main() {
    cin >> n >> h >> m;
    vector<pair<int, int>> starters;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int elem;
            cin >> elem;
            grid[i][j] = elem;
            if (elem == 2) {
                starters.push_back(make_pair(i, j));
            } else if (elem == 3) {
                shelters.push_back(make_pair(i, j));
            }
        }
    }

    InitVisited();
    InitStep();

    for (const auto& shelter : shelters) {
        Push(shelter.first, shelter.second, 0);
    }

    BFS();

    for (const auto& person : starters) {
        int x = person.first;
        int y = person.second;
        if (visited[x][y]) {
            answer[x][y] = step[x][y];
        } else {
            answer[x][y] = -1;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << answer[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}