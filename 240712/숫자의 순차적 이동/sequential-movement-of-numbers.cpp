#include <iostream>
using namespace std;
#define MAX_N 20
#include <utility>

int n, m;

int grid[MAX_N][MAX_N];

#define DIR_NUM 8

int dx[DIR_NUM] = {-1, -1, -1, 0, 1, 1, 1, 0};
int dy[DIR_NUM] = {-1, 0, 1, 1, 1, 0, -1, -1};

pair<int, int> searchnum(int num)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(grid[i][j] == num)
            {
                return make_pair(i, j);
            }
        }
    }
    // num을 찾지 못한 경우 (-1, -1)을 반환
    return make_pair(-1, -1);
}

bool InRange(int x, int y)
{
    return x >= 0 && x < n && y >= 0 && y < n;
}

pair<int, int> searchlow(int x, int y)
{
    int highr = 0;
    int highc = 0;
    int highnum = 0;
    for(int i =0; i < DIR_NUM; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(InRange(nx, ny))
        {
            if(highnum < grid[nx][ny])
            {
                highr = nx;
                highc = ny;
                highnum = grid[nx][ny];
            }
        }
    }

    return make_pair(highr, highc);
     
}



void swapnum(pair<int, int> pos1, pair<int, int> pos2) {
    int temp = grid[pos1.first][pos1.second];
    grid[pos1.first][pos1.second] = grid[pos2.first][pos2.second];
    grid[pos2.first][pos2.second] = temp;
}


int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> m;

    for(int i =0; i < n; i ++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >>grid[i][j];
        }
    }

    for(int i = 0; i < m; i++)
    {
        for(int num = 1; num <= n*n; num++)
        {
            pair<int, int> target = searchnum(num);
            pair<int, int> lowest = searchlow(target.first, target.second);
            swapnum(target, lowest);
        }
    }

    for(int i =0; i < n; i ++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}