#include <iostream>
using namespace std;
#define MAX_N 10
int a[MAX_N];
int b[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        
        cin >> a[i] >> b[i];

    }
    int answer;
    for(int i = 1; i < b[0]; i ++)
    {
        int candidate = i;
        bool check = true;
        for(int j = 0; j < n; j++)
        {
            candidate = candidate *2;
            if(candidate < a[j] || candidate > b[j])
            {
                check = false;
                break;
            }
        }
        if(check == true)
            {
              answer = i;
              break;     
            }
    }
    cout << answer;

    return 0;
}