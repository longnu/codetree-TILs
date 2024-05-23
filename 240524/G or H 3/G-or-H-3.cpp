#include <iostream>
#include <climits>
using namespace std;
int n, k;
#define MAX_R 10000
int arr[MAX_R+1];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> k;

    for(int i = 0; i < n; i++)
    {
        int index;
        char HG;
        cin >> index >> HG;
        if(HG == 'G')
        {
            arr[index] = 1; 
        }
        else
        {
            arr[index] = 2;
        }
    }
    int answer = INT_MIN;
    
    for(int i = 0; i <= MAX_R+1-k-1; i++)
    {
        int sum = 0;
        for(int j = i; j < i+k+1; j++)
        {
            sum = sum + arr[j];
        }
        answer = max(answer, sum);
    }
    cout << answer;

    return 0;
}