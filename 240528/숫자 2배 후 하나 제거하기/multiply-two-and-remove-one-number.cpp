#include <iostream>
using namespace std;
#define MAX_N 100
int arr[MAX_N];
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int answer = 100000;
    for(int i = 0; i < n; i++)
    {
        arr[i] = arr[i] * 2;

        for(int j = 0; j < n; j++)
        {
            int cnt = 0;
            int remaining_arr[n-1] = {};
            for(int k = 0; k < n; k++)
            {
                if(k!=j)
                {
                    remaining_arr[cnt++] = arr[k];
                }
            }
            int sum_diff = 0;
            for(int k = 0; k < n - 2; k++)
            {
                sum_diff = sum_diff + abs(remaining_arr[k+1] - remaining_arr[k]);
            }
            answer = min(answer, sum_diff);
        }
        arr[i] = arr[i] / 2;
    }
    cout << answer;

    return 0;
}