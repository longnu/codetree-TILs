#include <iostream>
using namespace std;

#define MAX_N 100
#define MAX_K 100
int N, K;
int a[MAX_K + 1], b[MAX_K+1];
int blocks[MAX_N+1];
int main() {
    // 여기에 코드를 작성해주세요.
    
    cin >> N >> K;

    for(int i = 1 ; i <= K; i++)
    {
        cin >> a[i] >> b[i];
    }

    for(int i =1; i<=K; i++)
    {
        for(int j = a[i]; j <= b[i]; j++)
            blocks[j]++;
    }

    int maxnum = 0;
    for(int i = 1; i <= N; i++ )
    {
        maxnum = max(maxnum, blocks[i]);
    }

    cout<<maxnum;


    return 0;
}