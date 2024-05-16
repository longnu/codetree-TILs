#include <iostream>
using namespace std;
#define OFFSET 100
#define MAX_N 100
#define MAX_R 100

int n;
int x1[MAX_N], y1[MAX_N];
int x2[MAX_N], y2[MAX_N];

int checked[2*MAX_R + 1][2*MAX_R + 1];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x1[i] >> y1[i];

        x2[i] = x1[i] + 8;
        y2[i] = y1[i] + 8;

        x1[i] = x1[i] + OFFSET;
        y1[i] = y1[i] + OFFSET;
        x2[i] = x2[i] + OFFSET;
        y2[i] = y2[i] + OFFSET;
    }

    for(int i = 0; i < n; i++)
        for(int x = x1[i]; x < x2[i]; x++)
            for(int y = y1[i]; y < y2[i]; y++)
                checked[x][y] = 1;

    int cnt = 0 ;
    for(int i = 0; i <= 2*MAX_R; i++)
    {
        for(int j = 0; j <= 2*MAX_R; j++)
        {
            if(checked[i][j] == 1) cnt++;
        }
    }

    cout << cnt;

    return 0;
}