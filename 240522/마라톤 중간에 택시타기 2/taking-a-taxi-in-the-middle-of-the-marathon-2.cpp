#include <iostream>
using namespace std;
#define OFFSET 1000
#define MAX_N 100
#include <climits>
#include <algorithm>


int dx[MAX_N];
int dy[MAX_N];

int n;

class grid
{
public:
    int x;
    int y;
    grid(int x, int y)
    {
        this->x = x;
        this->y = y;
    };
    grid(){};
};

grid arr[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        arr[i] = grid(x,y);

    }

    int distance;
    int answer = INT_MAX;
    for(int i = 1; i < n-1; i++)
    {
        distance = 0;
        int prev_idx = 0;
        for(int j =1; j < n; j++)
        {
            if(j==i) continue;
            distance = distance + abs(arr[j].x - arr[prev_idx].x) + abs(arr[j].y - arr[prev_idx].y);
            prev_idx = j;
        }
        answer = min(answer, distance);
    }

    cout << answer;

    return 0;
}