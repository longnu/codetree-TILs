#include <iostream>
#define MAX_N 100
using namespace std;
int n;
int arr[MAX_N+1][2];
#define MAX_R 1000


int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i][0];
        cin >> arr[i][1];
    }
    
    int answer = 0;
    for(int i = 0; i < n; i++)
    {
        int counting[MAX_R + 1] = {0};
        for(int j = 0; j < n; j++)
        {
            if(i == j) continue;
            int a = arr[j][0];
            int b = arr[j][1];

            for(int i = a; i < b; i++)
            {
                counting[i]++;
            } 
        }
        int sum = 0;
        for (int y = 0; y < MAX_R+1; y++)
        {
            if(counting[y] != 0)
            {
                sum++;
            }
        }
        answer = max(answer, sum);
    }

    cout << answer;
    return 0;
}