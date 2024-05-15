#include <iostream>

#define MAX_N 100
#define MAX_R 200
#define OFFSET 100

using namespace std;

int n;
int x1[MAX_N], x2[MAX_N];
int checked[MAX_R + 1];

int main() {
    // 여기에 코드를 작성해주세요.

    cin >> n;

    for(int i = 0; i < n; i ++)
    {
        cin >> x1[i];
        cin >> x2[i];

        x1[i] += OFFSET;
        x2[i] += OFFSET;
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = x1[i]; j < x2[i]; j++)
            checked[j]++;
    }

    int max = 0;
    for(int i = 0; i <= MAX_R; i++)
    {
        if(checked[i] > max)
            max = checked[i];
    }

    cout << max;
    return 0;
}