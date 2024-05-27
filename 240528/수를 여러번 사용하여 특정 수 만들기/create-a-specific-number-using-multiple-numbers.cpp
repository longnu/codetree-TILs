#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;

    cin >> a >> b >> c;

    int n =  c/(min(a,b)) + 1;
    int answer = 0;
    for (int i = 0; i < n; i ++)
    {   int num = 0;
        for(int j = 0; j < n; j++)
        {
            num = a * i + b * j;
            if(num <= c)
            {
                answer = max( answer, num);
            }
        }
    }
    cout << answer;


    return 0;
}