#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    cin >> n;
    int cnt = 0;
    int digit[99999];
    while(true)
    {
        if(n < 2)
        {
            digit[cnt++] = n;  
            break;
        }
        digit[cnt++] = n%2;
        n = n/2;
    }
    for(int i = cnt-1; i >= 0; i--)
    {
        cout<<digit[i];
    }

    return 0;
}