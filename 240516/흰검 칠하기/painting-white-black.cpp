#include <iostream>
#include <string>
using namespace std;
#define MAX_K 100000

int n;
int a[2 * MAX_K + 1];
int cnt_b[2 * MAX_K + 1];
int cnt_w[2 * MAX_K + 1];
int b, w, g;

int main() {
    cin >> n;
    int cur = MAX_K;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        char c;
        cin >> c;

        if(c == 'L')
        {
            while(x--)
            {
                a[cur]=1;
                cnt_w[cur]++;
                if(x)cur--;
            }
        }
        else
        {
            while(x--)
            {
                a[cur]=2;
                cnt_b[cur]++;
                if(x)cur++;
            }
        }
    }

    for(int i = 0; i <= 2 * MAX_K; i++){
        if(cnt_w[i] >= 2 && cnt_b[i] >= 2)
        {
            g++;
        }
        else if(a[i] == 1) w++;
        else if(a[i] == 2) b++;
    }

    cout << w << " " << b << " " << g;
    return 0;
}