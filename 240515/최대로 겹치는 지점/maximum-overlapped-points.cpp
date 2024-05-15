#include <iostream>
using namespace std;
#define MAX_N 100
#define MAX_R 100

int x1[MAX_N + 1];
int x2[MAX_N + 1];
int checked[MAX_R + 1];

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    cin >> n;

    for(int i = 1; i <= n; i ++ )
    {
        cin >> x1[i];
        cin >> x2[i];
    }

    for(int i= 1; i <=n; i++)
    {
        for(int j = x1[i]; j <=x2[i]; j++ )
        {
            checked[j]++;
        }
    }

    int maxnum = 0;
    for(int i =1; i <= 100; i++)
    {
        if(maxnum < checked[i])
        {
            maxnum = checked[i];
        }
    }

    cout << maxnum;

    return 0;
}