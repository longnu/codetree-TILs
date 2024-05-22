#include <iostream>
using namespace std;
#include <string>
#define DIR_NUM 8
#define MAX_N 100
int n, m;
string arr[MAX_N];
int dx[DIR_NUM] = {1, 1, 1, -1, -1, -1, 0, 0};
int dy[DIR_NUM] = {-1, 0, 1, -1, 0, 1, -1, 1};

bool IsRange(int x, int y)
{
    return (x >=0) && (x < n) && (y >= 0) && (y < m);
}

int main() {
    // 여기에 코드를 작성해주세요.

    cin >> n >> m;
    char arr[n][m];
    for(int i =0; i <n; i++)
    {
        cin >> arr[i];
    }
    int cnt = 0;    
    for(int i =0; i<n; i++)
    {
        for(int j = 0; j <m; j++)
        {
            if(arr[i][j] != 'L') continue;
            for(int k = 0; k < DIR_NUM; k++)
            {
                int t = 1;
                int x = i;
                int y = j;
                

                while(t)
                {
                    int nx = x + dx[k];
                    int ny = y + dy[k]; 

                    if(!IsRange(nx, ny))
                    {
                        break;
                    }

                    if(arr[nx][ny] != 'E')
                    {
                        break;
                    }
                    t++;
                    x = nx;
                    y = ny;
                }
                if(t>=3)
                {
                    cnt++;
                }
            }
        }
    }
    cout << cnt;

    return 0;
}