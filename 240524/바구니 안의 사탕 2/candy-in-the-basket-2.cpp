#include <iostream>
using namespace std;
#define MAX_N 101
int arr[MAX_N];


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
    for(int i = 0; i <= MAX_N - 1 - 2*k; i++)
    {
        int sum = 0;
        for(int j = i; j <= i + 2*k; j++)
        {
            sum=sum+arr[j];
        }
        answer = max(answer, sum);
    }

    cout << answer;
    return 0;
}