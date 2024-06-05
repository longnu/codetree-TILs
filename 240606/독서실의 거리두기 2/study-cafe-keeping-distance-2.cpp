#include <iostream>
using namespace std;
#define MAX_N 1000
#include <climits>
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    string a;
    cin >> a;
    int max_ans = INT_MIN;
    for(int i = 0; i < n; i ++)
    {
        if(a[i]=='0')
        {
            a[i] = '1';
            int min_dis = INT_MAX;
        for(int j =0 ; j < n; j++)
        {
            for(int k = j+1; k < n; k++)
            {
                if(a[j] == '1' && a[k]=='1')
                {
                    min_dis = min(min_dis, k-j);
                }
            }
        }
        max_ans = max(max_ans,min_dis);

        a[i] = '0';
        }
        
    }
    cout << max_ans;

    return 0;
}