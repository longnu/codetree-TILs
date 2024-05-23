#include <iostream>
#include <algorithm>
using namespace std;
#define MAX_NUM 100
int arrA[MAX_NUM];
int arrB[MAX_NUM];
int temp[MAX_NUM];

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;

    cin >> n >> m;
    for(int i = 0; i < n ; i++)
    {
        cin >> arrA[i];
    }

    for(int i = 0; i < m ; i++)
    {
        cin >> arrB[i];
    }

    sort(arrB, arrB + m);

    int cnt = 0;
    for(int i = 0; i <= n-m; i++)
    {
        for(int j = 0; j < m; j++)
        {
            temp[j] = arrA[i+j];
        }
        sort(temp, temp+m);

        bool issame = true;
        for(int j = 0; j < m; j++)
        {
            if(temp[j] != arrB[j])
            {
                issame = false;
                break;
            }
        }

        if(issame) cnt++;
    }
    cout << cnt;



    return 0;
}