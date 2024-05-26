#include <iostream>
using namespace std;
#define MAX_N 1000
int xarr[MAX_N + 1];
int yarr[MAX_N + 1];

int main() {
    // 여기에 코드를 작성해주세요.
    int n, c, g, h;
    cin >> n >> c >> g >> h;
    int answer = 0;
    for(int i = 0; i < n; i ++)
    {
        cin >> xarr[i] >> yarr[i];
    }   
    for(int i = 0; i < MAX_N+1; i++)
    {
        int sum = 0;
        for(int j = 0; j < n; j++)
        {
            if(i <xarr[j])
            {
                sum+=c;
            }
            else if(i >= xarr[j] && i <= yarr[j])
            {
                sum+=g;
            }
            else if(i > yarr[j])
            {
                sum+=h;
            }
        }
        answer = max(answer, sum);
    }
    cout << answer;
    return 0;
}