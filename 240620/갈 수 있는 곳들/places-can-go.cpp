#include <iostream>
using namespace std;
#include <queue>

#define MAX_N 100
#define DIR_NUM 4
int grid[MAX_N][MAX_N];
bool visited[MAX_N][MAX_N];
queue<pair<int,int>> q;
int n, k;
int cnt;

bool InRange(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < n;
}

bool CanGo(int x, int y) {
    return InRange(x, y) && !grid[x][y] && !visited[x][y];
}

void BFS()
{
    while(!q.empty())
    {
        pair<int, int> curr_pos = q.front();
        int x = curr_pos.first;
        int y = curr_pos.second;
        q.pop();

        int dx[4] = {1, -1, 0, 0};
        int dy[4] = {0, 0, 1, -1};

        for(int i =0; i < DIR_NUM; i++)
        {
            int nx = x+dx[i];
            int ny = y+dy[i];
            if(CanGo(nx, ny))
            {
                
                q.push(make_pair(nx,ny));
                visited[nx][ny] = true;
            }   
        }

    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
        }
    }

    for(int i = 0; i < k; i++)
    {
        int r, c;
        cin >> r >> c;
        q.push(make_pair(r-1,c-1));
        visited[r-1][c-1] = true;
    }

    BFS();
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(visited[i][j])
                cnt++;
    
    
    cout << cnt;
    
    

    return 0;
}