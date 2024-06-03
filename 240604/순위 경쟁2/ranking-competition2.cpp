#include <iostream>
#define MAX_N 100
using namespace std;
int n;
char name[MAX_N];
int value[MAX_N];
int score_a = 0, score_b = 0;
int Status(int score1, int score2)
{
    if(score1 > score2)
    {
        return 1;
    }
    else if (score2 > score1)
    {
        return 2;
    }
    else{
        return 3;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> name[i] >> value[i];
    }
    int ans = 0;
    for(int i = 0 ; i < n; i ++)
    {
        if(name[i]=='A')
        {
            if(Status(score_a, score_b) != Status(score_a + value[i], score_b))
            {
                ans++;
            }
            score_a += value[i];
        }

        else
        {
            if(Status(score_a, score_b) != Status(score_a, score_b + value[i]))
            {
                ans++;
            }
            score_b += value[i];
            
        }
        
    }
    cout << ans;
    return 0;
}