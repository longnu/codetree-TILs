#include <iostream>
using namespace std;
#define MAX_N 20
int a[MAX_N][MAX_N];
int n;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >>n;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0 ; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int maxnum = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j =0; j < n -2; j++)
        {
            maxnum = max(maxnum, a[i][j] + a[i][j+1] + a[i][j+2]);
        }
    }

    cout<<maxnum;

    return 0;
}