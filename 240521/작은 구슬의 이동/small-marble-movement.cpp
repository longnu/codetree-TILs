#include <iostream>
#define MAX_N 50
#define DIR_NUM
#define ASCII_NUM 128
using namespace std;
int n, t;
int x, y;
int dir;
char d;

int mapper[ASCII_NUM];

int dx[DIR_NUM] = {0, 1, -1, 0};
int dy[DIR_NUM] = {1, 0, 0, -1};

bool InRange(int x, int y)
{
    return x >= 0 && x < n && y >= 0 && y < n;
}

void Simulate()
{
    while(t--)
    {
        int nx = x + dx[dir];
        int ny = y + dy[dir];
        if(InRange(nx,ny)){
            x = nx, y = ny;
        } else{
            dir = 3 - dir;
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> t;

    mapper['R'] = 0;
    mapper['D'] = 1;
    mapper['U'] = 2;
    mapper['L'] = 3;

    cin >> x >> y >> d;
    x--; y--; dir = mapper[d];

    Simulate();

    cout << x + 1 << " " << y + 1;
    return 0;
}