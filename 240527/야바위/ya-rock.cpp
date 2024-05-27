#include <iostream>
using namespace std;
#define MAX_N 100
#define MAX_NUM 3

int n;
int a[MAX_N];
int b[MAX_N];
int c[MAX_N];
int yabawi[MAX_NUM + 1];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        
        cin >> a[i] >> b[i] >> c[i];
    }
    int answer = 0;
    for(int i = 0; i <= 3; i++)
    {
        yabawi[1] = yabawi[2] = yabawi[3] = 0;
        yabawi[i] = 1;

        int cnt = 0;
        for(int j = 0; j < n; j++)
        {
            swap(yabawi[a[j]], yabawi[b[j]]);

            if(yabawi[c[j]])
            {
                cnt++;
            }
        }
        answer = max(answer, cnt);
    }
    cout << answer;



    return 0;
}