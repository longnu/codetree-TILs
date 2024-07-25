#include <iostream>
#include <algorithm>
#include <tuple>
#include <vector>

#define MAX_N 500
#define DIR_NUM 4

using namespace std;

int n;
int grid[MAX_N][MAX_N];
int dp[MAX_N][MAX_N];

vector<tuple <int, int, int > > cells;
int ans;

bool InRange(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < n;
}

int main() {
    // 여기에 코드를 작성해주세요.

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j ++)
        {
            cin >> grid[i][j];
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j ++)
        {
            cells.push_back(make_tuple(grid[i][j], i, j));
        }
    }

    sort(cells.begin(), cells.end());

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            dp[i][j] = 1;

    for(int i = 0; i < (int) cells.size(); i++)
    {
        int x, y;
        tie(ignore, x, y) = cells[i];

        int dx[DIR_NUM] = {-1, 1, 0, 0};
        int dy[DIR_NUM] = {0, 0, -1, 1};

        for(int j = 0; j < DIR_NUM; j++)
        {
            int nx = x + dx[j], ny = y + dy[j];
            if(InRange(nx, ny) && grid[nx][ny] > grid[x][y])
                dp[nx][ny] = max(dp[nx][ny], dp[x][y] + 1);
        }
    }

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            ans = max(ans, dp[i][j]);

    cout << ans;
    return 0;
}