#include <iostream>
#include <climits>
using namespace std;
#define MAX_T 100

int t, a, b;
int s[MAX_T], n[MAX_T];
int cnt_s, cnt_n;

int main() {
    // 여기에 코드를 작성해주세요.
    int t, a, b;
    cin >> t >> a >> b;

    for(int i = 0; i < t; i++)
    {
        char c; int x;
        cin >> c >> x;
        if(c=='S')
        {
            s[cnt_s++] = x;
        }
        else{
            n[cnt_n++] = x;
        }
    }
    int cnt = 0;
    
    for(int i = a ; i <= b ; i++)
    {
        int minS = INT_MAX;
    int minN = INT_MAX;
        for(int j = 0; j < cnt_s; j++)
        {
            int diff = abs(i-s[j]);
            minS = min(minS, diff);
        }
        for(int j = 0; j < cnt_n; j++)
        {
            int diff = abs(i-n[j]);
            minN = min(minN, diff);
        }

        if(minS <= minN)
        {
            cnt++;
        }
    }

    cout << cnt;




    return 0;
}