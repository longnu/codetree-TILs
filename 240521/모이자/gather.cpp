#include <iostream>
#include <climits>
using namespace std;
#define MAX_N 100
int a[MAX_N];
int n;
int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int answer = INT_MAX;
    for(int i = 0; i < n; i++)
    {   int sum_dist= 0;
        for(int j = 0; j <n; j++)
        {
            sum_dist = sum_dist + abs(j-i)*a[j];
        }

        answer = min(answer, sum_dist);
    }

    cout << answer;


    return 0;
}