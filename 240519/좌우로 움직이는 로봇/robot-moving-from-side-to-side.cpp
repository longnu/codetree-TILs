#include <iostream>
using namespace std;
int n, m;

#define MAX_N 1000000
int pos_a[MAX_N + 1];
int pos_b[MAX_N + 1];

int main() {
    cin >> n >> m;
    int time_a = 1;
    for(int i = 0; i < n; i ++)
    {
        int t = 0;
        char d;
        cin >> t >> d;
        while(t--)
        {
            if(d == 'L')
            {
                pos_a[time_a] = pos_a[time_a - 1] - 1;
            }
            else
            {
                pos_a[time_a] = pos_a[time_a - 1] + 1;
            }
            time_a++;
        }
    }
    int time_b = 1;
    for(int i = 0; i < m; i ++)
    {
        int t = 0;
        char d;
        cin >> t >> d;
        while(t--)
        {
            if(d == 'L')
            {
                pos_b[time_b] = pos_b[time_b - 1] - 1;
            }
            else
            {
                pos_b[time_b] = pos_b[time_b - 1] + 1;
            }
            time_b++;
        }
    }

    if(time_a < time_b)
    {
        for(int i = time_a; i < time_b; i++)
        {
            pos_a[i] = pos_a[i -1];
        }
    }
    else if (time_a > time_b)
    {
        for(int i = time_b; i < time_a; i++)
        {
            pos_b[i] = pos_b[i-1];
        }
    }

    int count = 0;
    int time_max = 0;
    if(time_a >= time_b)
    {
        time_max = time_a;
    }
    else{
        time_max = time_b;
    }
    for(int i = 1; i < time_max; i++)
    {
        if((pos_a[i] == pos_b[i]) && (pos_a[i -1] != pos_b[i-1]))
        {
            count++;
        }
    }
    cout << count;

    return 0;
}