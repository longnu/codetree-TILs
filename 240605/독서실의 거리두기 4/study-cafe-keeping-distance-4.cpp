#include <iostream>
using namespace std;
#define MAX_N 100
string seat;
#include <climits>
int n ;
int getmindis()
{
    int ans = INT_MAX;

    for(int i =0; i < n; i++)
    {
        for(int j = i+1; j < n ; j ++)
        {
            if(seat[i] == '1' && seat[j] == '1')
            {
                ans = min(ans, j-i); 
            }
        }
    }
    return ans;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    cin >> seat;

    int ans = 0;
    for(int i = 0; i < n; i ++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(seat[i]!='1' && seat[j]!='1')
            {
                seat[i] = '1';
                seat[j] = '1';
                int target = getmindis();
                ans = max(ans, target);
                seat[i] = '0';
                seat[j] = '0';
            }
        }
    }
    cout << ans;

    return 0;
}