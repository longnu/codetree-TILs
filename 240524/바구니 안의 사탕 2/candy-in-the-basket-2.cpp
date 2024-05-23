#include <iostream>
using namespace std;
#define MAX_N 100
int arr[MAX_N + 1];


int main() {
    // 여기에 코드를 작성해주세요.
    int n, k;
    cin >> n >> k;

    for(int i =0; i < n; i++)
    {
        int index, number;
        cin >> number >> index;
        arr[index] += number;
    }

    int answer = 0;
    for(int i = 0; i <= MAX_N; i++)
    {
        int sum = 0;
        for(int j = i -k; j <= i + k; j++)
        {
            if(j>=0 && j <= MAX_N)
            {
                sum=sum+arr[j];
            }
            
        }
        answer = max(answer, sum);
    }

    cout << answer;
    return 0;
}