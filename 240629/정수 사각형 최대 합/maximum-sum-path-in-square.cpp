#include <iostream>
#include <algorithm>

#define MAX_NUM 1000
#define DIR_NUM 2

using namespace std;

int n;
int grid[MAX_NUM][MAX_NUM];

int max_sum;

bool InRange(int x, int y) {
    return (0 <= x && x < n && 0 <= y && y < n);
}

void FindMaxSum(int x, int y, int sum) {

    // 도착 지점에 도착하면 최대 합을 갱신해줍니다.
    if( (x ==  n - 1) &&  (y == n - 1) ){
        max_sum = max(max_sum, sum);
        return ;
    }

    int dx[DIR_NUM] = {1, 0};
    int dy[DIR_NUM] = {0, 1};

    // 가능한 방향에 대해 탐색해줍니다.
    for(int i = 0; i < DIR_NUM; i++) {
        int new_x = x + dx[i];
        int new_y = y + dy[i];

        if(InRange(new_x, new_y))
            FindMaxSum(new_x, new_y, sum + grid[new_x][new_y]);
    }
}

int main() {
    cin >> n;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> grid[i][j];

    FindMaxSum(0, 0, grid[0][0]);
    cout << max_sum;

    return 0;
}