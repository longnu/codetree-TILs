#include <iostream>
using namespace std;
#define MAX_N 200
int grid[MAX_N+1][MAX_N+1];
int temp[MAX_N+1][MAX_N+1];
int n;
#define DIR_NUM 4
int dx[DIR_NUM] = {0,-1,0,1};
int dy[DIR_NUM] = {1,0,-1,0};

bool InRange(int x, int y)
{
    return x>=0 && x <=n && y >=0 && y <= n; 
}

int main() {
    // 여기에 코드를 작성해주세요.
    
    cin >> n;
    for(int i =1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> grid[i][j];
        }
    }

    int r, c;
    cin >> r >> c;
    for(int i = 0; i < DIR_NUM; i++)
    {
        int x = r;
        int y = c;
        int count = grid[x][y]-1;
        while(count>0)
        {
            int nx = x+dx[i];
            int ny = y+dy[i];
            if(InRange(nx, ny))
            {
                grid[nx][ny] = 0;
            }
            count--;
        }
    }
    grid[r][c] = 0;

    

    

    for(int col =1; col <= n; col++)
    {
        int temp_idx = n;
        for(int row = n; row > 0 ; row--)
        {
            if(grid[row][col] != 0)
            {
                temp[temp_idx][col] = grid[row][col];
                temp_idx--;
            }
        }
    }

    for(int i =1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            grid[i][j] = temp[i][j];
        }
    }

    for(int i =1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }    

        
    return 0;
}