#include <iostream>
using namespace std;
#define MAX_N 100
#include <climits>
int n;
int pos_x[MAX_N+1];
int pos_y[MAX_N+1];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> pos_x[i];
        cin >> pos_y[i];
    }
    int answer = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        int minx = INT_MAX;
        int maxx = INT_MIN;
        int miny = INT_MAX;
        int maxy = INT_MIN;
        for(int j = 0; j < n; j++)
        {
            if(i==j) continue;
            minx = min(minx, pos_x[j]);
            miny = min(miny, pos_y[j]);
            maxx = max(maxx, pos_x[j]);
            maxy = max(maxy, pos_y[j]);
        }
        answer = min(answer, (maxx-minx) * (maxy - miny));
    }
    cout << answer;
    return 0;
}