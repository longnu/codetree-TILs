#include <iostream>
#include <climits>
using namespace std;
#define MAX_N 100
int arr[MAX_N + 1];


int main() {
    int n, h, t;
    cin >> n >> h >> t;

    for (int i = 0 ; i < n; i++)
    {
        cin >> arr[i]; 
    }
    
    int answer = INT_MAX;
    
    for(int i = 0; i < n - t + 1; i++)
    {
        int j = i;
        int cost = 0;
        for(j; j < i + t; j++)
        {
            
            cost = cost + abs(h-arr[j]);
            
        }
        answer = min(answer, cost);
        
    }
    cout << answer;

    return 0;
}