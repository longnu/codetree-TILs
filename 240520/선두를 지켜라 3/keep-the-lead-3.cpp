#include <iostream>
using namespace std;
#define MAX_R 1000000
int a_pos[MAX_R + 1];
int b_pos[MAX_R + 1];

int n, m;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> m;
    int a_time = 1;
    for(int i = 0; i < n; i++)
    {
        int v, t;
        cin >> v >> t;
        while(t--)
        {
            a_pos[a_time] = a_pos[a_time-1] + v;
            a_time++;
        }
    }

    int b_time = 1;
    for(int i = 0; i < m; i++)
    {
        int v, t;
        cin >> v >> t;
        while(t--)
        {
            b_pos[b_time] = b_pos[b_time-1] + v;
            b_time++;
        }
    }

    if(a_time > b_time)
    {
        for(int i = b_time; i < a_time; i++)
        {
            b_pos[i] = b_pos[i-1];
        }
    }
    else if(a_time < b_time)
    {
        for(int i = a_time; i < b_time; i++)
        {
            a_pos[i] = a_pos[i-1];
        }
    }
    
    int max_time = max(a_time, b_time);
    int leader = 0;
    int cnt = 0;
    for (int i = 1; i <= max_time; i++)
    {
        if(a_pos[i] > b_pos[i])
        {
            if(leader == 2 || leader == 3)
            {
               cnt++; 
            }
            leader = 1;
        }
        
        else if(a_pos[i] < b_pos[i])
        {
            if(leader == 1 || leader == 3)
            {
                cnt++;
            }
            leader = 2;
        }
        else{
            if(leader == 1 || leader == 2)
            {
                cnt++;
            }
            leader = 3;
        }
    }

    cout << cnt;


    return 0;
}