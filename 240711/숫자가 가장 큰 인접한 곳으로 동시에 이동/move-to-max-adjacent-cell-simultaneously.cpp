#include <iostream>
using namespace std;

#define MAX_N 20
#define DIR_NUM 4

int grid[MAX_N][MAX_N];
int nextgrid[MAX_N][MAX_N];
int count[MAX_N][MAX_N];
int n,m,t;

int dx[DIR_NUM] = {-1, 1, 0, 0};
int dy[DIR_NUM] = {0, 0, -1, 1};

bool InRange(int x, int y)
{
    return x >=0 && x < n && y >= 0 && y < n;
}

int main() {
    // 여기에 코드를 작성해주세요.

    cin >> n >> m >> t;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
        }
    }

    for(int i =0; i < m; i++)
    {
        int r, c;
        cin >> r >> c;
        count[r-1][c-1] = 1;
    }

    for(int i =0; i < t; i++)
    {
        for(int j = 0; j < n; j++)
        {
            for(int k = 0; k < n; k++)
            {
                if(count[j][k])
                {
                    int maxnum = -1;
                    int max_nj = -1, max_nk = -1;

                    for(int l = 0; l < DIR_NUM; l++)
                    {
                        int nj = j + dx[l];
                        int nk = k + dy[l];
                        if(InRange(nj, nk))
                        {
                            if(grid[nj][nk] > maxnum)
                            {
                                max_nj = nj;
                                max_nk = nk;
                            }
                        }
                    }

                    count[j][k]--;
                    count[max_nj][max_nk]++;
                }
            }
        }

        for(int j = 0; j < n; j++)
        {
            for(int k = 0; k < n; k++)
            {
                if(count[j][k] > 1)
                {
                    count[j][k] = 0;
                }
            }
        }
    }
    int cnt = 0;
    for(int j = 0; j < n; j++)
        {
            for(int k = 0; k < n; k++)
            {
                if(count[j][k] == 1)
                {
                    cnt++;
                }
            }
        }

    cout << cnt;



    return 0;
}